#include <iostream>
using namespace std;
#include <iostream>
#include "select.h"
using namespace std;

int main() {
	select calc_one{};
	calc_one.firstNumber();
	calc_one.secondNumber();
	calc_one.op();
	calc_one.calcApp();
}