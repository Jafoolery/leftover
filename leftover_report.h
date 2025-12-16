#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_
#include <string>
#include <vector>

// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

class LeftoverReport {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  void SetMostCommonFoods(const std::vector<std::string>& foods);
  void SetMostCommonReasons(const std::vector<std::string>& reasons);
  void SetMostCommonDisposals(const std::vector<std::string>& disposals);
  void SetTotalWasteCost(double cost);
  void SetStrategies(const std::vector<std::string>& strategies);

  const std::vector<std::string>& GetMostCommonFoods() const;
  const std::vector<std::string>& GetMostCommonReasons() const;
  const std::vector<std::string>& GetMostCommonDisposals() const;
  double GetTotalWasteCost() const;
  const std::vector<std::string>& GetStrategies() const;

 private:
  std::vector<std::string> common_foods_;
  std::vector<std::string> common_reasons_;
  std::vector<std::string> common_disposals_;
  double total_waste_cost_ = 0.0;
  std::vector<std::string> strategies_;
};

#endif
