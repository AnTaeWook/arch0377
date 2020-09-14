#include<stdio.h>
typedef unsigned char *pointer;

void check_endian(pointer start)
{
	if(start[0]==0)
	{
		printf("big endian입니다.\n");
	}
	else
	{
		printf("little endiand입니다.\n");
	}
}

int main()
{
	long a;
	if(sizeof(a)==4)
	{
		printf("32비트 운영체제 입니다.\n");
	}
	else if(sizeof(a)==8)
	{
		printf("64비트 운영체제 입니다.\n");
	}

	int b = 15213;
	check_endian((pointer) &b);
}

