#include <iostream>
#include <cmath>
using namespace std;

void border(){

	for (int i = 0; i < 50; i++){
		cout << "-";
	}

	cout << endl;
}

int findLength(int input){
	int length;
	int inputC = input;
	float base = 10;

	for (int i = 1; i <= 20; i++){
		input = inputC;
		int postPow = pow(base,i);
		input %= postPow;
		if (input == inputC){
			length = i;
			i = 20;
		}
	}

	return length;
}

void fillArray(int numbers[], int length, int input){
	int inputN = 0;
	float base = 10;

	for (int i = 1; i <= length; i++){
		int postPow = pow(base, i);
		inputN = input%postPow;
		numbers[length-i] = inputN;
		input -= inputN;
	}
}

void calculations(int input,int numbers[]){
}


int main(){
	int input = -1;
	int length;

	border();

	cout << "This program will split a positive integer into an array." << endl;
	cout << "What number would you like to convert? ";
	cin >> input;

	while (input < 0){
		border();
		cout << "Sorry, that number is invalid. Please choose a positive integer. ";
		cin >> input;
	}

	border();

	//Initializing the Array
	length = findLength(input);
	int numbers[length] = {0};

	//Giving Values to the Array
	fillArray(numbers, length, input);
	for (int i = 1; i <= length; i++){
		cout << "numbers[" << i-1 << "] = " << numbers[i-1] << endl;
	}

	//Calculations based on Array
	

	return 0;
}
