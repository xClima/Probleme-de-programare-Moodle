#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str;
    vector<string>vec;
    int n;
    string nume;
    vector<string>num;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>str;
        vec.push_back(str);
        
    }
    
    while(cin>>nume){
        num.push_back(nume);
    }
    
for(int i=0;i<num.size();i++){
    cout<<num[i]<<':'<<' ';
    for(int j=i;j<vec.size();){
        cout<<vec[j]<<' ';
        j=j+num.size();
        
        
    }
    cout<<endl;
    
}

    
}