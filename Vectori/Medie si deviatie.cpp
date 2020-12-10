#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    float numere;
    float medie;
    float sumadev=0;
    float deviatie;
    float suma=0;
    vector<float>vec;
    while(cin>>numere){
        suma += numere;
        vec.push_back(numere);
    }
    medie=suma/vec.size();
    
    for(int i=0;i<vec.size();i++){
    
    sumadev += (vec[i]-medie)*(vec[i]-medie);
        
    }
    
    deviatie= sqrt(sumadev/vec.size());
    
    cout<<fixed<<setprecision(2)<<scientific<<medie<<' ';
    cout<<fixed<<setprecision(2)<<scientific<<deviatie<<' ';
    
    
    
    
}