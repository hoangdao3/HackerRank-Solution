#include <stdio.h>

void quicksort(int number[25], int first, int last)
{

    int i, j, pivot, temp;

    if (first < last)
    {

        pivot = first;

        i = first;

        j = last;

        while (i < j)
        {

            while (number[i] <= number[pivot] && i < last)

                i++;

            while (number[j] > number[pivot])

                j--;

            if (i < j)
            {

                temp = number[i];

                number[i] = number[j];

                number[j] = temp;
            }
        }

        temp = number[pivot];

        number[pivot] = number[j];

        number[j] = temp;

        quicksort(number, first, j - 1);

        quicksort(number, j + 1, last);
    }
}
int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 1, n);
    int max=0;
    for(int i=1;i<n;i++)
     for(int j=i;j<=n;j++) 
       if(a[j]-a[i]<=1&&j-i+1>max) max=j-i+1; 
    printf("%d",max);
}
