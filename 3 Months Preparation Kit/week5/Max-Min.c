#include <stdio.h>
void quicksort(int number[100000], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i <= last)
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
int main(){
    int n,a[100000],k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    quicksort(a,1,n);
    a[0]=-1000000;
    a[n+1]=-1000000;
    int head=1,min=1000000000;
    for(int i=1;i<=n-k+1;i++){
        if(a[i+k-1]-a[i]<min) {head=i;min=a[i+k-1]-a[i];}
    }
    printf("%d\n",a[head+k-1]-a[head]);
}