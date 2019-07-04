/*************************************************************************
    > File Name: 201409-2画图.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月04日 星期四 20时28分54秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>

#define maxn 105

int x1,x2,m,y2;
int d[maxn][maxn];

int main(){
	int n;cin>>n;
	while(n--){
		cin>>x1>>m>>x2>>y2;
		sl(x,x1,x2){
			sl(y,m,y2){
				d[x][y]=1;
			}
		}
	}
	int cnt=0;
	sl(i,0,101){
		sl(j,0,101){
			if(d[i][j]){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}

