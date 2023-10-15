#include <stdio.h>

int main()
{
    int a, b, max, x, y;
    while (scanf("%d %d", &a, &b) == 2)
    {
        max = 0;
        printf("%d %d ", a, b);
        if (a > b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        int i;
        for (i = a; i <= b; i++)
        {
            int count = 1;
            int current = i;
            while (current > 1)
            {
                if (current % 2 == 0)
                {
                    current = current / 2;
                }
                else
                    current = (3 * current) + 1;
                count++;
            }

            if (count >= max)
            {
                max = count;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
