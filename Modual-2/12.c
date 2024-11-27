/*
12. File Handling in C
o Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.
*/
#include<stdio.h>
int main()
{
    FILE *fp1;
    // create a file in write mode.
    fp1 = fopen  ("first.txt","w");
    fprintf(fp1,"\nThis is my first file in c language.");
    fclose(fp1);

    // file open for read mode.
    fp1 = fopen("first.txt","r");
    fclose(fp1);
    return 0;
}