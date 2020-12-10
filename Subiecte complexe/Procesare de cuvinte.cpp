#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<set>
#include<iomanip>

using namespace std;

int main(){
    string cuv;
    vector<string>vec;
    while(cin>>cuv){
        vec.push_back(cuv);
    }
    //a
    sort(vec.begin(),vec.end());
    if(vec.size()%2==0){
    cout<<vec[vec.size()/2 -1]<<' '<<vec[vec.size()/2 ]<<endl;}else{ cout<<vec[vec.size()/2 ]<<endl;}
    
    //b
    int max=0,cnt=0,index;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if(vec[i]==vec[j]){
                cnt++;
            }
        }if(cnt>max){
            max=cnt;
            index=i;
        }
        cnt=0;
    }
    cout<<vec[index]<<endl;
    
    //c
    int maxL=0;
    for(int i=0;i<vec.size();i++){
        if(max<vec[i].size()){
            max=vec[i].size();
            index=i;
        }
    }
    string auxiliar=vec[index];
    reverse(auxiliar.begin(),auxiliar.end());
    cout<<auxiliar<<endl;
    
    //d
    double total=0,ratie;
    set<char>s;
    for(int i=0;i<vec.size();i++){
        total+=vec[i].size();
        for(int j=0;j<vec[i].size();j++){
            s.insert(vec[i][j]);
        }
    }
    ratie=total/s.size();
    cout<<fixed<<setprecision(2)<<ratie<<endl;
    
    
}