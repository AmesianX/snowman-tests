/* gcc -m32 -nostdlib -o ../059_call_many_args_stdcall 059_call_many_args_stdcall.c */

__attribute__((stdcall))
void f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12) {
}

void g() {
	f(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
}
