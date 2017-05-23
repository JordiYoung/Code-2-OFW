#include "ofApp.h"

void ofApp::setup(){

    ofSetFrameRate(60);
	ofSetBackgroundAuto(false);
    ofBackground(255);

	ofEnableAlphaBlending();
	
}

void ofApp::update(){ }

void ofApp::draw(){
    
	ofEnableSmoothing();
	
    float period = 120;
    float amplitude = 300;
    // Calculating horizontal location according to formula for simple harmonic motion
    float x = amplitude * sin(TWO_PI * ofGetFrameNum() / period);
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    

	ofSetColor(127, 10);
    ofDrawCircle(x, 0, 24);
}

void ofApp::mouseMoved(int x, int y ){ }
void ofApp::keyPressed(int key){ }
void ofApp::keyReleased(int key){ }
void ofApp::mouseDragged(int x, int y, int button){ }
void ofApp::mousePressed(int x, int y, int button){ }
void ofApp::mouseReleased(int x, int y, int button){ }
void ofApp::windowResized(int w, int h){ }
void ofApp::gotMessage(ofMessage msg){ }
void ofApp::dragEvent(ofDragInfo dragInfo){ }