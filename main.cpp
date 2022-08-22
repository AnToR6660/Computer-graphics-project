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

void drawRoad(){
     ///road black
     glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-1.0f,-0.40f);
      glVertex2f(1.0f,-0.40f);
      glVertex2f(1.0f,-0.150f);
      glVertex2f(-1.0f,-0.150f);
      glEnd();

      ///road block01 L
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.90f, -0.30f);
      glVertex2f(-0.600f, -0.30f);
      glVertex2f(-0.650f,  -0.25f);
      glVertex2f(-0.950f,  -0.25f);
      glEnd();

      ///road block02 L
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.40f, -0.30f);
      glVertex2f(-0.100f, -0.30f);
      glVertex2f(-0.150f,  -0.25f);
      glVertex2f(-0.450f,-0.25f);
      glEnd();

      ///road block03
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.10f,-0.30f);
      glVertex2f(0.350f,-0.30f);
      glVertex2f(0.30f,-0.25f);
      glVertex2f(0.050f,-0.25f);
      glEnd();

      ///road block04
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.60f,-0.30f);
      glVertex2f(0.850f,-0.30f);
      glVertex2f(0.80f,-0.25f);
      glVertex2f(0.550f,-0.25f);
      glEnd();
}


void drawTruck(){
      //truck
      glBegin(GL_POLYGON);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(0.140f,-0.330f);
      glVertex2f(0.590f,-0.330f);
      glVertex2f(0.590f,-0.230f);
      glVertex2f(0.390f,-0.230f);
      glVertex2f(0.390f,-0.170f);
      glVertex2f(0.290f,-0.170f);
      glVertex2f(0.140f,-0.280f);
      glEnd();


      //truck light front
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(0.140f,-0.30f);
      glVertex2f(0.160f,-0.30f);
      glVertex2f(0.160f,-0.280f);
      glVertex2f(0.14f,-0.280f);
      glEnd();


      //truck light back
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(0.570f,-0.250f);
      glVertex2f(0.590f,-0.250f);
      glVertex2f(0.590f,-0.270f);
      glVertex2f(0.570f,-0.270f);
      glEnd();


      ///truck wheel white L
      int i;
      GLfloat p1=0.24f; GLfloat q1= -0.330f; GLfloat r1 = 0.050f;
    int tringle2=100;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
    }
    glEnd ();

    ///R
    int i1;
      GLfloat p11=0.49f; GLfloat q11= -0.330f; GLfloat r11 = 0.050f;
    int tringle22=100;

    GLfloat tp22 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p11,q11);
    for(i= 0;i<=tringle22; i++)
    {
        glVertex2f (
                    p11+(r11*cos(i*tp22/tringle22)),
                    q11+(r11*sin(i*tp22/tringle22))
                    );
    }
    glEnd ();

    ///truck wheel black L
    int ib;
      GLfloat p1b=0.24f; GLfloat q1b= -0.330f; GLfloat r1b = 0.030f;
    int tringle2b=100;

    GLfloat tp2b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 0,0,0);
    glVertex2f (p1b,q1b);
    for(i= 0;i<=tringle2b; i++)
    {
        glVertex2f (
                    p1b+(r1b*cos(i*tp2b/tringle2b)),
                    q1b+(r1b*sin(i*tp2b/tringle2b))
                    );
    }
    glEnd ();
    ///R
    int ib1;
      GLfloat p11b=0.49f; GLfloat q11b= -0.330f; GLfloat r11b = 0.030f;
    int tringle22b=100;

    GLfloat tp22b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 0,0,0);
    glVertex2f (p11b,q11b);
    for(i= 0;i<=tringle22b; i++)
    {
        glVertex2f (
                    p11b+(r11b*cos(i*tp22b/tringle22b)),
                    q11+(r11b*sin(i*tp22b/tringle22b))
                    );
    }
    glEnd ();
     /// TRUCK GLASS
    glBegin(GL_POLYGON);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(0.240f,-0.230f);
      glVertex2f(0.340f,-0.230f);
      glVertex2f(0.340f,-0.180f);
      glVertex2f(0.290f,-0.180f);
      glEnd();

}

