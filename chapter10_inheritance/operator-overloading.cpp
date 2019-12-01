/* operator overloading */

#include<iostream>
using namespace std;

class base{//parent class name
protected://member function of derived class can have access to data members
  int base_num;
public:
  inline base(int=0);//declaration of constructor with default arguments
  inline base(const base&);//declaration of copy cosntructor
  inline ~base();//destructonr
  base& operator=(const base&);//operator overloading

  inline int getBase(void) const;//accessor function
};


inline base::base(int x):base_num(x){//member initialazation
  cout<<"Base constructor"<<endl;
}

inline base::base(const base& ref):base_num(ref.base_num){//copy constructor.
  cout<<"Base copy constructor"<<endl;
}

inline base::~base(){
  cout<<"Base destructor"<<endl;
}

base& base::operator=(const base& ref){//operator overloading
  if(&ref!=this){//if the address of base reference is not this pointer(the address of the instance itself) 
    base_num=ref.base_num;
  }
  return *this;//derreference this pointer. Returns instance as reference
}

inline int base::getBase(void) const{//
  return base_num;
}




class derived:public base{//child class inherits from base. Public derivation
private:
  int derived_num;
public:
  inline derived(int=0,int=0);//constructor with default arguments
  inline derived(const derived&);//copy constructor
  inline ~derived();//destructor

  derived& operator=(const derived&);//operator overloading

  inline int getDerived(void) const;//accessor function
};


inline derived::derived(int x, int y): base(x), derived_num(y){
  cout<<"Derived cosntructor"<<endl;
}

inline derived::derived(const derived& ref):base(ref), derived_num(ref.derived_num){
  cout<<"Derived copy constructor"<<endl;
}

inline derived::~derived(){
  cout<<"Derived destructor"<<endl;
}

derived& derived::operator=(const derived& ref){
  if(&ref!=this){
    base::operator=(ref);
    derived_num=ref.derived_num;
  }
  return *this;
}

inline int derived::getDerived(void) const{
  return derived_num;
}


int main(){
  derived d1(1,2);//instantiate with actual arguments
  derived d2;//intantiate with default arguments
  cout<<"d2=("<<d2.getBase()<<","<<d2.getDerived()<<")"<<endl;
  
  d2=d1;//d2.operator=(d1);
  cout<<"d2=("<<d2.getBase()<<","<<d2.getDerived()<<")"<<endl;

  return 0;
}
