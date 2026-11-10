#include <iostream>
using namespace std;

class LandVehicle{
  public:
    void landInfo(){
    cout << "This is a land vehicle"<< endl;

  }

};

class WaterVehicle{
  public:
    void waterInfo(){
      cout << "this is a  WaterVehicle" << endl;

    }


};

class AmphobiousVeh:public LandVehicle, public WaterVehicle{
  public:
    AmphobiousVeh(){
      cout << "This is a AmphobiousVehicle"<< endl;
    }


};

int main (){
  AmphobiousVeh obj;
  obj.waterInfo();
  obj.landInfo();

}
