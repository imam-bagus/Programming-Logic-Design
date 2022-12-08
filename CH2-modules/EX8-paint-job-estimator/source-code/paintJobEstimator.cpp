#include <iostream>
using namespace std;

void getSquareFeetPricePaint(float &squareFeet, float &pricePerGallon)
{
  cout << "Enter a enter square feet :";
  cin >> squareFeet;

  cout << "price of the paint per gallon :";
  cin >> pricePerGallon;
}

void processEstimator(float &gallonNeed, float &hoursLabor, float &laborCharges, float &costPaint, float &totalCostPaintJob, float &squareFeet, float &pricePerGallon)
{
  gallonNeed = squareFeet / 115;
  hoursLabor = gallonNeed * 8;
  laborCharges = hoursLabor * 20.00;
  costPaint = gallonNeed * pricePerGallon;
  totalCostPaintJob = laborCharges + costPaint;
}

void printEstimator(float &gallonNeed, float &hoursLabor, float &costPaint, float &laborCharges, float &totalCostPaintJob)
{
  cout << "number of gallons of paint required : " << gallonNeed << endl;
  cout << "hours of labor required : " << hoursLabor << endl;
  cout << "cost of the paint : $" << costPaint << endl;
  cout << "labor charges : $" << laborCharges << endl;
  cout << "total cost of the paint job : $" << totalCostPaintJob << endl;
}

int main()
{
  float squareFeet;
  float gallonNeed;
  float pricePerGallon;
  float hoursLabor;
  float laborCharges;
  float costPaint;
  float totalCostPaintJob;

  getSquareFeetPricePaint(squareFeet, pricePerGallon);
  processEstimator(gallonNeed, hoursLabor, laborCharges, costPaint, totalCostPaintJob, squareFeet, pricePerGallon);
  printEstimator(gallonNeed, hoursLabor, costPaint, laborCharges, totalCostPaintJob);
}