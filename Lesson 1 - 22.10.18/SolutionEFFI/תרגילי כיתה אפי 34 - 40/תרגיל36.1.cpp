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
//void func(int *(arr))//פונקציה המבצעת סידור למערך כך שהערך של איקס אותו המשתמש הזין יעבור לסופו שך המערך
//{
//	int x, i, flag = 0, j, temp;
//	puts("Enter your number you want to search");
//	scanf_s("%d", &x);
//	for (i = 0; i < s; i++)
//	{
//		if (*(arr + i) == x)
//		{
//			flag = 1;
//			temp = *(arr + i);
//			for (j = 0; j < s - i; j++)
//			{
//				*(arr + i + j) = *(arr + i + j + 1);
//			}
//			*(arr + s - 1) = temp;
//		}
//	}
//	if (flag)
//		printarray(arr);
//	else
//		printf("Not found\n");
//}
//void menu()//The main menu in the program
//{
//	int arr[s] = { 3,4,5,8,7,4,6,45,12,13,8,4,4 };
//	printarray(arr);
//	func(arr);
//}
//void main()//תוכנית ראשית
//{
//	menu();
//	getchar();
//	getchar();
//	system("cls");
//	main();
//}