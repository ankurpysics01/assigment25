//9. Define a class Circle and define an instance member function to find the area of the
// circle.
#include<iostream>
using namespace std;
class Circle{
    public:
        int radius;

        void areaofthecircle(){
            cout<<"Area of the circle is "<<radius*radius*3.14<<endl;
        }
};

int main(){
    Circle c;
    cout<<"enter the radius of the circle = ";
    cin>>c.radius;

    c.areaofthecircle();
    return 0;
}