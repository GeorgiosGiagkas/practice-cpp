#include<stdio.h>
#include<stdlib.h>

int main(){
  int* int_ptr;//int pointer
  float* float_ptr;//float pointer
  double* double_ptr;//double pointer
  char* char_ptr;//character pointer
  float** ptr_float_ptr;//pointer to float pointer

  int_ptr = new int;//dynamic memory allocation from the heap(dma)
  if(int_ptr == NULL){
    printf("Memory cannot be allocated.\n");
    exit(0);
  }
  else{
    *int_ptr=5;
  }

  float_ptr=new float;
  if(float_ptr == NULL){
    printf("Memory cannot be allocated.\n");
    exit(0);
  }
  else{
    *float_ptr=9.81f;
  }

  double_ptr= new double;
  if(double_ptr == NULL){
    printf("Memory cannot be allocated.\n");
    exit(0);
  }
  else{
    *double_ptr=3.14;
  }

  char_ptr=new char;
  if(char_ptr == NULL){
    printf("Memory cannot be allocated.\n");
    exit(0);
  }
  else{
    *char_ptr='A';
  }

  ptr_float_ptr=new float*;//new float pointer from the heap
  if(ptr_float_ptr !=NULL){
    *ptr_float_ptr=new float;//new float from the heap
    if(*ptr_float_ptr != NULL){
      **ptr_float_ptr=3.25f;
    }
    else{
      printf("Memory cannot be allocated.\n");
      exit(0);
    }
  }
  else {
    printf("Memory cannot be alocated.\n");
    exit(0);
  }

  printf("Integer = %d\n",*int_ptr );
  printf("Float = %f\n", *float_ptr );
  printf("Double = %lf\n",*double_ptr);
  printf("Float = %f\n", **ptr_float_ptr );
  return 0;
}
