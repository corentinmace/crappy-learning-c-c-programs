#include <iostream>
using namespace std;


int main() {
float a, b;
char op;
float result;
bool verif=false;
char redo;
	cout << "Bienvenue dans la calculatrice un peu nulle v1" << endl;
do {
	cout << "Donnez moi un premier chiffre > ";
	cin >> a;
	cout << "Maintenant donnez moi un second chiffre > ";
	cin >> b;
	goto ope;

while(!verif) {
ope:
	cout << "Donnez moi le signe de l'operation ( +, -, /, *) > ";
	cin >> op;

switch (op) {

		case '+':
			result = a+b;
			verif= true;
		break;

		case '-':
			result = a-b;
			verif=true;
		break;

		case '/':
			result = a/b;
			verif=true;
		break;

		case '*':
			result = a*b;
			verif=true;
		break;
			default:
			verif=false;
			cout << "Quelle est cette operation, donnez moi en une valable ! " << endl;
}

}

	cout << a << " " << op << " " << b << " =" << " " << result << endl  << "Voulez vous continuer ? (o/n) > ";
	cin >> redo;




} while(redo=='o');



	return 0;
}
