// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex number.
#include<iostream>
using namespace std;

class Complex{
    int a,b;
        public:
         Complex(int x,int y){
            a=x;
            b=y;
         }

         void print(){
            cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
         }
};

int main(){
    Complex a(2,5);
    a.print();
    return 0;
}
