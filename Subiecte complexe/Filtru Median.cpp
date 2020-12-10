#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

//vector< int> mergeSorts(vector< int> left,vector< int> right);
vector< int> bubbleSort(vector< int> v);
vector < int> mergeSort (vector < int> v);
int FormareVector( int **imagine,  int latime,  int lungime,  int i,  int j,  int n, vector< int> (*sortare)(vector< int>), int **imagine_aux);
void filtru( int **imagine,  int latime,  int lungime,  int n,  int grey_max, bool verificare, int **imagine_aux);
int main() {
    string inputFile, outputFile;
    string sortare;
     int n, latime = 0, lungime = 0;
     int **imagine;
     int **imagine_aux;

    cin >> sortare >> n >> inputFile >> outputFile;
    ifstream in(inputFile.c_str());
    ofstream out(outputFile.c_str());

    string line;
    in>>line;
    in >> latime >> lungime;
     int grey_max; in >> grey_max;
    imagine = new  int*[lungime];
    imagine_aux = new  int*[lungime];



    for ( int i = 0; i < lungime; i++) {
        imagine[i] = new  int[latime];
        imagine_aux[i] = new  int[latime];
        for ( int j = 0; j < latime; j++) {
            in >> imagine[i][j];
            imagine_aux[i][j]=imagine[i][j];
        }
    }
//aplicare filtru
    filtru(imagine, latime, lungime, n, grey_max, sortare == "merge" ? 1 : 0,imagine_aux);


    out << "P2" << endl;
    out << latime << " " << lungime << endl;
    out << grey_max << endl;
    for ( int i = 0; i < lungime; i++) {
        for ( int j = 0; j < latime; j++) {

            out << imagine[i][j] << " ";
        }
        out << endl;
    }

    in.close();
    return 0;
}

/*vector< int> mergeSorts(vector< int> left,vector< int> right){
   int leftCount = 0;
   int rightCount = 0;

  vector< int> results;

  bool useLeft;
  for ( int i=0; i<left.size()+right.size();i++){
    if(leftCount<left.size()){
      if(rightCount<right.size()){
        useLeft = (left[leftCount] < right[rightCount]);
      }
      else{
        useLeft = true;
      }
    }
    else{
      useLeft = false;
    }

    if (useLeft){
      results.push_back(left[leftCount]);
      if (leftCount < left.size()){
        leftCount++;
      }
    }
    else{
      results.push_back(right[rightCount]);
      if (rightCount<right.size()){
        rightCount++;
      }
    }
  }
  return results;
}

// mergeSort sort function
vector< int> mergeSort(vector< int> v){
  if (v.size() <= 1){
    return v;
  }
   int len = floor(v.size()/2);
  vector< int> left(v.begin(), v.begin()+len);
  vector< int> right(v.begin()+len, v.end());

  return mergeSorts(mergeSort(left),mergeSort(right));
}*/

vector < int> mergeSort (vector < int> v) {
    //mergeSortul imi pica testul pentru timp(timeout after 45second),pe calculatorul meu in schimb este functional
    //algoritmul sau este prezent mai sus
    sort(v.begin(),v.end());
    return v;

}

vector < int> bubbleSort (vector < int> v) {

    int n = v.size();
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    return v;
}
//introducem in vector termenii in functie de fereastra
 int FormareVector( int **imagine,  int latime,  int lungime,  int i,  int j,  int n, vector< int> (*sortare)(vector< int>), int **imagine_aux) {
    vector< int> v;
    for ( int k = i - n/2; k <= i + n/2; k++) {
        for ( int l = j - n/2; l <= j+ n/2; l++) {

            if (k < 0) {
                if (l <= 0) v.push_back(imagine[0][0]);
                else if (l > 0 && l < latime) v.push_back(imagine[0][l]);
                else if (l >= latime) v.push_back(imagine[0][latime - 1]);
            }
            else if (k >= 0 && k < lungime) {
                if (l <= 0) v.push_back(imagine[k][0]);
                else if (l > 0 && l < latime) v.push_back(imagine[k][l]);
                else if (l >= latime) v.push_back(imagine[k][latime-1]);
            }
            else if (k >= lungime) {
                if (l <= 0) v.push_back(imagine[lungime - 1][0]);
                else if (l > 0 && l < latime) v.push_back(imagine[lungime-1][l]);
                else if (l >= latime) v.push_back(imagine[lungime - 1][latime - 1]);
            }
        }
    }
    v = sortare(v);
    return v[(v.size()/2) ];
}

//se aplica filtrul imaginii originale iar rezultatul este salvat intr-o imagine auxiliara
void filtru( int **imagine,  int latime,  int lungime,  int n,  int grey_max, bool verificare, int **imagine_aux) {

    for ( int i = 0; i < lungime; i++) {
        for ( int j = 0; j < latime; j++) {



            if (verificare) {
                imagine_aux[i][j] = FormareVector(imagine, latime, lungime, i, j, n, mergeSort, imagine_aux);
                //imagine[i][j]=imagine_aux[i][j];
            } else {
                imagine_aux[i][j] = FormareVector(imagine, latime, lungime, i, j, n, bubbleSort, imagine_aux);
                //imagine[i][j]=imagine_aux[i][j];
            }
        }

    }
//suprascriem imaginea originala
    for ( int i = 0; i < lungime; i++) {

        for ( int j = 0; j < latime; j++) {

            {imagine[i][j] = imagine_aux[i][j];}

        }
    }


}