#ifndef ROBOT_CONFIG_HPP
#define ROBOT_CONFIG_HPP

#include <vector>

#include "api.h"
#include "hskylib.h"

extern HskyController controller;
extern HolonomicDrive drive;
extern pros::MotorGroup leftFrontMotorGroup;

void opcontrolInit();
void robotInit();

#endif