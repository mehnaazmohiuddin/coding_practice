#include<iostream>

using namespace std;

int main(){
int t;
cin >> t;

int N;
while(t){
cin >> N;
int A [N];
for(int i =0; i< N;i++){
	cin >> A[i];
}
if(N == 1){
	cout << 1<<endl;
	continue;
}else{

int Ans [N];
bool Ppositive= true;//negative
Ans[N-1] = 1;
if(A[N-1]< 0){
Ppositive= false;
}

int curr = A[N-1];
for (int i = N-2; i>=0; i--){
	curr = A[i];
	if((curr < 0 && Ppositive) || (curr >0 && !Ppositive)){
		Ans[i]=Ans[i+1]+1;
	}else 
		Ans[i] = 1;
	if(curr<0)
	{
		Ppositive = false;
	}
	else
	Ppositive = true;
}

for (int i =0; i<N; i++){
	cout << Ans[i] <<" ";
}
cout <<endl;
}
t--;
}


}