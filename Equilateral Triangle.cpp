using namespace std;
#include<iostream>
void pattern(int);
main()
{
	int n;
	cout<<"Enter the number of rows to print pattern:";
	cin>>n;
	pattern(n);
}
void pattern(int x)
{
	int i,j;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=2*x-1;j++)
		{
			if(j>=x-(i-1) && j<=x+(i-1))
				cout<<"*";
			else
				cout<<" ";	
		}
		cout<<endl;
	}
}
