#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int p[]={10,5,3,10};
    int m[4][4]={0}; // matrix table
    int s[4][4]={0}; // parenthesis table
    int j,min1,q;
    for(int d=1;d<n-1;d++)
    {
        for(int i=1;i<n-d;i++)
        {
            j=i+d;
             min1=32767;
            for(int k=1;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]; //matrix chain multiplication formula
                if(q<min1)
                {
                    min1=q;
                    s[i][j]=k;
                }
            }
            m[i][j]=min1;
        }
        cout<<m[1][n-1];
    }
    return 0;
}