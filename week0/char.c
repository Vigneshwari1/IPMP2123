#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s1,s2[50],s3[100];
    scanf("%c",&s1);
    scanf("%s",s2);
    scanf("\n");
    scanf("%[^\n]%*c",s3);
    printf("%c\n%s\n%s",s1,s2,s3);
        
    return 0;
}
