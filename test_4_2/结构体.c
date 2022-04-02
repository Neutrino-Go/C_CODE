//Struct allows C to create new tyoes
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Create a student tyoe
struct Stu
{
	char name[20];//member variables
	int age;
	double score;
};
//Create a book type
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "Merry",20,85.5 };//Creation and initialization of struct
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//Struct variables.member variables
	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//Struct pointer->member variables
	return 0;
}