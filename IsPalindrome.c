#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
	int start = 0, end = strlen(str)-1;
	char *p1 = str, *p2 = str + end;

	while(*p1++ == *p2--){
		start++;
		end--;
	}

	return start >= end;
}

int main()
{
   char text[100];
   int begin, middle, end, length = 0;

   scanf("%s",text);

   if(isPalindrome(text)){
   	printf("'%s'\n", "Palindrome");
   }else{
   	printf("%s\n", "Not a palindrome");
   }
   return 0;
}
