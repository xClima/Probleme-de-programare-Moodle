// ca sa ruleze sterge continutul Patient.h, PriorityQueue.h

#include<iostream>
#include<algorithm>
#include<queue>
#include "Patient.h"
#include "PriorityQueue.h"
using namespace std;
struct pacient{
    string n;
    string pr;
    int v;
    char s;
    int p;
};
bool sortare(pacient a,pacient b){
    return a.p<b.p;
}
int main() {
    
    char semn,sex;
    string nume,prenume;
    int varsta;
    int prioritate;
    queue<pacient>q0;
    queue<pacient>q1;
    queue<pacient>q2;
    queue<pacient>q3;
    queue<pacient>q4;
    queue<pacient>q5;
    queue<pacient>q6;
    queue<pacient>q7;
    queue<pacient>q8;
    queue<pacient>q9;
    queue<pacient>q10;
    while(cin>>semn){
        if(semn=='+'){
            cin>>nume>>prenume>>varsta>>sex>>prioritate;
            if(prioritate==0){
            q0.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==1){
            q1.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==2){
            q2.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==3){
            q3.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==4){
            q4.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==5){
            q5.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==6){
            q6.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==7){
            q7.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==8){
            q8.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==9){
            q9.push({nume,prenume,varsta,sex,prioritate});}
            if(prioritate==10){
            q10.push({nume,prenume,varsta,sex,prioritate});}
        }
        if(semn=='-'){
           if(q0.size()>0){
               cout<<q0.front().n<<' '<<q0.front().pr<<' '<<q0.front().v<<' '<<q0.front().s<<endl;
               q0.pop();
               
           }else if(q1.size()>0){
               cout<<q1.front().n<<' '<<q1.front().pr<<' '<<q1.front().v<<' '<<q1.front().s<<endl;
               q1.pop();
               
           }else if(q2.size()>0){
               cout<<q2.front().n<<' '<<q2.front().pr<<' '<<q2.front().v<<' '<<q2.front().s<<endl;
               q2.pop();
               
           }else if(q3.size()>0){
               cout<<q3.front().n<<' '<<q3.front().pr<<' '<<q3.front().v<<' '<<q3.front().s<<endl;
               q3.pop();
               
           }else if(q4.size()>0){
               cout<<q4.front().n<<' '<<q4.front().pr<<' '<<q4.front().v<<' '<<q4.front().s<<endl;
               q4.pop();
               
           }else if(q5.size()>0){
               cout<<q5.front().n<<' '<<q5.front().pr<<' '<<q5.front().v<<' '<<q5.front().s<<endl;
               q5.pop();
               
           }else if(q6.size()>0){
               cout<<q6.front().n<<' '<<q6.front().pr<<' '<<q6.front().v<<' '<<q6.front().s<<endl;
               q6.pop();
               
           }else if(q7.size()>0){
               cout<<q7.front().n<<' '<<q7.front().pr<<' '<<q7.front().v<<' '<<q7.front().s<<endl;
               q7.pop();
               
           }else if(q8.size()>0){
               cout<<q8.front().n<<' '<<q8.front().pr<<' '<<q8.front().v<<' '<<q8.front().s<<endl;
               q8.pop();
               
           }else if(q9.size()>0){
               cout<<q9.front().n<<' '<<q9.front().pr<<' '<<q9.front().v<<' '<<q9.front().s<<endl;
               q9.pop();
               
           }else if(q10.size()>0){
               cout<<q10.front().n<<' '<<q10.front().pr<<' '<<q10.front().v<<' '<<q10.front().s<<endl;
               q10.pop();
               
           }
        }
        if(semn=='*'){return 0;}
    }
   
    
    
    
}