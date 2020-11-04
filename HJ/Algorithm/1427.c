#include <stdio.h>

#define swap(a, b, type) {type temp; temp = a; a = b; b = temp;}
int quickSort(int *data, int left, int right);

int main()
{
    int input[10] = {0};
    int N=0;
    char str[11] = "";

    scanf("%s", str);

    for (int i = 0; i < 11; i++)
    {
        if(str[i] == '\0') {
            N=i;
            break;
        }
        input[i] = str[i] - '0';
    }
    
    quickSort(input, 0, N-1);

    for (int i = N-1; i >= 0; i--)
    {
        printf("%d", input[i]);
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
