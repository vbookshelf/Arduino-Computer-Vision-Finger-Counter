## Arduino-Computer-Vision-Finger-Counter

[ Project Under Construction ]

By using serial communication it's possible to combine the power of a pc with a low cost Arduino micro-controller. This opens up a world of possibilities to experiment with building physical machine learning devices and robotics products.

This project demonstrates how to send data between a python script (running on a laptop) and an Arduino. It takes just a few lines of code to get the serial communication working.

This is what this project does: A person holds up one or two fingers in front of a laptop webam. A cpu based computer vision hand keypoint detector (from Google  Mediapipe) is used to detect how many fingers are being held up. This count is displayed on the screen. 

The LED_BUILTIN is an LED that is built into the Arduino.<br>
The python code, running on the laptop, sends the count to the Arduino. If one finger is being held up then the Arduino turns the LED_BUILTIN on. If two fingers are being held up then the Arduino turns the LED_BUILTIN off. The code is written for the right hand only. 

The control voltage that the Arduino uses to turn on the LED could be used to perform many other actions - open a door, control the position of a robot arm, set off an alarm, apply the brakes on a self driving car and many more.

Also, in this example we fed hand imges, via a webcam, to a machine learning model that then predicted hand keypoints. However, because we are using an Ardunio, this input could also be sensor data like tempertaure, vibration and pressure. This data could be continuously fed into a model to predict, for example, if a machine could fail in the next 24 hours.

<br>

## Reference Resources

These tutorials will help you understand what 
my code is doing. Instead of studying the code in this repo, you
could just watch these tutorials and implement this project yourself.

Arduino - Send Commands with Serial Communication<br>
https://www.youtube.com/watch?v=utnPvE8hN3o

Arduino - Bidirectional Serial Communication with Raspberry Pi<br>
(It doesn't have to be a Raspberry Pi. It could also be a pc or laptop.)<br>
https://www.youtube.com/watch?v=OJtpA_qTNL0

Hand Tracking 30 FPS using CPU | OpenCV Python (2021) | Computer Vision<br>
https://www.youtube.com/watch?v=NZde8Xt78Iw&t=1603s

Also, if you have never used OpenCV with a webcam then I suggest watching
this tutorial:<br>
https://www.youtube.com/watch?v=WQeoO7MI0Bs&t=305s
