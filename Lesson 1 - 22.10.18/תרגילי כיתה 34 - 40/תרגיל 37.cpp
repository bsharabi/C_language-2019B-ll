//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#define s 19
//void func(char *(str))//������� ������ ����� �������� �� ����� ���� �������
//{
//	int size,i,cnt=0,j,l;
//	char str2[s];
//	l = strlen(str);
//	for(i=0;i<l;i++)
//	{
//		if(*(str+i) == *(str+1+i))//���� ��� ���� ������� ��� ���� ���� ����� ����� ��� ����� ������.
//		{
//			size = strlen(str+i);
//			for (j = 0; j < size; j++)
//			{
//				if (*(str + j+i) != *(str + 1 + j+i))
//				{
//					strcpy(str, str + j + 1+i);
//					i = -1;
//					break;
//				}
//			}
//		}
//		else
//		{
//			str2[cnt++] = *(str + i);
//		}
//		l = strlen(str);
//	}
//	str2[cnt] = '\0';
//	strcpy(str, str2);
//	
//}
//void menu()//The main menu in the program
//{
//	char str[s];
//	puts("Enter string");
//	gets_s(str);
//	puts(str);
//	func(str);
//	puts(str);
//}
//void main()//������ �����
//{
//	menu();
//	getchar();
//	system("cls");
//	main();
//}