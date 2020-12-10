#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<map>
using namespace std; 

int main(){
    string nume;
    string definitie;
    string x;
    int n;
    vector<pair<string,string>>output;
    vector<string>cautari;
    string cauta;
    getline(cin,x);
    n=stoi(x);
    int aux=0;
    
    int it=0;
    map<string,string>harta;
    
    for(int i=0;i<n;i++){
        getline(cin,nume,',');
        getline(cin,definitie);
        harta.insert ( std::pair<string,string>(nume,definitie) );
        
    }
    while(cin>>cauta){
        cautari.push_back(cauta);
    }
for(int i=0;i<cautari.size();i++){aux=0;
for(map<string,string >::const_iterator it = harta.begin();
    it != harta.end(); ++it)
{
    if(cautari[i]==it->first){
    std::cout << it->first <<':'<< " " << it->second << "\n";aux=1;
}
    
}if(aux==0){cout<<cautari[i]<<':'<<' '<<'-'<<endl;}
}

}
    
   /* #include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<map>
using namespace std; 

int main(){
    string nume;
    string definitie;
    string x;
    int n;
    vector<pair<string,string>>output;
    vector<string>cautari;
    string cauta;
    getline(cin,x,'\n');
    n=stoi(x);
    int aux=0;
    
    int it=0;
    map<string,string>harta;
    

    
    for(int i=0;i<n;i++){
        getline(cin,nume,',');
        getline(cin,definitie);
        
        output.push_back(make_pair(nume,definitie));
        
        
    }
    while(cin>>cauta){
        cautari.push_back(cauta);
    }
    
    for(int i=0;i<cautari.size();i++){aux=0;
        for(int j=0;j<output.size();j++){
            
            if(cautari[i]==output[j].first){
                cout<<output[j].first<<':'<<' '<<output[j].second<<endl;
                aux=1;
            }
        }if(aux==0){cout<<cautari[i]<<':'<<' '<<'-'<<endl;}
    }
   
}*/