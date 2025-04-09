#include "Item_List.h"

Retail_Item defaultItem ("bag", 1, 0.05);	

Item_List::Item_List(Retail_Item *newItem) {
			head = new Node();
			head->item = newItem;
			head->next = NULL;
		}
Item_List::~Item_List() {
			Node *next = head;
			while(next) {
				Node *deleteMe = next;
				next = next->next;
				delete deleteMe;
			}
		}
void Item_List::addItem(Retail_Item *newItem) {
			Node *n = new Node();
			n->item = newItem;
			n->next = head;
			
			head = n;
		}
		
Retail_Item* Item_List::getItem(unsigned int num) {
			Node *n = head;
			int i = 0;
			while(n && (i < num)) {
			i++;
			n = n->next;
			}
			return n->item;
		}
void Item_List::printAll() {
	Node *ptr = head;
	int i = 0;
	while(ptr) {
		std::cout << "Item description: " << getItem(i)->getDesc() << "\t";
		std::cout << "Left in storage: " << getItem(i)->getCount() << "\t";
		std::cout << "Price: " << getItem(i)->getPrice() << "\n";
		ptr = ptr->next;
		i++;
	}
}
unsigned int Item_List::getSize() {
	unsigned int size = 0;
	Node *ptr = head;
	while(ptr) {
		size++;
		ptr = ptr->next;
	}
	return size;
}

Retail_Item Item_List::defaultItem("Bag", 1, 0.05);

void Item_List::clearList() {
	Node *ptr = head;
	while(ptr) {
		Node *deleteMe = ptr;
		ptr = ptr->next;
		delete deleteMe;
	}
	head = new Node();
	head->item = &defaultItem;
	head->next = NULL;
}
