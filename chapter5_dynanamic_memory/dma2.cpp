#include<stdio.h>
#include<string.h>

int main(){
  const int max = 256;//constant int variable named max
  char buffer[max];//a string named buffer with constant positions max= 256
  const int nos = 3;//constant integer variable named nos
  char* arr[nos];//character array with 3 columns
  int index=0;

  printf("Enter string...\t");

  while(fgets(buffer, max, stdin)!=NULL){//char* fgets (char* str, int num, FILE*stream). Returns str or null. Standard input as argument to read instead of file object.
    
    if(index==nos){
      printf("Too many strings\n");
      break;
    }
    else{
      char* ptr = new char[strlen(buffer)+1];//new string. +1 to take into account '0\'
      arr[index++] = ptr;//arr points whare ptr points. Increment after assignment. 
      strcpy(ptr, buffer);//copies buffer contents to where the pointer ptr points. (destination, source)
    }
    printf("Enter next String...\t");

  }
    printf("\nThe strings are:\n");
    for(int i=0; i<index; i++){
      printf("%s\n",arr[i]);
      delete [] arr[i];//free memory allocated from the heap each time
    }
  
  return 0;
}
