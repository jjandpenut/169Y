#include "globals.hpp"

pros::Controller controller(CONTROLLER_MASTER);
pros::Motor LeftFrontMotor(Left_Front_Port);
pros::Motor LeftMiddleMotor(Left_Middle_Port);
pros::Motor LeftBackMotor(Left_Back_Port);
pros::Motor RightFrontMotor(Right_Front_Port);
pros::Motor RightMiddleMotor(Right_Middle_Port);
pros::Motor RightBackMotor(Right_Back_Port);
pros::Motor IntakeMotor(Intake_Port);
pros::Motor TwoBarMotor(Two_Bar_Port);
pros::ADIDigitalOut Wing_Piston(Wing_Port);
pros::ADIDigitalOut Blocker_Piston(Blocker_Port);