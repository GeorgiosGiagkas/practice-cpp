#include<iostream>
#include<string.h>
using namespace std;

class sales{
public:
  float records[3];
public:
  virtual void getData(void);
  virtual void putData(void) const;
};

void sales::getData(void){
  cout<<"Enter amounts for the last three months"<<endl;
  cin>>records[0];
  cin>>records[1];
  cin>>records[2];
}

void sales::putData(void) const{
  cout<<records[0]<<endl;
  cout<<records[1]<<endl;
  cout<<records[2]<<endl;
}








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
  title=new char[strlen(temp)+1];
  strcpy(title,temp);
  cout<<"Enter price:"<<endl;
  cin>>price;

}

void publication::putData(void) const{
    cout<<title<<endl;
    cout<<price<<endl;
  }



class book:public publication, public sales{
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
  title=new char[strlen(temp)+1];
  strcpy(title,temp);
  cout<<"Enter price:"<<endl;
  cin>>price;
  cout<<"Enter pages:"<<endl;
  cin>>count;
  cout<<"Enter amounts for the last three months"<<endl;
  cin>>records[0];
  cin>>records[1];
  cin>>records[2];
}

void book::putData(void) const{
    cout<<title<<endl;
    cout<<price<<endl;
    cout<<count<<endl;
    cout<<records[0]<<endl;
    cout<<records[1]<<endl;
    cout<<records[2]<<endl;

  }

  

class tape:public publication, public sales{
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
  title=new char[strlen(temp)+1];
  strcpy(title,temp);
  cout<<"Enter price:"<<endl;
  cin>>price;
  cout<<"Enter playing time:"<<endl;
  cin>>playTime;
  cout<<"Enter amounts for the last three months"<<endl;
  cin>>records[0];
  cin>>records[1];
  cin>>records[2];
}

void tape::putData(void) const{
    cout<<title<<endl;
    cout<<price<<endl;
    cout<<playTime<<endl;
    cout<<records[0]<<endl;
    cout<<records[1]<<endl;
    cout<<records[2]<<endl;
    
  }




int main(){
  /*
  sales sl1;
  sl1.getData();
  sl1.putData();
  */
  
  publication pl1;
  pl1.getData();
  pl1.putData();


  book b1;
  b1.getData();
  b1.putData();

  tape t1;
  t1.getData();
  t1.putData();
  /*
  publication* pl2 = new book;
  pl2->getData();
  pl2->putData();
  */

  
  return 0;

  
  }
