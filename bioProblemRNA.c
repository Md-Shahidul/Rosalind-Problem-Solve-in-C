#include<stdio.h>

int main()
{
    char ch[1000];
    gets(ch);

    int i;

    for(i=0;ch[i] != '\0'; i++)
    {
        if (ch[i] == 'T')
        {
            ch[i] = 'U';
        }
    }
    printf("\n\n\n");
    puts(ch);

    return 0;
}
