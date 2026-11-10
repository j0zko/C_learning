#include <iostream>
#include <new>
using namespace std;

int main(){
  int*ptr = new (nothrow) int ;

  if (ptr == nullptr)
    cout <<"Memory allocation failed";

  delete ptr;

}
