/*************************************************************************
    > File Name: 201809-1数列分段.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 09时35分38秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005
int n;
int duan(int *a){
	int k=a[0],ret=1;
	sl(i,0,n){
		if(k!=a[i]){
			ret++;
			k=a[i];
		}
	}
	return ret;
}

int arr[maxn];
int main(){
	cin>>n;
	sl(i,0,n){
		cin>>arr[i];
	}
	int ret = duan(arr);
	cout<<ret;
	return 0;
}

