#include<iostream>
using namespace std;
int main(void) 
{
    int mat[4][3]={0};
    int i,j,k;
    cout<<"Please insert your matrix? ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        cin>>mat[j][i];
    }
    for(i=2;i>0;i--)
    {
	for(j=0;j<i;j++)
   	{
            if(mat[0][j]>mat[0][j+1])
            {
            	for(k=0;k<4;k++)
                    swap(mat[k][j],mat[k][j+1]);
            }
    	}
    }
    for(i=0;i<3;i++)
    {
	for(j=0;j<4;j++)
	    cout<<mat[j][i]<<'\t';
	cout<<endl;
    }
    return 0;
} 
