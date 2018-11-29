#include <iostream>
#include <vector>
using namespace std;
class Shape{
public:
  virtual double getarea()
  {

  }
  virtual double getperimeter()
  {

  }
  virtual string tostring()
  {

  }
};
class Circle:public Shape{
public:
  Circle()
  {
    radius=0;
  }
  Circle(double r)
  {
    radius=r;
  }
  double getarea()
  {
    return (3.1416*(radius*radius));
  }
  double getperimeter()
  {
    return (2*3.1416*radius);
  }
  string tostring()
  {

  }
protected:
  double radius;
};
class Rectangle:public Shape{
public:
  Rectangle()
  {
    width=0;
    length=0;
  }
  Rectangle(double w,double l)
  {
    width=w;
    length=l;
  }
  double getarea()
  {
    return (length*width);
  }
  double getperimeter()
  {
    return (2*(length+width));
  }
  string tostring()
  {

  }
protected:
  double width,length;
};
int main()
{
  vector<Shape *>v;
  Circle c(6);
  Circle c1(10);
  Rectangle r(4,6);
  Rectangle r1(3,7);
  v.push_back(&c);
  v.push_back(&c1);
  v.push_back(&r);
  v.push_back(&r1);
for(auto i:v){
    cout<<i->getarea()<<endl;
    cout<<i->getperimeter()<<endl;
  }

}
