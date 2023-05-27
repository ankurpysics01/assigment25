//7. Define a class Greatest and define instance member function to find Largest among 3
// numbers using classes.
#include<iostream>
using namespace std;

class largest{
    int n1,n2,n3;

        public:
            largest(int a,int b,int c){
                n1=a;
                n2=b;
                n3=c;
            }
            largest(){

            }

            void findlargestnum(){
                if(n1>n2 && n1>>n3){
                    cout<<"Largest num ="<<n1<<endl;
                }
                else if(n2>n1 && n2>>n3){
                    cout<<"Largest num ="<<n2<<endl;

                }
                else{
                    cout<<" Largest num = "<<n3<<endl;
                }
            }
};

int main(){
    largest t1(6,7,8),t2;

    t1.findlargestnum();


    return 0;
}