#ifndef ITEM_LIST_H
#define ITEM_LIST_H

#include "libs.h"
#include "Retail_Item.h"

class Item_List 
{
	private:
		struct Node {
			Retail_Item *item;
			Node *next;
		};
		Node *head;
		static Retail_Item defaultItem;
		
	public:
		Item_List(Retail_Item *newItem);
		~Item_List();
		void addItem(Retail_Item *item);
		Retail_Item* getItem(unsigned int num);
		void printAll();
		unsigned int getSize();
		void clearList();
		
		friend class Cash_Register;
};

#endif
