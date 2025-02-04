#include "year.hpp"


AnnualReport::AnnualReport() {
  year = 0;
  months = vector<MonthlyReport*>();
}

AnnualReport::AnnualReport(int year, vector<MonthlyReport*> months)
: year{year}, months{months} {}

AnnualReport::AnnualReport(const AnnualReport& rhs)
: year{rhs.year}, months{rhs.months} {}

AnnualReport::AnnualReport(AnnualReport&& rhs)
: year{rhs.year}, months{move(rhs.months)} {}

AnnualReport::~AnnualReport() {
  months.clear();
}

int AnnualReport::getYear() const {
  return year;
}
void AnnualReport::setYear(int new_year) {
  year = new_year;
}
vector<MonthlyReport*> AnnualReport::getMonthlyReport() const {
  return months;
}
void AnnualReport::setMonthlyReport(vector<MonthlyReport*> new_months) {
  months = new_months;
}

vector<Worker*> AnnualReport::getWorkers() const {
  return workers;
}
void AnnualReport::setWorkers(const vector<Worker*>& new_workers) {
  workers = new_workers;
}

void AnnualReport::addWorker(Worker* wkr) {
  workers.push_back(wkr);
}
void AnnualReport::removeWorker(Worker* wkr) {
  
}


void AnnualReport::addMonth(MonthlyReport* rhs) {
  months.push_back(rhs);
};
// void AnnualReport::removeMonth(MonthlyReport* rhs) {
//   months.erase(remove(months.begin(), months.end(), rhs));
// };
// void AnnualReport::removeMonth(int) {
  
// };