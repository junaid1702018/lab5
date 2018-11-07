#include <iostream>

using namespace std;
class MyVector
{
public:
    MyVector()
    {
        cout<<"default constructor called"<<endl;
	A=NULL;
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


for(int i=0;i<length;i++)
{v2.A[i]+=A[i];
}
return v2;
}
MyVector operator*(MyVector &x)
{
for(int i=0;i<length;i++)
{
x.A[i]*=A[i];
}
return x;
}
//void operator**(double x)
//{
//for(int i=0;i<length;i++)
//{
//A[i]*=x;
//}

//}

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
void setinputs()
{cout<<"elements of vector"<<endl;
for(int i=0;i<length;i++)
{cin>>*(A+i);
}
}
private:
    int length;
    double *A;
};
int main()
{int size,new_size;
    MyVector v1;
cout<<"length=";
cin>>size;
    MyVector v2(size);

v2.setinputs();
v2.Display();
cout<<"assign vector v3 to v2"<<endl;
MyVector v3=v2;
cout<<"Display function of V3"<<endl;
v3.Display();

MyVector v4;




cout<<"+ operator overloading called"<<endl;
v4=v3+v2;
cout<<"display function of  v4"<<endl;
v4.Display();
MyVector v5;
cout<<"* operator overloading called"<<endl;
v5=v2*v3;
cout<<"display function of  v5"<<endl;
v5.Display();
cout<<"new length=";
cin>>new_size;
cout<<"redim function"<<endl;
v2.redim(new_size);
cout<<"display function of new_size v2"<<endl;
v2.Display();




    return 0;
}
