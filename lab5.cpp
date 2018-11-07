#include <iostream>

using namespace std;
class MyVector
{
public:
    MyVector()
    {
        cout<<"default constructor called"<<endl;
    }
    MyVector(int l)
    {

        length=l;
        A=new double[length];
    }
MyVector(MyVector &v2)
{
length=v2.length;
A=v2.A;
}
~MyVector()
{
}
void Display()
{
cout<<"length="<<length<<endl;
cout<<"*A="<<*A<<endl;
}
bool redim(int l)
{
if(length==l)
{
return false;
}
else
{
A=(double*)realloc(A,l*sizeof(double));
return true;
}
private:
    int length;
    double *A;
};
int main()
{
    MyVector v1;
    MyVector v2(6);
v2.Display;
MyVector v3=v2;
v3.Display;
v2.redim(10);
v2.Display;
    return 0;
}
