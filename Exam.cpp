#include "Exam.h"

Exam::Exam(std::string subject, double hours, int totalQuest)
    : StudyPlan {subject,hours}, totalQuest {totalQuest} {}
    
bool Exam::theory(double Hours) {
    return StudyPlan::theory(Hours);
}

bool Exam::question(double Hours) {
    int questHours{};
    questHours = totalQuest * perQuestHours;
    Hours += questHours; 
    return StudyPlan::question(Hours);
}

bool Exam::resting(double Hours) {
    Hours -= restExam;
    return StudyPlan::resting(Hours);    
}

void Exam::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << hours << " hours is needed for " << subject << "exam";
}
   