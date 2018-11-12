#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define s 70
void str_func(char *(line), char ch)//A function that performs a search for all words beginning with CH
{
	int i, size,k=1,flag=0;
	size = strlen(line);
	for (i = 0; i <size; i++)
	{	
		if (*(line + i) == ch|| *(line + i) == ch-32)//במידה והכונה לחיפוש מילים המתחילות רק באותיות קטנות או רק באותיות גדולות אפשר להוריד את התמנאי של ||
		{
			flag = 1;
			printf("%d - ", k++);
			while(*(line + i) != ' ' && *(line + i) != '\0')
			{
					printf("%c", *(line + i));
					i++;
			}
			puts("");
		}
		else
			while (*(line + i) != ' ')
				i++;
	}
	if (flag == 0)
		printf("There are no words beginning with the letter(%c)", ch);
}
void menu()//The main menu in the program
{
	char line[s] = {"Cat Dragon horsa tiger dog dolphin mouse dinosaur"}, ch = 'd';
	/*puts("Enter string");
	gets_s(line);*/
	puts("Enter letter");
	scanf_s("\n\n%c", &ch);
	puts(line);
	printf("\n\nThe words containing the letter (%c or %c) are:\n", ch,ch-32);
	str_func(line,ch);
}
void main()//The main program
{
	menu();
	getchar();
	getchar();
	system("cls");
	main();
}