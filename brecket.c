#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int ct1 = 0, ct2 = 0, ct3 = 0;
    char ch[100];
    gets(ch);
    // printf("%d",sizeof(gets(ch)));

    char a = '(', b = '{', c = '[', d = ')', e = '}', f = ']';

    for (int i = 0; i < sizeof(gets(ch)) / sizeof(char); i++)
    {
        if (ch[i] == a)
        {
            ct1++;
        }
        else if (ch[i] == b)
        {
            ct2++;
        }
        else if (ch[i] == c)
        {
            ct3++;
        }
        else if (ch[i] == d)
        {
            ct1--;
        }
        else if (ch[i] == e)
        {
            ct2--;
        }
        else if (ch[i] == f)
        {
            ct3--;
        }
    }

    if ((ct1 + ct2 + ct3) == 0)
    {
        printf("Expression valid.");
    }
    else
    {
        printf("Expression is not valid");
    }
    return 0;
}