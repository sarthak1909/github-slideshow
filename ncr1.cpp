#include<iostream>
using namespace std;

int factorial(int n)
{
	int ans=1;
	for(int i=0;i<n;i++)
	{
		ans= ans*i;
	}
	return ans;
}

int main()
{
	int n,r;
	cin>> n>> r;

	int nfact=factorial(n);
	int rfact=factorial(r);
	int nrfact=factorial(n-r);
	int fact= nfact/(rfact * nrfact);
}