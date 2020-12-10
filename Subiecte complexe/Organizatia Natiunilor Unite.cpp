#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;

bool s(const pair<string,int>&a, const pair<string,int>&b){
    if(a.first==b.first){
        return a.second>b.second;
    }else{return a.first>b.first;}
}

bool sortare(const pair<string,int>&a, const pair<string,int>&b){
    if(a.second!=b.second){
        return a.second>b.second;
    }else{return a.first<b.first;}
}

bool final(const pair<string,int>&a, const pair<string,int>&b){
    if(a.second!=b.second){
        return a.second<b.second;
    }else{return a.first>b.first;}
}

bool stergere(const pair<string,int>&a, const pair<string,int>&b){
    return a.first==b.first;
    
}

int main(){
    string tara,dur;
    int durata;
    vector<pair<string,int>>vec;
	int indexOfDigit = -1;
	
    while(getline(cin,tara)){
        for(int i = 0; i < tara.length(); i++)
	{
		if(isdigit(tara.at(i))) 
		{
			indexOfDigit = i;
			break;
		}
	}
	int minus=0;
	dur = tara.substr(indexOfDigit, tara.length() - indexOfDigit);
	minus=tara.find("-");
	if(minus>0){
	tara.resize(indexOfDigit-2);
	durata = -1*stoi(dur);}else{
	    tara.resize(indexOfDigit-1);
	    durata = stoi(dur);}
        //getline(cin,dur);
        //durata=stoi(dur);
        if(durata>=10&&durata<=60){
        vec.push_back(make_pair(tara,durata));
            
        }
    }
    sort(vec.begin(),vec.end(),s);
    vec.erase(unique(vec.begin(),vec.end(),stergere),vec.end());
    
    
    double suma=0,medie=0;
    
    sort(vec.begin(),vec.end(),final);
    vector<pair<string,int>>aux;
    for(int i=0;i<vec.size();i++){
        suma+=vec[i].second;
        if(suma<=480){
        
        aux.push_back(make_pair(vec[i].first,vec[i].second));
        
        }else{break;}
    }
    suma=0;
    for(int i=0;i<aux.size();i++){
        suma+=aux[i].second;
    }
    
    sort(aux.begin(),aux.end(),sortare);
    
    for(int i=0;i<aux.size();i++){
        cout<<aux[i].first<<","<<aux[i].second<<endl;
        
    }
    
    medie=suma/(aux.size());
    cout<<suma<<' '<<fixed<<setprecision(2)<<medie<<endl;
}