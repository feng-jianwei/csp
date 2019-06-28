/*************************************************************************
    > File Name: 201409-1相邻数对.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 12时21分22秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005

int a[maxn];

int main(){
	int n;
	cin>>n;
	sl(i,0,n){
		cin>>a[i];
	}
	sort(a,a+n);
	int ret=0;
	sl(i,0,n-1){
		if(a[i]+1==a[i+1]){
			ret++;
		}
	}
	cout<<ret;
	return 0;
}

