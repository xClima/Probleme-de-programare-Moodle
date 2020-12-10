#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool sortare(int a,int b){
    return a>b;
}
int main(){
    int nr;
    vector<int>par;
    vector<int>impar;
    while(cin>>nr){
        if(nr%2==0){
            par.push_back(nr);
        }if(nr%2==1){
            impar.push_back(nr);
        }
    }
    sort(par.begin(),par.end());
    sort(impar.begin(),impar.end(),sortare);
    
    for(int i=0;i<par.size();i++){
        cout<<par[i]<<' ';
    }
    for(int i=0;i<impar.size();i++){
        cout<<impar[i]<<' ';
    }
    
}