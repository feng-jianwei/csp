/*************************************************************************
    > File Name: 201503-2数字排序.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年07月04日 星期四 19时03分01秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i--)
#define pii pair<int,int>
#define maxn 1010
int d[maxn];

priority_queue<pair<int,int> >q;

int main(){
	int n,x;cin>>n;
	while(n--){
		cin>>x;
		d[x]++;
	}
	while(!q.empty())q.pop();
	sl(i,1,1001){
		if(d[i]){
			q.push(make_pair(d[i],-i));
		}
	}
	while(!q.empty()){
		pii x=q.top();q.pop();
		cout<<-x.second<<" "<<x.first;
		cout<<endl;
	}
	return 0;
}

