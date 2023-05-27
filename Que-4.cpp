//4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.

#include<iostream>
using namespace std;

class largest{
    int num1,num2,num3;

    public:
        void setNum(int n1,int n2,int n3){
            num1=n1;
            num2=n2;
            num3=n3;

        }

        void largenumber(){
            if(num1>num2 && num1>num3){
                cout<<"Largest number = "<<num1<<endl;
            }
            else if(num2>num1 && num2>num3){
                cout<<" Largest number = "<<num2<<endl;
            }
            else{
                cout<<" Largest number = "<<num3<<endl;

            }
        }
};

int main(){
    largest l;
    int n1,n2,n3;
    cout<<"enter the value of the n1,n2 and n3 ="<<endl;
    cin>>n1>>n2>>n3;
    l.setNum(n1,n2,n3);
    l.largenumber();
    return 0;
}