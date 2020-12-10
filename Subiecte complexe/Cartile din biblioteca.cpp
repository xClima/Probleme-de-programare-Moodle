#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

bool sortare(const pair<int,int>&a,const pair<int,int>&b){
    return a.second>b.second;
}

int main(){
    int cod_carte,an_publicare;
    vector<pair<int,int>>vec;
    vector<pair<int,int>>vec2;
    vector<int>sub2;
    set<pair<int,int>>s;
    while(cin>>cod_carte>>an_publicare){
        vec.push_back(make_pair(cod_carte,an_publicare));
        vec2.push_back(make_pair(cod_carte,an_publicare));
        sub2.push_back(cod_carte);
    }
    sort(vec.begin(),vec.end(),sortare);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].second<<' ';
    }cout<<endl;
    sort(sub2.begin(),sub2.end());
    sub2.erase(unique(sub2.begin(),sub2.end()),sub2.end());
    for(int i=0;i<sub2.size();i++){
        cout<<sub2[i]<<' ';
    }cout<<endl;
    sub2.clear();
    int cnt=0;
    vector<pair<int,int>>sub3;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if(vec[i].second==vec[j].second){
                cnt++;
            }
        }
        s.insert(make_pair(vec[i].second,cnt));
        cnt=0;
    }
    for(__typeof(s.begin()) it = s.begin(); it != s.end(); ++it){
        cout<<it->first<<": "<<it->second<<endl;
    }
    sort(vec.begin(),vec.end(),sortare);
    for(int i=0;i<vec.size();i++){
        if(vec[i].second==vec[vec.size()-1].second){
            sub2.push_back(vec[i].second);
        }        
    }cout<<sub2.size()<<endl;
    sub2.clear();
    for(int i=0;i<vec2.size();i++){
        if(vec2[i].second==vec[vec.size()-1].second){
            cout<<vec2[i].first<<' ';
        }        
    }cout<<endl;
    
}