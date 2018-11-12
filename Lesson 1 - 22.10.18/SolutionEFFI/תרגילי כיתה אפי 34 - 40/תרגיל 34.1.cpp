//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#define s 50
//void cnt_upper_lower(char str[s])//Executive function Check amount of words that contain more upper letters than lowercase letters
//{
//	int i, size;
//	int max[3] = { 0 };
//	size = strlen(str);
//	printf("\nThe len of a string is : %d\n", size);
//	for (i = 0; i <= size; i++)
//	{
//		if (*(str+i) != ' ' && i != size)
//		{
//			if (islower(*(str + i)))
//				max[0] += 1;
//			if (isupper(*(str + i)))
//				max[1] += 1;
//		}
//		else
//		{
//			if (*max < *(max+1))
//			{
//				*(max+2)+=1;
//			}
//			*(max) = 0;
//			*(max+1) = 0;
//		}
//	}
//	printf("\nThe amount of words that contain more upper letters than lowercase letters is %d\n", max[2]);
//}
//void menu()//The main menu in the program
//{
//	char str[s] = { "Rivka AVI MOTi VERed SHLomo                    " };
//	//puts("Enter Your String with upper and lowercase letters");
//	//gets_s(str);
//	puts("The string is");
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