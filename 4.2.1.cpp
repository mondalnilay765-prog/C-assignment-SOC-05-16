#include<iostream>
using namespace std;
class Animal
{
 public:
 void eat()
 {
  cout<<"The animal is eating";
 }
};
class Dog:public Animal
{
 public:
 void eat()
 { 
  cout<<"The dog is eating";
 }
};
int main()
{
 Dog d;
 d.eat();
 return 0;
}
