#include<iostream>
using namespace std;
int fact(int x)
{
	int y=0;
	for(int j=1;j<=x;j++)
	{
		y+=j;
	}
	return y;
}
int main()
{
	long int i,n,a,ans;
	cout<<"\nEnter the first chamber particals\n";
	cin>>a;
	cout<<"\nEnter the numberth\n";
	cin>>n;
	i=fact(n);
	ans=i*a;
	cout<<endl<<ans;
	return 0;
}
