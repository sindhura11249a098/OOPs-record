#include<iostream>
using namespace std;
class Time 
{
    private:
    int hour,min,sec;
    public:
    Time(){
        hour = 0;
        min = 0;
        sec = 0;
    }
    Time(int h,int m,int s) {
        if(h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 s < 60){
            hour=h;
            min=m;
            sec=s;
        }else{
            cout<<"Invalid time"<<endl;
            hour=min=sec=0;
        }
        int operator==(Time t3)
        {
            return(hour=t3.hour&&min==t3.min&&sec==t3.sec);
        }
        void display() {
            cout<<hour<<":"<<min<<":"<<sec;
        }
    }
};
int main(){
    Time t1(9,64,7);
    Time t2(3,6,8);
    if(t1==t2)
    cout<<"clock shows same time"<<endl;
    else
    cout<<"clock shows different time"<<endl;
return 0;
}