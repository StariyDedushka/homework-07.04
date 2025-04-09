#include "libs.h"
#include "Retail_Item.h"
#include "Cash_Register.h"

class UI 
{
	private:
		unsigned short choice;
		Retail_Item *items[10];
		Cash_Register cart;
		unsigned short action;
	public:
		UI();
		void drawChoiceUI();
		void selectItem();
		void selectAction();
		void buyAll();
};
