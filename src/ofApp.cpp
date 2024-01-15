#include "ofApp.h"
#include "ofEvents.h"
#include "ofGraphics.h"
#include "ofUtils.h"

//--------------------------------------------------------------
void ofApp::setup() {
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(0, ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255), 100);
	ofSetColor(0, 0, 0);
	ofDrawCircle(ofGetWidth() / 2, ofMap(sin(ofGetElapsedTimeMillis() * 0.005), -1, 1, 0, ofGetHeight()), 300);
	ofSetColor(255, 255, 255);
	drawCross(ofGetMouseX(), ofGetMouseY(), 200);

	ofDrawCircle(400, ofRandom(ofGetHeight()), 300);
	ofDrawCircle(ofGetWidth() - 400, ofMap(ofNoise(ofGetElapsedTimef()), 0, 1, 0, ofGetHeight()), 300);
}

//--------------------------------------------------------------
void ofApp::exit() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}

//--------------------------------------------------------------
void ofApp::drawCross(int x, int y, int size) {
	ofSetRectMode(OF_RECTMODE_CENTER);

	ofDrawRectangle(x, y, size, size / 10);
	ofDrawRectangle(x, y, size / 10, size);
}
