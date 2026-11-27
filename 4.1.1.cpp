#include<iostream>
using namespace std;
class Area
{
 public:
 float are(float r)
 {
  return (3.14*r*r);
 }
 float are(float l,float b)
 {
  return (l*b);
 }
};
int main()
{
 Area ob;
 float rad,len,bre;
 cout<<"Enter radius of the circle: ";
 cin>>rad;
 cout<<"Enter length and breadth of the Rectangle: ";
 cin>>len;
 cin>>bre;
 cout<<"Area of Circle: "<<ob.are(rad);
 cout<<"Area of Rectangle: "<<ob.are(len,bre);
 return 0;
}
