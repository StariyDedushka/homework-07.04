#include "Cash_Register.h"

Cash_Register::Cash_Register() {
			std::cout << "Created a new register.\n";
		}
void Cash_Register::buyItem(Retail_Item *item) { list.addItem(item); }
void Cash_Register::showItems() { list.printAll(); }
void Cash_Register::getTotal() {
	double sum = 0;
	unsigned int count = 0;
	while(count < list.getSize()) {
		sum += list.getItem(count)->getPrice();
		count++;
	}
	std::cout << "Your total is: " << sum << "$.\n";
}
void Cash_Register::clear() { list.clearList(); }
void Cash_Register::buyAll() {
	std::cout << "Checkout:\nItems in cart: ";
	showItems();
	std::cout << "Total: ";
	getTotal();
}
// инициализируем статический список хотя бы одним объектом
Item_List Cash_Register::list(&Item_List::defaultItem);
