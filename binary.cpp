#include<iostream>
using namespace std;

int binary(int a[],int n, int key)
{
	int s=0; int e=n-1;
	int mid;
	mid = (s+e)/2;
	while(s<=e)
	{
		if(a[key]>mid)
		{
			s=mid+1;	
		}
		else if (a[key]==mid)
		{
			return mid;
		}
		else 
		{
			e=mid-1;
		}
	return -1;
	}
}

int main()
{
int a[]={1,2,3,4,5,6,7,8};
int n=sizeof(a)/sizeof(int);
int key;
cin>>key;

binary(a,n,key);
cout<<key<<endl;


return 0;
}	