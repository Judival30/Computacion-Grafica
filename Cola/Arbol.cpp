#include "arbol.h"


void Arbol::dibujarArbol(float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glutSolidSphere(0.5, 20, 20);
		glutSolidCylinder(0.25, 1, 20, 20);

	glPopMatrix();

}