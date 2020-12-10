#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main(){
    string text;
    vector<string>s;
    int cnt=0;
    
    while(cin>>text){
        
        s.push_back(text);
        
        
    }
    for(int i=0;i<s.size();i++){
    std::transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);
        
    }
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    cout<<s.size()<<endl;
    
    
}