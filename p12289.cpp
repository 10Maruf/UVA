/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    char word[6];
    int t;
    scanf("%d", &t);

    while (t--)
    {
        cin >> word;
        ll len = strlen(word);
        if (len == 3)
        {
            if ((word[0] == 'o' && word[1] == 'n') || (word[1] == 'n' && word[2] == 'e') || (word[0] == 'o' && word[2] == 'e'))
                puts("1");
            else
                puts("2");
        }

        else
            puts("3");
    }

    return 0;
}
