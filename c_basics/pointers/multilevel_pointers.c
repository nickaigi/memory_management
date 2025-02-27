int main(int argc, char **argv){
  int *ptr1;
  int **ptr2;
  int ***ptr3;
  int ****ptr4;
  int n = 42;

  ptr1 = &n;
  ptr2 = &ptr1;
  ptr3 = &ptr2;
  ptr4 = &ptr3;
  return 0;
}
