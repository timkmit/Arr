#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
using namespace std;

int* sort(int *Arr) {
	int k0 = 0;
	int min = 10;
	int el = 0;
	clock_t start = clock();
	for (int i = 0; i < 99; i++) {
		if (min > Arr[i]) {
			min = Arr[i];
			
		}
	}
	for (int i = 0; i < 99; i++) {
		for (int i = 0; i < 99; i++) {
			if (Arr[i] > Arr[i + 1] ){
						el = Arr[i];
						Arr[i] = Arr[i + 1];      
						Arr[i + 1] = el;
				}
		}
		
	}
	clock_t end = clock();
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "Time spent for sorting:" << seconds << endl;
	return Arr;
}

int main() {
	int r = 0;
	int Arr[100];
	int Arr2[100];
	int min = 9;
	int place = 0;
	srand(time(NULL));
	cout << "Array:" << endl;
	for (int i = 0; i < 100; i++) {
		Arr[i] = rand() % 20 + 0;
	}
	
	for (int i = 0; i < 100; i++) {
		if (Arr[i] < Arr[i + 1]) {
			min = Arr[i];
			if (min == 0) {
				place = i;
				break;
			}
		}
	}
	for (int i = 0; i < (99 - place); i++) {
		Arr[place + i] = Arr[place + i + 1];
		
	}
	Arr[99] = 0;
	for (int i = 0; i < 100; i++) {
		cout << Arr[i] << " ";
	}


	cout << " " << endl;;
	cout << "Minimum :";
	cout << min << endl;
	cout << "Place: ";
	cout << place << endl;
	int *ArrNew = sort(Arr);
	cout << "Sorted array:" << endl;

	for (int i = 0; i < 100; i++) {
		cout << ArrNew[i] << " " ;
	}

	

	return 0;
}



/*
1. çàïîëíèòü ìàññèâ ñëó÷àéíûìè çíà÷åíèÿìè +
2. Ñêîïèðîâàòü åãî â îòäåëüíóþ ïåðåìåííóþ, è å¸ îòñîðòèðîâàòü ìåòîäîì âûáîðêè
3. Ñêîïèðîâàòü ïåðâîíà÷àëüíûé ìàññèâ  îòäåëüíóþ ïåðåìåííóþ, è å¸ îòñîðòèðîâàòü øåêåðîì
3.1 Âûâîäèòü ìàññèâ äî ñîðòèðîâêè è ïîñëå ñîðòèðîâêè
4. Çàñå÷ü âðåìÿ ñîðòèðîâêè êàæäûì ìåòîäîì, è âûâåñòè, êàêîé ìåòîä áûñòðåå.
*/
