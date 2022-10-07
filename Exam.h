#ifndef _EXAM_H_
#define _EXAM_H_
#include "StudyPlan.h"

class Exam : public StudyPlan {
    private:
    static constexpr std::string defaultSubject = "Unnamed Exam";
    static constexpr double defaultHours = 0.0;
    static constexpr double perQuestHours = 0.15;
    static constexpr double restExam = 0.15;
    static constexpr int MINquestions = 10;
    int totalQuest;
    
    public:
    Exam(std::string subject = defaultSubject, double hours = defaultHours, int totalQuest = MINquestions);
    virtual bool theory(double Hours) override;
    virtual bool question(double Hours) override;
    virtual bool resting(double Hours) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Exam() = default;    
};

#endif