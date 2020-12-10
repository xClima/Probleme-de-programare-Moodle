#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
string nume;
string carte;
vector<string>carti;

while(cin>>nume){
if(nume=="+"){
    cin.ignore();
    getline(cin,carte);
    carti.push_back(carte);
}
if (!carti.empty())
  {
if(nume=="-"){
    cout<<carti.back()<<',';
    carti.pop_back();
}
}
}
    
}    
    


    