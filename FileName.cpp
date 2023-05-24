#include <iostream>
using namespace std;

class Coord
{
public:
	Coord(int i, int j)
	{
		x = i; y = j;
	}
	void print()
	{
		cout << "x:" << x << ",y:" << y << endl;
	}
	friend Coord operator++(Coord& op)
	{
		++op.x;
		++op.y;
		return op;
	}
private:
	int x, y;
};

int main()
{
	Coord ob(10, 20);
	ob.print();
	++ob;
	ob.print();
	operator++(ob);
	ob.print();
	
}