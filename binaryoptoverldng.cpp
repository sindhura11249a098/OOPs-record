#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
const int sz = 90;
class Mystring{
    char str[sz];
    public:
    Mystring()
    {
        strcpy(str," ");
    }
    Mystring(char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str<<"\n";
    }
    Mystring operator+(Mystring ss)
    {
         Mystring temp;
        if(strlen(str)+strlen(ss.str)<sz)
        {
           
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);
           
        }
        else{
        cout<<"string overflow";
        }
        return temp;
    }
};
int main(){
    Mystring s1="Hello";
    Mystring s2="World";
    Mystring s3;
    s3=s1 + s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
