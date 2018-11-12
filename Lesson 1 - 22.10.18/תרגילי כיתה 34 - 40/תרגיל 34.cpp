//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#define s 50
//void cnt_upper_lower(char str[s])
//{
//	int i, size;
//	int k = 1;
//	int max[4] = { 0 };
//	size = strlen(str);
//	printf("The len of a string is : %d\n\n", size);
//	for (i = 0; i <= size; i++)
//	{
//		if (str[i] != ' ' && i != size)
//		{
//			max[0]++;
//			if (islower(*(str + i)))
//				max[1]+=1;
//			if (isupper(*(str + i)))
//				max[2]+=1;
//			printf("%c", *(str + i));
//		}
//		else
//		{
//			if (max[1] <= max[2] && max[2] > max[3])
//			{
//				max[3] = max[2];
//			}
//			printf(" - Method = %d\n", k++);
//			printf("The number of letters in a word %d\n", max[0]);
//			printf("Number of fine print %d\n", max[1]);
//			printf("Number of big letters %d\n\n\n", max[2]);
//			max[0] = 0;
//			max[1] = 0;
//			max[2] = 0;
//		}
//	}
//	printf("The word with the most uppercase letters is %d\n", max[3]);
//}
//void menu()//The main menu in the program
//{
//	char str[s] = { "Rivka AVI MOTi VERed SHLomo" };
//	//puts("Enter Your String with upper and lowercase letters");
//	//gets_s(str);
//	puts(str);
//	cnt_upper_lower(str);
//}
//void main()
//{
//	menu();
//	getchar();
//	system("cls");
//	main();
//}