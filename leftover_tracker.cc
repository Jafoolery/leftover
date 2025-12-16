// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

#include "leftover_tracker.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_tracker.h), only
// if you didn't implement them inline within leftover_tracker.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverTracker
// class.
// ===================================================================
bool LeftoverTracker::AddRecord(const LeftoverRecord& record) {
  for (const auto& r : leftover_records_) {
    if (r.GetDate() == record.GetDate() && r.GetMeal() == record.GetMeal() &&
        r.GetFoodName() == record.GetFoodName() &&
        r.GetQtyInOz() == record.GetQtyInOz() &&
        r.GetLeftoverReason() == record.GetLeftoverReason() &&
        r.GetDisposalMechanism() == record.GetDisposalMechanism() &&
        r.GetCost() == record.GetCost()) {
      return false;
    }
  }
  leftover_records_.push_back(record);
  return true;
}

bool LeftoverTracker::DeleteRecord(const LeftoverRecord& record) {
  for (auto it = leftover_records_.begin(); it != leftover_records_.end();
       ++it) {
    if (it->GetDate() == record.GetDate() &&
        it->GetMeal() == record.GetMeal() &&
        it->GetFoodName() == record.GetFoodName()) {
      leftover_records_.erase(it);
      return true;
    }
  }
  return false;
}

const std::vector<LeftoverRecord>& LeftoverTracker::GetRecords() const {
  return leftover_records_;
}

LeftoverReport LeftoverTracker::GetLeftoverReport() const {
  LeftoverReport report;
  return report;
}

int LeftoverTracker::GetNumRecords() const {
  return static_cast<int>(leftover_records_.size());
}

void LeftoverTracker::Clear() { leftover_records_.clear(); }