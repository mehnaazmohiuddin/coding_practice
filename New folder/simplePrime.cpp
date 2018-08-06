#include<iostream>
using namespace std;





int main(){
	int t;
	cin >> t;
	int n;
	while(t){
		cin >>n;
		bool prime = true;
		for(int i=2;i*i<=n;i++){
			if(n%i == 0){
				prime = false;
				cout <<n<<"is not a prime cause its divided by"<<i<<endl;
				break;
			}
		}
		if(prime){
			cout <<"its a prime "<<n<<endl;
		}
		t--;
	}


//complexity sqrt of n
}