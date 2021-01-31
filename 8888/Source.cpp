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
	cout << seconds << endl;
	return Arr;
}

int main() {
	int r = 0;
	int Arr[100];
	int Arr2[100];
	int min = 9;
	int place = 0;
	srand(time(NULL));
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

	for (int i = 0; i < 100; i++) {
		cout << ArrNew[i] << " " ;
	}

	

	return 0;
}



/*
1. заполнить массив случайными значени€ми +
2. —копировать его в отдельную переменную, и еЄ отсортировать методом выборки
3. —копировать первоначальный массив  отдельную переменную, и еЄ отсортировать шекером
3.1 ¬ыводить массив до сортировки и после сортировки
4. «асечь врем€ сортировки каждым методом, и вывести, какой метод быстрее.
*/