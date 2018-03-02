//#include <iostream>
using namespace std;
#include "fonts.h"
#include <GL/glx.h>
//NEW CHANGE NEW CHANGE
void showName()
{
        Rect s;
        s.bot = 100;
        s.left = 100;
        s.center = 100;
        ggprint8b(&s, 16, 0xFFFFFFFF, "Tyler");
}
void drawBox(int x, int y)
{
    static float angle = 0.0;
    //Draw a box
    //glColor THREE UNSIGNED BYTES
        //     red  grn blu
    glColor3ub(100, 11, 255);
	glPushMatrix();
	glTranslatef(x - 50, y - 50, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-50, -50, 0);
    angle = angle + 2.5;
	glBegin(GL_QUADS);
		glVertex2i(0  , 0);
        glVertex2i(100, 0);
        glVertex2i(100, 100);
        glVertex2i(0  , 100);
	glEnd();

    Rect s;
    s.bot = 50;
    s.left = 50;
    s.center = 1;
    ggprint8b(&s, 16, 0xFFFFAAAF, "Tyler");
    glPopMatrix();
}
