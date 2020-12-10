#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<iomanip>

using namespace std;

struct Card{
    string nume,tip,cod;
    int zi,luna,an;
    double sold;
};

int main(){
    string instr;
    string nume,tip,cod;
    int zi,luna,an;
    char junk;
    double sold;
    vector<Card>vec;
    cin>>instr;
    if(instr=="stats"){
        vector<string>ex1;
        while(cin>>nume>>tip>>cod>>zi>>junk>>luna>>junk>>an>>sold){
            vec.push_back({nume,tip,cod,zi,luna,an,sold});
            ex1.push_back(tip);
        }
        set<pair<string,int>>s;
        int cnt=0;
        for(int i=0;i<vec.size();i++){
            cnt=0;
            for(int j=0;j<vec.size();j++){
                if(vec[i].tip==vec[j].tip){
                    cnt++;
                }
            }s.insert(make_pair(vec[i].tip,cnt));
        }
        cout<<s.size()<<endl;
        for(auto itr=s.begin();itr!=s.end();itr++){
            pair<string,int> x=*itr;
            cout<<x.first<<','<<x.second<<endl;
        }
    }
    if(instr=="debt"){
        double datorie=0;
        vector<pair<double,string>>qwe;
        while(cin>>nume>>tip>>cod>>zi>>junk>>luna>>junk>>an>>sold){
            vec.push_back({nume,tip,cod,zi,luna,an,sold});
            if(sold<0){
                datorie+=sold;
                qwe.push_back(make_pair(sold,nume));
            }
        }
        
        cout<<fixed<<setprecision(2)<<datorie<<endl;
        
        sort(qwe.begin(),qwe.end());
        for(int i=0;i<qwe.size();i++){
            cout<<qwe[i].second<<' ';
        }cout<<endl;
    }
    if(instr=="search"){
        string cod_c;
        cin>>cod_c;
        int verif=0;
        while(cin>>nume>>tip>>cod>>zi>>junk>>luna>>junk>>an>>sold){
            vec.push_back({nume,tip,cod,zi,luna,an,sold});
        }
        
        for(int i=0;i<vec.size();i++){
            if(cod_c==vec[i].cod){
                verif=1;
                if(vec[i].luna>=10){
                    if(vec[i].zi>=10){
                cout<<vec[i].nume<<' '<<vec[i].tip<<' '<<vec[i].cod<<' '<<vec[i].zi<<'/'<<vec[i].luna<<'/'<<vec[i].an<<' '<<fixed<<setprecision(2)<<vec[i].sold<<endl;
                break;
                    }else{cout<<vec[i].nume<<' '<<vec[i].tip<<' '<<vec[i].cod<<' '<<0<<vec[i].zi<<'/'<<vec[i].luna<<'/'<<vec[i].an<<' '<<fixed<<setprecision(2)<<vec[i].sold<<endl;
                break;
                    }
                }else{
                    if(vec[i].zi>=10){
                    cout<<vec[i].nume<<' '<<vec[i].tip<<' '<<vec[i].cod<<' '<<vec[i].zi<<'/'<<0<<vec[i].luna<<'/'<<vec[i].an<<' '<<fixed<<setprecision(2)<<vec[i].sold<<endl;
                break;
                    }else{  cout<<vec[i].nume<<' '<<vec[i].tip<<' '<<vec[i].cod<<' '<<0<<vec[i].zi<<'/'<<0<<vec[i].luna<<'/'<<vec[i].an<<' '<<fixed<<setprecision(2)<<vec[i].sold<<endl;
                break;
                    }
                }
            }
        }
        if(verif==0){
            cout<<"CARD INVALID"<<endl;
        }
    }
    if(instr=="expiration"){
        int an_c;
        cin>>an_c;
        set<pair<int,int>>s;
        while(cin>>nume>>tip>>cod>>zi>>junk>>luna>>junk>>an>>sold){
            vec.push_back({nume,tip,cod,zi,luna,an,sold});
            if(an==an_c){
                s.insert(make_pair(zi,luna));
            }
        }
        cout<<s.size()<<endl;
    }
}