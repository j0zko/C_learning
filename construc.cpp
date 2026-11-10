#include <iostream>
using namespace std;


class A{
  public:
    int val;
    A(int x){
      val = x;
    }

    A(A& a){
      val = a.val;
    }

};

int main(){
  A a1(40);
  
    //obj creation from a1
  A a2(a1);
  cout << a2.val;


}
