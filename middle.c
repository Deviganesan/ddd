#include<stdio.h>
void main()
    {

        int i, j, a, n, number[30];
        scanf("%d", &n);

        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }
        {

            if(n/2==0)
            {

          printf("%d",number[(n+1)/2]);}
            else{

                printf("%d",number[n/2]);

            }
    }

        }
