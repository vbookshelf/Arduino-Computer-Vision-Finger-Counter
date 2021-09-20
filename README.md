## Arduino-Computer-Vision-Finger-Counter

[ Project Under Construction ]

An example project that shows how to send data between a python script (running on a laptop) and an Arduino. This method allows real time computer vision to be applied to the physical world. It takes just a few lines of code to get the serial communication working.

A person holds up one or two fingers in front of a laptop webam. A cpu based hand keypoint detector (from Google  Mediapipe) is used to detect how many fingers are being held up. This count is displayed on the screen. 

The LED_BUILTIN is an LED that is built into the Arduino.<br>
The python code, running on the laptop, sends the count to the Arduino. If one finger is being held up then the Arduino turns the LED_BUILTIN on. If two fingers are being held up then the Arduino turns the LED_BUILTIN off. The code is written for the right hand only.

This simple technique opens up a world of possibilities...

<i>It's like a finger pointing away to the moon.<br>
Don't concentrate on the finger or you will miss all that heavenly glory.</i><br>
~ Bruce Lee

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
