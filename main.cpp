#include <iostream>
#include "sum.h"

#include <cmath>

#include "dif.h"
#include "prod.h"
#include "quot.h"

using namespace std;

int main()
{
	cout << "Hello world" <<endl;
	cout << "Sum of " << 12 << " and " << 23 << " is " << sum(12, 23) << endl;
	cout << "Pow of " << 12 << " and " << 23 << " is " << pow(12, 23) << endl;
	cout << "Dif of " << 12 << " and " << 23 << " is " << dif(12, 23) << endl;
	cout << "Product of " << 12 << " and " << 23 << " is " << prod(12, 23) << endl;
	cout << "Qout of " << 12 << " and " << 23 << " is " << quot(12, 23) << endl;

}