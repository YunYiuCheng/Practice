#ifndef Drive_H
#define Drive_H

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include "Joystick.h"
#include <ctre/phoenix.h>

class Drive : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	WPI_TalonSRX* talon1;
	WPI_TalonSRX* talon2;

	//Encoder* enc;
	Timer* drivetime;

public:
	Drive();
	void InitDefaultCommand();
	void driveWithJoystick(Joystick* stick);
	void encoderReset();
	bool driveManual;
};

#endif  // Drive_H
