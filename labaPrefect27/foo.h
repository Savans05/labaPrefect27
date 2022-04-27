#include <iostream>
#include <time.h>

using namespace std;
void sum_dob(int* mas, uint32_t size)
{
	int ot = 0, dod = 0, null = 0;
	cout << "\n\t";
	for (size_t i = 0; i < size; i++)
	{
		mas[i] = -9 + rand() % 18;
		cout << mas[i] << " ";
		if (mas[i] > 0)
		{
			dod++;
		}
		else if (mas[i] < 0)
		{
			ot++;
		}
		else
		{
			null++;
		}
	}
	cout << "\n\n\n\tOtrichat -> " << ot << "\n\tDodat -> " << dod << "\n\tNull -> " << null;
}

void radota()
{
	srand(time(0));
	uint32_t size;
	cout << "\tEnter size -> ";
	cin >> size;
	int* mas = new int[size];
	sum_dob(mas, size);

}
