#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<map>
#include<iomanip>

using namespace std;

bool sortbysec(const pair<string,float> &a, 
              const pair<string,float> &b) 
{   if(a.second!=b.second){
    return (a.second > b.second);}else if(a.second==b.second){return a.first<b.first;}
} 


int main(){
    string nume;
    string sal;
    float salariu;
    
    vector<pair<string,float>>vec;
    
    
      while(getline(cin,nume,',')){
        getline(cin,sal);
        salariu=stof(sal);
        vec.push_back(make_pair(nume,salariu));
        }
    vec.erase(vec.end());

    
    for(int i=0;i<vec.size();i++){
        for(int j=1;j<vec.size();j++){
            if(vec[i].first==vec[j].first){
                vec[j].second=vec[i].second;
            }
        }
        
    }

        
    
      sort( vec.begin(), vec.end() );
      vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
      sort( vec.begin(), vec.end(),sortbysec );
     for(int i=0;i<vec.size();i++){cout<<vec[i].first<<','<<fixed<<setprecision(2)<<vec[i].second<<endl;}
    
}