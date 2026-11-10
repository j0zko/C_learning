#include<iostream>
using namespace std;

struct Employe{
  char name[50];
  int id;


  union Pay{
    float hourlyRate;
    float salary;
  }payment;

};
int main(){
  Employe e1;
  e1.id = 101;

  e1.payment.hourlyRate= 300.0;

  cout << "Employe ID"<< e1.id<<"\n";
  cout << "hourlyRate: Rs"<<e1.payment.hourlyRate << endl;



}
