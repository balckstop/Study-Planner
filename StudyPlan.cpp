#include "StudyPlan.h"

StudyPlan::StudyPlan(std::string subject, double hours)
    : subject(subject), hours(hours) {}
    
bool StudyPlan::theory(double Hours) {
    if (Hours < 0) { return false; }
    else {
        hours += Hours;
        return true;
    }
}

bool StudyPlan::question(double Hours) {
    if (Hours < 0) { return false; }
    else {
        hours += Hours;
        return true;
    }
}

bool StudyPlan::resting(double Hours) {
    if (hours - Hours >= 0) {
        hours -= Hours;
        return true;
    } else { return false; }
}

void StudyPlan::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << hours << " hours is needed to study " << subject;
}