#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<iomanip>


using namespace std;

class Vacanta{
    public:
    int ID,pret;
    string oras;
    
    public:
    Vacanta(int ID_in,string oras_in,int pret_in){
        ID=ID_in;
        pret=pret_in;
        oras=oras_in;
        
    }
    
    
    
};

int main(){
    int counter=0;
    double sumaPraga=0;
    int IDm,pretm;
    string orasm;
    int cnt=0;
    string instr;
    vector<Vacanta>vec;
    set<string>mySet;
    while(cin>>instr){
        if(instr=="inregistrare"){
            cin>>IDm>>orasm>>pretm;
            vec.push_back(Vacanta(IDm,orasm,pretm));
        }else if(instr=="afiseaza"){
            cin>>orasm;
            for(int i=0;i<vec.size();i++){
                if(orasm==vec[i].oras){
                    cnt++;
                    cout<<vec[i].ID<<' ';
                }
            }
            if(cnt==0){cout<<"Nicio vacanta gasita!"<<endl;}else{
            cout<<endl;
                cnt=0;
            }
        }else if(instr=="rezerva"){
            cin>>IDm;
            
            for(int i=0;i<vec.size();i++){
                
                if(IDm==vec[i].ID){
                    if(vec[i].oras=="Praga"){
                        counter++;
                        sumaPraga+=vec[i].pret;
                    }
                    vec.erase(vec.begin()+i);
                    cout<<"Felicitari!";
                    cnt++;
                }
            }
            if(cnt==0){cout<<"Eroare!"<<endl;}else{
            cout<<endl;
                cnt=0;
            }
        }
    }
    if(vec.size()>0){
    for(int i=0;i<vec.size();i++){
        mySet.insert(vec[i].oras);
        
    }
    std::set<std::string>::iterator it = mySet.begin();
    while ( it != mySet.end())
    {
	    std::cout << (*it) << " ";
	    it++;
    }
    cout<<endl;
    }else{cout<<"Nicio vacanta disponibila!"<<endl;}
    
    double medie=0,suma=0;
    cnt=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i].oras=="Paris"){
        cnt++;
        suma+=vec[i].pret;
        }
    }if(cnt>0){
    medie=suma/cnt;
    cout<<fixed<<setprecision(3)<<medie<<endl;
    }else{cout<<fixed<<setprecision(3)<<medie<<endl;}
    
    
    
    if(vec.size()>0){
        int min=vec[0].pret,auxID;
        string auxOras;
        for(int i=0;i<vec.size();i++){
            if(min>vec[i].pret){
                min=vec[i].pret;
                auxOras=vec[i].oras;
                auxID=vec[i].ID;
                
            }
        }
        cout<<auxID<<","<<auxOras<<","<<min<<endl;
        if(auxOras=="Praga"){
            counter++;
            sumaPraga+=min;
        }
            
        }else{double x=0;
            cout<<fixed<<setprecision(3)<<x<<endl;}
            
            
    if(counter>0){
        double total=sumaPraga+((sumaPraga*30)/100);
        cout<<fixed<<setprecision(3)<<total<<endl;
    }else{double x=0; 
        cout<<fixed<<setprecision(3)<<x<<endl;}
    
    
    
}