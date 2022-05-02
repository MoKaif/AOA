#include<iostream.h>
#include<conio.h>

void insert(int a[] , int n){

    int i,j,temp;
    for(i = 1 ; i<n ; i++){
	temp = a[i];
	j = i - 1;

	while(j>=0 && a[j]>temp){
	    a[j+1] = a[j];
	    j--;
	}
	a[j+1] = temp;
    }
}

void printArr(int a[] , int n){

    int i;
    for ( i = 0; i < n; i++)
    {
	cout<<a[i]<<" ";
    }
}

int main(){
    clrscr();
    int a[] = {70,12,2,91,30,10};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"Before Insertion of Array: ";
    printArr(a , n);
    insert(a,n);
    cout<<endl<<"After Insertion of Array: ";
    printArr(a , n);
    getch();
    return 0;
}