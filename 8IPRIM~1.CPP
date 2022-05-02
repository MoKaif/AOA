#include<iostream.h>
#include<conio.h>
int main()
{
    clrscr();
    int visited[10]={0},cost[10][10],i,j,a,b,u,v,ne=1,n,mincost=0 ,min;

    cout<<"Enter the number of nodes: ";
    cin>>n;

    cout<<"Enter the adjancent Matrix"<<endl;
    for(i = 1; i<=n; i++){
	for(j=1 ; j<=n ; j++){

	    cin>>cost[i][j];
	    if (cost[i][j] == 0)
		cost[i][j] = 999;
	}
    }
    visited[1] = 1;
    while (ne<n)
    {
	for(i = 1,min=999; i<=n ; i++){
	    for(j=1 ; j<=n ; j++){
		if(cost[i][j]<min){
		    if(visited[i] != 0){
			min = cost[i][j];
			a = u = i;
			b = v = j;
		    }
		}
	    }
	}

	if(visited[u]==0 || visited[v]==0){
	    cout<<"Edge"<<ne++<<" ("<<a<<","<<b<<")"<<" cost: "<<min<<endl;
	    mincost = mincost +  min;
	    visited[b] = 1;
	}
	    cost[a][b] = cost[b][a] = 999;
    }
    cout<<"\nMinimum cost is: "<<mincost;
    getch();
    return 0;
}
/*
0 3 1 6 0 0
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0
*/
