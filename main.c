#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void delet(char *a, int n)
{
	int i;
	for (i = n; i<strlen(a); i++)
	{
		a[i] = a[i + 1];
	}
}
void recursion(char *a, char *b, char *c)
{
	if (b[0] == 0)
	{
		return;
	}
	int i;
	char a1[10][10];
	char b1[10][10];
	for (i = 0; i < 10; i++)
	{
		memset(a1[i], 0, 10);
		memset(b1[i], 0, 10);
	}
	for (i = 0; i<strlen(b); i++)
	{
		strcpy(a1[i], a);
		a1[i][strlen(a1[i])] = b[i];
		printf("%s_", a1[i]);
		strcpy(b1[i], b);
		delet(b1[i], i);
	}
	for (i = 0; i<strlen(b); i++)
	{
		recursion(a1[i], b1[i], c);
	}
}
int main()
{
    system("chcp 1251");
	char a[10] = "";
	char b[10];
	puts("¬ведите слово(без повтор€ющихс€ букв):");
	gets(b);
	recursion(a, b, b);
    printf("\n");
	system("PAUSE");
	return 0;
}


