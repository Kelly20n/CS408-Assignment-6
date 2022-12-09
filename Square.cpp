#include <cstdlib>
#include "GetGlut.h"
#include "Square.h"

using namespace std;
// Initialization function, that initializes a particle

void Square::init(Vector3 position)
{
	// Initialize particles at emitter location
	pos.set(position.x, position.y, position.z);
	age = 0;
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
