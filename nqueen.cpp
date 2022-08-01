#include<stdio.h>
#include<math.h>
int x[20],c=0;
int place(int ,int);
void display(int );
void nqueen(int k, int n){
	int i;
	for(i=1;i<=n;i++){
		if(place(k,i)){
			x[k]=i;
			if(k==n){
				display(n);
				}
			else
			nqueen(k+1,n);
		}
	}
}
int place(int k, int i){
	int j;
	for(j=1;j<=k-1;j++){
		if(x[j]==i||abs(j-k)==abs(x[j]-i))
		return 0;
	}
	return 1;
}
void display(int n){
	int i ,j;
	c++;
	printf("\n number of sol: %d ",c);
	for(i=1;i<=n;i++){
		printf("\n");
	for(j=1;j<=n;j++){
		if(x[i]==j)
		printf("Q\t");
		else 
		printf("_\t");
	}
	printf("\n\n");
	}
}
void main(){
	int n;
	printf("enter the number of queens ");
	scanf("%d",&n);
	nqueen(1,n);
}
