#ifndef _STUDYPLAN_UTIL_H_
#define _STUDYPLAN_UTIL_H_
#include <vector>
#include "StudyPlan.h"
#include "Project.h"
#include "Exam.h"

// Utility helper functions for StudyPlan class

void display(const std::vector<StudyPlan> &study_plans);
void theory(std::vector<StudyPlan> &study_plans, double Hours);
void question(std::vector<StudyPlan> &study_plans, double Hours);
void resting(std::vector<StudyPlan> &study_plans, double Hours);

// Utility helper functions for Project class

void display(const std::vector<Project> &projects);
void theory(std::vector<Project> &projects, double Hours);
void question(std::vector<Project> &projects, double Hours);
void resting(std::vector<Project> &projects, double Hours);

// Utility helper functions for Exam class
void display(const std::vector<Exam> &exams);
void theory(std::vector<Exam> &exams, double Hours);
void question(std::vector<Exam> &exams, double Hours);
void resting(std::vector<Exam> &exams, double Hours);

#endif