//Quinton Negron
//Takes a height and width from the user
//then incorporates those inputs into a for
//to produce a sqaure comprised of *
#include <iostream>
using namespace std;

int main()
{
    //Defines the variables we are going to need later
    int x, y, row, col;
	//cout << "Enter a width: ";
	cin >> x;
	//cout << "Enter a height: ";
	cin >> y;
    //When I did this initally, I confused the height with the width
    //Code works fine, just that it would take the variables in reverse
    //Even if we can get our code to work, they don't always come out as planned
    //Ultimately I switched the variables to have them working properly
	for (int row = 0; row < y; row++)
	{
		for (int col = 0; col < x; col++)
		{
            if ((row%2 == 0 && col%2 == 0) || (row%2 == 1 && col%2 == 1))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
		}
		cout << endl;
	}
	return 0;
}
