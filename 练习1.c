#include<stdio.h>
char* mystrcpy(char* mo,char* dest)
{
	char* a = mo;
	while (*++mo)
		;
	while ((*mo = *dest))
	{
		if (*dest) {
			mo++;
			dest++;
		}

	}
	return a;
}
int mystrcmp(char* mo, char* dest)
{
	while (1)
	{
		if (!(mo++ == dest++) && *mo && *dest)
			return * mo - *dest;
		if (!mo && !dest)
			return 0;
	}
}
char* mystrcat(char* mo, char* dest)
{
	char* b = mo;
	while (*++mo)
		;
	while (*mo = *dest)
	{
		mo++;
		dest++;
	}
	return b;
}
char* mystrstr(char* mo, char* dest)
{
	char* a = mo;
	char* b = dest;
	a = mo;
	while (*a) {
		mo = a;
		while(*mo == *dest)
		{
			dest++;
			mo++;
		}
		if (!*dest)
			return a;
		else
		{
			dest = b;
			a++;
		}
	}
	return NULL;
}
union find
{
	char first;
	int second;
};
int main()
{
	char a[20] = { '1','2','3','\0'};
	char b[] = { '5','6','1','2','3','\0'};
	//strcmp//strcpy//strcat//strlen//strstr//strerror//stroken
	//memcmp//memcpy//memset//memmove
	union find v;
	v.second = 1;
	printf("%d", v.first);
	//结构类型是由低到高//
	return 0;
}
