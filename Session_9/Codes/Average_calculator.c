#include <stdio.h>
double calculateAverage(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main()
{
    int marks[] = {85, 90, 78, 92, 88};
    int n = 5;

    double avg = calculateAverage(marks, n);
    printf("The average marks are: %.2f", avg);
    return 0;
}