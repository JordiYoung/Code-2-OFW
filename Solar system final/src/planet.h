#include "ofMain.h"


class Line {
public:
	ofPoint a;
	ofPoint b;
};

class planet {
public:
	void setup();
	void update();
	void draw();

	ofParameterGroup planetGroup;
	ofParameter<float> rotateSpeed;
	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<int> red;
	ofParameter<int> green;
	ofParameter<int> blue;
	ofParameter<int> radius;

	float rotation = 0.0;
	float x, y;
	ofPolyline line;
	ofPolyline line02;

};