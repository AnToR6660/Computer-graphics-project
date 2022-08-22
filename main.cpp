#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141516
#include<math.h>

int sunStatus=0;
int carLightStatus=0;

//int dayStatus=0;
int nightStatus=0;

GLfloat position = 0.1f;
GLfloat speed = 0.01f;
GLfloat speed1 = 0.005f;


GLfloat position1 = 0.1f;



void update(int value) {

    if(position <-2.0)
       position =+2.0f;
       position -= speed;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1 <-0.40)
       position1 =+0.0f;
       position1 -= speed1;

glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}

void drawLamp(){   //lamp up

     ///L1
     glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-1.0f,-0.050f);
      glVertex2f(-0.90f,-0.050f);
      glVertex2f(-0.90f,0.050f);
      glVertex2f(-1.0f,0.050f);
      glEnd();
       ///L2
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.450f,-0.050f);
      glVertex2f(-0.350f,-0.050f);
      glVertex2f(-0.350f,0.050f);
      glVertex2f(-0.450f,0.050f);
      glEnd();
      ///L3
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.10f,-0.050f);
      glVertex2f(0.20f,-0.050f);
      glVertex2f(0.20f,0.050f);
      glVertex2f(0.10f,0.050f);
      glEnd();
      ///L4
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.650f,-0.050f);
      glVertex2f(0.750f,-0.050f);
      glVertex2f(0.750f,0.050f);
      glVertex2f(0.650f,0.050f);
      glEnd();

      //lamp stand
      ///L1
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.970f,-0.40f);
      glVertex2f(-0.930f,-0.40f);
      glVertex2f(-0.930f,0.0f);
      glVertex2f(-0.970f,0.0f);
      glEnd();
      ///L2
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.420f,-0.40f);
      glVertex2f(-0.380f,-0.40f);
      glVertex2f(-0.380f,0.0f);
      glVertex2f(-0.420f,0.0f);
      glEnd();
      ///L3
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.130f,-0.40f);
      glVertex2f(0.170f,-0.40f);
      glVertex2f(0.170f,0.0f);
      glVertex2f(0.130f,0.0f);
      glEnd();
      ///L4
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.680f,-0.40f);
      glVertex2f(0.720f,-0.40f);
      glVertex2f(0.720f,0.0f);
      glVertex2f(0.680f,0.0f);
      glEnd();

      //lamp current line
      ///L1
      glLineWidth(2);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.950f,0.0f);
      glVertex2f(-0.70f,-0.10f);
      glVertex2f(-0.70f,-0.10f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.10f,-0.10f);
      glVertex2f(-0.10f,-0.10f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.450f,-0.10f);
      glVertex2f(0.450f,-0.10f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(1.0f,-0.10f);
      glEnd();

      //lamp current line2
      ///L2
      glLineWidth(2);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.950f,0.0f);
      glVertex2f(-0.70f,-0.050f);
      glVertex2f(-0.70f,-0.050f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.10f,-0.050f);
      glVertex2f(-0.10f,-0.050f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.450f,-0.050f);
      glVertex2f(0.450f,-0.050f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(1.0f,-0.050f);
      glEnd();

      glFlush();
}
