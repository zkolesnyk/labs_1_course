#include "header.h"
using namespace std;

void l2() {
	float a, b, max, min;

//	cls(); //Вызов функции очистки экрана

	spacer();
	cout << "Lab #2" << endl;
	spacer();

	while (true) {
			cout << "Vvedite 2 raznyh po znaku chisla: ";
			a = checkString();
			b = checkString();

			min = (a<b) ? a:b;
			max = (a>b) ? a:b;

			if ((a<0 && b<0)||(a>0 && b>0)){	
				cout<<"Vy vveli 2 odinakovyh po znaku chisla."<<endl;
				spacer();
			} 
			else {
				spacer();
				max = max*3;
				min = min*min;

				cout << "Max*3 = " << max << endl << "Min^2 = " << min;

				cout << "\n\nThe end." << endl;
			break;	
			}	
	}
}