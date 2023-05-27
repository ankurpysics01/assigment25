//3. Define a class Factorial and define an instance member function to find the Factorial of a
// number using class.
#include<iostream>
using namespace std;


class factorial{
    int n;
    public:
        void setN(int a){
            n=a;
        }
        void fact(){
            int factu=1;
            for(int i=1;i<=n;i++){
                factu=factu*i;
            }
            cout<<"factorial of the given number is = "<<factu<<endl;
        }
};
int main(){
    factorial f;
    int a;
    cout<<"enter the number ="<<endl;
    cin>>a;
    f.setN(a);
    f.fact();

    return 0;
    
}
