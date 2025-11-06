#include<iostream>
using namespace std;
class student
{
    private:
    int marks;
    public:
    student(int m){
    marks = m;
    }
    friend void showmarks(student s);
};
void showmarks(student s){
    cout << "marks:" << s.marks << endl;
}
int main(){
    student s1(90);
    showmarks (s1);
    return 0;
}





