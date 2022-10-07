#include "Project.h"

Project::Project(std::string subject, double hours)
    : StudyPlan {subject,hours} {}
    
bool Project::theory(double Hours) {
    Hours += researchHours;
    return StudyPlan::theory(Hours);
}

bool Project::question(double Hours) {
    return StudyPlan::question(Hours);
}

bool Project::resting(double Hours) {
    Hours -= restProject;
    return StudyPlan::resting(Hours);
}

void Project::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << hours << " hours is needed for " << subject << "project";
}