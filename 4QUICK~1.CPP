//QuickSort Code
#include<iostream.h>
#include<conio.h>


int position(int a[] , int lb , int ub){
	int pivot = a[lb];
	int start = lb;
	int end = ub;
	int temp;

	do{
		while(a[start] <= pivot){
			start++;
		}
		while(a[end] > pivot){
			end--;
		}

		if(start<end){
		temp = a[end];
		a[end] = a[start];
		a[start] = temp;
		}

	}while(start<end);
	temp = a[end];
	a[end] = a[lb];
	a[lb] = temp;

	return end;
}


void Quicksort(int a[] , int lb , int ub){
	if(lb<ub){
		int loc = position(a , lb ,ub);

		Quicksort(a , lb , loc-1);
		Quicksort(a , loc+1 , ub);

	}

}


int main(){
	clrscr();
	int n = 10;
	int a[10];
	cout<<"Enter 10 elements"<<endl;

	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}

	Quicksort(a,0,n-1);

	cout<<"After sorting the values are: \n";

	for(int j=0 ; j<n ; j++){
		cout<<a[j]<<" ";
	}
	getch();
	return 0;
}