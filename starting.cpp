
#include <Gl/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Don't need
#include <gl\gl.h> // do you get a error or warning here?
#include <gl\glu.h> // same here?
#include <iostream> // Don't need
#include <cmath> // Don't need
#include <cstdlib> // Don't need
#include <iomanip> // Don't need

using std::cout; // Don't need
using std::cin; // Don't need
using std::endl; // Don't need
using std::setw; // Don't need
using std::setiosflags; // Don't need
using std::setprecision; // Don't need

void background(void);
void display(void);
void exits(int);

void moveright(void);
void moveleft(void);
void moveup(void);
void movedown(void);

void shoot(void);
void update_objects(void);

static void key(unsigned char key, int x, int y);

void spinright(void);
void spinleft(void);

//void DrawCircle( double r );
//void DrawEllipse( double a, double b );

void reshape(int, int);

void init(void);

bool tank2 = true;
bool bullet = false;

float e;

int main (int argc,char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(550, 550);
glutInitWindowPosition(200, 100);
glutCreateWindow("Tank Attempt");
init();

glutDisplayFunc(display);
glutIdleFunc(update_objects);
glutReshapeFunc(reshape);
glutKeyboardFunc(key);
glutMainLoop();
return 0;
}

void init(void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glShadeModel(GL_SMOOTH);
glutCreateMenu(exits);
glutAddMenuEntry("Exit", 1);
glutAddMenuEntry("Willy P.", 2);
glutAddMenuEntry("Tank # 2", 4);
glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glutWireTorus(50,200,100,100);
glBegin(GL_LINES);
      glColor3f(0.0,0.0,1.0);
      glVertex2f(-0.0,-255.0);
      glVertex2f(-0.0,255.0);

      glVertex2f(-25.1,-255.0);
      glVertex2f(-25.1,255.0);

      glVertex2f(-50.2,-255.0);
      glVertex2f(-50.2,255.0);

      glVertex2f(-75.3,-255.0);
      glVertex2f(-75.3,255.0);

      glVertex2f(-100.4,-255.0);
      glVertex2f(-100.4,255.0);

      glVertex2f(-125.5,-255.0);
      glVertex2f(-125.5,255.0);

      glVertex2f(-150.6,-255.0);
      glVertex2f(-150.6,255.0);

      glVertex2f(-175.7,-255.0);
      glVertex2f(-175.7,255.0);

      glVertex2f(-200.8,-255.0);
      glVertex2f(-200.8,255.0);

      glVertex2f(-225.9,-255.0);
      glVertex2f(-225.9,255.0);

      glVertex2f(-255.0,-255.0);
      glVertex2f(-255.0,255.0);


      glVertex2f(0.0,-255.0);
      glVertex2f(0.0,255.0);

      glVertex2f(25.1,-255.0);
      glVertex2f(25.1,255.0);

      glVertex2f(50.2,-255.0);
      glVertex2f(50.2,255.0);

      glVertex2f(75.3,-255.0);
      glVertex2f(75.3,255.0);

      glVertex2f(100.4,-255.0);
      glVertex2f(100.4,255.0);

      glVertex2f(125.5,-255.0);
      glVertex2f(125.5,255.0);

      glVertex2f(150.6,-255.0);
      glVertex2f(150.6,255.0);

      glVertex2f(175.7,-255.0);
      glVertex2f(175.7,255.0);

      glVertex2f(200.8,-255.0);
      glVertex2f(200.8,255.0);

      glVertex2f(225.9,-255.0);
      glVertex2f(225.9,255.0);

      glVertex2f(255.0,-255.0);
      glVertex2f(255.0,255.0);


      glVertex2f(-255.0,255.0);
      glVertex2f(255.0,255.0);

      glVertex2f(-255.0,225.9);
      glVertex2f(255.0,225.9);

      glVertex2f(-255.0,200.8);
      glVertex2f(255.0,200.8);

      glVertex2f(-255.0,175.7);
      glVertex2f(255.0,175.7);

      glVertex2f(-255.0,150.6);
      glVertex2f(255.0,150.6);

      glVertex2f(-255.0,125.5);
      glVertex2f(255.0,125.5);

      glVertex2f(-255.0,100.4);
      glVertex2f(255.0,100.4);

      glVertex2f(-255.0,75.3);
      glVertex2f(255.0,75.3);

      glVertex2f(-255.0,50.2);
      glVertex2f(255.0,50.2);

      glVertex2f(-255.0,25.1);
      glVertex2f(255.0,25.1);

      glVertex2f(-255.0,0.0);
      glVertex2f(255.0,0.0);


      glVertex2f(-255.0,-255.0);
      glVertex2f(255.0,-255.0);

      glVertex2f(-255.0,-225.9);
      glVertex2f(255.0,-225.9);

      glVertex2f(-255.0,-200.8);
      glVertex2f(255.0,-200.8);

      glVertex2f(-255.0,-175.7);
      glVertex2f(255.0,-175.7);

      glVertex2f(-255.0,-150.6);
      glVertex2f(255.0,-150.6);

      glVertex2f(-255.0,-125.5);
      glVertex2f(255.0,-125.5);

      glVertex2f(-255.0,-100.4);
      glVertex2f(255.0,-100.4);

      glVertex2f(-255.0,-75.3);
      glVertex2f(255.0,-75.3);

      glVertex2f(-255.0,-50.2);
      glVertex2f(255.0,-50.2);

      glVertex2f(-255.0,-25.1);
      glVertex2f(255.0,-25.1);

      glVertex2f(-255.0,-255.0);
      glVertex2f(255.0,-255.0);
glEnd();
glPushMatrix();
//DrawCircle(5.0);

if (tank2 == true)
{
//glTranslatef(1.0,1.0,1.0);
glBegin(GL_QUADS);
glColor3f(1.0, 0.3, 0.3);
glVertex2f(-8.0, -20.0);
glVertex2f(-10.0, 5.0);
glVertex2f(10.0, 5.0);
glVertex2f(8.0, -20.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.555, 0.235, 0.452);
glVertex2f(-10.0, 5.0);
glVertex2f(-8.0, 10.0);
glVertex2f(8.0, 10.0);
glVertex2f(10.0, 5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(1.511, 0.111, 0.211);
glVertex2f(-1.0, 10.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 10.0);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(-4.0, 0.0);
glVertex2f(-1.5, 0.0);
glVertex2f(0.0, 3.0);
glVertex2f(1.5, 0.0);
glVertex2f(4.0, 0.0);
glVertex2f(2.25, -3.0);
glVertex2f(3.0, -6.5);
glVertex2f(0.0, -4.0);
glVertex2f(-3.0, -6.5);
glVertex2f(-2.25, -3.0);
//glutSolidTeapot(0.8);
glEnd();

   /* glBegin(GL_LINES);
      glColor3f(1.0,1.0,1.0);
      glVertex2f(0.0,0.0);
      glVertex2f(0.0,1.0);

      glVertex2f(0.1,0.0);
      glVertex2f(0.1,1.0);

      glVertex2f(0.2,0.0);
      glVertex2f(0.2,1.0);

      glVertex2f(0.3,0.0);
      glVertex2f(0.3,1.0);

      glVertex2f(0.4,0.0);
      glVertex2f(0.4,1.0);

      glVertex2f(0.5,0.0);
      glVertex2f(0.5,1.0);

      glVertex2f(0.6,0.0);
      glVertex2f(0.6,1.0);

      glVertex2f(0.7,0.0);
      glVertex2f(0.7,1.0);

      glVertex2f(0.8,0.0);
      glVertex2f(0.8,1.0);

      glVertex2f(0.9,0.0);
      glVertex2f(0.9,1.0);

      glVertex2f(1.0,0.0);
      glVertex2f(1.0,1.0);



      glVertex2f(0.0,0.0);
      glVertex2f(1.0,0.0);

      glVertex2f(0.0,0.1);
      glVertex2f(1.0,0.1);

      glVertex2f(0.0,0.2);
      glVertex2f(1.0,0.2);

      glVertex2f(0.0,0.3);
      glVertex2f(1.0,0.3);

      glVertex2f(0.0,0.4);
      glVertex2f(1.0,0.4);

      glVertex2f(0.0,0.5);
      glVertex2f(1.0,0.5);

      glVertex2f(0.0,0.6);
      glVertex2f(1.0,0.6);

      glVertex2f(0.0,0.7);
      glVertex2f(1.0,0.7);

      glVertex2f(0.0,0.8);
      glVertex2f(1.0,0.8);

      glVertex2f(0.0,0.9);
      glVertex2f(1.0,0.9);

      glVertex2f(0.0,1.0);
      glVertex2f(1.0,1.0);
    glEnd();*/

}

if(bullet == true)
{
glTranslatef(0.0, e, 0.0);
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 20.0);
glVertex2f(-1.0, 20.0);
glEnd();
}

if(bullet == true)
{
for(e = 0.0; e<=25; e = e + 0.001)
{
glTranslatef(0.0, e, 0.0);

glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 20.0);
glVertex2f(-1.0, 20.0);
glEnd();
glutPostRedisplay();
}
bullet = false;
}

