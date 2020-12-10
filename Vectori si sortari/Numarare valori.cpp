#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main(){
string str;
cin>>str;

long n;
vector<string>nr;
vector<string>nr2;
vector<string>nr3;

string numere;
string lin2;
long long cnt=0,x=0;
ifstream file;
file.open(str.c_str());

long long q;

file>>q;

for(int i=0;i<q;i++){
    
    file>>numere;
    nr2.push_back(numere);
   
}

while(file>>lin2){
    nr.push_back(lin2);
}

file.close();    
sort(nr2.begin(),nr2.end());
nr2.erase(unique(nr2.begin(),nr2.end()),nr2.end());



sort(nr.begin(),nr.end());
nr.erase(unique(nr.begin(),nr.end()),nr.end());
x=nr.size();
nr.insert( nr.end(), nr2.begin(), nr2.end() );
sort(nr.begin(),nr.end());
nr.erase(unique(nr.begin(),nr.end()),nr.end());
cnt=x+nr2.size()-nr.size();
cout<<cnt;
}













    

    