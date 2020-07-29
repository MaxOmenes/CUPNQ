#include <iostream>

using namespace std;

int main()
{
	 char dos;
	 int c, u, p, n, q;
	
	cout << "CUPNQ v0.5\n" << "C++ Fully Update\n";
	
	while (1 == 1)
	{
		cout << endl << endl << "MENU" << endl << "Play(P)       Info(I)       Exit(E)" << endl;
		cin >> dos;
		if (dos == 'P')
		{
			cout << endl << "Write useful points :";
			cin >> u;
			if (u == 1)
			{
				cout << "Write price points: ";
				cin >> p;
				if (p >= 1 && p <= 3)
				{
					cout << "Write need points: ";
					cin >> n;
					if (n >= 1 && n <= 2)
					{
						cout << "Write quality points: ";
						cin >> q;
						if (q == 0)
						{
							cout << "Quality of this thing didn't met requirments. Don't buy this thing\n";
						}
						if (q >= 1 && q <= 2)
						{
							c = u * p * n * q;

							cout << "This buying has got " << c << " points" << endl;

							if (c == 12)
							{
								cout << "Why are you waiting? Buy this NOW!\n";
							}
							if (c == 6)
							{
								cout << "Buy it NOW!\n";
							}
							if (c == 4)
							{
								cout << "You can buy this thing. It's good.\n";
							}
							if (c == 3)
							{
								cout << "I think it isn't good buying. Please, search another thing to buy.\n";
							}
							if (c == 2)
							{
								cout << "Don't buy this. Please, search another thing to buy.\n";
							}
							if (c == 1)
							{
								cout << "Don't buy this. Please, search another thing to buy.\n";
							}
						}
						else if (!(q >= 0 && q <= 2))
							cout << "Error.Quality Points was only 0, 1 or 2";
					}
					
					if (n == 0) // Problem operation // Fixed by logical And (&&), Or (||) and No (!)
					{
						cout << "You don't need this thing. Why are you want to buy it?\n";
					}
					
					else if (! (n >= 0 && n <= 2))
						cout << "Error. Need Points was only 0, 1 or 2\n";
				}
				else
					cout << "Error. Price was only 1, 2 or 3\n";
			}
			else if (u == 0)
			{
				cout << "It's bad thing for you. Why are you want to buy this?\n";
			}
			else
				cout << "Error. Useful was only 0 or 1\n";

		}

		if (dos == 'I')
		{
				cout << "Welcome to my first programm CUPNQ (Coefficient of Useful, Price, Need and Quality)! This programm will help you to make purchases better!" << endl;
				cout << "Instructions";
				cout << "This programm make analysis about purchases by points that you put to product. List of points that you can use:" << endl;
				cout << "Useful    Price    Need    Quality" << endl;
				cout << "   0          1       0        0" << endl;
				cout << "   1          2       1        1" << endl;
				cout << "   -          3       2        2" << endl << endl;
				cout << "Useful 0-product is unuseful; 1-product is useful" << endl;
				cout << "Price 1-expensive; 2-normal; 3-cheap" << endl;
				cout << "Need 0-You don,t need this purchase; 1-You need it; 2-You need it NOW!" << endl;
				cout << "Quality 0-Bad quality; 1-Normal quality; 2-High quality" << endl;
		}

		if (dos == 'E')
		{
			break;
		}

	}
		return 0;
}