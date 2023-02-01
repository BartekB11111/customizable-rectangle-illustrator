#include <stdio.h>


void draw(int a, int b) {
    char symbol;
    printf("Give a symbol.\n");
    scanf(" %c", &symbol);
    for(int i=0; i<a; i++)
    {
        printf("\n");
        for(int j=0; j<b; j++)
        printf("%c", symbol);
    }
}
int main()
{
    int a,b;
    int check=0;
    while(check==0) {
        printf("Input two sides of square/rectangle.\n");
        scanf("%d %d", &a, &b);
        if(a&&b>=1)
        check=1;
        else
        printf("Invalid parameters. Side(s) cannot be smaller than 1.\n");
    }
    draw(a,b);
    return 0;
}
