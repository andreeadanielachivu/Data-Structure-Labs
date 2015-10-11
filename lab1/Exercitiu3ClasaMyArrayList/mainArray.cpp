#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "MyArrayList.h"
int main()
{
	//alocare locala
	int i;
	MyArrayList<int> my_vector(4);
	srand(123);
	int x = my_vector.getCapacity();	
	for (i = 0; i < x; i++)
	{
		my_vector.addElement(rand()%100);
	}
	int * my_vector_aux = my_vector.getVector();
	int size = my_vector.getSize();
	//afisare vector alocat
	for (i = 0; i < size; i++)
	{
		printf("%d ", my_vector_aux[i]);
	}
	printf("\n");
	//adaugare inca 3 elemente la vectorul existent
	for (i = 0; i < 3; i++)
	{
		my_vector.addElement(rand()%100);
	}
	memset(my_vector_aux, 0, size * sizeof(int));
	my_vector_aux = my_vector.getVector();
	size = my_vector.getSize();
	int capacity = my_vector.getCapacity();
	printf("size %d capacity %d\n", size, capacity);
	for (i = 0; i < size; i++)
	{
		printf("%d ", my_vector_aux[i]);
	}
	printf("\n");
	//adauga in 5 elemente la vectorul existent
	for(i = 0; i < 5; i++)
	{
		my_vector.addElement(rand()%100);
	}
	memset(my_vector_aux, 0, size * sizeof(int));
	my_vector_aux = my_vector.getVector();
	size = my_vector.getSize();
	capacity = my_vector.getCapacity();
	printf("size %d capacity %d\n", size, capacity);
	for (i = 0; i < size; i++)
	{
		printf("%d ", my_vector_aux[i]);
	}
	printf("\n");
	//alocare dinamica
	MyArrayList<float> *my_float_vector = new MyArrayList<float>(4);
	int y = my_float_vector->getCapacity();
	for (i = 0; i < y; i++)
	{
		my_float_vector->addElement(rand()%1000);
	}
	int float_size = my_float_vector->getSize();
	float * my_float_vector_aux = my_float_vector->getVector();
	for (i = 0; i < float_size; i++)
	{
		printf("%.2lf ", my_float_vector_aux[i]);
	}
	printf("\n");
	//adaug inca 6 elemente la vecotrul existent
	for (i =0; i < 6; i++)
	{
		my_float_vector->addElement(rand()%1000);
	}
	memset(my_float_vector_aux, 0, float_size * sizeof(float));
	float_size = my_float_vector->getSize();
	int float_capacity = my_float_vector->getCapacity();
	my_float_vector_aux = my_float_vector->getVector();
	printf("float size %d capacity %d\n", float_size, float_capacity);
	for (i = 0; i < float_size; i++)
	{
		printf("%.2lf ", my_float_vector_aux[i]);
	}
	printf("\n");
	return 0;
}
