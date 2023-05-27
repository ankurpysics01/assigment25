//8. Define a class Rectangle and define an instance member function to find the area of the
//rectangle.
#include<iostream>
using namespace std;

class Ractangle{
    public:
        int lenght,width;

        void areaofractanle(){
            cout<<"Area of ractangle is "<<lenght*width<<endl;
        }


};
int main(){
    Ractangle a;
    cout<<"Enter the lenght of the ractangle = ";
    cin>>a.lenght;
    cout<<"Enter the width of the ractangle =";
    cin>>a.width;
    a.areaofractanle();
    return 0;
}