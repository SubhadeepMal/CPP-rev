#include <bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int n, int x) { 
    int mid=0;
    int low=0;
    int high=n-1;
    while (low<=high) 
    { 
        mid= ((high + low)/2); 
        if (arr[mid]==x){
            cout<<x<<" found at: ";
            return mid;
        }
        else if (x>arr[mid])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[]={2,4,6,8,10,12};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<binsearch(arr,n,4)<<endl;
    //using CPP STL binary search in built command
    bool res= binary_search(arr,arr+n,6);
    if(res){
        cout<<"Element is present";
    }else{
        cout<<"Element is not present";
    }
    return 0;
}