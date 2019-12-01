#ifndef DERIVED_H
#define DERIVED_H

#include<iostream>
#include "baseOne.h"
#include "baseTwo.h"

using namespace std;

class Derived:public baseOne, public baseTwo{
private:
  double real;
public:
  Derived(int x, char y, double z):baseOne(x), baseTwo(y), real(z){}
  double getReal() const;
  friend ostream& operator<<(ostream&, const Derived&);
};

#endif
