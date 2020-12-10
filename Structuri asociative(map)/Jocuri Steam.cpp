#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    
    int p;
    string jocuri;
    string nume;
    string joc_dorit;
    vector<string>jo;
    int cnt=0;
    int nr_joc;
    int out;
    
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>nume>>nr_joc;
        for(int j=0;j<nr_joc;j++){
            cin>>jocuri;
            jo.push_back(jocuri);
        }
    }
    cin>>joc_dorit;
    
    for(int i=0;i<jo.size();i++){
        if(joc_dorit==jo[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}