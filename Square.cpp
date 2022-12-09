#include <cstdlib>
#include "GetGlut.h"
#include "Square.h"

using namespace std;
// Initialization function, that initializes a particle

void Square::init(ObjModel mainObject, Vector3 position)
{
	pos.set(position.x, position.y, position.z);
	// if pass = 1.0 we will send particles flying in any random direction
	age = 0;
	// Below we are just initializing the particle with the pertinent information, it's colour how transparent, how large the speed at which it travels, it's rotation, it's current position on the screen
	object = mainObject;

}
// Update the position of the particle
void Square::update()
{
	pos.y -= 9.7f;
	age++;
}
// Display the particle
void Square::display()
{
	//glColor3f(0.6, 0.4, 0.2);
	glPushMatrix();
		glEnable(GL_TEXTURE_2D);
		TextureManager::activate("sand.bmp");
		glTranslated(pos.x, pos.y, pos.z); // The direction the particles are traveling in currently
		glutSolidSphere(2.5, 4, 3);
		glDisable(GL_TEXTURE_2D);
	glPopMatrix();
}
// How long the particles last, so they don't live forever.
bool Square::isAlive()
{
	if (age <= 60)
		return true;
	else
		return false;
}
