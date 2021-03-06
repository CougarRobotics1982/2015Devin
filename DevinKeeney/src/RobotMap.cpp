// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainSpeedController1 = NULL;
SpeedController* RobotMap::driveTrainSpeedController2Talon = NULL;
SpeedController* RobotMap::driveTrainSpeedController3 = NULL;
SpeedController* RobotMap::driveTrainSpeedController4 = NULL;
RobotDrive* RobotMap::driveTrainRobotDrive41 = NULL;
DoubleSolenoid* RobotMap::pneumaticsDoubleSolenoid = NULL;
Compressor* RobotMap::pneumaticsCompressor = NULL;
AnalogAccelerometer* RobotMap::sensorsAnalogAccelerometer1 = NULL;
Gyro* RobotMap::sensorsGyro1 = NULL;
Encoder* RobotMap::sensorsEncoder = NULL;
Servo* RobotMap::servosServoX = NULL;
Servo* RobotMap::servosServoY = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainSpeedController1 = new Jaguar(1);
	lw->AddActuator("Drive Train", "Speed Controller 1", (Jaguar*) driveTrainSpeedController1);
	
	driveTrainSpeedController2Talon = new Talon(2);
	lw->AddActuator("Drive Train", "Speed Controller 2  Talon", (Talon*) driveTrainSpeedController2Talon);
	
	driveTrainSpeedController3 = new Jaguar(3);
	lw->AddActuator("Drive Train", "Speed Controller 3", (Jaguar*) driveTrainSpeedController3);
	
	driveTrainSpeedController4 = new Jaguar(4);
	lw->AddActuator("Drive Train", "Speed Controller 4", (Jaguar*) driveTrainSpeedController4);
	
	driveTrainRobotDrive41 = new RobotDrive(driveTrainSpeedController1, driveTrainSpeedController2Talon,
              driveTrainSpeedController3, driveTrainSpeedController4);
	
	driveTrainRobotDrive41->SetSafetyEnabled(false);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);

	pneumaticsDoubleSolenoid = new DoubleSolenoid(0, 3, 2);      
	lw->AddActuator("Pneumatics", "Double Solenoid", pneumaticsDoubleSolenoid);
	
	pneumaticsCompressor = new Compressor(0);
	
	
	sensorsAnalogAccelerometer1 = new AnalogAccelerometer(1);
	lw->AddSensor("Sensors", "AnalogAccelerometer 1", sensorsAnalogAccelerometer1);
	sensorsAnalogAccelerometer1->SetSensitivity(0.0);
        sensorsAnalogAccelerometer1->SetZero(2.5);
	sensorsGyro1 = new Gyro(0);
	lw->AddSensor("Sensors", "Gyro 1", sensorsGyro1);
	sensorsGyro1->SetSensitivity(0.007);
	sensorsEncoder = new Encoder(0, 1, false, Encoder::k4X);
	lw->AddSensor("Sensors", "Encoder", sensorsEncoder);
	sensorsEncoder->SetDistancePerPulse(1.0);
        sensorsEncoder->SetPIDSourceParameter(Encoder::kRate);
	servosServoX = new Servo(5);
	lw->AddActuator("Servos", "Servo X", servosServoX);
	
	servosServoY = new Servo(6);
	lw->AddActuator("Servos", "Servo Y", servosServoY);
	


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
