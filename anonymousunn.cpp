#include <iostream>
using namespace std;

struct Employee{
  int id;


  union{
  float hourlyRate;
  float salary;

};

};
int main(){
  Employee e1;
  e1.id = 101;

  e1.hourlyRate = 400;
  cout << "Employee ID"<< e1.id << "\n";
  cout << "hourlyRate: rs"<<e1.hourlyRate << endl;

  e1.salary = 5000;
  cout << "salary" << e1.salary << endl;

}
