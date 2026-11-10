#include <bits/stdc++.h>
using namespace std;

class Geeks{
  public :
    void add(int a, int b){
        cout << "Integer sum"<<a+b<<endl;

    }

    void add(double a,double b){
      cout << "Float sum" << a+b<<endl;
    }

};
int main(){
    Geeks gfg;

    gfg.add(10,2);

    gfg.add(5.3,6.2);
}
