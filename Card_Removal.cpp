#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int tst_cases;
	cin>>tst_cases;
	for(int i=0;i<tst_cases;i++){
	    int val;
	    cin>>val;
	    vector<int> vec(val);
	    for(int j=0;j<val;j++){
	        cin>>vec[j];
	    }
	    sort(vec.begin(),vec.end());
	    int count=0,val1=0;
	    for(int k=0;k<vec.size()-1;k++){
	        if(vec[k]==vec[k+1]){
	            val1++;
	            if(val1>count){
	                count=val1;
	            }
	        }
	        else{
	            val1=0;
	        }
	    }
	    cout<<vec.size()-count-1<<endl;
	}
	return 0;
}
