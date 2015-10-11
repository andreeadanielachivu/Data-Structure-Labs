template <typename T>
class MyArrayList
{
public:
	//constructor
	MyArrayList(int dimension);
	//destructor
	~MyArrayList();
	//adaug un element nou
	T* addElement(T element);
	//redimensionare vector
	T* redimension();
	//getter pentru buffer
	T* getVector();
	//getter ptr size
	int getSize();
	//getter ptr capacity
	int getCapacity();
private:
	int my_size;
	int my_capacity;
	T* buffer;
};
