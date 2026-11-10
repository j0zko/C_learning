#include <iostream>
#include <vector>
using namespace std;

class MyClass{
  private:
    int b;
  public:
    MyClass(int &&a):b(move(a)){
      cout << "MOV const called"<< endl;
    }

    void display(){
            cout << b<<endl;
    }
};

int main(){
  int a = 4;
  MyClass obj1(move(a));

  obj1.display();

}

