/*************************************************************************
    > File Name: 201512-1数位之和.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 09时24分10秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

int n;
int he(int &n){
	int ret=0;
	while(n){
		ret+=n%10;
		n/=10;
	}
	return ret;
}

int main(){
	cin>>n;
	int ret=he(n);
	cout<<ret;
	return 0;
}
	
