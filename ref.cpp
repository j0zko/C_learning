#include <iostream>
using namespace std;

int main(){
   int y =10;
  int& myref = y;

  //changin val ofy to  30
  //
  y =30;
  cout <<"value of y is "<< y<< endl;
  cout << "val of myref after change is :" << myref<<'\n';

  return 0;


}
