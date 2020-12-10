#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    vector<string>inst;
    vector<string>tast;
    int n;
    string aux;
    string ins,taste;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>ins;
        inst.push_back(ins);
    }
    while(cin>>taste){
        
        tast.push_back(taste);
    }
   
    for(int i=0;i<taste.size();i++){
        
            if(taste[i]=='>'){
                std::rotate(inst.begin(), inst.begin()+1, inst.end());
                
                
            }else if(taste[i]=='<'){
                std::rotate(inst.begin(), inst.begin()+(inst.size()-1), inst.end());
                
                
            } if(taste[i]=='e'){
                cout<<inst[0]<<' ';
            }
            
            
        
        
                
                
            
        
    }
    /*
        std::rotate(inst.begin(), inst.begin()+1, inst.end());
        for(int i=0;i<n;i++){
        cout<<inst[i]<<' ';
    }
    cout<<endl;
    for(int i=0;i<tast.size();i++){
        cout<<tast[i]<<' ';
        
    }
    */
    
    
}