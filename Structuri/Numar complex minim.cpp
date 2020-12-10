#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int n;
    string x,y;
    float x_in,y_in;
    vector<pair<float,float>>complex;
    float modul=10000;
    float out_x,out_y;
    cin>>n;
    
    for(int i=0;i<n;i++){
        getline(cin,x,',');
        getline(cin,y,'\n');
        x_in=stoi(x);
        y_in=stoi(y);
        complex.push_back(make_pair(x_in,y_in));
    }
    for(int i=0;i<complex.size();i++){
        if(modul>sqrt((complex[i].first*complex[i].first)+(complex[i].second*complex[i].second))){
            modul=sqrt((complex[i].first*complex[i].first)+(complex[i].second*complex[i].second));
            out_x=complex[i].first;
            out_y=complex[i].second;
            
        }
       // cout<<complex[i].first<<','<<complex[i].second<<endl;
        
    }
    cout<<out_x<<' '<<out_y<<endl;
    }
    
    /*
    #include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Complex{float real; float imaginar;
public:

Complex(float r,float i){
    real=r;
    imaginar=i;
}
float getReal(){return real;}
float getImaginar(){return imaginar;};
Complex(){
    real=0;
    imaginar=0;
}
double norm(){
    return sqrt((real*real)+(imaginar*imaginar));
}

};

int main(){
    int n,i;
    scanf("%d",&n);
    float x,y;
    float  modulMinim=1000;
    Complex nr;
    for(i=0;i<n;i++){scanf("%f, %f", &x , &y);
    Complex p(x,y);
    
    if(p.norm()<modulMinim){
        modulMinim=p.norm();
        nr=p;
    }}
    printf("%.1f %.1f",nr.getReal(),nr.getImaginar());
    return 0;
    
    }
    */