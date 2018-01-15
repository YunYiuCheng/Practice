/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#ifndef OI_H
#define OI_H
#include "Joystick.h"
#include "WPILib.h"
#include "Commands/DriveWithJoystick.h"

class OI {

private:
	static const int STICK = 0;
		Joystick* stick;

public:
	OI();
	Joystick* getJoystick0();
};

#endif  // OI_H
