#include <iostream>
#include <string>
using namespace std;


//virt method in abs base class 
class Shape{
  protected:
    string color;

  public :
    Shape(string color): color(color){}
     virtual double are() = 0;

     string getColor(){
        return color;
     }
     virtual ~Shape(){}
};

class Rectangle: public Shape{
    double lenght, width;

  public :
    Rectangle(string color, double lenght,double width): Shape(color){
      this->lenght = lenght;
      this -> width = width;
    }
    double are() override{
        return lenght*width;

    }
};

int main(){
Shape* s = new Rectangle("Yellow",2,4);

cout <<"Rectangle color is "<<s->getColor()<<"and area is :"<<s->are()<<endl;
}
