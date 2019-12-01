/*

//Nesting commenting

*/

#include<stdio.h>//prototype in necessary
#include<stdlib.h>

int myprintF();//prototype in necessary

int x=10;

int main()//mandatory to return int!!
{
  printf("Hello world!\n");


  char ch='A';
  printf("Size of char= %ld\n", sizeof(ch));
  printf("Size of char= %ld\n", sizeof('A'));//size of character constant is 1


  char name[4]="Tom";//+1 for'\0'

  
  //
  int *ptr;
  ptr=(int*) malloc(sizeof(int));//malloc returns void pointer that Needs to type cast it 
  *ptr=5;
  printf("%d\n",*ptr);
  //



  //in C++ Const values are kept in compiler-oly table
  //runs in C++
  const int size=10;
  int num[size+5];


  int x=20;
  printf("\nx local= %d\n",x);
  printf("\nx global= %d\n",::x);//to access global version of x use scope resolution operator only in C++


  //typecast in C++
  float aver;
  aver=float(x)/2;

  return 0;
}

//leave empty then the function takes no arguments. No void is required.
int myprintF(){

  printf("My print function\n");
}
