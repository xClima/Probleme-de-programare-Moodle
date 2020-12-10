#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include <list>
using namespace std;

int main(){
    
string lista;
string furnizor;
int cnt=0;

vector<string>lis;
vector<string>fur;
int n;

cin>>n;

for(int i=0;i<n;i++){
    cin>>lista;
    lis.push_back(lista);
}
while(cin>>furnizor){
    fur.push_back(furnizor);
}

for(int i=0;i<lis.size();i++){
    
    for(int j=0;j<fur.size();j++){
        if(lis[i]==fur[j]){
            cnt++;
        }
    }
}
cout<<cnt<<endl;

}