#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
int n;
int nr;
vector<int>vec;
vector<char>q;
char x;
cin>>n;
for(int i=0;i<n;i++){
    cin>>nr;
    vec.push_back(nr);
}
while(cin>>x){
    q.push_back(x);
}

int receptionate;
int productie;
int livrate;

receptionate=count(q.begin(),q.end(),'r');
productie=count(q.begin(),q.end(),'p');
livrate=count(q.begin(),q.end(),'l');
int nereceptionate=vec.size()-receptionate;
if(nereceptionate>0){
for(int i=receptionate;i<vec.size();i++){
    cout<<vec[i]<<' ';
    
}
cout<<endl;}else{cout<<endl;}

while(nereceptionate>0){
vec.pop_back(); 
nereceptionate--;
}


vector<int>liv;
for(int i=0;i<livrate;i++){
    liv.push_back(vec[i]);
    //cout<<liv[i];
}
productie=productie-livrate;
while(livrate>0){
    vec.erase(vec.begin());
    livrate--;
}

vector<int>prod;

for(int i=0;i<productie;i++){
    prod.push_back(vec[i]);
}
while(productie>0){
    vec.erase(vec.begin());
    productie--;
}

if(vec.size()>0){
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<' ';
}
cout<<endl;}else{cout<<endl;}
if(prod.size()>0){
for(int i=0;i<prod.size();i++){
    cout<<prod[i]<<' ';
}
cout<<endl;}else{cout<<endl;}
if(liv.size()>0){
for(int i=0;i<liv.size();i++){
    cout<<liv[i]<<' ';
}
cout<<endl;}else{cout<<endl;}
//coduri nereceptionate   
//coduri receptionate
//coduri trecute prin productie
//coduri livrate    
    
    
    
}