# Task-2
GPIO (switching on/off 7-segment display in a specific order)

IMPORTANT Some variable declarations and function names are in my native language (Slovene). Reason being is, I did these assignments in the scope of my University. 
Hopefully the code will make sense, as I briefly explain the purpose of each task below.

In this exercise we properly initialized all GPIO pins and connected them to 7-segment display via breadboard.
One push of a button makes only one change on the 7-segmet display. Meaning that only one diode turns on or off.
Pattern: all diodes turned off → a → ab → abc → abcd → abcde → abcdef → abcdefg → abcdef → abcde → abcd → abc → ab → a → all diodes turned off

Tools used: STM32F429I discovery board (Cortex M4), breadboard, wires, push button, 7-segment display TDSR5150
