/*
10. Strings in C
o Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().
*/
#include<stdio.h>
#include<string.h>
int length(char str1[],char str2[])
{

    int i,count=0,j;
    for(i=0;str1[i]!='\0';i++) // using loop to count the string-1 word.  
    {
        count++;
    }
    for ( i = 0; str2[i]!='\0'; i++) // using loop to count string-2 word.
    {
        count++;
    }
    
    return count; 
}
int main()
{
    char str1[100],str2[100];
    printf("\nEnter the string value = "); // take string-1 for user.
    gets(str1); // store the string-1 value.
    printf("\nEnter the string value = "); // take string-2 for user.
    gets(str2); // store the string-2 value.

    printf("\nOriginal string = %s",str1); // print original stirng-1. 
    printf("\nOriginalstring = %s",str2);  // print original string-2.

    int ans = length(str1,str2); // using length function and print length for str1 and str2.

    printf("\nThe legth is = %d",ans);

    strcat(str1,str2); // using concatenated function and print string.

    printf("\nvalue of str1 after using strcat() function = %s",str1);
    printf("\nValue of str2 after using strcat() funcction = %s",str2);
    return 0;
}