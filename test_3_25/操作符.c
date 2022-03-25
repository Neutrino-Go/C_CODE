#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//Arithmetic operator
	float a = 9 / 2;
	float b = 9 / 2.0;
	float c = 9 % 2;
	printf("%f\n%f\n%f\n", a, b, c);

	//Left-shift operator
	int d = 2;
	int e = d << 1;
	printf("\n%d\n", e);//0010 change to 0100

	//Moncular operator
	//"!" operator
	int f = 0;//0 stand for false
	int g = 10;//non-zero stand for true
	printf("\n%d  %d\n", !f, !g);

	//"sizeof()" operator
	//Calculate the size of types and variables
	int h = 10;
	printf("\n%d\n", sizeof(int));
	printf("%d\n", sizeof a);//When calculating the sizeof variables, "()" behind can be omitted. While calculating the size of types, "()" can't be omitted
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//10*4=40
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	//"~" operator
	int i = 0;
	printf("\n%d\n", ~i);

	//Pre-operator & Post-operator
	int j = 10;
	int k = ++j;//Firstly ++, secondly use
	printf("\n%d  %d\n", k, j);
	int l = 10;
	int m = l++;//Firstly use, secondly ++
	printf("\n%d  %d\n", m, l);

	//Type cast
	int n = (int)3.14;
	printf("\n%d\n", n);

	//"&&" and "||" operator
	int o = 3;
	int p = 5;
	int q = o && p;
	printf("\n%d\n", q);
	int r = 3;
	int s = 0;
	int t = r && s;
	printf("%d\n", t);
	int u = 3;
	int v = 5;
	int w = u || v;
	printf("%d\n", w); 
	int x = 3;
	int y = 0;
	int z = x || y;
	printf("%d\n", z);

	//Conditional operator--Ternary operator
	//exp1 ? exp2 : exp3
	//exp1 right, exp2 calculate, output, output exp2
	//exp1 false, exp3 calculate, output, output exp3
	int a1 = 1;
	int a2 = 3;
	int max = a1 > a2 ? a1 : a2;
	int min = a1 < a2 ? a2 : a1;
	printf("\nmax=%d  min=%d\n", max, min);

	//"," expression--Calculate it from left to right, output the last one
	int b1 = 0;
	int b2 = 3;
	int b3 = 5;
	int b4 = (b1 = b2 + 2, b3 = b1 - 4, b2 = b3 + 2);
	printf("\n%d\n", b4);

	//Subscript reference operator "[]"
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("\n%d\n", arr[5]);

	//Function call operator "()"
	printf("\nhehe\n");
	printf("%d\n", x);

	return 0;
}