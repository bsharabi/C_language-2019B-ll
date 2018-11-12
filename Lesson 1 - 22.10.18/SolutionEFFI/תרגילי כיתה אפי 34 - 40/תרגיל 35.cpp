//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define s 20
//void fillarray(int *(arr),int *x)//Fill the array
//{
//	int i, z;
//	*x = rand() % 10 + 1;
//	for (i = 0; i < s; i++)
//		*(arr + i) = rand() % 10+1;
//	z= rand() % 5 + 2;
//	for (i = 0; i < z; i++)
//		*(arr + rand() % 20) = *x;
//	printf("X = %d\n", *x);
//}
//void printarray(int *(arr))//print the array
//{
//	int i;
//	printf("The Array     - ");
//	for (i = 0; i < s; i++)
//		printf("%5d", *(arr + i));
//	puts("");
//}
//void func(int *(arr),int *x)//Search function for first and last position of X
//{
//	int i,place[2];
//	for (i = 0; i < s; i++)//Search the first position of X in the array
//		if (*(arr + i) == *x)
//		{
//			place[0] = i+1;
//			break;
//		}
//	for (i = s-1; i > 0 ; i--)//Search the last position of X in the array
//		if (*(arr + i) == *x)
//		{
//			place[1] = i;
//			break;
//		}
//	printf("The new Array - ");
//	for (i = 0; i < place[0]; i++)
//		printf("     ");
//	
//	for (i = place[0]; i <place[1]; i++)//Printing the array between two X locations
//		printf("%5d", *(arr + i));
//}
//void menu()//The main menu in the program
//{
//	int arr[s],x;
//	srand(time(NULL));
//	fillarray(arr,&x);
//	printarray(arr);
//	func(arr,&x);	
//}
//void main()
//{
//	menu();
//	getchar();
//	system("cls");
//	main();
//}