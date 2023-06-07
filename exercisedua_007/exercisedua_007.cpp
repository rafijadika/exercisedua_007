#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
	int a;
	
	public
		bidangDatar() {
		x = 0;
	}
	virtual void input(){}
	virtual float Luas(int a) { return 0; }
	virtual float keliling(int a) { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}

};
class lingkaran:public bidangDatar{
	public
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "masukan jari-jari";
		int jejari;
		cin >> jejari;
		setX(jejari);
	}

	float luas() {
		return 3.14 * getX() * getX();
	}

	float keliling() {
		return 2 * 3.14;
	}
};

class bujurSangkar :public bidangDatar {
public:
	void input() {
		cout << "bujurSangkar dibuat" << endl;
		cout << "masukan sisi";
		int sisi;
		cin >> sisi;
		setX(sisi);
	}
};