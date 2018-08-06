
 
#include <iostream>
 
using namespace std;
 
 
 
int main(){
	int t;
	cin >> t;
	int n;
	char x ;
	long long count;
	while(t){
		cin >> n;
		count =0;
		
		for(int i =0; i< n;i++){
			cin >> x;
			if(x == '1')
				count++;
		}
		cout <<(count*(count+1))/2<<endl;
 
		t--;
	}
 
 
} 