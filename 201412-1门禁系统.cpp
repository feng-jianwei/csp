/*************************************************************************
    > File Name: 201412-1门禁系统.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月04日 星期四 20时21分26秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>
map<int,int> m;
int x;
int main(){
	int n;cin>>n;
	while(n--){
		cin>>x;
		m[x]++;
		cout<<m[x]<<" ";
	}
	return 0;
}

