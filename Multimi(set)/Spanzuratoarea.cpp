#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<string>
#include <locale>

using namespace std;


int main(){
string litere;
string cuvinte;
char x;
int i=0;
int cnt=-1,cnt2=0;
vector<string>lit;
vector<char>litcuv;
vector<string>cuv;

cin>>litere;
while(cin>>cuvinte){
cuv.push_back(cuvinte);
}
for(int i=0;i<cuv.size();i++){
std::transform(cuv[i].begin(), cuv[i].end(), cuv[i].begin(), ::tolower);}
for(int i=0;i<cuv.size();i++){
    for(int j=0;j<litere.size();j++){
    //cout<<cuv[i].find(litere[j])<<endl;    
      if(cuv[i].find(litere[j])== string::npos){
      cuv.erase(cuv.begin()+i);
     i=-1;
     break;
      
          
      }
    
        
        
        
    }
    
}
std::sort(cuv.begin(), cuv.end());
for(int i=0;i<cuv.size();i++){
    if(cuv[i]==cuv[i+1]){
        cuv.erase(cuv.begin()+i);
        i=-1;
    }
}
for(int i=0;i<cuv.size();i++){cout<<cuv[i]<<' ';}
}









/*

std::vector<char> cstr(litere.c_str(), litere.c_str() + litere.size() );

     
for(int i=0;i<cuv.size();i++){
    for(int j=0;j<cstr.size();j++){//cout<<cstr[j]<<' ';
        cnt=cstr.size();
    if(cuv[i].find(cstr[j])!= string::npos){
        cnt=1;}else {cnt=0;}
          
            
        
    }if(cnt=1){
        cout<<cuv[i]<<' '; 
    }
        
   




        
    }
     
    }
    */

    

    