//
//  Gaussian_Elimination(3*3)
//
//  Created by 江承翰 on 2017/4/5.
//  Copyright © 2017年 江承翰. All rights reserved.
//
#include <iostream>
#include <cstdlib>
using namespace std;
template<typename T,size_t M,size_t N>
void row_sub(T (&arr)[M][N],int a,int b,int m)
{
    for(size_t i=0;i<M;i++)
    {
        arr[i][a]*=m;
        arr[i][a]-=arr[i][b];
    }
}
int main(void) {
    int mat[4][3]={0};
    int i,j,mul=0;
    cout<<"Please insert your matrix?";
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        cin>>mat[i][j];
    }
    for(i=0;i<3;i++)
    {
        if(mat[0][i]<mat[0][i+1])
        {
            for(j=0;j<4;j++)
                swap(mat[j][i],mat[j][i+1]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;i<3;i++)
        {
            if(i==j)
                continue;
            if(!mat[j][i]%mat[j][j])
                mul=mat[j][i]/mat[j][j];
            else
            {
                mul=mat[j][i];
                mat[j][i]*=mat[j][j];
            }
            row_sub(mat,j,i,mul);
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
