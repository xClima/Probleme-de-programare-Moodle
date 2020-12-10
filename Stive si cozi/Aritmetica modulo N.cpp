#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include <set>
#include<cmath>

using namespace std;

int main(){
    
unsigned int N,S,P,Q;
unsigned int rez=1;
set< unsigned int>a;
cin>>N>>S>>P>>Q;
rez=S;
if(rez<2147483648){
a.insert(rez);}
for(int i=0;i<N;i++){
    
    rez=(rez*P + Q);
    if(rez>2147483648){rez=rez-2147483648;
    a.insert(rez);}else{a.insert(rez);}
    
}

    cout<<a.size();
    




}