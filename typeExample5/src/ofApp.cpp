#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("framd.ttf", 200, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
 
    ofBackground(0);
    ofEnableDepthTest();

    vector < ofPath > paths = font.getStringAsPoints("hello", true, false);

    ofTranslate(300,300);

    for (int i = 0; i < paths.size(); i++){

        vector < ofPolyline > lines = paths[i].getOutline();
        
        ofBeginShape();
        for (int j = 0; j < lines.size(); j++){

            ofPolyline temp = lines[j].getResampledBySpacing(4);
            for (int k = 0; k < temp.size(); k++){
                temp[k].x += 50 * sin(temp[k].y*0.04 + ofGetElapsedTimef());
            }
            
            if (j != 0) ofNextContour();
            for (int k = 0; k < temp.size(); k++){
                ofVertex(temp[k]);
            }
            //temp.draw();

        }
        ofEndShape();

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
