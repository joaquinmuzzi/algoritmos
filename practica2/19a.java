void setup() {
  size(500, 500);
  float centerX = width*0.5;
  float centerY = height*0.5;

  rect(centerX-50, centerY-25, 100, 50);
  line(centerX-50, centerY-25, centerX-25, centerY-50);
  line(centerX-25, centerY-50, centerX+25, centerY-50);
  line(centerX+25, centerY-50, centerX+50, centerY-25);
  line(centerX-25, centerY-50, centerX, centerY-25);
  line(centerX, centerY-25, centerX, centerY+25);
  stroke(255, 0, 0);
  strokeWeight(5);
  point(centerX, centerY);
}