#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    
uint64_t n;
string adresa,continut;
uint64_t adresaa,continuta;
vector<uint64_t>vec;
vector<uint64_t>qwe;
vector<uint64_t>vec2;
vector<uint64_t>vec3;
vector<uint64_t>cau;
uint64_t cauta;
uint64_t gasit;
uint64_t aux=0;

cin>>n;
for(int i=0;i<n;i++){
cin>>adresaa;
cin.ignore();
cin>>continuta;

    vec.push_back(adresaa);
    vec3.push_back(adresaa);
    vec2.push_back(continuta);
    
}
while(cin>>cauta){
    cau.push_back(cauta);
    
    
}


for(int i=0;i<cau.size();i++){
    
    for(int j=vec3.size()-1;j>=0;j--){
        if(cau[i]==vec[j]){
            cau[i]=vec2[j];
            break;
            
            
            
        }
    }continue;
    }

    
    for(int i=0;i<cau.size();i++){
    
    for(int j=vec3.size()-1;j>=0;j--){
        if(cau[i]==vec3[j]){
            qwe.push_back(vec2[j]);
            aux=1;
            
            
        }
    }
    if(aux==1){
        cout<<qwe[0]<<endl;
    }else{cout<<"null"<<endl;}
    aux=0;
    qwe.clear();
    
}
}