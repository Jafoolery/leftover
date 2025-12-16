// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

#include "leftover_record.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_record.h), only
// if you didn't implement them inline within leftover_record.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftLeftoverRecord
// class.
// ===================================================================
// Default constructor
LeftoverRecord::LeftoverRecord() : qty_in_oz_(0.0), cost_(0.0) {}

LeftoverRecord::LeftoverRecord(const std::string& date, const std::string& meal,
                               const std::string& food_name, double qty_in_oz,
                               const std::string& leftover_reason,
                               const std::string& disposal_mechanism,
                               double cost)
    : date_(date),
      meal_(meal),
      food_name_(food_name),
      qty_in_oz_(qty_in_oz),
      leftover_reason_(leftover_reason),
      disposal_mechanism_(disposal_mechanism),
      cost_(cost) {}

const std::string& LeftoverRecord::GetDate() const { return date_; }
void LeftoverRecord::SetDate(const std::string& date) { date_ = date; }

const std::string& LeftoverRecord::GetMeal() const { return meal_; }
void LeftoverRecord::SetMeal(const std::string& meal) { meal_ = meal; }

const std::string& LeftoverRecord::GetFoodName() const { return food_name_; }
void LeftoverRecord::SetFoodName(const std::string& food_name) {
  food_name_ = food_name;
}

double LeftoverRecord::GetQtyInOz() const { return qty_in_oz_; }
void LeftoverRecord::SetQtyInOz(double qty_in_oz) { qty_in_oz_ = qty_in_oz; }

const std::string& LeftoverRecord::GetLeftoverReason() const {
  return leftover_reason_;
}
void LeftoverRecord::SetLeftoverReason(const std::string& reason) {
  leftover_reason_ = reason;
}

const std::string& LeftoverRecord::GetDisposalMechanism() const {
  return disposal_mechanism_;
}
void LeftoverRecord::SetDisposalMechanism(
    const std::string& disposal_mechanism) {
  disposal_mechanism_ = disposal_mechanism;
}

double LeftoverRecord::GetCost() const { return cost_; }
void LeftoverRecord::SetCost(double cost) { cost_ = cost; }