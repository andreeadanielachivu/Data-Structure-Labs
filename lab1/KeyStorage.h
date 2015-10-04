template <typename T>
class KeyStorage{
public:
	//contructor
	KeyStorage(int k);
	//destructor
	~KeyStorage();
	//getter & setter
	T setMember(T element);
	T getMember();
private:
	int key;
	T member;
};


