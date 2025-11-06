#include<iostream>
using namespace std;
int main()
{
    float fastingsugar,postmealsugar;
    cout<<"enter the fasting sugar:";
    cin>>fastingsugar;
    cout<<"enter the postmealsugar:";
    cin>>postmealsugar;
if(fastingsugar>=126,postmealsugar>=200)
{
    cout<<"the patient is diabetic"<<endl;
}else{
    cout<<"the patient is not diabetic"<<endl;
}
return 0;
}