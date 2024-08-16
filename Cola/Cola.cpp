#include "cola.h"

void Cola::DibujarCola(float Angulo, int n, float x, float y, float z) {
	glPushMatrix();

	glTranslatef(-0.5, 0.0, 0.0);

	glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);

	glTranslatef(0.5, 0.0, 0.0); glPushMatrix();

	glScalef(1.0, 0.4, 1.0);

	glutSolidCube(1.0);

	glPopMatrix();

	for (int i = 0; i < n; i++) {

		glTranslatef(0.5, 0.0, 0.0);
		if (i < n / 2) {
			glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		}
		else {
			glRotatef(-(GLfloat)Angulo, 0.0, 0.0, 1.0);
		}
		glTranslatef(0.1, 0.0, 0.0);

		glPushMatrix();

		glScalef(0.6, 0.6, 1.0);

		glRotatef(90, 0, 1, 0); 
		if (i != n - 1) {
			glutSolidTorus(1, 1, 30, 30);
		}
		else
			glutSolidSphere(1, 20, 20);


		glPopMatrix();
	}


	glPopMatrix();
}