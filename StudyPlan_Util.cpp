#include <iostream>
#include "StudyPlan_Util.h"

// Displays StudyPlan objects in a vector of StudyPlan objects 
void display(const std::vector<StudyPlan> &study_plans) {
    std::cout << "\n=== Study Plans===========================================" << std::endl;
    for (const auto &s: study_plans) 
        std::cout << s << std::endl;
}

// Study theory to each StudyPlan object in the vector
void theory(std::vector<StudyPlan> &study_plans, double Hours) {
    std::cout << "\n=== Study theory for StudyPlan =================================" << std::endl;
    for (auto &t: study_plans)  {
        if (t.theory(Hours)) 
            std::cout << Hours << " hours to study " << subject << " theory" <<std::endl;
        else
            std::cout << "No time for " << subject  << std::endl;
    }
}

// Study question to each StudyPlan object in the vector
void question(std::vector<StudyPlan> &study_plans, double Hours) {
    std::cout << "\n=== Study question for StudyPlan =================================" << std::endl;
    for (auto &t: study_plans)  {
        if (t.question(Hours)) 
            std::cout << Hours << " hours to study " << subject << " question" <<std::endl;
        else
            std::cout << "No time for " << subject  << std::endl;
    }
}

// Resting hours to each StudyPlan object in the vector
void question(std::vector<StudyPlan> &study_plans, double Hours) {
    std::cout << "\n=== Resting hours for StudyPlan =================================" << std::endl;
    for (auto &t: study_plans)  {
        if (t.resting(Hours)) 
            std::cout << Hours << " hours to rest for " << subject <<std::endl;
        else
            std::cout << "No resting time for " << subject  << std::endl;
    }
}

//********************************************************************************************

// Displays Project objects in a vector of Project objects 
void display(const std::vector<Project> &projects) {
    std::cout << "\n=== Projects ===========================================" << std::endl;
    for (const auto &s: projects) 
        std::cout << s << std::endl;
}

// Study theory to each Project object in the vector
void theory(std::vector<Project> &projects, double Hours) {
    std::cout << "\n=== Study theory for Project =================================" << std::endl;
    for (auto &t: projects)  {
        if (t.theory(Hours)) 
            std::cout << Hours << " hours to study " << subject << " theory" <<std::endl;
        else
            std::cout << "No time for " << subject  << std::endl;
    }
}

// Study question to each Project object in the vector
void question(std::vector<Project> &projects, double Hours) {
    std::cout << "\n=== Study question for Project =================================" << std::endl;
    for (auto &t: projects)  {
        if (t.question(Hours)) 
            std::cout << Hours << " hours to study " << subject << " question" <<std::endl;
        else
            std::cout << "No time for " << subject  << std::endl;
    }
}

// Resting hours to each Project object in the vector
void question(std::vector<Project> &projects, double Hours) {
    std::cout << "\n=== Resting hours for Project =================================" << std::endl;
    for (auto &t: projects)  {
        if (t.resting(Hours)) 
            std::cout << Hours << " hours to rest for " << subject <<std::endl;
        else
            std::cout << "No resting time for " << subject  << std::endl;
    }
}

//********************************************************************************************

// Displays Exam objects in a vector of Exam objects 
void display(const std::vector<Exam> &exams) {
    std::cout << "\n=== Exams ===========================================" << std::endl;
    for (const auto &s: exams) 
        std::cout << s << std::endl;
}

// Study theory to each Exam object in the vector
void theory(std::vector<Exam> &exams, double Hours) {
    std::cout << "\n=== Study theory for Exam =================================" << std::endl;
    for (auto &t: exams)  {
        if (t.theory(Hours)) 
            std::cout << Hours << " hours to study " << subject << " theory" <<std::endl;
        else
            std::cout << "No time for " << subject  << std::endl;
    }
}

// Study question to each Exam object in the vector
void question(std::vector<Exam> &exams, double Hours) {
    std::cout << "\n=== Study question for Exam =================================" << std::endl;
    for (auto &t: exams)  {
        if (t.question(Hours)) 
            std::cout << Hours << " hours to study " << subject << " question" <<std::endl;
        else
            std::cout << "No time for " << subject  << std::endl;
    }
}

// Resting hours to each Exam object in the vector
void question(std::vector<Exam> &projects, double Hours) {
    std::cout << "\n=== Resting hours for Exam =================================" << std::endl;
    for (auto &t: exams)  {
        if (t.resting(Hours)) 
            std::cout << Hours << " hours to rest for " << subject <<std::endl;
        else
            std::cout << "No resting time for " << subject  << std::endl;
    }
}



