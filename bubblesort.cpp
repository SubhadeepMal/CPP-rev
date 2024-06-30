#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 3, 6, 5};

    for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i > 0; i--)
    {
        for (int j = 0; j <i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // print the modified array
    cout << "The sorted array is: "<<endl;
    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        cout << arr[i] << " ";
    }
    //return 0;
}