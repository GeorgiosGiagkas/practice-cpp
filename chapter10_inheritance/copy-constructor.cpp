/* Copy constructor */

#include<iostream>
using namespace std;

class base{//parent class name
protected://member functions of derived class can have access to this data memebers
  int base_num;
public:
  inline base(int=0);//constructor with default argument
  inline base(const base&);//copy constructor
  inline ~base();//destructor
  inline int getBase(void) const; //accessor function
};

inline base::base(int x):base_num(x){//constructor. member initialazation
  cout<<"Base constructor"<<endl;
}

inline base::base(const base& ref):base_num(ref.base_num){//copy constructor. Member initialazation
  //member initialazation instead of mere assignment
  //base_num=ref.base_num;
  cout<<"Base copy constructor"<<endl;
}

inline base::~base(){
  cout<<"Base destructor"<<endl;
}

inline int base::getBase(void) const{
  return base_num;
}


class derived:public base{//child class inherits from base. Derivation as public
private:
  int derived_num;
public:
  inline derived(int=0,int=0);//constructor with default arguments
  inline derived(const derived&);//copy constructor
  inline ~derived();//destructor
  inline int getDerived(void) const;//accessor function
};

inline derived::derived(int x, int y): base(x), derived_num(y){//member initialazation. Base constructor is called first
  cout<<"Derived constructor"<<endl;
}

inline derived::derived(const derived& ref):base(ref), derived_num(ref.derived_num){//copy constructor
  cout<<"Derived copy constructor"<<endl;
}

inline derived::~derived(){
  cout<<"Derived destructor"<<endl;
}


inline int derived::getDerived(void) const{
  return derived_num;
}

int main(){
  derived d1(1,2);//instantiation
  derived d2 = d1;//copy constructor is called
  cout<<"d2=("<<d2.getBase()<<","<<d2.getDerived()<<")"<<endl;

  return 0;
}
