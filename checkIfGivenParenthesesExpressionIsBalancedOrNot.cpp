#include <stdbool.h> 
#include <stdio.h>

// Function to check if
// parentheses are balanced
bool isBalanced(char exp[])
{
	// Initialising Variables
	bool flag = true;
	int count = 0;

	// Traversing the Expression
	for (int i = 0; exp[i] != '\0'; i++) {

		if (exp[i] == '(') {
			count++;
		}
		else {
			// It is a closing parenthesis
			count--;
		}
		if (count < 0) {
			// This means there are
			// more Closing parenthesis
			// than opening ones
			flag = false;
			break;
		}
	}

	// If count is not zero,
	// It means there are more
	// opening parenthesis
	if (count != 0) {
		flag = false;
	}

	return flag;
}


int main()
{
	char exp1[] = "((()))()()";

	if (isBalanced(exp1))
		printf("Balanced \n");
	else
		printf("Not Balanced \n");

	char exp2[] = "())((())";

	if (isBalanced(exp2))
		printf("Balanced \n");
	else
		printf("Not Balanced \n");

	return 0;
}
