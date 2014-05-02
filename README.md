voltage_divider_arduino_uno
===========================

Voltage Divider Monitor

Most mobile robots have batteries to drive them, even the noisy ones powered by an engine. You have to make sure not to discharge you battery below a certain voltage to protect them from damaging. In this project we going to measure the voltage of the batteries with use of an analog port of an Arduino One and the principle of Voltage dividing.

In my case I have a Lipo Acu with 3 Cells. Those 3 Cells are rated at 11.1V. When fully charged this battery pack has 12,8 V as a maximum.
To protect the battery pack I don't want the Voltage to drop below 10V. The Arduino analog input has a range from 0V - 5V. The 12,8 Volt is to high too connect directly to the analog input. 
With two resistors we can produce the needed voltage.

The formula is:

U2=U*R2/(R1+R2)

R1 = 10kOhm = 10000 Ohm (brown, Black, Orange)

R2 = 4,7kOhm = 4700 Ohm (Yellow, purple, red)

The diode is to to avoid current feedback. Diode can handle 6 Ampers. I need 6 Ampers for my robot.
Doíode voltage drop is 0,5 Volts. The power that the diode has to handle is:

Power ( in Watts ) = Vf ( in Volts ) * I ( in Ampers )
Power = 12,8 * 6 --> Power = 76,8 watt

When the diode is only designed for 1 amper, it will be melt. Please be careful here

