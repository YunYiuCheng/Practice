//#ifndef DriveWithJoystick_H
//#define DriveWithJoystick_H
#pragma once
//#include "../CommandBase.h"
#include <Commands/Command.h>
#include "WPILib.h"
#include "OI.h"

class DriveWithJoystick : public frc::Command { //used to be public CommandBase
public:
	DriveWithJoystick();
	void Initialize ();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	// Create a single static instance of all of your subsystems

};

//#endif  // DriveWithJoystick_H
