//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define s 13
//void printarray(int *(arr))//print the array
//{
//	int i;
//	printf("The Array     - ");
//	for (i = 0; i < s; i++)
//		printf("%5d", *(arr + i));
//	puts("");
//}
//void func(int *(arr))
//{
//	int x,i,flag=0,j=s-1,temp,cnt=0;
//	puts("Enter your number you want to search");
//	scanf_s("%d",&x);
//	for (i = 0; i < s-cnt; i++)
//	{
//		if (*(arr+i) == x)
//		{
//			if (*(arr + j) == x)
//			{
//				j--;
//				i--;
//				continue;
//			}
//			temp = *(arr+j);
//			*(arr + j) = *(arr + i);
//			*(arr + i) = temp;
//			j--;
//			flag = 1;
//			cnt++;
//		}
//	}
//	if (flag == 0)
//		printf("Not found\n");
//}
//void menu()//The main menu in the program
//{
//	int arr[s] = { 3,4,5,8,7,4,6,45,12,13,8,4,4 };
//	printarray(arr);
//	func(arr);	
//	printarray(arr);
//}
//void main()
//{
//	menu();
//	getchar();
//	getchar();
//	system("cls");
//	main();
//}