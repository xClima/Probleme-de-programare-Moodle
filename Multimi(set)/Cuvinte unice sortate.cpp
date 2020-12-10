#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str;
    vector<string>vec;
    
    while(cin>>str){
        vec.push_back(str);
    }
    
    sort(vec.begin(),vec.end());
    
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<' ';
    }
    
}