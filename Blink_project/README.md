# Blink project

My very first Arduino project. It is an equivalent of "hello world" with the use of Arduino Uno. Arduino blinks the inbuilt diode at the coded frequency.

Built based on the Arduino's own example.

### Tech

**Language:**
The language used in Arduino's dialect of C/C++.

More on the syntax rules:
<a href="https://www.arduino.cc/reference/en/#functions"> here.</a>

**Hardware:**
Arduino Uno

### How to run


### Blink1
The inbuilt led blinks with 1000 milliseconds of light and 1000 milliseconds of no light.

### Blink2
Arduino Blink project - the second attempt.
The inbuilt led blinks create a looping pattern.

### Morse Code "Hello World"
In this project I translated "hello world" in to Morse Code, and used Arduino to blink it back to me.

The Morse Code sequence looks like below:

**.... . .-.. .-.. ---     .-- --- .-. .-.. -..**

<a href="https://www.youtube.com/watch?v=CPVrFV4vRrw&feature=youtu.be"> The video featuring the program at work is available on youtube.</a>

The program contains ten characters and one space between the two words.
I have followed the basic rules about the duration of each of the character, each dot and each dash:

* dot: 1 unit duration = 100 milliseconds
* dash: 3 units duration = 300 milliseconds
* space: 1 unit duration - after each dot and each dash = 100 milliseconds
* letters separator: 3 units = 300 milliseconds
* words separator: 7 units = 700 milliseconds

*Each Morse code symbol is formed by a sequence of dots and dashes. The dot duration is the basic unit of time measurement in Morse code transmission. The duration of a dash is three times the duration of a dot. Each dot or dash within a character is followed by period of signal absence, called a space, equal to the dot duration. The letters of a word are separated by a space of duration equal to three dots, and the words are separated by a space equal to seven dots.* <a href="https://en.wikipedia.org/wiki/Morse_code">Wikipedia on Morse Code.</a>


### Interesting problem
The programs I wrote will continue to execute until they are connected to the power. How to stop Arduino from executing a sketch? Interesting discussion to read <a href="https://forum.arduino.cc/index.php?topic=86630.0">here.</a>
