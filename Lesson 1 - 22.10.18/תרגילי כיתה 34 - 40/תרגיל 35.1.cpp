#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define s 20
void fillarray(int *(arr),int *x)
{
	int i;
	*x=rand()%8+2;
	printf("X = %d\n",*x);
	for(i=0;i<s;i++)
		*(arr+i)=rand()%11+1;
	for(i=0;i<2;i++)
		*(arr+rand()%20)=*x;
}
void printarray(int *(arr))
{
	int i;
	for(i=0;i<s;i++)
	{
		printf("%4d",*(arr+i));
	}
}
void func(int *(arr),int x,int *(index))
{
	int i;
	for(i=0;i<s;i++)
		if(*(arr+i)==x)
		{
			index[0]=i+1;
			break;
		}
	for(i=s;i>0;i--)
		if(*(arr+i)==x)
			{
			index[1]=i;
			break;
			}
		puts("");
			printf("The array is - ");
		for(i=0;i<index[0];i++)
			printf("    ");
		for(i=index[0];i<index[1];i++)
	{
		printf("%4d",*(arr+i));
	}
}
void menu()
{
	int arr[s] , x ,index[2];
	srand(time(NULL));
	fillarray(arr,&x);
	printf("The array is - ");
	printarray(arr);
	func(arr,x,index);
}
void main()
{
	menu();
	getchar();
	system("cls");
	main();
}