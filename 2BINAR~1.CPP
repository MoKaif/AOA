#include <iostream.h>
#include<conio.h>

int binarySearch(int arr[], int l, int r, int n)
{
    int mid = (l+r)/2;
    int notfound = -1;
    if(n==arr[mid])
    {
	return mid;
    }
    else if(arr[mid]>n)
    {
	return binarySearch(arr, l, mid-1, n);
    }
    else if (arr[mid]<n)
    {
	return binarySearch(arr, mid+1, r, n);
    }
    else
    {
	return notfound;
    }
}

int main()
{
    int array[10];
    cout<<"Enter 10 elements for the sorted array:"<<endl;
    for(int i =0;i<10;i++)
    {
	cin>>array[i];
    }
    int t;
    cout<<"Enter the element you want to search in the array: ";
    cin>>t;
    int a = 10;
    int res = binarySearch(array, 0, a-1, t);
    if(res == -1)
    {
	cout<<"Item not found"<<endl;
    }
    else
    {
	cout<<"item found at position : "<<res+1<<endl;
    }
    getch();
    return 0;
}