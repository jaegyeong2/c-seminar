#include <iostream>
#include <string>
using namespace std;

class Item{
public: 
	Item(){
		itemName = "null";
		price = 0;
		
	}
	string itemName;
	int price;
};
int main(){
	Item item;

	cout << item.itemName << endl;
	cout << item.price;

	cout << endl << endl;
	item.itemName = "¶ó¹Ùµ·ÀÇÁ×À½¸ðÀÚ";
	item.price = 3600;

	cout << item.itemName << endl;
	cout << item.price;

	return 0;
}