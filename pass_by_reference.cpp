#include<iostream>
using namespace as std

void increament(int *a)
{
	*a = *a + 1;
	cout<<"inside function"<< *a;
}

int main()
{
	int a =10;
	increament(&a);
	cout<<"inside main"<<a;
	return 0;
}