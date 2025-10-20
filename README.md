# Boxes Assignment

##Description 
This program calculates different properties of cardboard boxes:
-The *area* of the box
-The *volume*
-The *leftover cardboard*
-The *maximum height*
-And finally the *bowlength*

Each function performs a different calculation, and automated tests check that the results are correct.

## Functions implemented 
1. getarea (width, height, length) - finds the surface area of the box.
2. getvolume (width, height, length) - finds the volume.
3. Leftovercardboard (width, height, length, sheetarea) - figures out how much cardboard is left.
4. getmaxheight (width, length, sheetarea) - figures out the tallest box that can be made.
5. bowlength (width, height) - finds how long the bow needs to be to wrap around the box.

## Tests
The program includes automated tests to make sure every function works correcrly.
Each test checks if the results match what's expected.

## How to compile and run
In the terminal type these commands:
"g++ -std=c++20 tests.cpp -o program.exe
./program.exe"
If everything works, you will see all five functions print out results:
1.getarea
2.getvolume
3.leftovercardboard
4.getmaxheight
5.bowLength
