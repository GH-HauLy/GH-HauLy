/*数据类型的使用*/
#include <stdio.h>
void to_binary(int n);

int main()
{
	int num;
	printf("Please enter the integer num!\nnum = ");
	scanf("%d", &num);
	
	printf("binary: ");
	to_binary(num);
	printf("           ");
	printf("dec: %d \
           octal: %o\
           hex: %x", num, num, num);
	
	return 0;
}

void to_binary(int n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');
	
	return;
}
