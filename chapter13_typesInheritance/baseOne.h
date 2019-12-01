/* Base class definition. the #ifndef (called if not defined) is used to check if the following has already been defined and does no re-defined it. It ends with endif keyword*/

#ifndef BASEONE_H
#define BASEONE_H

class baseOne{
protected:
  int num;
public:
  baseOne(int x){
    num=x;
  }
  int getData() const{
    return num;
  }
};

#endif
  


