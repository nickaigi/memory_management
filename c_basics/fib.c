#define MAX_FIB 20
int fib[MAX_FIB];


int main(){
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i < MAX_FIB; i++)
		fib[i] = fib[i-1] + fb[i-2];
	return 0;
}
