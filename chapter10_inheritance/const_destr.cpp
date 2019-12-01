/* constructor and destructor in inheritance */

#include<iostream>
using namespace std;

class base{//parent class name
protected://access modifier. Data memders can be used by derived class's member functions
  int base_num;
public:
  inline base(int=0);//constructor with default argument
  inline ~base();//destructor
  inline int getBase(void) const;//accessor function
};

inline base::base(int x):base_num(x){//true member initialazation
  cout<<"Base constructor"<<endl;
}
  
inline base::~base(){
  cout<<"Base destructor"<<endl;
}

inline int base::getBase(void) const{
  return base_num;
}



class derived:public base{//child class name. Derivation pubic. Inherits from parent class base
private:
  int derived_num;//private data member.(in addition to data member base_num,that is inherited from base)
public:
  inline derived(int=0, int=0);//constructor for derived. Each class (parent or child), has its own constructor/destructor. Base constructor is called first!!
  inline ~derived();//destructor
  inline int getDerived(void) const;//accessor function
};

inline derived::derived(int x, int y):base(x), derived_num(y){//initialize members. Special care for base call
  cout<<"Derived constructor"<<endl;
}

inline derived::~derived(){
  cout<<"Derived Destructor"<<endl;
}

inline int derived::getDerived(void) const{
  return derived_num;
};


int main(){
  derived d(1,2);//instantiate class
  cout<<"d=("<< d.getBase()<<","<<d.getDerived()<<")"<<endl;
  
  return 0;
}
