#include "pch.h"
#include<GL\glut.h>
#include<GL\gl.h>

void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void hexagon() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.4, 0.4, 0.4);	//Gray

	glBegin(GL_POLYGON);

	glVertex2i(150, 100);	// Left Bottom
	glVertex2i(450, 100);	// Right Bottom
	glVertex2i(550, 275);	// Right Middle
	glVertex2i(450, 450);	// Right Top
	glVertex2i(150, 450);	// Left Top
	glVertex2i(50, 275);	// Left Middle

	glEnd();
	glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Hexagon");
	init();
	glutDisplayFunc(hexagon);
	glutMainLoop();

}