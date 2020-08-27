#include"searching.h"
using namespace std;
bool search_custom(vector<int> v ,int x){
	//input guaranteed to be in sorted order 
	bool f =0;
	for( size_t i =0 ; i<v.size() ; i++ ){
		if( x==v[i]){
			f =1;
			break;
		}
	}
	return f;

}