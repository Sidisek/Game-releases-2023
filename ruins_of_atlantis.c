#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int brosta(int i){
	resetGyro(S2);
	setMotorSpeed(motorB,100);
	setMotorSpeed(motorC,100);
	delay(i);
	return 1;

}
void stamata(int i){
	setMotorSpeed(motorB,0);
	setMotorSpeed(motorC,0);
	delay(i);
}

int pisw(int i){
	resetGyro(S2);
	setMotorSpeed(motorB,-100);
	setMotorSpeed(motorC,-100);
	delay(i);
	return 1;
}

void aristera(int i){
	resetGyro(S2);
	setMotorSpeed(motorB,-50);
	setMotorSpeed(motorC,50);
	waitUntil(getGyroDegrees(S2) <=-i);//85--90 //110--120 //50--60
	stamata(100);
}

void deksia(int i){
	resetGyro(S2);
	setMotorSpeed(motorB,50);
	setMotorSpeed(motorC, -50);
	waitUntil(getGyroDegrees(S2) >= i);//86--90 // 111--120 // 50--60
	stamata(100);
}

task main()
{
/*
pisw(1000);
stamata(100);

brosta(2100);
stamata(100);

deksia(84); //deksia
stamata(100);

brosta(650);
stamata(100);

pisw(720);
stamata(100);

aristera(83); //aristera
stamata(100);

brosta(680);
stamata(100);

aristera(82);// 1h aristera
stamata(100);

brosta(2500);
stamata(100);

deksia(109); // 1h deksia
stamata(100);  // 1st checkpoint

brosta(3700); // megali eu8eia
stamata(100);

deksia(54); // deksia gia opis8en
stamata(100);  // 2nd chackpoint

pisw(850);
//stamata(100);

brosta(2700); // mprosta gia megali eue8a 2
//stamata(100);

aristera(84); // 1h strrofi aristera prin to tunnel
stamata(100);

brosta(1850); // apostasi meta tina strofi gia to tunnel
//stamata(100);


deksia(85); // teleutaia strofi deksia prin to tunnel
stamata(100); // 3rd checkpoint


brosta(1550); // mexri to tunnel
//stamata(100);

deksia(81);
stamata(100); // strofi gia na mpei sto tunel

brosta(950);
stamata(100); // mpainei mesa

pisw(900);
//stamata(100); // bgainei apo to tunnel

aristera(81);

brosta(1200);// feugei apo to tunnel
//stamata(100);

deksia(80);

brosta(2600);
//stamata(100);

aristera(81);

pisw(600);
//stamata(100);

brosta(2100);
//stamata(100);


aristera(85);

brosta(1000);

pisw(1000);

deksia(85);

brosta(1200);

aristera(83);

brosta(3400);
//stamata(100);

aristera(81);

brosta(1110);
stamata(200);

aristera(155);
stamata(200);

brosta(1430);

aristera(80); // 4th checkpoint

brosta(2100);
stamata(100);

deksia(94);

brosta(1750);

aristera(77);

brosta(1800);

deksia(75);

brosta(3200);

pisw(3300);

deksia(75);

brosta(1850);

aristera(66);

brosta(1700);

aristera(8);

brosta(1600);

deksia(75); //5th checkpoint
*/
brosta(700);

/*deksia(85);

brosta(700);

aristera(80);

brosta(1600);

aristera(85);

brosta(900);

pisw(900);

aristera(80);

brosta(1600);

deksia(78);

brosta(2000);

deksia(30);

brosta(800);
*/

aristera(83);

brosta (1250);

deksia(85);

brosta(800);

aristera(85);

brosta(5000);

pisw(1000);

deksia(85);

brosta(3400);

deksia(85);

brosta(6300);
stamata(100);

aristera(40);

brosta(1000);

deksia(40);

brosta(900);

deksia(85);

brosta(2500);

deksia(65);

brosta(1200);

deksia(20);


}