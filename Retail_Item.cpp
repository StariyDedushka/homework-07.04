#include "Retail_Item.h"

void Retail_Item::setCount(unsigned int count) { ri_count = count; }
void Retail_Item::setDesc(std::string desc) { ri_desc = desc; }
void Retail_Item::setPrice(double price) { ri_price = price; }
unsigned int Retail_Item::getCount() { return ri_count; }
std::string Retail_Item::getDesc() { return ri_desc; }
double Retail_Item::getPrice() { return ri_price; }
Retail_Item::Retail_Item() {
		ri_desc = "Default";
		ri_count = 0;
		ri_price = 0;
	}
Retail_Item::Retail_Item(std::string desc, unsigned int count, double price) : ri_desc(desc), ri_count(count), ri_price(price)
	{
		//~ std::cout << "Item created: " << ri_desc << std::endl;
	}
