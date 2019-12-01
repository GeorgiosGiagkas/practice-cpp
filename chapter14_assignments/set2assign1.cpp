#include<iostream>
using namespace std;

class tollBooth{
private:
  unsigned int numCars;
  double totalAmount;
public:
  tollBooth(unsigned int= 0, double =0.0);
  void payingCar(void);
  void nopayCar(void);
  void display(void) const;
};

tollBooth::tollBooth(unsigned int x, double y):numCars(x), totalAmount(y){}
void tollBooth::payingCar(void){
  numCars+=1;
  totalAmount+=0.5;
}
void tollBooth::nopayCar(void){
  numCars+=1;
}

void tollBooth::display(void) const{
  cout<<"Number of cars passed: "<<numCars<<endl;
  cout<<"Total amount: "<<totalAmount<<endl;
}

int main(){

  tollBooth tl;
  
  char action;
  while(true){
    cin>>action;
    if(action=='0'){
      tl.display();
      break;
    }
    if(action=='1'){
      tl.payingCar();
    }
    if(action=='2'){
      tl.nopayCar();
    }
  }
  

  
  return 0;
  
}


