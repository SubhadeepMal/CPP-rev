#include <iostream>
using namespace std;

int main()
{
    // 1-D array
    // int arr[] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Element at position " <<i<<": " ;
    //     cout<<arr[i]<<endl;
    // }

    // 2-D array:

    // int array2d[2][3]= {{1, 2, 3}, {4, 5, 6}};
    // cout<<"Size of 2-D array: "<<sizeof(array2d)[0]<<endl;
    // cout << "Number of rows in the 2D array is :" << sizeof(array2d)/sizeof(array2d[0]) << endl;
    // cout << "Number of columns in the 2D array is :" << sizeof(array2d[0])/sizeof(array2d[0][0]) << endl;

    for(int i=0; i<sizeof(array2d)/sizeof(array2d[0]); i++ )
    {
        for(int j=0;j<sizeof(array2d[0])/sizeof(array2d[0][0]);j++)
        {
            cout << "Element at position [" << i << "][" << j << "]: ";
            cout << array2d[i][j] << endl;
        }
    }
}