void drawCar(){
      //car
      glBegin(GL_POLYGON);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.880f,-0.350f);
      glVertex2f(-0.430f,-0.350f);
      glVertex2f(-0.430f,-0.275f);
      glVertex2f(-0.530f,-0.275f);
      glVertex2f(-0.630f,-0.20f);
      glVertex2f(-0.730f,-0.20f);
      glVertex2f(-0.78f,-0.250f);
      glVertex2f(-0.88f,-0.30f);
      glEnd();

      //car light front
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(-0.880f,-0.320f);
      glVertex2f(-0.860f,-0.320f);
      glVertex2f(-0.860f,-0.30f);
      glVertex2f(-0.880f,-0.30f);
      glEnd();


      //car light back
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(-0.450f,-0.295f);
      glVertex2f(-0.430f,-0.295f);
      glVertex2f(-0.430f,-0.275f);
      glVertex2f(-0.450f,-0.275f);
      glEnd();

      ///car wheel white  L
      int i,i2;
      GLfloat p111=-0.780f; GLfloat q111= -0.330f; GLfloat r111 = 0.050f;
    int tringle222=100;

    GLfloat tp222 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p111,q111);
    for(i= 0;i<=tringle222; i++)
    {
        glVertex2f (
                    p111+(r111*cos(i*tp222/tringle222)),
                    q111+(r111*sin(i*tp222/tringle222))
                    );
    }
    glEnd ();
    ///R
    int i3;
      GLfloat p1111=-0.53f; GLfloat q1111= -0.330f; GLfloat r1111 = 0.050f;
    int tringle2222=100;

    GLfloat tp2222 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1111,q1111);
    for(i= 0;i<=tringle2222; i++)
    {
        glVertex2f (
                    p1111+(r1111*cos(i*tp2222/tringle2222)),
                    q1111+(r1111*sin(i*tp2222/tringle2222))
                    );
    }
    glEnd ();

    ///car wheel black L
      int i2b;
      GLfloat p111b=-0.78f; GLfloat q111b= -0.330f; GLfloat r111b = 0.030f;
    int tringle222b=100;

    GLfloat tp222b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (p111b,q111b);
    for(i= 0;i<=tringle222b; i++)
    {
        glVertex2f (
                    p111b+(r111b*cos(i*tp222b/tringle222b)),
                    q111b+(r111b*sin(i*tp222b/tringle222b))
                    );
    }
    glEnd ();
    ///R
    int i3b;
      GLfloat p1111b=-0.53f; GLfloat q1111b= -0.330f; GLfloat r1111b = 0.0300f;
    int tringle2222b=100;

    GLfloat tp2222b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 0,0,0);
    glVertex2f (p1111b,q1111b);
    for(i= 0;i<=tringle2222b; i++)
    {
        glVertex2f (
                    p1111b+(r1111b*cos(i*tp2222b/tringle2222b)),
                    q1111b+(r1111b*sin(i*tp2222b/tringle2222b))
                    );
    }
    glEnd ();
     ///CAR GLASS
    glBegin(GL_POLYGON);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.780f,-0.275f);
      glVertex2f(-0.555f,-0.275f);
      glVertex2f(-0.630f,-0.220f);
      glVertex2f(-0.730f,-0.220f);
      glEnd();
      ///GLASS DEVIDER LINE

       glLineWidth(4);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.655f,-0.2230f);
      glVertex2f(-0.655f,-0.2750f);
      glEnd();
}

void drawCarLight(){

glBegin(GL_TRIANGLES);
   glColor3f(0.90f,1.0f,0.0f);
    glVertex2f(-.980f,-0.380f);
 glVertex2f(-0.880f,-0.38f);
 glVertex2f(-0.880f,-0.320f);
glEnd();
}
void drawTruckLight(){
     // for truck light
glBegin(GL_TRIANGLES);
   glColor3f(0.90f,1.0f,0.0f);
    glVertex2f(0.040f,-0.360f);
 glVertex2f(0.140f,-0.360f);
 glVertex2f(0.140f,-0.280f);
glEnd();
}

      /////moon
void moon(){
     {


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    {


    int j;

    GLfloat p2=0.65f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.3f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
}
///star
void star(){
     glLineWidth(4);
     glBegin(GL_POINTS);
     glColor3f(1.0,1.0,1.0);
     glVertex2f(-0.85,0.85);
     glVertex2f(-0.65,0.65);
     glVertex2f(-0.5,0.75);
     glVertex2f(-0.4,0.65);
     glVertex2f(-0.45,0.45);
     glVertex2f(0.0,0.90);
     glVertex2f(0.20,0.70);
     glVertex2f(0.85,0.85);
     glVertex2f(0.65,0.65);
     glVertex2f(0.45,0.45);

     glEnd();
}
void drawBoat(){
     glBegin(GL_QUADS); //Boat
glColor3f(0.1f, 0.0f, 0.0f);
glVertex2f(-0.040f, -0.720f); // x, y
glVertex2f(0.060f, -0.820f); // x, y
glVertex2f(0.660f, -0.820f); // x, y
glVertex2f(0.760f, -0.720f); // x, y
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.060f, -0.720f); // x, y
glVertex2f(0.160f, -0.620f); // x, y

glVertex2f(0.560f, -0.620f); // x, y
glVertex2f(0.660f, -0.720f); // x, y
glEnd();

glBegin(GL_QUADS); // window-boat
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.210f, -0.650f); // x, y
glVertex2f(0.210f, -0.70f); // x, y

glVertex2f(0.310f, -0.70f); // x, y
glVertex2f(0.310f, -0.650f); // x, y
glEnd();

glBegin(GL_QUADS); // window-boat
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.410f, -0.650f); // x, y
glVertex2f(0.410f, -0.70f); // x, y

