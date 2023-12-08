
#include "product.hpp"

Product::Product() {
  name = "";
  basePrice = 0;
  production = 0;
  pestSeverity = PesticideSeverity::light;
}

Product::Product(string n, double bp, double pr, PesticideSeverity ps)
: name{n}, basePrice{bp}, production{pr}, pestSeverity{ps} {};

Product::Product(const Product& rhs)
: name{rhs.name}, basePrice{rhs.basePrice}, production{rhs.production}, pestSeverity{rhs.pestSeverity} {}

Product::Product(Product&& rhs)
: name{move(rhs.name)}, basePrice{rhs.basePrice}, production{rhs.production}, pestSeverity{move(rhs.pestSeverity)} {}

string Product::getName() const {
  return name;
}
void Product::setName(string new_name) {
  name = new_name;
}

double Product::getProduction() const {
  return production;
}
void Product::setProduction(double new_production) {
  production = new_production;
}

double Product::getBasePrice() const {
  return basePrice;
}
void Product::setBasePrice(double new_basePrice) {
  basePrice = new_basePrice;
}

PesticideSeverity Product::getPestSeverity() const {
  return pestSeverity;
}
void Product::setPestSeverity(PesticideSeverity new_pestSeverity) {
  pestSeverity = new_pestSeverity;
}

double Product::getSales() const {
  return getPureSales() - getPenalty();
}

double Product::getPureSales() const {
  return production * basePrice;
}

double Product::getRatio(const double& wConsumption) const {
  return getSales() / wConsumption;
}

double Product::getPenalty() const {
  return getPureSales() * (pestSeverity / 10);
}

Product& Product::operator=(const Product& rhs) {
  name = rhs.name;
  basePrice = rhs.basePrice;
  production = rhs.production;
  pestSeverity = rhs.pestSeverity;
  return *this;
}