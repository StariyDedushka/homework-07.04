#ifndef CASH_REGISTER_H
#define CASH_REGISTER_H

#include "Retail_Item.h"
#include "Item_List.h"
#include "libs.h"

class Item_List;

class Cash_Register
{
	private:
		static Item_List list;
	public:
		Cash_Register();
		void buyItem(Retail_Item *item);
		void getTotal();
		void showItems();
		void clear();
		void buyAll();
		
	friend class Item_List;
};

#endif
