#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        if (n == 2)
        {
            printf("YES \n");
            break;
        }

        int unique[n];
        int uniqueCount = 0;

        for (int i = 0; i < n; i++)
        {
            int isUnique = 1;

            for (int j = 0; j < uniqueCount; j++)
            {
                if (a[i] == unique[j])
                {
                    isUnique = 0;
                    break;
                }
            }

            if (isUnique)
            {
                unique[uniqueCount] = a[i];
                uniqueCount++;
            }
        }

        if (uniqueCount == 0)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {

                if (a[n] == unique[0])
                {
                    count++;
                }
            }
            if (count == n)
            {
                printf("YES \n");
            }
        }

        else if (uniqueCount == 1)
        {
            int c1 = 0;
            int c2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (unique[0] == a[i])
                {
                    c1++;
                }
                if (unique[0] == a[i])
                {
                    c2++;
                }
            }

            if (c1 == n / 2 && c2 == (n / 2) + 1)
            {
                printf("yes \n");
            }
            else if (c2 == n / 2 && c1 == (n / 2) + 1)
            {
                printf("yes \n");
            }
            else
            {
                printf("no \n");
            }
        }
        else
        {
            printf("no \n");
        }
    }

    return 0;
}