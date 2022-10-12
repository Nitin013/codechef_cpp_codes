#include <iostream>
using namespace std;

int main() {
	int tst_cases;
	cin>>tst_cases;
	for(int i=0;i<tst_cases;i++){
	    int n,k;
	    cin>>n>>k;
	    int val=n/k;
	    cout<<val*val<<endl;
	}
	return 0;
}
