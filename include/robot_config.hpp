#ifndef ROBOT_CONFIG_HPP
#define ROBOT_CONFIG_HPP

#include <vector>

#include "api.h"
#include "hskylib.h"

extern std::queue<Command*> commandQueue;
extern HskyController controller;
extern HolonomicDrive drive;
extern pros::MotorGroup leftFrontMotorGroup;
extern CommandRunner* activeCommandRunner;

void opcontrolInit();
void robotInit();
void populateAutonQueue();

#endif