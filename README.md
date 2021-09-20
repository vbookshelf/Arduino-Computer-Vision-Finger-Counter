## Arduino-Computer-Vision-Finger-Counter

[ Project Under Construction ]

An example project that shows how to set up serial communication between a python script (on a laptop) and an Arduino. This simple and cheap method allows real time computer vision to be applied to the physical world. It takes just a few lines of code to get the communication working.

A person holds up one or more fingers in front of a laptop webam. A cpu based hand keypoint detector (from Google  Mediapipe) is used to detect which fingers are being held up. The python code, running on the laptop, sends this info to the Arduino. The Arduino then turns on an LED associated with each finger that's being held up. The code is written for the right hand only.

<i>It's like a finger pointing away to the moon.<br>
Don't concentrate on the finger or you will miss all that heavenly glory.</i><br>
~ Bruce Lee
