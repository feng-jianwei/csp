/*************************************************************************
    > File Name: 201312-1出现次数最多的数.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 14时58分38秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>

int n;
map<int,int> m;
int num,node;

int main(){
	cin>>n;
	while(n--){
		cin>>num;
		m[num]++;
	}
	num=0;
	for(auto x:m){
		if(num<x.second){
			num=x.second;
			node = x.first;
		}
	}
	cout<<node;
	return 0;
}

