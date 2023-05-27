//6. Define a class Square to find the square of a number and write a C++ program to Count
//number of times a function is called.
#include<iostream>
using namespace std;

class square{
    static int count;
    int sq;
    int i;
        public:
        square(int n){
            i=n;
        }
        void findsqure(){
            count++;
            int squren=i*i;
        }

        void printCount(){
            cout<<"Count ="<<count<<endl;
        }
};
int square::count=0;
int main(){
    square t(5);
    square b(5);
    t.findsqure();
    b.findsqure();

    t.printCount();
    return 0;
}