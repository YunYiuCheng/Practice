#include "Drive.h"
#include "../RobotMap.h"
#include "../Commands/DriveWithJoystick.h"
#include "ctre/phoenix.h"
Drive::Drive() : Subsystem("Drive") {

	talon1 = new WPI_TalonSRX(1);
	talon2 = new WPI_TalonSRX(2);

	//enc = new Encoder(0,1,false, Encoder::EncodingType=k4X);

	drivetime = new Timer();
	drivetime->Reset();
	driveManual = true;

	talon1->ConfigSelectedFeedbackSensor(ctre::phoenix::motorcontrol::FeedbackDevice::QuadEncoder, 0, 0);
	talon1->SetSensorPhase(false);

}

void Drive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick());

}
void Drive::driveWithJoystick(Joystick* stick){

	double power = stick->GetY();

	 if(fabs(power) < 0.1){

	  power = 0;
	}

	 talon1->Set(power);
	 talon2->Set(power);
}
void Drive::encoderReset()
{
	driveManual = false;
	//enc->getSensorCollection(0);
	//talon2->setQuadraturePosition();
	drivetime->Reset();
	drivetime->Start();

}
