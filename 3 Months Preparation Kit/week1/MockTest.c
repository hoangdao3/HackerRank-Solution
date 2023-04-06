#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Partition Function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
// Quick Sort function
void quicksort(int Arr[], int low, int high)
{
    if (low < high)
    {
        // pi = Partition index
        int pi = partition(Arr, low, high);
        quicksort(Arr, low, pi - 1);
        quicksort(Arr, pi + 1, high);
    }
}
int main()
{
    int N, A[100005];
    long sum = 0;
    scanf("%d", &N);
    int t = 0;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }
    quicksort(A, 1, N);
    printf("%d", A[(N + 1) / 2]);
}