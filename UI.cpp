#include "UI.h"

UI::UI() {
		std::cout << "Welcome to the shop-o-tron!\nHere's what's in stock.\n";
		items[0] = new Retail_Item("T-shirt", 15, 12.95);
		items[1] = new Retail_Item("Sweater", 12, 24.95);
		items[2] = new Retail_Item("Pullover", 19, 29.95);
		items[3] = new Retail_Item("Cardigan", 4, 42.95);
		items[4] = new Retail_Item("Jeans", 32, 52.95);
		items[5] = new Retail_Item("Jacket", 14, 65.95);
		items[6] = new Retail_Item("Shirt", 3, 29.95);
}
void UI::drawChoiceUI() {
		unsigned int i = 0;
		while(i <= 6) {
			std::cout << "Position " << i + 1 << "\tDescription: " << items[i]->getDesc() << "\tAvailable: " 
			<< items[i]->getCount() << "\tPrice: " << items[i]->getPrice() << std::endl;
			i++;
		}
}
void UI::selectItem() {
	std::cout << "Enter the number of the item you selected: ";
	std::cin >> choice;
	if(choice < 1 || choice > 7) {
		std::cout << "ERROR: Incorrect choice format!\n";
	}
	switch(choice) {
		case 1:
		cart.buyItem(items[0]);
		break;
		case 2:
		cart.buyItem(items[1]);
		break;
		case 3:
		cart.buyItem(items[2]);
		break;
		case 4:
		cart.buyItem(items[3]);
		break;
		case 5:
		cart.buyItem(items[4]);
		break;
		case 6:
		cart.buyItem(items[5]);
		break;
		case 7:
		cart.buyItem(items[6]);
		break;
	}
}

void UI::selectAction() {
	std::cout << "\nSelect an action: \n";
	std::cout << "1. View all items in cart\t2. Add item to cart\n3. Check the cart's sum\t\t4. Clear cart\n5. Proceed to checkout.\n";
	std::cin >> action;
	if(action > 5 || action < 1) {
		std::cout << "ERROR: Incorrect action selected!\n";
		return;
	}
	switch(action) {
		case 1:
			cart.showItems();
			break;
		case 2:
			selectItem();
			break;
		case 3:
			cart.getTotal();
			break;
		case 4:
			cart.clear();
			break; 
		case 5:
			cart.buyAll();
			break;
	}
	
}
