#include<iostream>

using namespace std;


class myTime{
private:
  int sec;
  int min;
  int hour;
public:
  myTime(int=0,int=0,int=0);
  myTime operator+(const myTime&);
  void display(void) const;
};


myTime::myTime(int x, int y, int z): sec(x), min(y), hour(z){}

myTime myTime::operator+(const myTime& ref){
  myTime temp;
  temp.sec= sec + ref.sec;
  temp.min= min+ ref.min;
  temp.hour= hour + ref.hour;
  return temp;
}

void myTime::display(void) const{
  cout<<hour<<":"<<min<<":"<<sec<<endl;
}


int main(){

  myTime obj1(3,43,50);
  myTime obj2(12,32,44);

  myTime obj3;

  obj3 = obj1 + obj2;

  obj1.display();
  obj2.display();
  obj3.display();

  return 0;
}

  
  


  