glVertex2f(0.510f, -0.70f); // x, y
glVertex2f(0.510f, -0.650f); // x, y
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.0f, 1.0f);

glVertex2f(0.360f, -0.520f);
glVertex2f(0.260f, -0.620f);
glVertex2f(0.460f, -0.620f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.360f, -0.520f);
glVertex2f(0.360f, -0.43f);

glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0f, 0.0f, 1.0f);

glVertex2f(0.360f, -0.430f);
glVertex2f(0.44f, -0.46f);
glVertex2f(0.360f, -0.50f);

	glEnd();
}
void waterLine(){
     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.20f, -0.90f);
	glVertex2f(-0.40f, -0.90f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.80f, -0.80f);
	glVertex2f(-1.0f, -0.80f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.40f, -0.90f);
	glVertex2f(0.60f, -0.90f);

	glEnd();

	glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.80f, -0.60f);
glVertex2f(1.0f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, -0.50f);
glVertex2f(-0.20f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.70f, -0.60f);
glVertex2f(-0.90f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.50f, -0.50f);
glVertex2f(0.60f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.20f, -0.70f);
glVertex2f(-0.30f, -0.70f);

glEnd();
}
///waterline night
void waterLineNight(){
     glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);
	glVertex2f(-0.20f, -0.90f);
	glVertex2f(-0.40f, -0.90f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);
	glVertex2f(-0.80f, -0.80f);
	glVertex2f(-1.0f, -0.80f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);
	glVertex2f(0.40f, -0.90f);
	glVertex2f(0.60f, -0.90f);

	glEnd();

	glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(0.80f, -0.60f);
glVertex2f(1.0f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(0.0f, -0.50f);
glVertex2f(-0.20f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(-0.70f, -0.60f);
glVertex2f(-0.90f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(0.50f, -0.50f);
glVertex2f(0.60f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(-0.20f, -0.70f);
glVertex2f(-0.30f, -0.70f);

glEnd();
}

void water(){
      glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2f(1.0f, -0.450f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y

	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(-1.0f, -0.450f);    // x, y
	glEnd();
}

///water night
void waterNight(){
      glBegin(GL_QUADS);
    glColor3f(0.0f, 0.10f, 0.40f);
    glVertex2f(1.0f, -0.450f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y

	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(-1.0f, -0.450f);    // x, y
	glEnd();
}

void bird(){
    // 1st Bird
glBegin(GL_POLYGON);



glColor3f(0.0f, 0.0f, 0.0f); //color
// x, y
glVertex2f(-0.8f, 0.8f);// x, y
glVertex2f(-0.75f, 0.8f);
glVertex2f(-0.8f, 0.81f);
glVertex2f(-0.85f, 0.85f);



glEnd();
// 2nd Bird
glBegin(GL_POLYGON);



glColor3f(0.0f, 0.0f, 0.0f); //color
// x, y
glVertex2f(-0.7f, 0.7f);// x, y
glVertex2f(-0.65f, 0.7f);
glVertex2f(-0.7f, 0.71f);
glVertex2f(-0.75f, 0.75f);



glEnd();
// 3rd Bird
glBegin(GL_POLYGON);



glColor3f(0.0f, 0.0f, 0.0f); //color
// x, y
glVertex2f(-0.9f, 0.7f);// x, y
glVertex2f(-0.85f, 0.7f);
glVertex2f(-0.9f, 0.71f);
glVertex2f(-0.95f, 0.75f);



glEnd();


}
void cloud(){
     {
	//1st cloud left part
    int i;

    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

     //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }




    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}

//////nightcloud

void cloudNight(){
     {
	//1st cloud left part
    int i;

    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }




    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}

void sun(){
     //sun
{


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,0);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
}
void sky(){
     // sky
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.3f, 0.9f, 1.0f);
	glVertex2f(-1.0f, 0.4f);   // x, y
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}
void skyNight(){
     // sky
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f ( 0.0f,0.0f,0.3f);
	glVertex2f(-1.0f, 0.4f);   // x, y
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}




