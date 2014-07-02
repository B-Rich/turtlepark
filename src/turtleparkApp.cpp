#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class turtleparkApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void turtleparkApp::setup()
{
}

void turtleparkApp::mouseDown( MouseEvent event )
{
}

void turtleparkApp::update()
{
}

void turtleparkApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( turtleparkApp, RendererGl )
