#include <iostream>
using namespace std;

int main() {
	int test_cases;
	cin>>test_cases;
	for(int i=1;i<=test_cases;i++){
	    int val;
	    cin>>val;
	    if(val>100){
	        cout<<val-10<<endl;
	    }else
	    cout<<val<<endl;
	}
	return 0;
}
