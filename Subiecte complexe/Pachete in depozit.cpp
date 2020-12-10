#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>

using namespace std;

int main(){
    char dir;
    long long int p1,p2,p3,s1=0,s2=0,s3=0;
    set<long long int>s;
    long long int p;
    cin>>dir;
    cin>>p1>>p2>>p3;
    vector<long long int>v1;
    vector<long long int>v2;
    vector<long long int>v3;
    for(int i=0;i<p1;i++){
        cin>>p;
        v1.push_back(p);
        s.insert(p);
        s1+=p;
    }
    for(int i=0;i<p2;i++){
        cin>>p;
        v2.push_back(p);
        s.insert(p);
        s2+=p;
    }
    for(int i=0;i<p3;i++){
        cin>>p;
        v3.push_back(p);
        s.insert(p);
        s3+=p;
    }
    if(dir=='s'){


        while(s1!=s2||s1!=s3){
            if(s1>=s2&&s1>=s3){
                s1-=v1[0];
                v1.erase(v1.begin());
            }else
            if(s2>s1&&s2>s3){
                s2-=v2[0];
                v2.erase(v2.begin());
            }else
            if(s3>=s2&&s3>=s1){
                s3-=v3[0];
                v3.erase(v3.begin());
            }
        }
        cout<<min(min(s1,s2),s3)<<endl;
    }
    if(dir=='d'){
        while(s1!=s2||s1!=s3){
            if(s1>=s2&&s1>=s3){
                s1-=v1[v1.size()-1];
                v1.pop_back();
            }else
            if(s2>s1&&s2>s3){
                s2-=v2[v2.size()-1];
                v2.pop_back();
            }else
            if(s3>=s2&&s3>=s1){
                s3-=v3[v3.size()-1];
                v3.pop_back();
            }
        }
        cout<<min(min(s1,s2),s3)<<endl;
        //cout<<min(min(accumulate(v1.begin(),v1.end(),0),accumulate(v2.begin(),v2.end(),0)),accumulate(v3.begin(),v3.end(),0));
    }
    if(dir=='u'){
        set<int>ss;
        while(s1!=s2||s1!=s3){
            if(s1>=s2&&s1>=s3){
                s1-=v1[0];
                v1.erase(v1.begin());
            }else
            if(s2>s1&&s2>s3){
                s2-=v2[0];
                v2.erase(v2.begin());
            }else
            if(s3>=s2&&s3>=s1){
                s3-=v3[0];
                v3.erase(v3.begin());
            }
        }
        if(min(min(s1,s2),s3)==0){
            cout<<s.size()<<endl<<0<<endl;
        }else{
            for(int i=0;i<v1.size();i++){
                ss.insert(v1[i]);
            }
            for(int i=0;i<v2.size();i++){
                ss.insert(v2[i]);
            }
            for(int i=0;i<v3.size();i++){
                ss.insert(v3[i]);
            }
            cout<<s.size()<<endl<<ss.size()<<endl;
        }
    }

}