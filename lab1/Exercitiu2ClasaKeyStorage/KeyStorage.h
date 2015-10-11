template<typename T>
class KeyStorage {
public:
	KeyStorage(int k);
	~KeyStorage();

	T getMember();
	T setMember(T element);

private:
	int key;
	T member;
};
