/*************************************************************************
    > File Name: 201509-2日期计算.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 13时05分43秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
int y,d;
bool rn(int x){
	return ((x%4==0&&x%100!=0)||x%400==0);
}

int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

void yd(int m,int n){
	sl(i,1,13){
		if(n<=days[i]+(i==2&&rn(m))){
			y=i;d=n;
			return;
		}
		n-=(days[i]+(i==2&&rn(m)));
	}
}

int main(){
	cin>>y>>d;
	yd(y,d);
	cout<<y<<endl<<d;
	return 0;
}

