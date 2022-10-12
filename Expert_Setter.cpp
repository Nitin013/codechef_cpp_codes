#include <iostream>
using namespace std;

int main() {
	int tst_cases;
	cin>>tst_cases;
	for(int i=1;i<=tst_cases;i++){
	    int x,y;
	    cin>>x>>y;
	    if(x%2==0){
	        if(y>=x/2){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else{
	         if(y>=x/2+1){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
