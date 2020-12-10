#include<iostream>
#include<string>
using namespace std;


class Student{
    string nume;
    string prenume;
    float n1,n2,n3,n4,n5;
    

public:

Student(string n,string p,float xn1,float xn2,float xn3,float xn4,float xn5){
    nume=n;
    prenume=p;
    n1=xn1;
    n2=xn2;
    n3=xn3;
    n4=xn4;
    n5=xn5;
    
    
}

double medie(){
    return ((n1+n2+n3+n4+n5)/5);
    
}

int bursaMerit(){
    if( ((n1+n2+n3+n4+n5)/5)>8 && ((n1+n2+n3+n4+n5)/5)<9.8 && n1>=5 && n2>=5 && n3>=5 && n4>=5&&n5>=5){
        return 1;
    }else {return 0;}
}

int bursaPerformanta(){
    if(((n1+n2+n3+n4+n5)/5)>=9.8){
        return 1;
    }
    else {return 0;}
}
    
};    
    
int main(){
    int nr;
    int cnt=0,cnt2=0;
    float nota1,nota2,nota3,nota4,nota5;
    string Nume,Prenume;
    
    cin>>nr;
    
    for(int i=0;i<nr;i++){
        cin>>Nume>>Prenume>>nota1>>nota2>>nota3>>nota4>>nota5;
        
        Student x(Nume,Prenume,nota1,nota2,nota3,nota4,nota5);
        
        if(x.bursaMerit()==1){
            cnt++;
        }
        
        if(x.bursaPerformanta()==1){
            cnt2++;
        }
        
    }
    cout<<cnt<<' '<<cnt2<<endl;
    
    
}    
    
    
    
    
    
    