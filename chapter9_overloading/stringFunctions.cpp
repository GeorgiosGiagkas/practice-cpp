/* String functions to handle string length, compare, reverse, copy */

/*
#include<iostream>
using namespace std;
*/

int stringLength(const char* ptr){
  int i=0;//counter
  while (*ptr!='\0') { //dereferencing ptr   pointer
    i++;
    ptr++;    
  }
  return i;
}

int stringCompare(const char* ptrA, const char* ptrB){
  int i=0;
  if(stringLength(ptrA)!=stringLength(ptrB)){
      return ++i;
  }
  
  while(*ptrA!='\0' && *ptrA!='\0'){
    if(*ptrA==*ptrB){
      ptrA++;
      ptrB++;
    }
    else {
      i=1;
      break;
    }
  }
  return i;//returns 0 string are the same, return 1 if strings are not the same 
}

char* stringCopy(char* dest, const char* src){//1st arg:destrination, 2nd arg source
  for(int i=0;i<stringLength(src);i++){    
    *(dest+i)=*(src+i);
  }
  *(dest+stringLength(src))='\0';
  return dest;
}

char* stringReverse(char* ptr){

  char* temp = new char[stringLength(ptr)+1];//allocate memory on the heap
  stringCopy(temp,ptr);
  
  for(int i=0;i<stringLength(temp);i++){    
    *(ptr+i)=*(temp+(stringLength(temp)-i-1));
  }
  delete [] temp;//free allocated memory from the heap for string (array)

  return ptr;
}


char* stringCat(char* ptrA, const char* ptrB){//1st destination, 2nd src
  // Caution: dest − This is pointer to the destination array, which should contain a C string, and should be LARGE enough to contain the concatenated resulting string.
 
  stringCopy(ptrA+stringLength(ptrA),ptrB);
  *(ptrA+stringLength(ptrA))='\0';

  return ptrA;
}
  


/*

int main(){
  char nameA[80]="Akuma";
  char nameB[80]="Ryu";

  cout<<nameA<<" "<<stringLength(nameA)<<endl;

  cout<<"Compare result: "<<stringCompare(nameA, nameB)<<endl;
  cout<<"Compare result: "<<stringCompare(nameA, nameA)<<endl;

  stringCat(nameA, nameB);
  cout<<"Cat "<<nameA<<endl;
  
  stringCopy(nameA,nameB);
  cout<<"Copy result: "<<nameA<<" "<<nameB<< endl;

  stringReverse(nameB);
  cout<<"Reverse "<<nameB<<endl;

  
  
  return 0;
}
*/
