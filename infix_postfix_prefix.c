
#include <stdio.h>
#include <stdlib.h>
#define Blank ' '
#define Tab '\t'
#define MAX 100
#define _ printf
#define __ scanf

long int pop();
char infix[MAX],postfix[MAX],prefix[MAX];
long int stack[MAX];
int top;

//functions
infix_to_postfix();
infix_to_prefix();

white_space(char symbol);
long int pop();
push(long int symbol);
prec(char symbol);

int main()
{
	long int value;
	char choice = 'y';
	while(choice == 'y')
	{
		top = 0;
		_("Enter infix : ");
		__("%[^\n]",infix);
		getchar();
		infix_to_postfix();
		_("Postfix : %s\n", postfix);
		_("Want to continue(y/n) : ");
		__("%c", &choice);

	}
}
/*
 * 1. Scan the infix expression from left to right
 * 2. If the scanned character is an operand output it 
 * 3. Else,
 *    1. If the precedence of the scanned operator is greater than the precedence of the 
 *       operator in the stack(or the stack is empty or the stack contains a '('),
 *       push it
 *    2. Else pop all the opeartors from the stack which are greater than or equal to in precedence
 *       than that of the scanned operator. after doing tha push the scanned operator to the stack
 */
//Highest precedence is at popped at last as its first item in tree from top
infix_to_postfix()
{
	int i, p=0, type, precedence,len;
	char next;
	stack[top]='#';
	len=strlen(infix);
	infix[len]='#';

	for(i=0;infix[i]!='#';i++)
	{
		if(!white_space(infix[i]))
		{
			switch(infix[i])
			{
				case '(': push(infix[i]);
					  break;

				case ')': while((next = pop()) != '(')
					  postfix[p++] = next;
					  break;
				case '+':
				case '-':
				case '*':
				case '/':
				case '%':
				case '^':
					  precedence = prec(infix[i]);
					  while(stack[top]!='#' && precedence <= prec(stack[top])
						postfix[p++] = pop();
					  push(infix[i]);
					  break;
				default:
					 postfix[p++] = infix[i];
			}
		}
	}
	while(stack[top]!= '#')
	postfix[p++] = pop();
	postfix[p] = '\0';

}

prec(char symbol)
{
	switch(symbol)
	{
		case '(': return 0;
		case '+': 
		case '-': return 1;
		case '*':
		case '/':
		case '%':return 2;
		case '^':return 3;

	}
}


infix to prefix()
{
	/* Reverse string
	 * Replace (with) and vice versa
	 * Get Postfix
	 * Reverse Postfix * */

	 int l = infix.size();

	 //Reverse infix
	 reverse();//Infix expression

	 //Replace small open bracket with closed small and vice versa
	 for(int i=0;i<l;i++)
	 {
		 if (infix[i] == '(')
		 {
			 infix[i] = ')';
			 i++;
		 }
		 else if (infix[i] == ')')
		 {
			 infix[i] = '(';
			 i++;
		 }

	 }

	 prefix = infixToPostfix();

	 reverse(); //reverse postfix to get prefix
}
