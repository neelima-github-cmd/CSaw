#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *string_to_check = (char *)malloc(100);
	char string_buf[100];

	printf("\n Please input a  string to check for parenthesis: ");
	scanf("%[^\n]", string_to_check);
	getchar();
	

	for(int i=0;i<strlen(string_to_check);i++)
		string_buf[i] = string_to_check[i];

	int bracket_small_open =0;
	int bracket_flower_open =0;
	int bracket_small_closed =0;
	int bracket_flower_closed=0;
	int bracket_big_open = 0;
	int bracket_big_closed =0;
	int balanced =0;
	int i;
	while(i<strlen(string_to_check))
	{
	switch(string_to_check[i])
	{
		case '(' : bracket_small_open++;
			   balanced++;
			   break;
		case ')' : bracket_small_closed++;
			   break;
		case '{' : bracket_flower_open++;
			   break;
		case '}' : bracket_flower_closed++;
			   break;
		case '[' : bracket_big_open++;
			   break;
		case ']' : bracket_big_closed++;
			   break;
		default : break;

	}
	i++;
	}

	printf("Small bracket : %d", bracket_small_open+bracket_small_closed);
	printf("Flower bracket : %d", bracket_flower_open+bracket_flower_closed);
	printf("Big bracket : %d", bracket_big_open+bracket_big_closed);
	
}
