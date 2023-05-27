// 5. Define a class ReverseNumber and define an instance member function to find Reverse
// of a Number using class. 
#include<iostream>
using namespace std;

class reverse{
    int num;
        public:
         void setNum(int n){
            num=n;
         }

         void reverseNumber(){
                int reverse=0;
            while(num!=0){
                int p=num%10;
                num=num/10;
                reverse=reverse*10+p;
            }
            cout<<"the reverse number is = "<<reverse<<endl;

         }
};

int main(){
    reverse r;
    int n;
    cout<<"enter the the value of num ="<<endl;
    cin>>n;
    r.setNum(n);
    r.reverseNumber();
    return 0;
}