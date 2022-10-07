#ifndef _PROJECT_H_
#define _PROJECT_H_
#include "StudyPlan.h"

class Project: public StudyPlan {
    private:
    static constexpr std::string defaultSubject = "Unnamed Project";
    static constexpr double defaultHours = 0.0;
    static constexpr double researchHours = 1.5;
    static constexpr double restProject = 0.3;
    
    public:
    Project(std::string subject = defaultSubject, double hours = defaultHours);
    virtual bool theory(double Hours) override;
    virtual bool question(double Hours) override;
    virtual bool resting(double Hours) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Project() = default;
};

#endif