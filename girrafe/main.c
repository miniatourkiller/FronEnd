#include <stdio.h>
#include <stdlib.h>
int main()
{

    char name[20];
    char pluralnoun[20];
    char noun[20];
    printf("Enter a name:");
    scanf("%s", name);
    printf("Enter a plural noun:");
    scanf("%s", pluralnoun);
    printf("Enter a celebrity:");
    scanf("%s", noun);

    printf("%s one in million \n", name);
    printf("Most %s lady i know\n", &pluralnoun);
    printf("%s are everything i need and more\n", noun);
    return 0;
}
