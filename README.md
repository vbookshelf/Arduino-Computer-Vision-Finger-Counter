## Arduino-Computer-Vision-Finger-Counter

[ Project Under Construction ]

An example project that shows how to send data between a python script (running on a laptop) and an Arduino. This method allows real time computer vision to be applied to the physical world. It takes just a few lines of code to get the serial communication working.

A person holds up one or two fingers in front of a laptop webam. A cpu based hand keypoint detector (from Google  Mediapipe) is used to detect how many fingers are being held up. The python code, running on the laptop, sends this count to the Arduino. If one finger is being held up then the Arduino turns the BUILT_IN LED on. If two fingers are being held up then the Arduino turns the BUILT_IN LED off. The code is written for the right hand only.

This simple technique opens up a world of possibilities...

<i>It's like a finger pointing away to the moon.<br>
Don't concentrate on the finger or you will miss all that heavenly glory.</i><br>
~ Bruce Lee
