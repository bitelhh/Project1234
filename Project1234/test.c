#include<stdio.h>
// LNK2005_global.h
int global_int;  // LNK2005
int main(void)
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);



	return 0;


}