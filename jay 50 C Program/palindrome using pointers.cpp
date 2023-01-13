// C program to check if a string is palindrome
// using pointers

#include <stdio.h>

void isPalindrome(char* string)
{
	char *ptr, *rev;

	ptr = string;

	while (*ptr != '\0') {
		++ptr;
	}
	--ptr;

	for (rev = string; ptr >= rev;) {
		if (*ptr == *rev) {
			--ptr;
			rev++;
		}
		else
			break;
	}

	if (rev > ptr)
		printf("String is Palindrome");
	else
		printf("String is not a Palindrome");
}

int main()
{
	char str[1000] = "madam";

	isPalindrome(str);

	return 0;
}

