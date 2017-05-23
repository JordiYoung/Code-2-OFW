#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(27);
	planet01.setup();
	planet02.setup();
	planet03.setup();
	planet04.setup();
	planet05.setup();
	planet06.setup();
	planet07.setup();
	planet08.setup();

	vehicles.resize(100);

	planetGroups.add(planet01.planetGroup);
	planetGroups.add(planet02.planetGroup);
	planetGroups.add(planet03.planetGroup);
	planetGroups.add(planet04.planetGroup);
	planetGroups.add(planet05.planetGroup);
	planetGroups.add(planet06.planetGroup);
	planetGroups.add(planet07.planetGroup);
	planetGroups.add(planet08.planetGroup);

	for (auto & v : vehicles) {
		ofPoint location(ofGetWidth(), ofGetHeight());
		v.setup(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
	}

	gui.setup(planetGroups);
	

	ofEnableSmoothing();

	
}

//--------------------------------------------------------------
void ofApp::update(){
	
	planet01.update();
	planet02.update();
	planet03.update();
	planet04.update();
	planet05.update();
	planet06.update();
	planet07.update();
	planet08.update();

	for (auto & v : vehicles) {
		v.applyBehaviours(vehicles);
		v.borders();
		v.update();

		ofPoint planets(planet02.posX, planet02.posY);
		ofPoint seekForce = v.seek(planets);

		seekForce *= 10;

		v.applyForce(seekForce);

	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofEnableAlphaBlending();
	gui.draw();

	
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	planet01.draw();

	ofTranslate(planet01.posX, planet01.posY);
	planet02.draw();

	ofTranslate(planet01.posX, planet01.posY);
	planet03.draw();

	ofTranslate(planet03.posX, planet03.posY);
	planet04.draw();

	ofTranslate(planet01.posX, planet01.posY);
	planet05.draw();

	ofTranslate(planet01.posX, planet01.posY);
	planet06.draw();

	ofTranslate(planet01.posX, planet01.posY);
	planet07.draw();

	ofTranslate(planet01.posX, planet01.posY);
	planet08.draw();

	for (auto & v : vehicles) {
		v.draw('a');
	}

	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	

		
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
