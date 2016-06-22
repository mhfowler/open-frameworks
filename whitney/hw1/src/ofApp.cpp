#include "ofApp.h"
#include <string>

//--------------------------------------------------------------
void ofApp::setup(){

    
    int w = ofGetWidth();
    cout << 'w' + std::to_string(w) << endl;
    
    int frames = 10;
   
   
    ofPoint point;
    for (int i=0; i<w; ++i) {
        point = ofPoint(i, i);
        points.push_back(point);
  
    }
    
    for (int i=0; i<points.size(); ++i) {
        cout << points[i].x << endl;
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // circle formula
    
    // x = xorig + radius * cos(angle);
    // y = yorig + radius * sin(angle);
    
//    float x = 300 + 200 * cos(ofGetElapsedTimef()*3.1);
//    float y = 300 + 200 * sin(ofGetElapsedTimef()*1.7);
//    
//    ofDrawCircle(x,y, 10);
//    
//    myLine.addVertex(ofPoint(x,y));
//    
//    if (myLine.size() > 3500){
//        myLine.getVertices().erase(myLine.getVertices().begin());
//    }
    
     ofClear( 255, 0, 0 );
    xLine.clear();
    cLine.clear();
    
    ofPoint point;
    ofPoint cPoint;
    float t;
    for (int i=0; i<points.size(); ++i) {
        point = points[i];
        xLine.addVertex(point);
        t = sin(point.x*1)*sin(ofGetElapsedTimef()*1)*20;
        cPoint = ofPoint(point.x + t, point.y - t);
        cLine.addVertex(cPoint);
    }
    
    vector<ofPoint> xVertices = xLine.getVertices();
    vector<ofPoint> cVertices = cLine.getVertices();
    for (int i=0; i<xVertices.size(); ++i) {
        point = xVertices[i];
        cPoint = cVertices[i];
//        cout << 'xx: ' + to_string(to_int(point.x)) << endl;
//        cout << 'cx: ' + to_string(to_int(cPoint.x)) << endl;
    }
    
    xLine.draw();
    cLine.draw();
    
    
    
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
