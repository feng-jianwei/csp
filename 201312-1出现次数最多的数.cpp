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
int num;

bool cmp(pii a,pii b){
	if(a.second!=b.second){
		return a.second>b.second;
	}
	return a.first<b.first;
}

int main(){
	cin>>n;
	while(n--){
		cin>>num;
		m[num]++;
	}
	vector<pii> ss(m.begin(),m.end());
	sort(ss.begin(),ss.end(),cmp);
	cout<<ss[0].first;
	return 0;
}

