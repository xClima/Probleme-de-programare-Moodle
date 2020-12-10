#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


void permute(string str,string originalstr) 
{ 
  
    sort(str.begin(), str.end()); 

    do { if(originalstr!=str){
       cout << str << endl; }
    } while (next_permutation(str.begin(), str.end())); 
} 

int main() 
{ 
    string str,originalstr;
     
    cin>>str;
    originalstr=str;
    permute(str,originalstr);
   
  
    return 0; 
} 