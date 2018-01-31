// the size function creates a window
// that is width, height, pixels, big
// when using numbers, include 0 to the number before the end size

size(500, 500); // window scale which is measured in pixels

background(255, 0, 0); // changes background color of window

fill(233, 210, 205); // fill contains RGB (Red, Green Blue) and goes from 0 - 255

noStroke(); // don't put an outline or stroke on the following shapes

stroke(0, 0, 20); // colors the outline of your shape
strokeWeight(5); // thickness of a stroke/outline

// rect function creates a rectangle that contains starting point (x, y), width, and height
// begins from upper left corner
rect(30, 40, 60, 60);

ellipse(144, 144, 100, 100); // draws a circle

line(0, height, width, 0); // draws a line from x1, y1, x2, y2
// width is a system variable that stores how wide the window is & width returns the width of size(use for x2)
// height is interchangable for y1