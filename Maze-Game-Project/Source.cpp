#include<iostream>
using namespace std;

#define SIZE 10
#define RIG 1
#define DOWN 2
#define LEFT 3
#define UP 4
#define WAY_SIZE (SIZE * SIZE)

void exitway();
bool find_way(int, int, int);
void add_to_way(int, int);

int labirent[SIZE][SIZE] = {
	{ 0,0,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,1,1,1,1,1 },
	{ 1,1,1,1,0,1,1,1,1,1 },
	{ 1,1,1,1,0,1,1,1,1,1 },
	{ 1,1,0,0,0,0,1,1,1,1 },
	{ 1,0,0,1,1,0,0,0,1,1 },
	{ 1,1,0,1,1,0,0,1,1,1 },
	{ 1,1,0,0,1,1,0,0,1,1 },
	{ 1,1,1,1,1,1,1,0,0,1 },
	{ 1,1,1,1,1,1,1,1,0,0 }
};


int way[] = { 0 };

int main()
{
	find_way(0, 0, 0);
	cout << "x | y" << endl;
	cout << "-----" << endl;
	cout << "0 0" << endl;
	exitway();
	system("pause");
	return 0;
}

void exitway()
{
	way[1] = 0;
	way[2] = 0;

	int i;

	for (i = WAY_SIZE - 1; i >= 0; i--)
	{
		if (way[i] != 0)
		{
			cout << way[i] / 10 << " " << way[i] - ((way[i] / 10) * 10) << endl;
		}
	}
}

void add_to_way(int x, int y)
{
	int i = 0;

	for (i = 0; i < WAY_SIZE; i++)
	{
		if (way[i] == 0) break;
	}

	way[i] = x * 10 + y;

}

bool find_way(int x, int y, int selected_direction)
{
	bool fsh = false;


	if (y >= SIZE || x >= SIZE || x < 0 || y < 0)
	{
		return false;
	}

	bool sag_bos_mu = labirent[x][y + 1] == 0;
	bool asagi_bos_mu = labirent[x + 1][y] == 0;
	bool sol_bos_mu = labirent[x][y - 1] == 0;
	bool yukari_bos_mu = labirent[x - 1][y] == 0;


	if (!sag_bos_mu && !sol_bos_mu && !yukari_bos_mu && !asagi_bos_mu) return false;


	if (x == SIZE - 1 && y == SIZE - 1)
	{
		add_to_way(x, y);
		return true;
	}



	if (asagi_bos_mu && selected_direction != UP)
	{

		fsh = find_way(x + 1, y, DOWN);
		if (fsh)
		{
			add_to_way(x, y);
			return fsh;
		}

	}

	if (sag_bos_mu && selected_direction != LEFT)
	{
		fsh = find_way(x, y + 1, RIG);
		if (fsh)
		{
			add_to_way(x, y);
			return fsh;
		}

	}


	if (sol_bos_mu && selected_direction != RIG)
	{

		fsh = find_way(x, y - 1, LEFT);
		if (fsh)
		{
			add_to_way(x, y);
			return fsh;
		}

	}

	if (yukari_bos_mu && selected_direction != DOWN)
	{

		fsh = find_way(x - 1, y, UP);
		if (fsh)
		{

			add_to_way(x, y);
			return fsh;
		}

	}
	return fsh;
}