#include<iostream>
using namespace std;
int main()
{
	int n,l,i,j,count;
	cout<<"Enter the values of n and k";
	cin>>n l;
	cout<<"\nEnter 1 for Police & 0 for theif\n";
	int a[10][10];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			
            if(a[i][j]==1)
			{
             for(k=1;k<=l;k++)
			{
		     if(i+k<=n&&i-k>=0)
		     {
                 if(a[i][j+k]==0)
                 {
                     count++;
                     a[i][j+k]=2;
                     a[i][j]=2;
                 
                 }
			     else if(a[i][j-k]==0)
			     {
                      count++;
                      a[i][j-k]==2;
                      a[i][j]==2;
                 }
                 else{}
                 }
	     }
                 
		}
	}
	cout<<endl<<count;
	return 0;
}
