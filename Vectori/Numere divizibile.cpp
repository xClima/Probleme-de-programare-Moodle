#include<iostream>
#include<vector>

using namespace std;

int main(){
    int in;
    vector<int>vec;
    
    while(cin>>in){
        vec.push_back(in);
    }
    
    int n=1;
    
    
    while(n<100){
        for(int i=0;i<vec.size();i++){
            if(vec[i]%n==0){
                cout<<vec[i]<<endl;
                
                }
            }
        n++;
    }
    
}