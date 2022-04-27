#include <iostream>
#include <time.h>

using namespace std;
void sum_dob(int* mas, uint32_t size)
{
	int sumint = 0;
	long long dobint = 1;
	cout << "\n\t";
	for (int i = 0; i < size; i++)
	{
		mas[i] = 1 + rand() % 9;
		cout << mas[i] << " ";
		sumint += mas[i];
		dobint *= mas[i];
	}
	cout << "\n\t";
	long long* dob = new long long(dobint);
	int* sum = new int(sumint);
	cout << "\n\tSum element = " << *sum;
	cout << "\n\tDob element = " << *dob;
}

void radota()
{
	srand(time(0));
	uint32_t size;
	cout << "\tEnter size ->";
	cin >> size;
	int* mas = new int[size];
	sum_dob(mas, size);

}
