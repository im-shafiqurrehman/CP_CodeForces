#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Solve(){
	int n,x=0;
	cin>>n;
	string oper;
	for(int i=0;i<n;i++){
		cin>>oper;
		if(oper =="X++" || oper == "x++" || oper== "++X" || oper== "++x") x++;
		if(oper =="--X" || oper == "--x" || oper== "x--" || oper=="X--") x--;
	};	
	cout<<x<<endl;
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	while(t--){
		Solve();
	};
	return 0;
}