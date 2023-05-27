// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//  number of instance member variables and also define instance member functions to set
//  values for time and display values of time

#include<iostream>
using namespace std;

class Time{
    int hour,min,seconds;

    public:
        void sethour(int h){
            hour=h;
        }
        void setMin(int m){
            min=m;
        }
        void setSecond(int s){
            seconds=s;
        }
        int gethour(){
            return hour;
        }

        int getmin(){
            return min;
        }
        int getseconds(){
            return seconds;
        }

        void Displayprint(){
            cout<<"(like "<<gethour()<<" hr "<<getmin()<<" min "<<getseconds()<<" sec)"<<endl;
            cout<<"program end...-->"<<endl;
        }

};

int main(){
    Time t;
    int h,m,s;
    cout<<"enter the time hour ,min and second"<<endl;
    cin>>h>>m>>s;
    t.sethour(h);
    t.setMin(m);
    t.setSecond(s);

    t.Displayprint();

    return 0;

}