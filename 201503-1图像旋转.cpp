/*************************************************************************
    > File Name: 201503-1图像旋转.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月04日 星期四 18时51分05秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>
#define maxn 1005
int d[maxn][maxn];

int main(){
	int n,m;cin>>n>>m;
	sl(i,0,n){
		sl(j,0,m){
			cin>>d[i][j];
		}
	}
	ls(j,m-1,-1){
		sl(i,0,n){
			i==0||cout<<" ";
			cout<<d[i][j];
		}
		cout<<endl;
	}
	return 0;
}

