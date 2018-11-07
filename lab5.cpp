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
private:
    int length;
    double *A;
};
int main()
{
    MyVector v1;
    MyVector v2(6);
MyVector v3=v2;
    return 0;
}
