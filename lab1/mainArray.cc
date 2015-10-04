#include <stdio.h>
#include <stdlib.h>
#include "MyArrayList.h"
int main(){
	printf("testing my first program\n");
	//alocare locala
	printf("alocare locala pe stiva\n");
	MyArrayList<int> my_vector(4);
	int i;
	srand(123);
	for (i = 0; i < 10; i++){
		my_vector.add(rand()%100);
	} 
	int *test = my_vector.getVector();
	int dim = my_vector.getSize();
	printf("my size %d\n", dim);
	for (i = 0; i < dim; i++){
		printf("%d ", test[i]);
	}
	printf("\n");
	//alocare dinamica
	printf("alocare dinamica pe heap\n");
	MyArrayList<float> *my_dynamic_vector = new MyArrayList<float>(7);
	for (i = 0; i < 15; i++){
		my_dynamic_vector->add(rand()%100);
	}
	int dim_sec = my_dynamic_vector->getSize();
	float *test_dynamic = my_dynamic_vector->getVector();
	for (i = 0; i < dim_sec; i++){
		printf("%.2lf ", test_dynamic[i]);
	}
	printf("\n");
	return 0;
}