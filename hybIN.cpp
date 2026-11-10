#include <iostream>
using namespace std;

class Vehicle{
    public:
      Vehicle(){

      cout << "This is a vehicle"<< endl;

      }

};
class Fare {
  public:
    Fare(){
      cout << "This is a fare"<< endl;

    }

};
class Car : public Vehicle
{
  public:
    Car(){
      cout << "This vehicle is a car"<< endl;
      
    }

};

class Bus : public Vehicle , public Fare
{
  public : Bus(){
                cout << "This vehicle is a bus with a fare";

           }

};

int main(){
  Bus obj2;
  return 0;
}
