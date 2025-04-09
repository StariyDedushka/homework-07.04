all: task

items = main.o Retail_Item.o Item_List.o Cash_Register.o UI.o
#~ headers = Item_List.h Cash_register.h Retail_Item.h

task: $(items) $(headers)
	g++ -o task $(items)
	
main.o: main.cpp Retail_Item.h
	g++ -c main.cpp

Retail_Item.o: Retail_Item.cpp Retail_Item.h
	g++ -c Retail_Item.cpp
	
Item_List.o: Item_List.cpp Item_List.h
	g++ -c Item_List.cpp

Cash_Register.o: Cash_Register.cpp Cash_Register.h
	g++ -c Cash_Register.cpp

UI.o: UI.cpp UI.h
	g++ -c UI.cpp
