#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string>text;
    string aux;
    string out;
    
    while(cin>>aux){
        text.push_back(aux);
    }
    out=text[0];
    for(int i=0;i<text.size();i++){
        if(out>text[i]){
            out=text[i];
        }
    }
    cout<<out;

}