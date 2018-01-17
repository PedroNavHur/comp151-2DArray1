// Create a Multiplication table 0 -20

#include <iostream>
#include <iomanip>

using namespace std;

void main() {

	const short MAXROWS = 21;
	const short MAXCOLS = 21;
	const short COLWIDTH = 4;

	short MultTAble[MAXROWS][MAXCOLS];


	for (size_t i = 0; i < MAXROWS; i++)
	{
		for (size_t j = 0; j < MAXCOLS; j++)
		{

			MultTAble[i][j] = i * j;
		}
	}

	cout << "Multiplication Table from 0 to " << MAXROWS - 1 << endl << endl;

	cout << " " << setfill('-') << setw(COLWIDTH * (MAXROWS + 6)) << " " << endl;


	for (size_t i = 0; i < MAXROWS; i++)
	{
		cout << setfill(' ') << " |";

		for (size_t j = 0; j < MAXCOLS; j++)
		{
			cout << setw(COLWIDTH) << MultTAble[i][j] << " ";
		}

		cout << "|";

		cout << endl;
	}

	cout << " " << setfill('-') << setw(COLWIDTH * (MAXROWS + 6)) << " " << endl;

	int sum = 0;

	cout << "Sum of the tables" << endl;

	cout << setfill(' ') << " |";

	for (size_t i = 0; i < MAXROWS; i++)
	{


		sum = 0;

		for (size_t j = 0; j < MAXCOLS; j++)
		{
			sum += MultTAble[i][j];
		}

		cout << setw(COLWIDTH) << sum << " ";

	}
	cout << "|";

}