glPopMatrix();
glutSwapBuffers();
}

void reshape (int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}

void exits(int value)
{
if(value==1)
exit(0);
if(value==2)
{
tank2 = false;
bullet = false;
glutPostRedisplay();
glClearColor(0.2, 0.8, 0.5, 0.0);
}
if(value==4)
{
tank2 = true;
glutPostRedisplay();
}

}


static void key(unsigned char key, int x, int y)
{
switch (key)
{
case 'Q': // This does nothing, none of you Cap. letters do anything.
case 'q':
exit(0); // Program quits here next line does nothing!
glutPostRedisplay(); // Don't need
break;
case 'H':
case 'h':
moveright();
glutPostRedisplay(); // Don't need
break;
case 'F':
case 'f':
moveleft();
glutPostRedisplay(); // Don't need
break;
case 'T':
case 't':
moveup();
glutPostRedisplay(); // Don't need
break;
case 'G':
case 'g':
movedown();
glutPostRedisplay(); // Don't need
break;
case 32:
shoot();// replace shoot with bullet = true;
glutPostRedisplay(); // Don't need
break;
case 'O':
case 'o':
spinleft();
glutPostRedisplay(); // Don't need
break;
case 'P':
case 'p':
spinright();
glutPostRedisplay();
break;
default:
break;
}
cout << key << static_cast<int>(key) << endl; // Don't need
}

