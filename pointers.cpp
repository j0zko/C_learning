#include <iostream>
using namespace std;

int main(){

  int x = 10;
  int * myptr; //pointer var 

  myptr = &x;

  cout <<"adress stored in myptr is:";
  cout << x<< endl;


  cout <<"Address stored in my ptr";
  cout << x << endl;

  cout << "Value of x using *myptr is: ";
  cout << *myptr << endl;
  return 0;


}
