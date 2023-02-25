#include <stdio.h>
#define MAX 100

int main()
{
	char str[MAX]={0};	
	int i;
	
	//input string
	printf("Enter a string: ");
	scanf("%[^\n]s",str); //read string with spaces
	
	//capitalize first character of words
	for(i=0; str[i]!='\0'; i++)
	{
		//check first character is lowercase alphabet
		if(i==1)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32;
                i++;
        }
    }
   printf("Capitalize string is: %s\n",str);
	
	return 0;
}