#include <stdio.h>

#define MAX_LEN 120
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s",ch,s,sen);
       
    return 0;
}
