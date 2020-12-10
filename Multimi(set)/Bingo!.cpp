#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<string>

bool myfunction (int i,int j) { return (i<j); }
using namespace std;


int main(){
    vector<int>numere;
    vector<int>bingo;
    int n,cnt=0;
    int nr;
    int strigate;
    cin>>n;
    for(int i=0;i<n*n;i++){
        cin>>nr;
        numere.push_back(nr);
        cnt++;
    }
   while(cin>>strigate){
       bingo.push_back(strigate);
       
   }
   std::sort (numere.begin(), numere.end(), myfunction);
   for(int i=0;i<bingo.size();i++){
       for(int j=0;j<numere.size();j++){
           if(numere[j]==bingo[i]){
               numere.erase(numere.begin()+j);
               cnt--;
           }
           
       }
       
   }if(cnt==0){cout<<"BINGO!";
    }else if(cnt>0){for(int i=0;i<numere.size();i++){
        cout<<numere[i]<<' ';
    }}
    
        
    }
    
    
    