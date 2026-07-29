// 
#include <iostream>
using namespace std;

void find_maxinarray(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The maximum number is " << max << endl;
}

void find_min_array(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The minimum number is " << min << endl;
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value for index " << i << ": ";
        cin >> arr[i];
    }

    find_maxinarray(arr, size);
    find_min_array(arr, size);

    return 0;
}