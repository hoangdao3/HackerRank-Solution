#include <stdio.h>
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
 
// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(){
    int n,a[200001];
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    quickSort(a, 1, n);
    int max=0,count=0,result;
    a[0]=a[1]-1;
    a[n+1]=a[n]-1;
    for(int i=1;i<=n+1;i++){
        if(a[i]==a[i-1]) {
            count+=1;
        }
        if(a[i]!=a[i-1]){
            count=0;
        }
        if(count>max) {
            max=count;
            result=a[i];
        }
    }
    printf("%d",result);
}







