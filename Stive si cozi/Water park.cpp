#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;


int main(){
    int cnt=0,unu=0,doi=0,trei=0;
    vector<pair<string,int>>vect;
    string nume;
    int prioritate;
    while(cin>>nume>>prioritate){
        vect.push_back(std::make_pair(nume,prioritate));
        cnt++;
    }
    
    for(int i=0;i<vect.size();i++){
        if(vect[i].second==1){unu++;}
        if(vect[i].second==2){doi++;}
        if(vect[i].second==3){trei++;}
    }//cout<<unu<<' '<<doi<<' '<<trei;
    //sort(vect.begin(), vect.end(), sortbysec); 
    
        
        
        for(int i=0;i<vect.size();i++){
            
            if(unu>0&&doi>0&&trei>0){
            if(vect[i].second==1){
                cout<<vect[i].first<<' ';
                    vect.erase(vect.begin()+i);
                        for(int j=0;j<vect.size()+1;j++){
                        if(vect[j].second==2){
                            cout<<vect[j].first<<' ';
                            vect.erase(vect.begin()+j);
                    
                             for(int x=0;x<vect.size()+1;x++){
                                if(vect[x].second==3){
                                    cout<<vect[x].first<<endl;
                                    vect.erase(vect.begin()+x);
                                    i=-1;
                                    unu--;
                                    doi--;
                                    trei--;
                                    break;
                        }
                       
                    } break;  
                    
                }
            }
            
            
        }
            }else{break;}
        }
        
    
    
   /* for(int i=0;i<vect.size();i++){
        cout<<vect[i].first<<' '<<vect[i].second<<endl;
    }
    */
    
    }