template <typename T>
class MyArrayList{
public:
	//constructor 
	MyArrayList(int dimension);
	//destructor
	~MyArrayList();
	//adaug elelemnt nou
	T* add(T element);
	//redimensionez vectorul
	T* redimension();
	//getter ptr buffer
	T* getVector();
	//getter ptr size
	int getSize();

private:
	int my_size;
	int my_capacity;
	T * buffer;
};