#include <stdio.h>
int main(void){
	char c;
	printf("%c %c\n", "\101", "\x61");
	c = 'X';
	printf("%c %d %o %x\n", c, c, c, c);
	printf("%c %c\n", c+2, c-1);
	puts("Input a char.");
	scanf("%c", &c);
	if( c == 'C'){
	puts("It’s C !");
	} else {
	puts("It’s not C ...");
	}
	if( c > 'Z'){
	puts("Big"); /* ○○のとき */
	} else {
	puts("Small or Equal");
	}
	return 0;
}