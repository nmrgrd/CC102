#include <iostream>
using namespace std;

int main() {
	// Product Information
	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	
	//Customer Purchase
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	//Current Conversation
	double usdToPhp, poundToPhp;
	
	//Calculations
	double sugarCostPHP = sugarPriceUSD * usdToPhp * sugarQty;
	double riceCostPHP = ricePricePound * poundToPhp * riceQty;
	double sardinesCostPHP = sardinesPricePound * poundToPhp * sardinesQty;
	double coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQty;
	double milkCostPHP = milkPriceUSD * usdToPhp * milkQty;
	
	//Calculate Total Cost
	double totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	
	// Output Purchase Details
  cout << "\n\nPurchase Details:\n";
  cout << "Item\t\tQuantity\tPrice per Item (PHP)\tTotal Cost (PHP)\n";
  cout << "Sugar\t\t" << sugarQty << "\t\t" << sugarPriceUSD * usdToPhp << "\t\t\t" << sugarCostPHP << endl;
  cout << "Rice\t\t" << riceQty << "\t\t" << ricePricePound * poundToPhp << "\t\t\t" << riceCostPHP << endl;
  cout << "Sardines\t" << sardinesQty << "\t\t" << sardinesPricePound * poundToPhp << "\t\t\t" << sardinesCostPHP << endl;
  cout << "Coffee\t\t" << coffeeQty << "\t\t" << coffeePriceUSD * usdToPhp << "\t\t\t" << coffeeCostPHP << endl;
  cout << "Milk\t\t" << milkQty << "\t\t" << milkPriceUSD * usdToPhp << "\t\t\t" << milkCostPHP << endl;

  // Output Total Cost
  cout << "\nTotal Cost: PHP " << totalCostPHP << endl;

  return 0;
}
	