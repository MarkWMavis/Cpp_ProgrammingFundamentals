#include "Models/rational.h"
#include "Models/animal.h"


int main() {

	Rational* r1 = new Rational(2, 13);
	Rational* r2 = new Rational(6, 13);
	Rational* r3 = r2;
	Rational* r4 = r1 + r2;

    return 0;
}