#include <stdio.h>
#include <conio.h>

//creator aash
//facebook page=https://www.facebook.com/notes/stupid-programming-discussion/pythagorean-triplet/221015204984095
//version=1.0
//creator will add comment for proper explaination soon.

void main()
{
	int a, b, c,s1,s2,s3,m1,m2,m3;
	printf("input a \n");
	scanf_s("%d", &a);
	printf("input b \n");
	scanf_s("%d", &b);
	printf("input c \n");
	scanf_s("%d", &c);
	

	s1 = a, s2 = b, s3 = c;
	if (s2>s1)
		s1 = b, s2 = a, s3 = c; 
	
	if (s3>s1)
		s1 = c, s2 = a, s3 = b; 

	printf("greatest number is %d \n", s1);
	
	m1 = s1*s1;
	m2 = s2*s2;
	m3 = s3*s3;


	if (m1 == m2 + m3)
	{
		printf("yes pythagorean triplet/right triangle");
	}
	else
	{
		printf("not pythagorean triplet/right triangle");
	}
	
	_getch();
}

