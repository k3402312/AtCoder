#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int a, b, k, i;
	cin >> a >> b >> k;
	vector<int>vec;

	if (b-a < k) k=b-a+1;

	for (int i=0; i<k; i++){
		vec.push_back(a+i);
	}
	for (int i=k; i>0; i--){
		vec.push_back(b-i+1);
	}
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
	for (vector<int>::iterator i=begin(vec); i!=end(vec); ++i){
		cout << *i << endl;
	}
	return 0;
}	
