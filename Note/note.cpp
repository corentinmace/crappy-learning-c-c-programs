#include <iostream>
using namespace std;
char redo;
float moyenne;
	int i;
	int const tailletableau(10);
	float tab[tailletableau];
int main() {
do {


for (int i=0; i < tailletableau; i++) {
	cout << "Rentrerz la note " << i+1 << " > ";
	cin >> tab[i];
	moyenne += tab[i];
}

	moyenne/=tailletableau;
 cout << "Moyenne : " << moyenne<< endl;
 cout << "Voulez vous continuer ? (o/n) > ";
	cin >> redo;


} while(redo=='o');

	return 0;

}
