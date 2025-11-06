#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    char name[50];
    float marks;
    public:
    void getdata(){
        cout<<"enter student name:";
        cin>>name;
        cout<<"enter the rollno of student:";
        cin>>rollno;
        cout<<"enter the marks of student:";
        cin>>marks;
    }
    void displaydetalis(){
        cout<<"student name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.getdata();
    s1.displaydetalis();
    return 0;
}