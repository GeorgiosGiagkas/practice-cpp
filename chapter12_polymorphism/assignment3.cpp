/*Assignment 3*/

#include<iostream>
#include<string.h>
using namespace std;

class account{
protected:
  char* name;
  char* account_num;
  char* account_type;
  double balance;
public:

  void deposit(double x){
    cout<<"Deposit "<< x<<endl;
    balance+=x;
  }

  void displayBalance(void) const{
    cout<<"Balance is: "<< balance<<endl;
  }

  virtual void withdraw(double)=0;

  void setName(const char* nm){
    name=new char[strlen(nm)+1];
    strcpy(name, nm);
  }

  void setNumber(const char* num){
    account_num = new char[strlen(num)+1];
    strcpy(account_num, num);
  }

  virtual void setType(void)=0;
			   
  void  getName(void) const{
    cout<<"The name of customer is: "<<name<<endl;
  }

  void getNumber(void) const{
    cout<<"The account number is: "<<account_num<<endl;
  }

  void getType(void) const{
    cout<<"The type is: "<<account_type<<endl;
  }

};


class saving_account:public account{
private:
  double interest;
public:
  
  void depositInterest(double x){
    if(balance>0){
      balance+= balance*x/100;
      cout<<"New balance is: "<<balance<<endl;
    }
    else {
      cout<<"No interest"<<endl;
    }
  }

  void withdraw(double x){
    if(x<balance){
      balance-=x;
      cout<<"Withdrawing "<<x<<". New balance is: "<<balance<<endl;
    }
    else {
      cout<<"Could not withdraw"<<endl;
    }

  }

  void setType(void){
    const char* type = "Saving count";
    account_type =  new char[strlen(type)+1];
    strcpy(account_type, type);
  }
  
    
};

class current_account:public account{
private:
  int checks;
public:
  void getChecks(void){
    if(balance>100){
    checks=balance/100;
    cout<<"Number of 100$ checks is: "<<checks<<endl;
    }
    else {
      balance-=10;
      cout<<"Could not write check. Balance penalty. New balance is: "<<balance<<endl;
    }
  }

  void withdraw(double x){
    int y= int(x);//typecast as int
    if(int(balance)%(y*100)>0){
      balance-=y*100;
      cout<<"Checks amount: "<<(y*100)<<endl;
      getChecks();
      
    }
    else{
      cout<<"Could not write check"<<endl;    
    }
  }
  void setType(void){
    const char* type = "Current count";
    account_type =  new char[strlen(type)+1];
    strcpy(account_type, type);
  }
};
  





int main(){

  saving_account acc1;

  acc1.setName("Akuma");
  acc1.setNumber("99050jd98");
  acc1.setType();

  acc1.getName();
  acc1.getNumber();
  acc1.getType();

  acc1.deposit(1000);
  acc1.displayBalance();
  acc1.depositInterest(10);
  acc1.displayBalance();
  acc1.withdraw(1000);


  current_account acc2;

  acc2.setName("Ryu");
  acc2.setNumber("34050jd98");
  acc2.setType();

  acc2.getName();
  acc2.getNumber();
  acc2.getType();

  acc2.deposit(1050);
  acc2.getChecks();
  acc2.displayBalance();
  acc2.withdraw(7);

  acc2.displayBalance();

  acc2.withdraw(3);

  acc2.displayBalance();
  
  
  return 0;
}
    
