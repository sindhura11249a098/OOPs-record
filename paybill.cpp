#include<iostream>
using namespace std;
class paybill
{
    private:
    int age,accountnumber;
    char name[25];
    float salary,hra,da,pf,gross_salary,net;
    char employeeid[50];
    public:
    void getdata();
    void calculate();
    void display();
};
void paybill::getdata(){
    cout<<"enter the employeename:"<<endl;
    cin>>name;
    cout<<"enter the age:"<<endl;
    cin>>age;
    cout<<"enter the accountnumber:"<<endl;
    cin>>accountnumber;
    cout<<"enter the empolyeeid:"<<endl;
    cin>>employeeid;
    cout<<"enter the salary:"<<endl;
    cin>>salary;
}
void paybill::calculate(){
    hra=0.20*salary;
    da=0.10*salary;
    pf=0.08*salary;
    gross_salary=salary+hra+da;
    net=gross_salary-pf;
}
void paybill::display(){
    cout<<"------------PAY SLIP------------";
    cout<<"employeename:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"accountnumber:"<<accountnumber<<endl;
    cout<<"employeeid:"<<employeeid<<endl;
    cout<<"salary:"<<salary<<endl;
    cout<<"hra:"<<hra<<endl;
    cout<<"da:"<<da<<endl;
    cout<<"pf:"<<pf<<endl;
    cout<<"gross salary:"<<gross_salary<<endl;
    cout<<"net salary:"<<net<<endl;
};
int main(){
    paybill emp;
    emp.getdata();
    emp.calculate();
    emp.display();
    return 0;
}

    
