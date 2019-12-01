#include<iostream>
using namespace std;

class student{
protected:
  int roll_no;
public:
  inline void setR(int);
  inline int getR(void) const;
};

inline void student::setR(int x){
  roll_no=x;
}

inline int student::getR(void) const{
  return roll_no;
}


class test: public student{
protected:
  float subject1;
  float subject2;
public:
  inline void setMarks(float, float);
  inline void printMarks(void);
};

inline void test::setMarks(float x, float y){
  subject1=x;
  subject2=y;
}

inline void test::printMarks(void) {
  cout<<"Marks for subject 1: "<<subject1<<endl;
  cout<<"Marks for subject 2: "<<subject2<<endl;
}

class result:public test{
private:
  float total;
public:
  void display(void);
};

void result::display(void){
  total=subject1+subject2;
  getR();
  printMarks();
  cout<<"Total is: "<<total<<endl;
}

int main(){
  result rs1;
  rs1.setR(10110);
  rs1.setMarks(54.9,90.2);
  rs1.display();

  return 0;
}
