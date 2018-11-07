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
//MyVector(MyVector &v2)
//{
//length=v2.length;
//A=v2.A;
//}
~MyVector()
{
}
void Display()
{
cout<<"length="<<length<<endl;
for(int i=0;i<length;i++)
{cout<<*(A+i)<<endl;
}
}
//void operator=(MyVector &v2)
//{
//length=v2.length;
//A=v2.A;
//}
MyVector operator+(MyVector &v2)
{
MyVector v;
v.length=(length+v2.length);
*v.A=*A+*v2.A;
return v;
}
bool redim(int l)
{
if(length==l)
{
return false;
}
else
{
length=l;
double *new_A;
new_A=(double*)realloc(A,length*sizeof(double));
A=new_A;
return true;
}
}
void set()
{
for(int i=0;i<length;i++)
{cin>>*(A+i);
}
}
private:
    int length;
    double *A;
};
int main()
{
    MyVector v1;
    MyVector v2(6);
v2.set();
v2.Display();
MyVector v3=v2;
v3.Display();
v2.redim(4);
v2.Display();
MyVector v4;
v4=v3+v2;
v4.Display();

    return 0;
}
