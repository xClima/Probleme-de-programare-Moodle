#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string cuvinte;
    string out;
    int cnt=0,cntmax=1;
    vector<string>vec;
    
    while(cin>>cuvinte){
        vec.push_back(cuvinte);
    }
    
    for(int i=0;i<vec.size();i++){
        transform(vec[i].begin(),vec[i].end(),vec[i].begin(),::tolower);
    }
     for(int i=0;i<vec.size();i++){cnt=0;
         for(int j=0;j<vec.size();j++){
            if(vec[i]==vec[j]){
                cnt++;
                if(cnt>cntmax){
                    out=vec[i];
                    cntmax=cnt;
                    
                }
            }
             
         }
         
     }
     cout<<out;        
}