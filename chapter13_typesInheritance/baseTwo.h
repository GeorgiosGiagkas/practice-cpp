#ifndef BASETWO_H
#define BASETWO_H

class baseTwo{
protected:
  char letter;
public:
  baseTwo(char ch){
    letter=ch;
  }
  char getData() const{
    return letter;
  }
};

#endif
