#include<stdio.h>
struct rectangle
{
	int len;
	int bre;
};
int main()
{
struct rectangle r;
r.len=3;
r.bre=4;
printf("length=%d, width=%d",r.len,r.bre);
printf("Something New");
return 0;
}
