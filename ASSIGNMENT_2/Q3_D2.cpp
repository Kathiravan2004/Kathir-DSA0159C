#include <iostream>
using namespace std;
class PlasticSeller {
private:
    double cost;
    double sellingPrice;

public:
    PlasticSeller() {
        cost = 10.0; 
        sellingPrice = 12.0; 
    }

    double calculateProfit() {
        return sellingPrice - cost;
    }
};

int main() {
    PlasticSeller kiran;

    double profit = kiran.calculateProfit();
cout<< "Kiran earns Rs. " << profit << " on selling 1kg plastic." <<endl;

    return 0;
}

