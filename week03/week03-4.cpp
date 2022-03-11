
#include <stdio.h>
char line[2000];

int main()
{
	int t=1;
	while(gets(line))
	//get(line)可以讀入一整行
	{
		if(t>1) printf("\n");
		printf("第%d筆資料\n",t);

		t++;
	}
}
