#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    double nr;
    vector<double>out;
    
    while(cin>>nr){
        out.push_back(nr);
    }
    
    for(int i=out.size()/2;i<out.size();i++){
        cout<<fixed<<setprecision(2)<<out[i]<<' ';
    }
    for(int i=0;i<out.size()/2;i++){
        cout<<fixed<<setprecision(2)<<out[i]<<' ';
    }
}