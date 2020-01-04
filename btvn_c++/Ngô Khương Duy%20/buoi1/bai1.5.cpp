#include<iostream>

using namespace std ;

int main(){
	int A, B, C;
	cin >> A >> B >> C ;
	if(A>0 && B>0 && C>0){
		
	
	if(A+B>C && A+C>B && B+C>A) cout << "They could be 3 sides of a triangle." << endl ;
		else cout << "They could not be 3 sides of a triangle." << endl ;
	}
	 else
		cout << "Gia tri khong hop le ! \a" << endl ;
		
	return 0 ;	
}
