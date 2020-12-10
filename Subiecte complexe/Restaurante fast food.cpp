//spaghetti code
#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int rest;
    int timp;
    int diferenta;
    string mancare;
    char semn;
    cin>>rest;
    queue<pair<string,int>>q1;
    queue<pair<string,int>>q2;
    queue<pair<string,int>>q3;
    if(rest==0){

        while(cin>>semn){

            if(semn=='+'){
                cin>>timp;
                getline(cin,mancare);
                q1.push(make_pair(mancare,timp));
            }else
            if(semn=='-'){
                cin>>timp;
                if(q1.size()>0){
                    q1.front().second-=timp;

                    while(q1.front().second<=0&&q1.size()>0){
                        diferenta=q1.front().second;
                        cout<<q1.front().first<<endl;
                        q1.pop();
                        q1.front().second+=diferenta;
                    }
                }
            }else
            if(semn=='?'){

                cout<<q1.front().second<<endl;
            }else{cout<<"eroare"<<endl;}
        }

    }else
    if(rest==1){

        while(cin>>semn){
            if(semn=='+'){
                cin>>timp;
                getline(cin,mancare);
                if((q1.size()==q2.size()&&q1.size()==q3.size())||q1.size()<q2.size()||q1.size()<q3.size()){
                    q1.push(make_pair(mancare,timp));}
                else if(q1.size()>q2.size()||q2.size()<q3.size()){
                    q2.push(make_pair(mancare,timp));
                }
                else if(q1.size()==q2.size()&&q2.size()>q3.size()){
                    q3.push(make_pair(mancare,timp));
                }
            }else
            if(semn=='-'){
                cin>>timp;
                if(q1.size()>0&&q2.size()>0){
                    if(q1.front().second>q2.front().second){
                        swap(q1.front(),q2.front());}}
                if(q2.size()>0&&q3.size()>0){
                    if(q2.front().second>q3.front().second){
                        swap(q2.front(),q3.front());}}
                if(q1.size()>0&&q2.size()>0){
                    if(q1.front().second>q2.front().second){
                        swap(q1.front(),q2.front());}}

                if(q1.size()>0){
                    q1.front().second-=timp;

                    while(q1.front().second<=0&&q1.size()>0){
                        diferenta=q1.front().second;
                        cout<<q1.front().first<<endl;
                        q1.pop();
                        q1.front().second+=diferenta;
                    }
                }


                if(q2.size()>0){
                    q2.front().second-=timp;

                    while(q2.front().second<=0&&q2.size()>0){
                        diferenta=q2.front().second;
                        cout<<q2.front().first<<endl;
                        q2.pop();
                        q2.front().second+=diferenta;
                    }
                }

                if(q3.size()>0){
                    q3.front().second-=timp;

                    while(q3.front().second<=0&&q3.size()>0){
                        diferenta=q3.front().second;
                        cout<<q3.front().first<<endl;
                        q3.pop();
                        q3.front().second+=diferenta;
                    }
                }





            }else{cout<<"eroare"<<endl;}

        }
    }else
    if(rest==2){int x=0;
        while(cin>>semn){

            if(semn=='+'){
                cin>>timp;
                getline(cin,mancare);
                if(timp<=15){
                    q1.push(make_pair(mancare,timp));}
                else{
                    if(q2.size()<=q3.size()){
                        q2.push(make_pair(mancare,timp));
                    }else{q3.push(make_pair(mancare,timp));}
                }
            }else
            if(semn=='-'){
                x=0;
                int y=0;
                cin>>timp;




                if(q1.size()>0){
                    x=q1.front().second;
                    q1.front().second-=timp;

                    while(q1.front().second<=0&&q1.size()>0){
                        diferenta=q1.front().second;
                        cout<<q1.front().first<<endl;
                        q1.pop();

                        if(q2.size()>0){
                            if(x+q1.front().second>q2.front().second){
                                cout<<q2.front().first<<endl;
                                q2.pop();
                            }}
                        if(q3.size()>0){
                            if(x+q1.front().second>q3.front().second){
                                cout<<q3.front().first<<endl;
                                q3.pop();
                            }}
                        x+=q1.front().second;
                        q1.front().second+=diferenta;
                    }
                }


                if(q2.size()>0){
                    y=q2.front().second;
                    q2.front().second-=timp;

                    while(q2.front().second<=0&&q2.size()>0){
                        diferenta=q2.front().second;
                        if(y>q3.front().second&&q3.size()>0){
                            cout<<q3.front().first<<endl;
                            q3.pop();
                        }
                        cout<<q2.front().first<<endl;
                        q2.pop();

                    y+=q1.front().second;
                    q2.front().second+=diferenta;
                }
            }

            if(q3.size()>0){
                q3.front().second-=timp;

                while(q3.front().second<=0&&q3.size()>0){
                    diferenta=q3.front().second;
                    cout<<q3.front().first<<endl;
                    q3.pop();
                    q3.front().second+=diferenta;
                }
            }
        }else{cout<<"eroare"<<endl;}
    }

}

}