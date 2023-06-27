#include <iostream>
using namespace std;

int main(){
	char operasi;
	float angka1, angka2;
// masukan kalkulator 
	cout << "selamat datang di kalkulator sederhana" <<endl;
// masukan angka pertama 
	cout << "masukan angka pertama : " << endl;
	cin >> angka1;
// masukan operator
	cout << "( + , - , / , * )";
	cin >> operasi;
// masukan angka kedua
	cout << "masukan angka kedua : " <<endl;
	cin >> angka2;
	
	float hasil;
	
	switch(operasi){
		
	case '+':
	cout << "hasil :" << angka1 + angka2 << endl;
	break;
	
	case '-':
	cout << "hasil :" << angka1 - angka2 << endl;
	break;
	
	case '*':
	cout << "hasil :" << angka1 * angka2 << endl;
	break;	
	
	case '/':
	if (angka2 != 0)
		cout << "hasil : " << angka1 / angka2 << endl;
	else
		cout << "hasil pembagian nol tidak valid " << endl;
	break;
	default:
		cout << "eror operasi tidak valid " << endl;
		break;
		
	}
	return 0;
}

































