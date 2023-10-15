#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    while (fgets(a, sizeof(a), stdin))
    {
        printf("%s", a);
    }
    return 0;
}
