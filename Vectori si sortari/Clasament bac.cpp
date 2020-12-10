#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;
bool sortbysec(const pair<string,float> &a, 
              const pair<string,float> &b) 
{   if(a.second==b.second){
    return (a.first < b.first);
}
    else {return (a.second > b.second);}
} 
int main(){
    string nume;
    float medie;
    string n1,n2,n3,n4;
    float n1f,n2f,n3f,n4f;
    vector<pair<string,float>>vec;
    
    while(getline(cin,nume,',')){
        medie=0;n1='0';n2='0';n3='0';n4='0';
        getline(cin,n1,',');
        getline(cin,n2,',');
        getline(cin,n3,',');
        getline(cin,n4,'\n');
        
        n1f=stof(n1);
        n2f=stof(n2);
        n3f=stof(n3);
        n4f=stof(n4);
        
        if(n1f>=5&&n2f>=5&&n3f>=5&&n4f>=5){
           
            medie=(n1f+n2f+n3f+n4f)/4;
            
            if(medie>=6){
                vec.push_back(make_pair(nume,medie));
            }
            
        }
        
        
    }
    //vec.erase(vec.end());
    sort(vec.begin(),vec.end(),sortbysec);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].first<<','<<fixed<<setprecision(2)<<vec[i].second<<endl;
    }
    
    
}