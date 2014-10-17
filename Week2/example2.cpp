template <typename Item>
class CVector
{
private:
	Item *items;
	int nItems;
	int nAllocated;

public:
	CVector(int size = 10) {
		this->nItems = 0;
		this->nAllocated = size;
		this->items = new Item[size];
	}

	~CVector() {
		delete [] items;
	}

	void addItem(Item theItem) {
		if (nItems + 1 == nAllocated) {
			nAllocated *= 2;
			Items *newArray = new Item[nAllocated];
			for (int i = 0; i < nItems; ++i) {
				newArray[i] = items[i];
			}
			delete [] items;
			items = newArray;
		}
		items[nItems] = theItem;
		nItems++;
	}

	int size() { return nItems; }

	Item get(int i) {
		return items[i];
	}
};


0                 8         16, etc.
+-----------------+---------+
| Here is an item | Item #2 |
+-----------------+---------+

int someFun() {
	int size;
	CVector myStackVec(size);
	CVector *myHeapVec = new CVector(10);
	delete myHeapVec;
}
