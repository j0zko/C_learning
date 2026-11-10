#include <iostream>
using namespace std;

class Animal{

  public:
    void sound(){
      cout << "Animal makes a sound"<< endl;
    }
};
class Dog: public Animal{
  public :
    void sound(){
      cout << "Dogs bark";
    }

};
class Cat : public Animal{
  public :
    void sound(){
      cout << "Cat meow"<< endl;

    }

};
int main()
{
    Dog d;
    d.sound();

    Cat c;
    c.sound();
} 
