#include "ofMain.h"
#include "testApp.h"
#include "ofxFensterManager.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){

    /*ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1280,720, OF_FULLSCREEN);			// <-------- setup the GL context
    
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new testApp());*/
    
    
    ofSetupOpenGL(ofxFensterManager::get(), 400, 400, OF_WINDOW);			// <-------- setup the GL context
    
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunFensterApp(new testApp());

}
