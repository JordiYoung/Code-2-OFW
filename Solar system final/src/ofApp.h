#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "vehicle.h"
#include "planet.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofxPanel gui;
		

		ofParameterGroup planetGroups;
		planet planet01;
		planet planet02;
		planet planet03;
		planet planet04;
		planet planet05;
		planet planet06;
		planet planet07;
		planet planet08;
		planet planet09;
		planet planet10;

		vector<vehicle>vehicles;

		
		
};
