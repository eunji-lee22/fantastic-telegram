#include <stdio.h>

#define swap(a, b, type) {type temp; temp = a; a = b; b = temp;}
int quickSort(int *data, int left, int right);

int main()
{
    int input[1001] = {0};
    int N=0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &input[i]);
    }
    
    quickSort(input, 1, N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", input[i]);
    }
    

    return 0;
}

int quickSort(int *data, int left, int right) {
    if(left >= right) return 0;

    int pivot = (left + right) / 2;
    int low = left, high = right;

    while(low < high){
        while(data[pivot] <= data[high] && high >= left) high--;
        while(data[pivot] >= data[low] && low <= right) low++;
        
        if(low >= high) break;
        swap(data[low], data[high], int);
    }
    int p=pivot;

    if(pivot < high) {
        swap(data[pivot], data[high], int);
        p = high;
    }
    else if (low < pivot) {
        swap(data[low], data[pivot], int);
        p = low;
    }
    
    quickSort(data, left, p-1);
    quickSort(data, p+1, right);

    return 0;
}
