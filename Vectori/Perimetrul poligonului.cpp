#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include<iomanip>
using namespace std;
class Point2D{double x; double y;
public:

Point2D(double x_in,double y_in){
    x=x_in;
    y=y_in;
}
float getx(){return x;}
float gety(){return y;};
Point2D(){
    x=0;
    y=0;
}
double distanceTo(Point2D anotherPoint){
    return sqrt(( x- anotherPoint.x)*( x- anotherPoint.x)+( y -anotherPoint.y)*( y- anotherPoint.y));
}

};

int main(){
   int n;
   double x,y;
    cin>>n;
    
    vector<Point2D>vec;
    for(int i=0;i<n;i++){
        
        cin>>x>>y;
        vec.push_back(Point2D(x,y));
    }
    double perimeter = 0;
    for(int i=0;i<n-1;i++){
        perimeter =perimeter+vec[i].distanceTo(vec[i+1]);}
        cout<<fixed<<setprecision(2)<<(perimeter+ vec[n-1].distanceTo(vec[0]))<<endl;
    return 0; 
}
