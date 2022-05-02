#include<iostream.h>
#include<conio.h>

void merge(int a[] , int lb , int mid , int ub){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[100];

    while (i<=mid && j<=ub)
    {
	if(a[i] < a[j]){
	    b[k] = a[i];
	    i++;
	}else{
	    b[k] = a[j];
	    j++;
	}
	k++;
    }

    if(i>mid){
	while(j<=ub){
	    b[k] = a[j];
	    j++;
	    k++;
	}
    }else{
	while (i<=mid)
	{
	    b[k] = a[i];
	    i++;
	    k++;
	}
    }

    for(k=lb ; k<=ub ; k++){
	a[k] = b[k];
    }

}


void mergesort(int a[] , int lb , int ub){
    int mid;
    mid = (lb + ub)/2;

    if(lb<ub){
	mergesort(a , lb  , mid);
	mergesort(a , mid+1  , ub);
	merge(a , lb , mid , ub);
    }
}

int main()
{
    int n=10;
    int a[10];

    for(int i=0 ; i<n ; i++){
	cout<<"Enter element "<<i<<": ";
        cin>>a[i];
    }

    mergesort(a , 0 , n-1);

    cout<<"The sorted array is "<<endl;
    for(int j=0 ; j<n ; j++){
	cout<<a[j]<<" ";
    }
    getch();
    return 0;
}
