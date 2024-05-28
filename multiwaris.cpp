#include <iostream>
using namespace std;


class Orang {
public:
	int umur;

	Orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur " << umur << "\n" << endl;
	}
};

class Pekerja : virtual public Orang {
public:
	Pekerja(int pUmur) :
		Orang(pUmur) {
		cout << "pekerja dibuat\n" << endl;
	}
};

class Pelajar : virtual public Orang {
public:
	Pelajar(int pUmur) :
		Orang(pUmur)
	{
		cout << "pelajar dibuat\n" << endl;
	}
};

class Budi : public Pekerja, public Pelajar {
public:

	Budi(int pUmur) :
		Pekerja(pUmur),
		Pelajar(pUmur),
		Orang(pUmur)		//hal ini dapat dilakukan jika menggunakan virtual
	{
		cout << "budi dibuat\n" << endl;
	}
};

int main() {
	Budi a(12);

	return 0;
}