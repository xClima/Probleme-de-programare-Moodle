#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool sorta(const pair<int,int>&a,const pair<int,int>&b){
    if(a.second==b.second){return a.first<b.first;}else{return a.second<b.second;}
}

class Jucator{
    public:
    string nume,prenume;

    
    public:Jucator(string nume_in,string prenume_in){
                nume=nume_in;
                prenume=prenume_in;
                
            }
    
};


int main(){
    
    string N,P,nmr[2];
    vector<int>castig;
    vector<pair<int,int>>num;
    vector<Jucator>vec;
    int x,nr,rn;
    int cnt=-1,counter=0;
    
    

    
    for(int i=0;i<6;i++){
        cin>>x;
        castig.push_back(x);
    }
    while(cin>>N>>P){
        if(N.size()>2&&P.size()>2){
        cnt++;
        vec.push_back(Jucator(N,P));
        }
        else{
            nr=stoi(N);
            rn=stoi(P);
            num.push_back(make_pair(cnt,nr));
            num.push_back(make_pair(cnt,rn));
            
            
        }
    }
        
    int nrmin;
    int aparitii=0;
    
   for(int i=0;i<num.size();i++){
       for(int j=0;j<num.size();j++){
           if(num[i].second==num[j].second){
               counter++;
               if(counter>aparitii){
                   aparitii=counter;
                   nrmin=num[i].second;
               }if(counter==aparitii){
                   if(nrmin>num[i].second){
                       nrmin=num[i].second;}
                   }
               }
           }counter=0;
   }
    cout<<nrmin<<' '<<aparitii<<endl;
    counter=0;
    int bilete_max=0;
    for(int i=0;i<num.size();i++){
        for(int j=0;j<num.size();j++){
            if(num[i].first==num[j].first){
                counter++;
                if(counter>bilete_max){
                    bilete_max=counter;
                    
                }
            }
        }counter=0;
    }
    cout<<bilete_max/6<<endl;
    vector<pair<int,int>>sortare;
    counter=0;
    for(int j=1;j<=49;j++){
    for(int i=0;i<num.size();i++){
        if(j==num[i].second){
            counter++;
        }
    }
    sortare.push_back(make_pair(j,counter));
    counter=0;
        
    }
    sort(sortare.begin(),sortare.end(),sorta);
    for(int i=0;i<sortare.size();i++){
        cout<<sortare[i].first<<' ';
    }cout<<endl;
    
    counter=0;
    int max=0,qwe=0;
    for(int i=0;i<num.size();i++){
        
        qwe++;
        for(int j=0;j<castig.size();j++){
           
                    
                    if(num[i].second==castig[j]){
                        counter++;
                        
                        
                        if(max<counter){
                            max=counter;
                        }
                        
                    }
                
            }
            if(qwe==5){qwe=0;
            counter=0;
        }
    }
    cout<<max<<endl;
}