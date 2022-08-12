//binary search in c++
#include<iostream>
using namespace std;
int binary_search(int arr[],int lb,int ub,int x){
	
	if(lb<=ub)
	{
	int mid=(lb+ub)/2;
	
	if(x==arr[mid])
	return mid;
	else if(x>arr[mid])
	return binary_search(arr,mid+1,ub,x);
    else if(x<arr[mid])
	return binary_search(arr,lb,mid-1,x);

	}
	return -1;
	
}
int main(){
	int arr[20],n,i;
	cout<<"input the number of elements you want to store in the array: "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{cout<<i<<" : ";
	cin>>arr[i];
	}
	cout<<"the array is as follows "<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
	int x;
	cout<<"input the element you want to search: "<<endl;
	cin>>x;
	int index=	binary_search(arr,0,n,x);
	if(x>=0)
    cout<<"the pos is  "<<index;
    else cout<< "not present"<<endl;
    return 0;

}

