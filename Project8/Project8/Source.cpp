#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	int q[52], dc[52], p1[13], p2[13], p3[13], p4[13], x, y, z, m;
	string g[5];
	g[1] = "coeur";
	g[2] = "careau";
	g[3] = "pique";
	g[4] = "trefle";
	srand(time(NULL));
	for (int i = 0; i <= 51; i++)
	{
		y = rand() % 4 + 1;
		x = rand() % 13 + 1;
		z = 0;
		while (z < i && (x != dc[i] || y != q[i]))
		{
			z++;
		}
		if (z == i)
		{
			dc[i] = x;
			q[i] = y;
		}
	}
	cout << "player 1 has : ";
	for (int i = 0; i <= 12; i++)
	{
		cout << dc[i] << " " << g[q[i]] << " ";
	}
	cout << endl;
	cout << "player 2 has : ";
	for (int i = 13; i < 25; i++)
	{
		cout << dc[i] << " " << g[q[i]] << " ";
	}
		cout << endl;
		cout << "player 3 has : ";
		for (int i = 25; i <= 38; i++)
		{
			cout << dc[i] << " " << g[q[i]] << " ";
		}
		cout << endl;
		cout << "player 4 has : ";
		for (int i = 39; i <= 51; i++)
		{
			cout << dc[i] << " " << g[q[i]] << " ";
		}
		
	system("pause");
	return 0;
	
}