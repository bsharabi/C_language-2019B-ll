//#include <stdio.h>
//#include <stdlib.h>
//#define s 101
//void fillstring(char *(str))//Fill the array
//{
//	int i;
//	for (i = 0; i < s - 1; i++)
//	{
//		*(str+i) = rand() % 26 + 97;
//	}
//	*(str+s-1) = '\0';
//}
//void abc(char *(str), int *(cnt_abc))//A program that performs a search of all occurrences of a, b, c
//{
//	int i, j;
//	char abc[] = { "abc" };
//	for (i = 0; i < s; i++)
//		for (j = 0; j < 3; j++)
//		{
//			if (*(str + i) == *(abc + j) || *(str + i) == *(abc + j)-32)
//				cnt_abc[j]++;
//		}
//	
//}
//void abc_switch(char *(str), int *(cnt_abc))//A program that performs a search of all occurrences of a, b, c with a switch control
//{
//	int i;
//	char abc[] = { "abc" };
//	for (i = 0; i < s; i++)
//	{
//		switch (*(str + i))
//		{
//		case 'a':case 'A':
//		{
//			cnt_abc[0]++;
//			break;
//		}
//		case 'b':case 'B':
//		{
//			cnt_abc[1]++;
//			break;
//		}
//		case 'c':case 'C':
//		{
//			cnt_abc[2]++;
//			break;
//		}
//		default:
//			break;
//		}
//	}
//
//}
//void menu()//The main menu in the program
//{
//	char str[s];
//	int cnt_abc[3] = { 0 };
//	/*fillstring(str);*/
//	puts("Enter your string");
//	gets_s(str);
//	puts(str);
//	puts("------------------------------");
//	abc(str, cnt_abc);
//	printf("a = %d\nb = %d\nc = %d\n", *(cnt_abc), *(cnt_abc + 1), *(cnt_abc + 2));
//	//puts("------------------------------");
//	//abc_switch(str, cnt_abc);
//	//printf("a = %d\nb = %d\nc = %d\n", *(cnt_abc), *(cnt_abc + 1), *(cnt_abc + 2));
//	//puts("------------------------------");
//
//}
//void main()//The main program
//{
//	menu();
//	getchar();
//	system("cls");
//	main();
//}