#include "robot_config.hpp"

#include <hskylib/robot_specs.h>
#include <hskylib/subsystems/pneumatics.h>
#include <hskylib/utils/utils.h>

#include "pros/adi.hpp"
#include "pros/motors.h"

#define ROBOT_1

HskyController controller(pros::E_CONTROLLER_MASTER);

//---------------------------------------------------
// ##################### Robot 1 #####################
//---------------------------------------------------

#ifdef ROBOT_1

//===================== CONFIG =====================
robot_specs_t robotSpecs = {
    .driveWheelDiameter = 4.0,  // inches
    .trackWidth = 12.0,		   // inches
    .odomGearRatio = 1.0,
    .maxDrivePct = 100,
    .maxTurnPct = 100,
    .fwdPID = new PIDFController(0.5, 0.0, 0.1, 0.0, PIDFController::ERROR_TYPE::LINEAR),
    .strafePID = new PIDFController(0.5, 0.0, 0.1, 0.0, PIDFController::ERROR_TYPE::LINEAR),
    .turnPID = new PIDFController(2.5, 0.0, 0.2, 0.0, PIDFController::ERROR_TYPE::ANGULAR),
};


//===================== DEVICES =====================

pros::MotorGroup leftFrontMotorGroup({17, -16});
pros::MotorGroup leftBackMotorGroup({10, -9});
pros::MotorGroup rightFrontMotorGroup({-11, 12});
pros::MotorGroup rightBackMotorGroup({-1, 2});

//==================== SUBSYSTEMS ====================
HolonomicDrive drive(leftFrontMotorGroup, leftBackMotorGroup, rightFrontMotorGroup, rightBackMotorGroup, pros::E_MOTOR_BRAKE_COAST, pros::E_MOTOR_GEAR_600, 1.0, 1.0);
// Add odom here

//---------------------------------------------------
// ##################### Robot 2 #####################
//---------------------------------------------------

#elifdef ROBOT_2

//===================== CONFIG =====================

//===================== DEVICES =====================

//==================== SUBSYSTEMS ====================

#endif

//====================== UTILS ======================

void deviceInit() {}

void opcontrolInit() {}

void robotInit() { deviceInit(); }