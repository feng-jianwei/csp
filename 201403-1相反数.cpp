/*************************************************************************
    > File Name: 201403-1相反数.cpp
    > Author: fjw
    > Mail: 82906775@qq.com 
    > Created Time: 2019年06月28日 星期五 14时50分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define sl(i,x,n) for(int i = x; i < n ; i++)
#define ls(i,x,n) for(int i = x;i > n; i++)
#define pii pair<int,int>
#define maxn 1005
int n;
int arr[maxn];
int ret;
int main(){
	cin>>n;
	int num;
	while(n--){
		cin>>num;
		if(num>0){
			if(arr[num])ret++;
			else arr[num]++;
		}else{
			num=-num;
			if(arr[num]){
				ret++;
			}else{
				arr[num]++;
			}
		}
	}
	cout<<ret;
	return 0;
}

