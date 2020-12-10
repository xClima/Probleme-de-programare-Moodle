#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    float numere;
    vector<float>vec;
    vector<int>vec2;
    int cnt=0;
    float sum;
    vec.push_back(0);
    while(cin>>numere){
        vec.push_back(numere);
    }
    
    for(int i=0;i<vec.size();i++){
        if(vec[i]>vec[i-1]&&vec[i]>vec[i+1]){
        sum += vec[i];
        cnt++;
        vec2.push_back(i-1);
        }
        
    }
    float avg;
    avg=sum/cnt;
    cout<<fixed<<setprecision(2)<<scientific<<avg<<' ';
     for(int i=0;i<vec2.size();i++){
     cout<<vec2[i]<<' ';
         
     }
    
}