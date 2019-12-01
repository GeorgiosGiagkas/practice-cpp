/* multi line 
commenting
*/

#include<stdio.h> //prototype inclusion is not mandatory in C
#include<stdlib.h>
int myprintF(void);

int x=5;
//int p=x;//error in C, but not in C++. In C++ global variables can be initialized to expression



void main(){//void or int. 

  printf("Hello world!\n");

  for (int i=0;i<3;i++){//this is cpp style
    printf("%d\n",i);
  }
		      


  char ch='A';
  printf("Size of char= %ld\n", sizeof(ch));
  printf("Size of char= %ld\n", sizeof('A'));//size of character constant is 4


  const int x;// declare but not defined is allowd. But contain garbage value. In C++ you have to initialize the cont var!
  //x=10; cannot assign to constant (read only variable)


  char name[3]="Tom";// compiler takes care of +1 '\0'

  //
  int *ptr;
  ptr= malloc(sizeof(int));//malloc returns void pointer that doesn not need to type cast it 
  *ptr=5;
  printf("%d\n",*ptr);
  //
  


  //ptrA is constant. That is the address in constant but not the contain to the variable that it pointing
  char* const ptrA="Rascal";
  *ptrA='p';

  //the content of the variable that ptrB is pointing is constant and cannot be changed.
  const char* ptrB ="Rascal";
  ptrB="innocent";//ptrB points to this string now
  //*ptrB='f';//cannot change

  char name1[50]="Demystifying C++";
  //name1="Demystifying C++"; //name1 of the array is constant pointer and cannot change the address that is pointing
  printf("%s\n",name1 );


  //in C the value of const variable is not determined until execution time

  /*Does not run in C
  const int size=10;
  int num[size+5];
  */




  //dynamic initialazation is not allowd in C
  int a=2;
  int suma=a+a;
  
}
//use formal argument void to restrict. If you are not add void and leave it empty then the function can take more arguments
int myprintF(void){

  printf("My print function\n");
}