void moveright(void)
{

for(int b = 0; b<=1; b++)
{
glRotatef(90,1.0,1.0,0.0);
glTranslatef(b, 0.0, 0.0);
glutPostRedisplay(); // Don't need
}

}

void moveleft(void)
{
for(int a = 0; a>=-1; a--)
{
glRotatef(90,1.0,1.0,0.0);
glTranslatef(a, 0.0, 0.0);
glutPostRedisplay(); // Don't need
}

}

void moveup(void)
{
for(int c = 0; c<=1; c++)
{
glTranslatef(0.0, c, 0.0);
glutPostRedisplay(); // Don't need
}

}

void movedown(void)
{
for(int d = 0; d>=-1; d--)
{
//glRotatef(180,1.0,0.0,0.0);
glTranslatef(0.0, d, 0.0);
glutPostRedisplay(); // Don't need
}

}

void shoot(void) // See my note
{
bullet = true; // I would just put this in the keyboard input switch statement
cout << "shooting\n" << endl; // Don't need
}

void spinleft(void)
{
glRotatef(22.5, 0.0, 0.0, 0.0);
glutPostRedisplay(); // Don't need
}

void spinright(void)
{
glRotatef(-22.5, 0.0, 0.0, 0.0);
glutPostRedisplay(); // Don't need
}

void update_objects(void)
{
if (bullet == true)
{
e = e + 0.25;
if (e > 60 ) bullet = false;
}
glutPostRedisplay();
}

/*
void background(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_LINES);
      glVertex2f(0.0,0.0);
      glVertex2f(0.0,1.0);

      glVertex2f(0.1,0.0);
      glVertex2f(0.1,1.0);

      glVertex2f(0.2,0.0);
      glVertex2f(0.2,1.0);

      glVertex2f(0.3,0.0);
      glVertex2f(0.3,1.0);

      glVertex2f(0.4,0.0);
      glVertex2f(0.4,1.0);

      glVertex2f(0.5,0.0);
      glVertex2f(0.5,1.0);

      glVertex2f(0.6,0.0);
      glVertex2f(0.6,1.0);

      glVertex2f(0.7,0.0);
      glVertex2f(0.7,1.0);

      glVertex2f(0.8,0.0);
      glVertex2f(0.8,1.0);

      glVertex2f(0.9,0.0);
      glVertex2f(0.9,1.0);

      glVertex2f(1.0,0.0);
      glVertex2f(1.0,1.0);



      glVertex2f(0.0,0.0);
      glVertex2f(1.0,0.0);

      glVertex2f(0.0,0.1);
      glVertex2f(1.0,0.1);

      glVertex2f(0.0,0.2);
      glVertex2f(1.0,0.2);

      glVertex2f(0.0,0.3);
      glVertex2f(1.0,0.3);

      glVertex2f(0.0,0.4);
      glVertex2f(1.0,0.4);

      glVertex2f(0.0,0.5);
      glVertex2f(1.0,0.5);

      glVertex2f(0.0,0.6);
      glVertex2f(1.0,0.6);

      glVertex2f(0.0,0.7);
      glVertex2f(1.0,0.7);

      glVertex2f(0.0,0.8);
      glVertex2f(1.0,0.8);

      glVertex2f(0.0,0.9);
      glVertex2f(1.0,0.9);

      glVertex2f(0.0,1.0);
      glVertex2f(1.0,1.0);
    glEnd();
    glFlush();
}*/
