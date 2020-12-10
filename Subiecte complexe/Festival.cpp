#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
    char subpunct;
    cin>>subpunct;
    
    if(subpunct=='a'){
        int n,nr,verif=0;
        string nume;
        vector<pair<int,string>>vec;
        cin>>n;
        for(int j=0;j<n;j++){
            verif=0;
            getline(cin,nume,',');
            cin>>nr;
            if(vec.size()>0){
            for(int i=0;i<vec.size();i++){
                if(nume==vec[i].second){
                    vec[i].first+=nr;
                    verif=1;
                    break;
                }
            }
            if(verif==0){vec.push_back(make_pair(nr,nume));}
            }else{vec.push_back(make_pair(nr,nume));}
        }
            //sort(vec.begin(),vec.end());
            for(int i=0;i<vec.size();i++){
                if(vec[i].first>=5){
                    cout<<vec[i].second<<", "<<vec[i].first<<endl;
                }
            
        }
        
        
    }else if(subpunct=='b'){
        int nr_zile,zi;
        string trupa;
        vector<pair<int,string>>vec;
        cin>>nr_zile;
        while(getline(cin,trupa,',')){
            cin>>zi;
            vec.push_back(make_pair(zi,trupa));
        }
        vec.erase(vec.end());
         for(int x=0;x<nr_zile;x++){
             for(int y=1;y<4;y++){
                for(int i=0;i<vec.size();i++){
                    if(vec[i].first==y){
                        cout<<vec[i].second;
                        vec.erase(vec.begin()+i);
                        break;
                    } 
                }
            }
        }
            
    }else if(subpunct=='c'){
        int n;
        vector<string>vec;
        string trupa;
        cin>>n;
        for(int i=0;i<=n;i++){
            getline(cin,trupa);
            vec.push_back(trupa);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<' ';
        }
    }
    
}