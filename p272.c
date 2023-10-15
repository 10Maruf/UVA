#include <stdio.h>
#include <string.h>

int main()
{
    char line[1024];
    int open = 1;

    while (fgets(line, sizeof(line), stdin))
    {
        int len = strlen(line);
        int i;
        for (i = 0; i < len; i++)
        {
            if (line[i] == '"')
            {
                if (open)
                    printf("``");
                else
                    printf("''");

                open = !open;
            }
            else
                printf("%c", line[i]);
        }
    }

    return 0;
}
