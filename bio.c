#include<stdio.h>
struct bio
{
	int age;
	char sex;
};
int main()
{
	struct bio anu;
	anu.age=22;
	anu.sex='f';
	printf("Age of Anu is %d & sex is %c",anu.age,anu.sex);

	return 0;
}
