//PBTDFS BY KARTHI
#include<iostream>
#include<list>
using namespace std;
int main()
{
    int v,e,i,j,k,t1,t2,cost[100][100],visit[100];
    cout<<"\nEnter the number of vertices\n";
    cin>>v;
    cout<<"\nEnter the number of  edges\n";
    cin>>e;
    cout<<"\nEnter Edges\n";
    for(i=0;i<e;i++)
    {
        cin>>t1>>t2;
        cost[t1][t2]=1;
    }
    for(i=0;i<v;i++)
        visit[i]=0;
    cout<<"\nBFS\n";
    cout<<"\n1 ";
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(cost[i][j]>0&&visit[j]==0)
            {
                visit[j]=1;
                cout<<j<<" ";
            }
        }
    }
    return 0;
}
