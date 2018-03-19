#include <iostream>
using namespace std;

/** Information about public shares of a company */
class Stock {
protected:
  char *symbol; /**< identifier for stock market listings */
  float price;   /**< dollars per share */
public:
  Stock(const char *sym, float pr) {
    int len;
    for (len = 0;  sym[len] != '\0';  len++)
      ;
    symbol = new char[len + 1];
    for (int i = 0;  i <= len;  i++)
      symbol[i] = sym[i];
    price = pr;
  }
  ~Stock () { delete [] symbol; }
  Stock(const Stock& x){
    int len;
    for (len = 0;  x.symbol[len] != '\0';  len++);
    symbol = new char[len + 1];
    for (int i = 0; i <= len; ++i){
      symbol[i] = x.symbol[i];
    }
    price = x.price;
  }
  char *getSymbol() { return symbol; }
  float getPrice() { return price; }
};

int main() {
  Stock s("MSFT", 42.53);
  Stock s2(s);
  cout << s.getSymbol() << " $" << s.getPrice() << endl;
  cout << s2.getSymbol() << " $" << s2.getPrice() << endl;
}
