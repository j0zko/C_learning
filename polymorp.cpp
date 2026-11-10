#include <iostream>
using namespace std;

class Animal{
  public:
    void sound(){
        cout << "Anim makes BOOO";
    }
};
class Dog: public Animal{
  public:
    void sound(){
      cout << "Dog barkk";

    }
};
int main(){
  Dog d;
  
  d.sound();

}
