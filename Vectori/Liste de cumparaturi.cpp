#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include <list>
using namespace std;

int main(){
    int nr;
    string l;
    string o;
    int x;
    vector<string>lista;
    vector<string>ordine;
    
    cin>>nr;
    
    for(int i=0;i<nr;i++){
        cin>>l;
        lista.push_back(l);
    }
   
    for(int i=0;i<nr;i++){
        cin>>o;
        ordine.push_back(o);
    }
    

  
    for(int i=0;i<ordine.size();i++){
        for(int j=0;j<lista.size();j++){
            
            if(ordine[i]==lista[j]){
                lista.erase(lista.begin()+j);
                for(int x=0;x<lista.size();x++){
                cout<<lista[x]<<' ';
                }
            }
            
        }
        cout<<endl;
            
    }
}
  

        
    
