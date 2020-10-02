#include <bits/stdc++.h>
using namespace std;

class Point {

	public:
		Point() {
			cout << "Myself, base class constructor!\n";
		}

		Point(int h, int w) {
			cout << "Another base class constructor\n";
			x = h;
			y = w;
			cout << "End of Another base class constructor\n";
		}

		~Point() {
			cout << "Myself, base class destructor!\n";
		}

	private:
		int x;
	public:
		int y;
	protected:
		int z;
};

class SplPoint: Point {
	using Point::Point; 
};

int main() {
	SplPoint splPoint(1,2);
	
	cout << "Myself, nothing!\n";
}