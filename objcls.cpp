#include <iostream>

using namespace std;

class Car {
  public:
    string brand;
    string model;

    void display(){
      cout << "Car brand"<<brand;
      cout << "Model :"<< model;
    }
};

int main(){
  Car car1;

  car1.brand = "Toyota";
  car1.model = "Yaris";
  car1.display();

  return 0;

}
