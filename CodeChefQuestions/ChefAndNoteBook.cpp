/*https://www.codechef.com/FLMOCK02/problems/CNOTE */
 
#include <iostream> 
using namespace std;
 
 
 
int main(){
	int t;
	cin >> t;
	int X;
	int Y;
	int R;
		int costOfBook;
		int pagesOfBook;
		bool bookBought =false;
	while(t){
		bookBought =false;
		cin >> X;
		cin >> Y;
		cin >> R;
		int N;
		cin >> N;
		int pagesToWrite = X-Y;
		

		
		for(int i =0; i< N; i++){
			cin >> pagesOfBook >> costOfBook;
			
			if(pagesOfBook >=pagesToWrite && costOfBook<=R ){
				
				bookBought = true;
				break;
			}
		}
		if(bookBought)
		cout <<"LuckyChef"<<endl;
		else
			cout <<"UnluckyChef"<<endl;





		t--;
	}


}