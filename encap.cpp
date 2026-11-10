#include <iostream>
#include <string>
using namespace std;


class Programmer
{
  private:
    string name;

  public:
    string getName()
    {
      return name;
    }

    void setName(string newName)
    {
      name = newName;
    }

};
int main()
{
  Programmer p;
  p.setName("Geekname");

  cout << "Name ="<< p.getName();
}
