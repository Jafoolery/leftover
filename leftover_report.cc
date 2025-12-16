// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

#include "leftover_report.h"
// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_report.h), only
// if you didn't implement them inline within leftover_report.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverReport
// class.
// ===================================================================
void LeftoverReport::SetMostCommonFoods(const std::vector<std::string>& foods) {
  common_foods_ = foods;
}

void LeftoverReport::SetMostCommonReasons(
    const std::vector<std::string>& reasons) {
  common_reasons_ = reasons;
}

void LeftoverReport::SetMostCommonDisposals(
    const std::vector<std::string>& disposals) {
  common_disposals_ = disposals;
}

void LeftoverReport::SetTotalWasteCost(double cost) {
  total_waste_cost_ = cost;
}

void LeftoverReport::SetStrategies(const std::vector<std::string>& strategies) {
  strategies_ = strategies;
}

const std::vector<std::string>& LeftoverReport::GetMostCommonFoods() const {
  return common_foods_;
}

const std::vector<std::string>& LeftoverReport::GetMostCommonReasons() const {
  return common_reasons_;
}

const std::vector<std::string>& LeftoverReport::GetMostCommonDisposals() const {
  return common_disposals_;
}

double LeftoverReport::GetTotalWasteCost() const { return total_waste_cost_; }

const std::vector<std::string>& LeftoverReport::GetStrategies() const {
  return strategies_;
}
