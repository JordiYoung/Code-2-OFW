#include "planet.h"

void planet::setup() {
	

	planetGroup.add(rotateSpeed.set("speed", 0.01, 0.0, 10.0));
	planetGroup.add(posX.set("X", 0, 0, 600));
	planetGroup.add(posY.set("Y", 0, 0, 600));

	planetGroup.add(red.set("red", 255, 0, 255));
	planetGroup.add(green.set("green", 255, 0, 255));
	planetGroup.add(blue.set("blue", 255, 0, 255));
	planetGroup.add(radius.set("radius", 5, 0, 50));

	ofSetVerticalSync(true);

	

}

void planet::update() {

	

	rotation++;
	

	
}
void planet::draw() {

	

	
	ofNoFill();

	ofSetColor(red, green, blue);
	ofRotate(rotation * rotateSpeed);
	ofCircle(posX, posY, radius);
	
	line.draw();
}
