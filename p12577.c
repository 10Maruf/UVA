#include <stdio.h>

int main()
{
    char input[20];
    int t = 1;

    scanf("%s", input);

    while (input[0] != '*')
    {
        if (input[0] == 'H')
            printf("Case %d: Hajj-e-Akbar\n", t);
        else
            printf("Case %d: Hajj-e-Asghar\n", t);

        t++;
        scanf("%s", input);
    }

    return 0;
}
