# Smartphone-Controlled-Home-Automation
A simple home automation project using Arduino UNO, Bluetooth module and a smartphone. The aim of this project is to control different home appliances using a smartphone.

Major Hardware Requirements :- Ardunio UNO, Bluetooth-HC05, Relay Board (2 Channel), DC Fan, 16 X 2 LCD and Potentiometer.

Major Software Requirements :- Arduino IDE and Bluetooth Terminal Android App.

Working of Project:
When the power is turned on, the LCD shows the state of Bluetooth module. We need to start the “Bluetooth Controller” app in our
smartphone and get connected to the Bluetooth module. If the pairing is
successful, the LCD shows "Bluetooth Connected".
Now, in the app, we need to set different keys for different loads and their corresponding value that must be transmitted when that key is pressed.Then we are ready to control the loads. When a key is pressed in the smartphone, the Bluetooth module receives the corresponding data and intern transmits that data to Arduino.
For example, if we press “1”, then the data received by the Bluetooth module
is “2”.
This data i.e. “2” is transmitted to Arduino. Arduino then compares the received data with the data written in the sketch and accordingly turns on the Fan. The similar action can be applicable to other keys and loads.
Using this type of connection, we can control i.e. turn on or off different home
electrical appliances using our smartphones.
