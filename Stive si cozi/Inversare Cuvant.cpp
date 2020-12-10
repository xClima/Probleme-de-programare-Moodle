#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    char cuvant;
    vector<char>vocale;
    vector<char>consoane;
    vector<char>output;
    while(cin>>cuvant){
        if(cuvant=='a'||cuvant=='e'||cuvant=='i'||cuvant=='o'||cuvant=='u'||cuvant=='A'||cuvant=='E'||cuvant=='I'||cuvant=='O'||cuvant=='U'){
        vocale.push_back(cuvant);
        }
        else{
            consoane.push_back(cuvant);
        }
    }
    for(int i=vocale.size()-1;i>=0;i--){
        cout<<vocale[i];
         for(int j=consoane.size()-1;j>=0;j--){
         cout<<consoane[j];
         consoane.erase(consoane.begin()+j);
             break;
         }    continue;
        
    }
    for(int j=consoane.size()-1;j>=0;j--){
        cout<<consoane[j];
        
    }
       
}