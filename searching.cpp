#include"searching.h"
using namespace std;

bool search_custom(vector<int> v ,int x,int l,int r){
	if(x == v[(l+r)/2])return true;
	if(l == r)return false;
	if(x > v[(l+r)/2])return search_custom(v,x,(l+r)/2 + 1,r);
	return search_custom(v,x,l,(l+r)/2);
}

