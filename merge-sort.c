#include <cs50.h>
#include <stdio.h>

void merge_sort(int array[], int start, int end);
void merge(int array[], int start, int mid, int end);

int main(void)
{
    int n = get_int("how much: ");
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("numbers: ");
    }

    merge_sort(numbers, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

void merge_sort(int array[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    merge_sort(array, start, mid);
    merge_sort(array, mid + 1, end);
    merge(array, start, mid, end);  
}

void merge(int array[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = array[start + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = array[mid + 1 + j];
    }

    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}
