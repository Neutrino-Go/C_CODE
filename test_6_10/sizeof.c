#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test1(int arr[])
{
    printf("%d\n", sizeof(arr));//4/8
}

void test2(char ch[])
{
    printf("%d\n", sizeof(ch));//4/8
}

int main(void)
{
    int arr[10] = { 0 };
    char ch[10] = { 0 };
    printf("%d\n", sizeof(arr));//40
    printf("%d\n", sizeof(ch));//10
    test1(arr);
    test2(ch);

    return 0;
}