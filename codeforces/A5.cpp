#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float r;
	double phi;
	phi = 3.141592653;
	
	cin >> r;
		
	cout << fixed << setprecision(9);
	cout << phi * r * r << endl;
	
	return 0;
	}
