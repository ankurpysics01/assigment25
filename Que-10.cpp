//10. Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;

class Area{
    public:
        int a,x,y,r;


        void squre(){
            cout<<"Square Area is ="<<a*a<<endl;
        }
        void ractangle(){
            cout<<"Area of the ractangle ="<<x*y<<endl;
        }
        void circle(){
            cout<<"Area of the circle ="<<r*r*3.14<<endl;
        }
};

int main(){
    Area obj;
    cout<<"Enter the lenght of one arm of the squre =";
    cin>>obj.a;
    cout<<"Enter the length of the ractangle =";
    cin>>obj.x;
    cout<<"Enter the width of the ractangle =";
    cin>>obj.y;
    cout<<"Enter the radius of the circle =";
    cin>>obj.r;
    obj.squre();
    obj.ractangle();
    obj.circle();
    return 0;
}