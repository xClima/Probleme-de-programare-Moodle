#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string text;
    vector<string>cuvinte;
   while(cin>>text){
       cuvinte.push_back(text);
   }
    
    for(int i=cuvinte.size();i>=0;i--){
        cout<<cuvinte[i];
    }
    

    
}