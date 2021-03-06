#include "pch.h"
#include<GL\glut.h>
#include<GL\gl.h>

void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 600.0, 0.0, 550.0);
}

void octagon() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.4, 0.4, 0.4);	//Gray

	glBegin(GL_POLYGON);

	glVertex2i(200, 100);	// Left Bottom
	glVertex2i(400, 100);	// Right Bottom
	glVertex2i(500, 200);	// Right Bottom Middle
	glVertex2i(500, 300);	// Right Top Middle
	glVertex2i(400, 400);	// Right Top
	glVertex2i(200, 400);	// Left Top
	glVertex2i(100, 300);	// Left Top Middle
	glVertex2i(100, 200);	// Left Bottom Middle

	glEnd();
	glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 550);
	glutCreateWindow("Octagon");
	init();
	glutDisplayFunc(octagon);
	glutMainLoop();

}