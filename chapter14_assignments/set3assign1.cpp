#include<iostream>
#include<string.h>
using namespace std;

class publication{
protected:
  char* title;
  float price;
public:
  virtual void getData(void);
  void putData(void) const;     
};

void publication::getData(void){
  char* temp;
  cout<<"Enter title:"<<endl; 
  cin>>temp;
  title=temp;
  strcpy(title,temp);
  cout<<"Enter price:"<<endl;
  cin>>price;
}

void publication::putData(void) const{
    cout<<title<<endl;
    cout<<price<<endl;
  }



class book:public publication{
private:
  int count;
public:
  void getData(void);
  void putData(void) const;
};


void book::getData(void){
  char* temp;
  cout<<"Enter title:"<<endl; 
  cin>>temp;
  title=temp;
  strcpy(title,temp);
  cout<<"Enter price:"<<endl;
  cin>>price;
  cout<<"Enter pages:"<<endl;
  cin>>count;
}

void book::putData(void) const{
    cout<<title<<endl;
    cout<<price<<endl;
    cout<<count<<endl;
  }

  

class tape:public publication{
private:
  float playTime;
public:
  void getData(void);
  void putData(void) const;
};


void tape::getData(void){
  char* temp;
  cout<<"Enter title:"<<endl; 
  cin>>temp;
  title=temp;
  strcpy(title,temp);
  cout<<"Enter price:"<<endl;
  cin>>price;
  cout<<"Enter playing time:"<<endl;
  cin>>playTime;
}

void tape::putData(void) const{
    cout<<title<<endl;
    cout<<price<<endl;
    cout<<playTime<<endl;
  }




int main(){
 
  publication pl1;
  pl1.getData();
  pl1.putData();


  book b1;
  b1.getData();
  b1.putData();

  tape t1;
  t1.getData();
  t1.putData();

  
  publication* pl2 = new book;
  pl2->getData();
  pl2->putData();


  
  return 0;

  
  }
