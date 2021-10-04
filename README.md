## Arduino Computer Vision Finger Counter

By using serial communication it's possible to combine the power of a pc with a low cost Arduino micro-controller. This opens up a world of possibilities to experiment with building your own Ai powered devices and robotics products.

This project demonstrates how to send data between a python script (running on a laptop) and an Arduino. It takes just a few lines of code to get the serial communication working.

<br>
<img src="https://github.com/vbookshelf/Arduino-Computer-Vision-Finger-Counter/blob/main/images/project-images.png" width="500"></img>
<br>

This is what this project does: A person holds up one or two fingers in front of a laptop webcam. A cpu based computer vision hand keypoint detector (from Google  Mediapipe) is used to detect how many fingers are being held up. This count is displayed on the screen. 

The LED_BUILTIN is an LED that is built into the Arduino.<br>
The python code, running on the laptop, sends the count to the Arduino. If one finger is being held up then the Arduino turns the LED_BUILTIN on. If two fingers are being held up then the Arduino turns the LED_BUILTIN off. The code is written for the right hand only. 

The voltage that the Arduino uses to turn on the LED could be used to perform many other actions - open a door, control the position of a robot arm, apply the brakes on a self driving car, set off an alarm and more.

In this project hand images are fed from a webcam to a machine learning model. The model then predicts hand keypoints. The python program uses these keypoints to determine whether a finger is up or down. However, because we are using an Ardunio, the input could also be sensor data like temperature and pressure. This data could be continuously fed to a model to predict, for example, if a machine will break down in the next 24 hours.

<br>

## Reference Resources

These tutorials will help you understand what 
the code is doing. You could watch these tutorials and implement this project yourself.

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


<br>

## How to run this project 

These instructions are for Mac OSX but the process to run a python file in Windows should be similar.

1- Connect your Arduino to a USB port on your laptop.<br>
2- Upload the arduino-sketch folder to your Arduino.<br>
3- Change the port variable in the arduino-finger-counter.py file to match the port you are using. The steps to do this are described in the arduino-finger-counter.py file.<br>
4- On the command line: Navigate to the folder containing the arduino-finger-counter.py file.<br>
5- On the command line type: python arduino-finger-counter.py<br>
6- A window will open showing what your webcam is seeing.<br>
7- Hold up your right hand in front of your webcam.<br>
8- Show one finger to turn the Arduino LED on.<br>
9- Show two fingers to turn the Arduino LED off.

## Packages

These are the packages that I used:

- Python 3.7.0
- OpenCV
- numpy==1.21.2
- mediapipe==0.8.7.3
- pyserial==3.5

