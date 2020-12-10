#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

      
  int main()
{
    double input,cnt;
     double sum=0,avg=0;
     while(cin>>input){
     
	  
	  
	   if(input>=1&&input<=10){
	        
	    cnt++;
	    sum=sum+input;
	    
	    
	
		avg=sum/cnt;
		cout<<fixed<<setprecision(2)<<avg<<" ";
	}
	else{	cout<<fixed<<setprecision(2)<<avg<<" ";}
    
}}

    