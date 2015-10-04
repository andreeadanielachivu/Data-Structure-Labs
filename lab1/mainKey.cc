#include "KeyStorage.h"
#include <stdio.h>
int main(){
	//alocare locala
	KeyStorage<int> keyElement(3);
	keyElement.setMember(9);
	int elem = keyElement.getMember();
	printf("the number is %d\n", elem);
	//alocare dinamica
	KeyStorage<long> *keySecond = new KeyStorage<long>(5);
	keySecond->setMember(10);
	long elemSec = keySecond->getMember();
	printf("the dynamic alloc %li\n", elemSec);
	delete keySecond;
	return 0;
}