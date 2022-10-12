#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	int tst_cases;
	cin>>tst_cases;
	for(int i=0;i<tst_cases;i++){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int one=0,zero=0;
	    for(int j=0;j<n;j++){
	      
	        if(s[j]=='0'){
	            zero++;
	        }
	        else{
	            one++;
	        }
	    }
	  
	    if(one%2!=0&&zero%2!=0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
