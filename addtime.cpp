#include<iostream>
using namespace std;
class Time {
    private:
    int hours;
    int minutes;
    public:
    void gettime();
    void addtime(Time t1,Time t2);
    void display();
};
void Time::gettime()
{
    cout<<"enter the hours:";
    cin>>hours;
    cout<<"enter the minutes:";
    cin>>minutes;
}
void Time::addtime(Time t1,Time t2)
{
    minutes=t1.minutes+t2.minutes; 
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+ t1.hours+t2.hours;
}
void Time::display()
{
    cout<<"hours:"<<hours;
    cout<<"minutes:"<<minutes;
}
int main() {
    Time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3.addtime(t1,t2);
    cout<<"Time t1:";
    t1.display();
    cout<<"Time t2:";
    t2.display();
    cout<<"sum of times:";
    t3.display();
    return 0;
}