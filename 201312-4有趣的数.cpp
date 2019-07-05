/*************************************************************************
    > File Name: 201312-4有趣的数.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月05日 星期五 17时19分03秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>
#define maxn 1005
#define mod 1000000007
int n;

long long d[maxn][7];
int main(){
	cin>>n;
	d[1][1]=1;
	for(int i=2;i<n+1;i++){
		d[i][1]=d[i-1][1];
		d[i][2]=(d[i-1][1]+d[i-1][2])%mod;
		d[i][3]=(d[i-1][1]+d[i-1][3]*2)%mod;
		d[i][4]=(d[i-1][2]+d[i-1][3]+d[i-1][4]*2)%mod;
		d[i][5]=(d[i-1][3]+d[i-1][5]*2)%mod;
		d[i][6]=(d[i-1][4]+d[i-1][5]+d[i-1][6]*2)%mod;
	}
	cout<<d[n][6];
	return 0;
}

