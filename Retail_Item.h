#ifndef RETAIL_ITEM_H
#define RETAIL_ITEM_H

#include "libs.h"

class Retail_Item
{
private:
	std::string ri_desc;
	unsigned int ri_count;
	double ri_price;
public:
	Retail_Item(std::string desc, unsigned int count, double price);
	Retail_Item();
	void setPrice(double price);
	void setDesc(std::string desc);
	void setCount(unsigned int count);
	unsigned int getCount();
	std::string getDesc();
	double getPrice();

};

#endif
