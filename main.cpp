#include"searching.h"
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	int x;
	cin>>x;
	for(int i =0 ; i<n ; i++){
		cin>>v[i];
	}
	if(search_custom(v,x))
		cout<<"Found"<<endl;
	else
		cout<<"Not Found";
}