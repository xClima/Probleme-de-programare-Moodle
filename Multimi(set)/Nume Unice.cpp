#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){

int count = 0,cnt=0;
string t;
vector <string> words;
    while(cin>>t)
    {
        
        words.push_back(t);
        count++;
    }
   // cout<<count<<endl;
 
    for(int i = 0;i < words.size();i++)
    {
        cnt=0;
    
    
        
        for(int j = i+1;j <= words.size();j++)
            {
                if(words[i] == words[j])
                {   cnt++;
                    count--;
                    if(cnt>1){
                        count++;
                    }
                }
            }
        
    }
    
cout<<count;


}