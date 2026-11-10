#include <iostream>
using namespace std;
struct Point{
  int x,y;
};

int main(){

  Point p = {0,1};

  cout << p.x << " ";
  cout << p.y << endl;

  p.x = 99;

  cout << p.x << " ";
  cout <<p.y;
  return 0;
}
