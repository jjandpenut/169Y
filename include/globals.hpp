#pragma once
#include "main.h"
//Bindings
constexpr auto Wing_Expand = pros::E_CONTROLLER_DIGITAL_A;
constexpr auto Intake_Forward = pros::E_CONTROLLER_DIGITAL_R2;
constexpr auto Intake_Reverse = pros::E_CONTROLLER_DIGITAL_L2;
constexpr auto Shooter_Close = pros::E_CONTROLLER_DIGITAL_UP;
constexpr auto Shooter_Far = pros::E_CONTROLLER_DIGITAL_RIGHT;
constexpr auto Wing_Retract = pros::E_CONTROLLER_DIGITAL_B;
constexpr auto Blocker_Expand = pros::E_CONTROLLER_DIGITAL_X;
constexpr auto Blocker_Retract = pros::E_CONTROLLER_DIGITAL_Y;



//Ports

constexpr int Left_Front_Port = 1;
constexpr int Left_Middle_Port =2;
constexpr int Left_Back_Port =3;
constexpr int Right_Front_Port = 5;
constexpr int Right_Middle_Port =6;
constexpr int Right_Back_Port =4;
constexpr int Intake_Port = 7;
constexpr int Two_Bar_Port = 8;
constexpr char Wing_Port = 'A';
constexpr char Blocker_Port = 'H';

//Cool things
constexpr int TASK_Delay = 20;

//Declare
extern pros::Controller controller;
extern pros::Motor LeftFrontMotor;
extern pros::Motor LeftMiddleMotor;
extern pros::Motor LeftBackMotor;
extern pros::Motor RightFrontMotor;
extern pros::Motor RightMiddleMotor;
extern pros::Motor RightBackMotor;
extern pros::Motor IntakeMotor;
extern pros::Motor TwoBarMotor;
extern pros::ADIDigitalOut Wing_Piston;
extern pros::ADIDigitalOut Blocker_Piston;







