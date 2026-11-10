#include<iostream>
using namespace std;

template <typename T1,typename T2,typename T3> class Geek{
  public:
  T1 x;
  T2 y;
  T3 z;

  Geek(T1 val1,T2 val2,T3 val3): x(val1),y(val2),z(val3){
  }

  void getValues(){
      cout << x << " " <<y << " "<< z;
  }
};
int main(){
   Geek<int, double, string> intDoubleStringGeek(10, 3.14, "Hello");
   Geek<char, float, bool> charFloatBoolGeek('A', 5.67f, true);

  intDoubleStringGeek.getValues();
  cout << endl;
  charFloatBoolGeek.getValues();
  return 0;


}
