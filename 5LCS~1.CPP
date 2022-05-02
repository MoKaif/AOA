#include<iostream.h>
#include<conio.h>
#include<string.h>

int i,j,m,n, c[20][20];
char b[20][20],x[20],y[20];

void print(int i , int j){
    if(i==0 || j==0){
	return;
    }if(b[i][j] == 'c'){
	print(i-1,j-1);
	cout<<x[i-1];
    }else if(b[i][j] == 'u'){
	print(i-1,j);
    }else{
	print(i,j-1);
    }
}

void lcs(){
    m = strlen(x);
    n = strlen(y);
    for(i = 0; i<=m ; i++){
	c[i][0] = 0; //i row 0 column
    }

    for(j = 0 ; j<=n ; j++){
	c[0][i] = 0;
    }

    for(i = 1 ; i<=m ; i++){
	for(j =1; j<=n ; j++){
	    if(x[i-1] == y[j-1]){     //x[1] == t   y[6]== t
		c[i][j] = c[i-1][j-1] + 1;
		b[i][j] = 'c';
	    }else if(c[i-1][j] >= c[i][j-1]){  //c[0][7] = 1  >= //c[1][6] = 0
		c[i][j] = c[i-1][j];   //c[1][1] = 0
		b[i][j] = 'u';
	    }else{
		c[i][j] = c[i][j-1];    //c[1][6] = 1
		b[i][j] = 'l';
	    }
	}
    }
}

int main()
{
    clrscr();
    cout<<"Enter Pattern1: ";
    cin>>x;

    cout<<"Enter Pattern2: ";
    cin>>y;

    cout<<"The longest Sequence is: "<<endl;
    lcs();
    print(m , n);
    getch();
    return 0;
}