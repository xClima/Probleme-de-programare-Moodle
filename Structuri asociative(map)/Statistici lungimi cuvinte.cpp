#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<map>

using namespace std;

int main(){
    string text;
    int lungime;
    string aux;
    vector<string>vec_text;
    vector<pair<int,string>>output;
    vector<pair<int,string>>out;
    
    
    while(cin>>text){
        
        output.push_back(make_pair(text.length(),text));
    }
    for(int i=0;i<output.size();i++){
    std::transform(output[i].second.begin(), output[i].second.end(), output[i].second.begin(), ::tolower);}

    sort(output.begin(), output.end());
    output.erase( unique( output.begin(), output.end() ), output.end() );
    for(int i=0;i<output.size();i++){
         
        
        for(int j=0;j<output.size();j++){
         
        if(output[i].first==output[j].first){
            
        aux=aux+' '+output[j].second;    
        
        
       
       
       
        
        
        
        
        }
        
       
        }out.push_back(make_pair(output[i].first,aux));
        aux.clear();
        
   
   
   out.erase( unique( out.begin(), out.end() ), out.end() );
    
}
for(int i=0;i<out.size();i++){
         cout<<out[i].first<<':'<<out[i].second<<' '<<endl;
        
        
            
            
        }

    
}