#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include <list>
using namespace std;

int main(){
    
    string data;
    vector<string>da;
    while(getline(cin,data)){
        da.push_back(data);
    }
    sort(da.begin(),da.end());
    da.erase(unique(da.begin(),da.end()),da.end());

    for(int i=0;i<da.size();i++){
        cout<<da[i]<<endl;
    }
}