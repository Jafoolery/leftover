#ifndef LEFTOVER_RECORD_H_
#define LEFTOVER_RECORD_H_
#include <string>

// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

class LeftoverRecord {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverRecord class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================

 public:
  // Constructors
  LeftoverRecord();
  LeftoverRecord(const std::string& date, const std::string& meal,
                 const std::string& food_name, double qty_in_oz,
                 const std::string& leftover_reason,
                 const std::string& disposal_mechanism, double cost);

  // Accessors / Mutators
  const std::string& GetDate() const;
  void SetDate(const std::string& date);

  const std::string& GetMeal() const;
  void SetMeal(const std::string& meal);

  const std::string& GetFoodName() const;
  void SetFoodName(const std::string& food_name);

  double GetQtyInOz() const;
  void SetQtyInOz(double qty_in_oz);

  const std::string& GetLeftoverReason() const;
  void SetLeftoverReason(const std::string& reason);

  const std::string& GetDisposalMechanism() const;
  void SetDisposalMechanism(const std::string& disposal_mechanism);

  double GetCost() const;
  void SetCost(double cost);

 private:
  std::string date_;
  std::string meal_;
  std::string food_name_;
  double qty_in_oz_;
  std::string leftover_reason_;
  std::string disposal_mechanism_;
  double cost_;
};

#endif
