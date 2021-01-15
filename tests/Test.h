//
// Created by cerbe on 15.01.2021.
//

#ifndef GOOGLE_TEST_PROJECT_TEST_H
#define GOOGLE_TEST_PROJECT_TEST_H

#include "gtest/gtest.h"
// both PPCAT_NX(s, 1) and PPCAT(s, 1) produce the identifier s1,
// unless s is defined as a macro, in which case PPCAT(s, 1) produces <macro value of s>1.
#define PPCAT_NX(A, B) A ## B
#define PPCAT(A, B) PPCAT_NX(A, B)

#endif //GOOGLE_TEST_PROJECT_TEST_H
