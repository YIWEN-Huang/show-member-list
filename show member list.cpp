#include <iostream>
#include<cctype>
#include <iostream>
#include<cstring>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;
const int strsize = 50;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;

};


int main() {
	char a;
	bop me[5] = {
		{"huang yiwen",	"TITLE123",	"I am a clinical microbiologist, researcher,", 1},
		{"Adelaide",	"TITLE456",	" key writing skills  ", 1},
		{"Alex",	"TITLE1777",	"Are you looking for a professional content w", 1},
		{"Albin",	"TITLE1837",	" following categories.", 1},
		{"Amos",	"TITLE8473",	"Health and Medical", 1},
	};
	cout << "請輸入選擇:" << endl;
	cout << "a. display by name" << " " << "b. display by title" << endl;
	cout << "c. display by bopname" << " " << "d. display by preference" << endl;
	cout << "q. quit" << endl;

	cin >> a;
	while (isalpha(a) && a != 'q') {
		switch (a) {
		case 'a':
			for (int i = 0; i < 5; i++)
				cout << me[i].fullname << endl;

			break;
		case 'b':
			for (int i = 0; i < 5; i++)
				cout << me[i].title << endl;

			break;
		case 'c':
			for (int i = 0; i < 5; i++)
				cout << me[i].bopname << endl;

			break;
		case 'd':
			for (int i = 0; i < 5; i++)
				cout << me[i].preference << endl;

			break;
		default: cout << "請輸入有效英文" << endl;
			break;
		}cout << "請輸入選擇:" << endl;
		cin >> a;
	}
	cout << "bye" << endl;

	return 0;
}




