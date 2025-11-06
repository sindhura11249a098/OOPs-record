#include<iostream>
using namespace std;
class student
{
    private:
    char name[50];
    int rollnumber,m1,m2,m3,total;
    float avg;
    public:
    void getdata()
    {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"\n Enter rollnumber:";
        cin>>rollnumber;
        cout<<"Enter 3 marks:";
        cin>>m1>>m2>>m3;
    }
    void calculator()
    {
        total=m1+m2+m3;
        avg=total/3.0;
    }
    void print() {
        cout<<"\n name:"<<name;
        cout<<"\n rollnumber:"<<rollnumber;
        cout<<"\n mark1:"<<m1;
        cout<<"\n mark2:"<<m2;
        cout<<"\n mark3:"<<m3;
        cout<<"\n total:"<<total;
        cout<<"\n average:"<<avg<<"\n";
        cout<<"----------\n";
    }
};
int main()
{
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    student s[100];
    for(int i = 0;i<n;i++)
    {
        cout<<"\n Enter details for student"<<i+1<<"\n";
        s[i].getdata();
        s[i].calculator();
    }
    cout<<"\n-----studentdetails-----\n";
    for(int i=0;i<n;i++)
    {
       cout<<"\n student"<<i+1<<"details:\n";
       s[i].print();
    }
    return 0;
}
    

    

    