#include<stdio.h>
#include "KeyStorage.h"
#include <vector>

int main() {
	KeyStorage<int> keyElement(3);
	printf("Value of %d\n", keyElement.getMember());
	keyElement = keyElement.setMember(10);
	printf("Value of %d\n", keyElement.getMember());
	KeyStorage<double> *keyRD = new KeyStorage<double>(7);
	printf("Value of %.2lf\n", keyRD->getMember());
	delete keyRD;
	return 0;
}
