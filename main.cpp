#include "Retail_Item.h"
#include "libs.h"
#include "Cash_Register.h"
#include "UI.h"

int main()
{
	UI ui;
	ui.drawChoiceUI();
	while(true) {
	ui.selectAction();
}
}
