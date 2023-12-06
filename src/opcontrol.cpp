#include "opcontrol.hpp"
#include "globals.hpp"
void opcontrol(){

    bool WingState = false;
    bool TwoBarState = false;
    int IntakeState = 0;
    bool BlockerState = false;


 while(true){
        double left = -controller.get_analog(ANALOG_LEFT_Y);
		double right = controller.get_analog(ANALOG_RIGHT_Y);

            LeftFrontMotor.move(left);
            LeftMiddleMotor.move(left);
            LeftBackMotor.move(left);
            RightFrontMotor.move(right);
            RightMiddleMotor.move(right);
            RightBackMotor.move(right);

            handle_wings(WingState);
            handle_intake(IntakeState);
            handle_two_bar(TwoBarState);
            handle_blocker(BlockerState);

        }
        pros::delay(20);
 }


void handle_wings(bool &WingState){
    if(controller.get_digital_new_press(Wing_Expand))
        WingState = !WingState;
    Wing_Piston.set_value(WingState);

}
void handle_intake(bool &IntakeState);
