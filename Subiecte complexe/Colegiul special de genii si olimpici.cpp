#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
#include<iomanip>

using namespace std;

bool sortare(const pair<string,double>&a,const pair<string,double>&b){
    if(a.second!=b.second){
        return a.second<b.second;
    }else{return a.first<b.first;}
}

int main(){
    string instr;
    cin>>instr;
    if(instr=="register"){
        vector<string>vec;
        string nume;
        while(cin>>nume){
            vec.push_back(nume);
        }
        if((vec.size()+3)%3!=0){
            if((vec.size()+3)%3==1){
                cout<<vec[vec.size()-1]<<' '<<endl;
                vec.erase(vec.end());
            }
            if((vec.size()+3)%3==2){
                cout<<vec[vec.size()-2]<<' '<<vec[vec.size()-1]<<' '<<endl;
                vec.erase(vec.end());
                vec.erase(vec.end());
            }
        }
        while(vec.size()!=0){
            
            cout<<vec[vec.size()-3]<<' '<<vec[vec.size()-2]<<' '<<vec[vec.size()-1]<<' '<<endl;
            vec.erase(vec.end());
            vec.erase(vec.end());
            vec.erase(vec.end());
        }
        
    }
    if(instr=="filter"){
        string nume;
        double medie,max=0;
        vector<pair<string,double>>vec;
        while(cin>>nume>>medie){
            vec.push_back(make_pair(nume,medie));
            if(medie>max){
                max=medie;
            }
        }
        sort(vec.begin(),vec.end(),sortare);
        max=max/2;
        for(int i=0;i<vec.size();i++){
            if(vec[i].second>=max){
                cout<<vec[i].first<<endl;
            }
        }
        
    }
    if(instr=="find_best"){
        string nume,olimp;
        vector<pair<string,string>>vec;
        while(cin>>nume>>olimp){
            vec.push_back(make_pair(nume,olimp));
        }
        int cnt=0,max=0,cnt_nume=0,max_nume=0;
        for(int i=0;i<vec.size();i++){
            cnt=0;
            cnt_nume=0;
            for(int j=0;j<vec.size();j++){
                if(vec[i].second==vec[j].second){
                    cnt++;
                    if(cnt>max){
                        max=cnt;
                        olimp=vec[i].second;
                    }
                }
                if(vec[i].first==vec[j].first){
                    cnt_nume++;
                    if(cnt_nume>max_nume){
                        max_nume=cnt_nume;
                        nume=vec[i].first;
                    }
                }
            }
        }
        cout<<olimp<<endl<<nume<<endl;
        int aux=0;
        for(int i=0;i<vec.size();i++){
            if(nume==vec[i].first&&olimp==vec[i].second){
                cout<<"Bingo!"<<endl;
                aux=1;
                break;
            }
        }
        if(aux==0){
            cout<<"Not Bingo!"<<endl;
        }
        
        
    }
    if(instr=="get_report"){
        double medie,nota1,nota2,nota3;
        string nume;
        double cnt=0,aux=0;
        while(cin>>nume>>nota1>>nota2>>nota3){
            cnt++;
            if(nota1>=5&&nota2>=5&&nota3>=5){
                medie=(nota1+nota2+nota3)/3;
                if(medie>=6){
                    aux++;
                }
            }
        }
        cout<<fixed<<setprecision(2)<<aux/cnt*100<<endl;
    }
}