// Ref Videos:
// https://www.youtube.com/watch?v=utnPvE8hN3o
// https://www.youtube.com/watch?v=OJtpA_qTNL0

// Notes: 
// 1- Strings must always be inside double quotes ("text") or the code won't run.

// initialize a variable
String count;

void setup() {
  // The same baud rate (9600) should be set in the python code
  // and in the Arduino code.
  Serial.begin(9600);

  // set LED_BUILTIN (pin 13) as an output
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {

    // Example: This is how to send a message from the Arduino to 
    // the python code on the laptop.
    // It's just like writing to the Arduino Serial Monitor. But the message goes to
    // the python code instead of to the serial monitor.
    //Serial.println("Hello");

    // Read the count sent by the python code and store it in a variable called "count".
    // This line means: "read until you reach a newline chracter".
    // You will see that in the python code we have added a newline character before sending the string.
    count = Serial.readStringUntil('\n');

    // Remove any leading and trailing whitespaces that could have been added.
    // Sometimes when devices are communicating they add a whitespace.
    count.trim();
    
    if (count.equals("one")) {
      // Turn the LED on.
      digitalWrite(LED_BUILTIN, HIGH);
    }

    else if (count.equals("two")) {
      // Turn the LED off.
      digitalWrite(LED_BUILTIN, LOW);
    }

    // Add a delay before the next communication is read.
    delay(100);

}
