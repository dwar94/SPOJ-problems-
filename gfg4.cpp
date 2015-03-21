#include<iostream>
#include<conio.h>
#include<stdio.h>
class A
{
public:
 void f() const
 {
 cout<<"inside const f()\n";
 }
 void f()
 {
 cout<<"inside simple f\n";
 }
};
 
int main()
{
 A ob1;
 ob1.f();
 return 0;
}
