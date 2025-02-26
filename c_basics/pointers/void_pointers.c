/*
 * Type Casting to VOID*  == Generic Pointer
 * 
 * think:
 *      We haven't decided what role you are going to play,
 *      But for now, you are a "Generic (no type) pointer"
 *
 * TL;DR
 *      (void *) menas: We'll let you know ..
*/
#include <stdio.h>

void printData(void *data, char dataType){
  if (dataType == 'i')
    printf("Integer: %d\n", *((int*)data));     // 42
  else if (dataType == 'f')
    printf("Float: %E\n", *((float*)data));     // 5.885454E-44
  else if (dataType == 'c')
    printf("Character: %c\n", *((char*)data));  // * since 42 is asterix in ASCII
  else
    printf("Unknown data type\n");
}



int main(int argc, char **argv){
  int intValue = 42;
  // print different data types using void pointers
  printData(&intValue, 'i');
  printData(&intValue, 'f');
  printData(&intValue, 'c');
  return 0;
}
