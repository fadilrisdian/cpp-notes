#include <iostream>

using namespace std;

int main(){
		
	unsigned long long int x, y;
	
	cin >> x >> y;
	
	x = x % 10;
	y = y % 10;
	cout << x+y << endl;
	
	return 0;
}
