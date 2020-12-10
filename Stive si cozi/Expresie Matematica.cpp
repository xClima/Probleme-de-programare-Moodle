#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    char exp;
    int x=0,y=0,z=0,m=0,n=0,p=0;
    vector<char>expr;
    
   while(cin>>exp){
        expr.push_back(exp);
    }
    
    for(int i=0;i<=expr.size();i++){
        //cout<<expr[i];
        
        if(expr[i]=='('){
            x++;
        }
        if(expr[i]==')'){
            y++;
        }
        if(expr[i]=='['){
            z++;
        }
        if(expr[i]==']'){
            m++;
        }
        if(expr[i]=='{'){
            n++;
        }
        if(expr[i]=='}'){
            p++;
        }
    }
    
    //cout<<x<<' '<<y<<' '<<z<<' '<<m<<' '<<n<<' '<<p<<' ';
    if(x==y&&z==m&&n==p){cout<<1;}else{cout<<0;}
    }
      /*  if(expr[i]=='('){
            for(int j=i;j<expr.size();j++){
                //cout<<expr[j];
                if(expr[j]==')'){
                    x=1;
                }else {x=0;}
                
            }
            
        }
        if(expr[i]=='['){
            for(int j=i+1;j<expr.size();j++){
                
                if(expr[j]==']'){
                    y=1;
                }else {y=0;}
                
            }
            
        }
        if(expr[i]=='{'){
            for(int j=i+1;j<expr.size();j++){
                
                if(expr[j]=='}'){
                    z=1;
                }else {z=0;}
                
            }
            
        }
        
        
    }
    if(x==1&&y==1&&z==1){cout<<1;}else{cout<<0;}*/
    
    //for(int i=0;i<expr.size();i++){
       // cout<<expr[i];
    //}
    