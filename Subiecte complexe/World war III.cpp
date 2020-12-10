#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

bool sortare(const pair<string,int>&a,const pair<string,int>&b){
    if(a.second==b.second){
        return a.first<b.first;
    }else{
        return a.second>b.second;
    }
}

int main(){
    string instructiune;
    cin>>instructiune;
    if(instructiune=="recruit"){
        string nume;
        vector<string>vec;
        while(cin>>nume){
            vec.push_back(nume);
        }
        int rez=vec.size()%5;
        while(rez!=0){
            vec.pop_back();
            rez--;
        }
        rez=vec.size()/5;
        for(int i=0;i<rez;i++){
            for(int j=0;j<5;j++){
                cout<<vec[j]<<' ';
            }cout<<endl;
            for(int j=0;j<5;j++){
                vec.erase(vec.begin());
            }
        }
    }else
    if(instructiune=="sort"){
        string nume;
        int nr;
        vector<pair<string,int>>vec;
        while(cin>>nume>>nr){
            vec.push_back(make_pair(nume,nr));
        }
        
        int rez=vec.size()/5;
        for(int i=0;i<rez;i++){
            sort(vec.begin(),vec.begin()+5,sortare);
            for(int j=0;j<5;j++){
                cout<<vec[j].first<<' ';
            }cout<<endl;
            for(int j=0;j<5;j++){
                vec.erase(vec.begin());
            }
        }
    }else
    if(instructiune=="form_squad"){
        queue<pair<string,string>>marine;
        queue<pair<string,string>>pilot;
        queue<pair<string,string>>medic;
        string nume,ocupatie;
        while(cin>>nume>>ocupatie){
            if(ocupatie=="marine"){
                marine.push(make_pair(nume,ocupatie));
            }
            if(ocupatie=="pilot"){
                pilot.push(make_pair(nume,ocupatie));
            }
            if(ocupatie=="medic"){
                medic.push(make_pair(nume,ocupatie));
            }
            
        }
        if(marine.size()<3 || pilot.size()<1 || medic.size()<1){
            cout<<"No squad formed yet"<<endl;
            
        }
        
        while(marine.size()>=3&&pilot.size()>=1&&medic.size()>=1){
            cout<<medic.front().first<<' ';
            cout<<pilot.front().first<<' ';
            cout<<marine.front().first<<' ';
            marine.pop();
            cout<<marine.front().first<<' ';
            marine.pop();
            cout<<marine.front().first<<' '<<endl;
            marine.pop();
            medic.pop();
            pilot.pop();
        }
    }else
    if(instructiune=="spy_detect"){
        struct out{
            string nume;
            string oc;
            int nr;
        };
        int n;
        string nume,oc;
        int nr;
        cin>>n;
        vector<out>fin;
        for(int i=0;i<n;i++){
            cin>>nume>>oc>>nr;
            fin.push_back({nume,oc,nr});
        }
        int afis;
        string nume_out,oc_out;
        int verif=0;
        while(cin>>afis){
            for(int i=0;i<fin.size();i++){
                if(fin[i].nr==afis){
                    verif=1;
                    nume_out=fin[i].nume;
                    oc_out=fin[i].oc;
                }
            }
            if(verif==1){
                cout<<nume_out<<' '<<oc_out<<endl;
            }else{cout<<"Spy detected!"<<endl;}
            verif=0;
        }
        
    }
    
}