#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int nr;
    vector<int>vec;
    vector<int>cauta;
    int cnt=0,aux=0;
    
    cin>>n;
    while(cin>>nr)
        {
        vec.push_back(nr);
    }
    
    while(n>=0){
        cauta.push_back(n);
        n--;
    }
    
    for(int i=0;i<cauta.size();i++){
        for(int j=0;j<vec.size();j++){
            if(cauta[i]==vec[j]){
                aux=1;
            }
            
        }
        if(aux==0){
            cnt++;
            
        }
        aux=0;
    }
    cout<<cnt;
}