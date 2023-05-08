#include <stdio.h>

int main()
{
    char a[100],b[100];
    printf("Enter the first string: ");
    gets(a);   //  first string
    printf("Enter the second string to be concatenated: ");
    gets(b);   //  second string
    char *aa = a;
    char *bb = b;
// pointing to the end of the 1st string
   
    while(*aa)   // till it doesn't point to NULL-till string is not empty
    {
        aa++;    // point to the next letter of the string
    }
    while(*bb)   // till second string is not empty
    {
        *aa = *bb;
        bb++;
        aa++;
    }
    *aa = '\0';  // string must end with '\0'
    printf("The string after concatenation is: %s ", a);
    return 0;
}
