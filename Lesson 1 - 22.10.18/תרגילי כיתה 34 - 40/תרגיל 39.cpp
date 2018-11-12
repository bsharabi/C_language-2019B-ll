//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define s 10
//void fillarray(int *(arr))//Fill the array
//{
//	int i;
//	for (i = 0; i < s; i++)
//		*(arr + i) = rand() % 100+1;
//}
//void printarray(int *(arr))//print the array
//{
//	int i;
//	printf("The Array -");
//	for (i = 0; i < s; i++)
//		printf("%5d", *(arr + i));
//	puts("");
//}
//void Even_Odd(int *(arr))//פונקציה המקבלת מערך של מספרים רנדומלים ומפצלת אותו לשני מערכים משנים של חיובי ושלילי 
//{
//	int i, even[s] = { 0 }, odd[s] = { 0 };
//	int e = 0, o = 0;
//	for (i = 0; i < s; i++)
//	{
//		if (*(arr + i) % 2 == 0)
//			*(even + e++) = *(arr + i);
//		else
//			*(odd + o++) = *(arr + i);
//	}
//	printf("The Even array - ");
//	i = 0;
//	while (*(even + i))
//		printf("%5d", *(even + i++));
//	printf("\n");
//	printf("The Odd array  - ");
//	i = 0;
//	while (*(odd+i))
//		printf("%5d", *(odd + i++));
//
//}
//void menu()//The main menu in the program
//{
//	int arr[s];
//	srand(time(NULL));
//	fillarray(arr);
//	printarray(arr);
//	Even_Odd(arr);	
//}
//void main()//The main program
//{
//	menu();
//	getchar();
//	system("cls");
//	main();
//}