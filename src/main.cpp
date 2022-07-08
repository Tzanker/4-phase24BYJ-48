#include <AccelStepper.h>
#include <Arduino.h>
#define motorPin4 6
#define motorPin3 7
#define motorPin2 8
#define motorPin1 9
#define ROTATION 4096

#define MotorInterfaceType 8
// Initialize with pin sequence IN1-IN3-IN2-IN4 for using the AccelStepper library with 28BYJ-48 stepper motor:
// Initialize with pin sequence IN1-IN3-IN2-IN4 for using the AccelStepper library with 28BYJ-48 stepper motor:
AccelStepper stepper = AccelStepper(MotorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);
void setup() {
    // Set the maximum steps per second:
    stepper.setMaxSpeed(1000);
}
void loop() {
    // Set the current position to 0:
    stepper.setCurrentPosition(0);
    // Run the motor forward at 500 steps/second until the motor reaches 4096 steps (1 revolution):
    while (stepper.currentPosition() != ROTATION*5) {
        stepper.setSpeed(1000);
        stepper.runSpeed();
    }
    delay(1000);
    // Reset the position to 0:
    stepper.setCurrentPosition(0);
    // Run the motor backwards at 1000 steps/second until the motor reaches -4096 steps (1 revolution):
    while (stepper.currentPosition() != -ROTATION*5) {
        stepper.setSpeed(-1000);
        stepper.runSpeed();
    }
    delay(1000);
    // Reset the position to 0:
    stepper.setCurrentPosition(0);

}






















//#include <Arduino.h>
//
//
//#define InPin4 6
//#define InPin3 7
//#define InPin2 8
//#define InPin1 9
//
//void setState(int State1, int State2, int State3, int State4){
//    // Set the output pins to the desired state
//    digitalWrite(InPin1, State1);
//    digitalWrite(InPin2, State2);
//    digitalWrite(InPin3, State3);
//    digitalWrite(InPin4, State4);
//}
//
//void setup() {
//    pinMode(InPin4, OUTPUT); // Sets the InPin4 as an OUTPUT
//    pinMode(InPin3, OUTPUT); // Sets the InPin3 as an OUTPUT
//    pinMode(InPin2, OUTPUT); // Sets the InPin2 as an OUTPUT
//    pinMode(InPin1, OUTPUT); // Sets the InPin1 as an OUTPUT
//    Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
//    Serial.println("Serial Communication is starting with 9600 of baudrate speed");
//    Serial.println("Stepper Motor is starting");
//}
//
//
//
//void loop() {
//    for(int i=0;i<=100;i++) {
//        delay(1); // Delay of 10ms
//        setState(HIGH, LOW, LOW, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(HIGH, HIGH, LOW, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, HIGH, LOW, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, HIGH, HIGH, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, LOW, HIGH, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, LOW, HIGH, HIGH); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, LOW, LOW, HIGH); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(HIGH, LOW, LOW, HIGH); // Set the output pins to the desired state
//
//
//    }
//    Serial.println("Stepper Motor Switch Direction");
//    for(int i=0;i<=100;i++) {
//        delay(1); // Delay of 10ms
//        setState(HIGH, LOW, LOW, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(HIGH, HIGH, LOW, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, HIGH, LOW, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, HIGH, HIGH, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, LOW, HIGH, LOW); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, LOW, HIGH, HIGH); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(LOW, LOW, LOW, HIGH); // Set the output pins to the desired state
//        delay(1); // Delay of 10ms
//        setState(HIGH, LOW, LOW, HIGH); // Set the output pins to the desired state
//
//
//    }
//
//
//}