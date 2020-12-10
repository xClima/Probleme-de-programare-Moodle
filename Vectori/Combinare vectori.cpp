#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

int main(){
    string nume;
    string x,y;
    float salariu;
    int n;
    vector<string>num;
    vector<float>sal;
    vector<pair<string,float>>final;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x>>y;
        nume=x+' '+y;
        num.push_back(nume);
    }
    for(int i=0;i<n;i++){
        cin>>salariu;
        sal.push_back(salariu);
    }
    for(int i=0;i<n;i++){
        final.push_back(make_pair(num[i],sal[i]));
        
    }
    for(int i=0;i<n;i++){
        
        cout<<final[i].first<<','<<fixed<<setprecision(1)<<final[i].second<<endl;
    }
    
    
    
}