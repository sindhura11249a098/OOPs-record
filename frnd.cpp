#include<iostream>
using namespace std;
class student2;
class student1 {
    private:
    int marks;
    public:
    student1(int m) {
        marks=m;
    }
    friend void comparemarks(student1, student2);

};
class student2
{
    private:
    int marks;
    public:
    student2(int m)
    {
        marks=m;
    }
    friend void comparemarks(student1, student2);
};
void comparemarks(student1 s1,student2 s2) {
    if(s1.marks>s2.marks)
    cout<<"student 1 scored higher("<<s1.marks<<">"<<s2.marks<<")\n";
    else if(s2.marks>s1.marks)
    cout<<"student 2 scored higher("<<s2.marks<<">"<<s1.marks<<")\n";
    else
    cout<<"both students scored the same("<<s1.marks<<"marks)\n";
}
int main() {
    student1 a(75);
    student2 b(95);
    comparemarks(a,b);
    return 0;
}