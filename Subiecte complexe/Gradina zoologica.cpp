#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool sortare(const pair<string,int>&a,const pair<string,int>&b){
    if(a.second==b.second){return a.first<b.first;}else{return a.second<b.second;}
}
 struct Animale{
        string x,y;
        int v;
    };
bool comp(Animale a, Animale b){
    return a.x<b.x;
}
bool comp2(Animale a, Animale b){
    return a.v<b.v;
}
bool comp3(Animale a, Animale b){
    if(a.v==b.v){return a.y<b.y;}else{return a.v>b.v;}
}
bool comp5(Animale a, Animale b){
    if(a.v==b.v){return a.y<b.y;}else{return a.v<b.v;}
}
bool comp4(Animale a,Animale b){
    return a.y<b.y;
}
int main(){
    string nume,animal;
    int n,varsta;
   
    vector<Animale>aux;
    vector<pair<string,string>>vec;
    vector<int>varst;
    vector<Animale>sub2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nume>>animal>>varsta;
        aux.push_back({animal,nume,varsta});
        vec.push_back(make_pair(animal,nume));
        varst.push_back(varsta);
    }
    string sub;
    cin>>sub;
    if(sub=="count"){
        sort(aux.begin(),aux.end(),comp);
        vector<pair<string,int>>qqq;
        int counter=0;
        for(int i=0;i<aux.size();i++){
            for(int j=aux.size()-1;j>=0;j--){
                //if(i==j)continue;
                if(aux[i].x==aux[j].x){
                    counter++;
                    qqq.push_back(make_pair(aux[j].y,aux[j].v));
                    //aux.erase(aux.begin());
                    
                   
                    
                }
                
            }
            cout<<aux[i].x<<' '<<'('<<counter<<')'<<':'<<' ';
            sort(qqq.begin(),qqq.end(),sortare);
            for(int x=0;x<qqq.size();x++){
                cout<<qqq[x].first<<' ';
                for(int y=0;y<aux.size();y++){
                    if(qqq[x].first==aux[y].y&&qqq[x].second==aux[y].v){
                        aux.erase(aux.begin()+y);
                        //y=-1;
                    }
                }
            }cout<<endl;
            
            i=-1;
            
            qqq.clear();
            counter=0;
            
            
        }
    }
    if(sub=="endangered"){
        int x,cnt=0;
        cin>>x;
        vector<Animale>w;
        for(int i=0;i<aux.size();i++){
            for(int j=0;j<aux.size();j++){

                if(aux[i].x==aux[j].x){
                    cnt++;
                }
            }
            if(cnt==1){
                w.push_back({aux[i].x,aux[i].y,aux[i].v});
            }
            cnt=0;
        }
        sort(w.begin(),w.end(),comp3);
        for(int i=0;i<w.size();i++){
            if(w[i].v>=x){
                cout<<w[i].y<<' ';
            }
        }cout<<endl;
    }
    if(sub=="search"){
    string cauta;
    cin>>cauta;
    int cnt=0;
    sort(aux.begin(),aux.end(),comp4);
    for(int i=0;i<aux.size();i++){
        if(cauta==aux[i].x){
            cnt++;
            cout<<aux[i].y<<" - "<<aux[i].v<<endl;
        }
    }if(cnt==0){
        cout<<"No match found."<<endl;
    }
        
    }
    if(sub=="show"){
        vector<Animale>e;
        string best1,best2;
        int best3;
        sort(aux.begin(),aux.end(),comp4);
        for(int i=0;i<aux.size();i++){
            for(int j=0;j<aux.size();j++){
                //if(i==j){continue;}else
                if(aux[i].x==aux[j].x){
                    if(aux[i].v<=aux[j].v){
                       // e.push_back({aux[i].x,aux[i].y,aux[i].v});
                        best1=aux[i].x;
                        best2=aux[i].y;
                        best3=aux[i].v;
                    }else{best1.clear();best2.clear();best3=0;break;}
                }
                
            }if(best1.size()>0){
                
                e.push_back({best1,best2,best3});
            }
        }
        for(int i=0;i<e.size();i++){
            for(int j=0;j<e.size();j++){
                if(i==j)continue;
                if(e[i].x==e[j].x){
                    e.erase(e.begin()+j);
                    j=-1;i=-1;
                    break;
                }}}
        
        sort(e.begin(),e.end(),comp4);
        //e.erase(unique(e.begin(),e.end()),e.begin());
        for(int i=0;i<e.size();i++){
            cout<<e[i].y<<" ("<<e[i].x<<')'<<endl;
        }
        
    }
    
}