#ifndef _STUDYPLAN_H_
#define _STUDYPLAN_H_
#include <iostream>
#include <string>
#include "Printable.h" 

class StudyPlan : public Printable {
    private:
    static constexpr std::string defaultSubject = "Unnamed Subject";
    static constexpr double defaultHours = 0.0;
    protected:
    std::string subject;
    double hours;
    public:
    StudyPlan (std::string subject = defaultSubject, double hours = defaultHours);
    virtual bool theory(double Hours) = 0.0;
    virtual bool question(double Hours) = 0.0;
    virtual bool resting(double Hours) = 0.0;
    virtual void print(std::ostream &os) const override;
    virtual ~StudyPlan() = default;
};

#endif