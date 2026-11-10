#include <iostream>
using namespace std;

struct Point{
  int x,y;


  int sum(){
      return x+y;
  }

};

int main(){
    Point s ={0,1};
    cout << s.sum();
    return 0;

}
