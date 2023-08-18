#include <GL/gl.h>
#include <GL/glu.h>

#include <GL/glut.h>
#include<math.h>

#include<iostream>
#include <stdlib.h>

#include <windows.h>

using namespace std;

#include <mmsystem.h>
#include <vector>

#include <cstdlib>
# define PI 3.14159265358979323846
#include<cstdio>


static float x_player1 = -0.50;

static float y_player1 = 0.18;

static float x_player2 =-0.50;

static float y_player2 = -0.18;

static float x_baffles1 =0.8;

static float y_baffles1 = -0.25;

static float x_baffles2 =0.8;

static float y_baffles2 = 0.23;

static float x_circle =3;

static float y_circle = -0.6;


static float x_cone =2;

static float y_cone = 0.5;

static int postion_baffles1 = 1;
static int postion_baffles2 = 1;
static int postion_circle = 1;
static int postion_cone= 1;


void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);


switch(postion_baffles1){
case 1:

    if(x_baffles1>-0.6)
        {
            x_baffles1-=0.009;

    }

    else
         x_baffles1=0.4;
    break;

}
switch(postion_baffles2){
case 1:

    if(x_baffles2>-0.6)
        {x_baffles2-=0.009;

    }

    else
         x_baffles2=0.4;
    break;

}

switch(postion_circle){
case 1:

    if(x_circle>-3.3)
    {
        x_circle-=0.04;

    }

    else
         x_circle=3.3;
    break;

}
switch(postion_cone){
case 1:

    if(x_cone>-3.3)
    {
        x_cone-=0.04;

    }

    else
         x_cone=3.3;
    break;

}
}


void face(){
    //front
     glColor3f(1.0 ,0.5 ,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,0.5,0.5);
    glVertex3f(-0.2,0.5,0.5);
    glVertex3f(-0.2,0.1,0.5);
     glVertex3f(-0.5,0.1,0.5);
    glEnd();
//back
     glColor3f(1.0 ,0.5 ,0.0);
    glBegin(GL_POLYGON);
     glVertex3f(-0.5,0.5,0.4);
    glVertex3f(-0.2,0.5,0.4);
    glVertex3f(-0.2,0.1,0.4);
     glVertex3f(-0.5,0.1,0.4);
   glEnd();


//right
 glColor3f(1.0 ,0.5 ,0.0);
    glBegin(GL_POLYGON);
     glVertex3f(-0.2,0.5,0.5);
        glVertex3f(-0.2,0.1,0.5);
     glVertex3f(-0.2,0.1,0.4);
    glVertex3f(-0.2,0.5,0.4);
 glEnd();

 //left
 glColor3f(1.0 ,0.5 ,0.0);
    glBegin(GL_POLYGON);
     glVertex3f(-0.5,0.5,0.5);
        glVertex3f(-0.5,0.1,0.5);
     glVertex3f(-0.5,0.1,0.4);
    glVertex3f(-0.5,0.5,0.4);
 glEnd();

}



void stomach(){
    //front
    glColor3f(0.7f, 0.35f, 0.05f);
    glBegin(GL_POLYGON);
 glVertex3f(-0.5,0.1,0.5);
    glVertex3f(-0.2,0.1,0.5);
    glVertex3f(-0.2,-0.1,0.5);
glVertex3f(-0.5,-0.1,0.5);
glEnd();
//back
glBegin(GL_POLYGON);
 glVertex3f(-0.5,0.1,0.4);
    glVertex3f(-0.2,0.1,0.4);
    glVertex3f(-0.2,-0.1,0.4);
glVertex3f(-0.5,-0.1,0.4);
glEnd();

//right

    glBegin(GL_POLYGON);
     glVertex3f(-0.2,-0.1,0.5);
        glVertex3f(-0.2,0.1,0.5);
     glVertex3f(-0.2,0.1,0.4);
    glVertex3f(-0.2,-0.1,0.4);
 glEnd();

 //left

    glBegin(GL_POLYGON);
     glVertex3f(-0.5,-0.1,0.5);
        glVertex3f(-0.5,0.1,0.5);
     glVertex3f(-0.5,0.1,0.4);
    glVertex3f(-0.5,-0.1,0.4);
 glEnd();


}
void nickie(){
    glColor3f(0.0 ,0.0 ,0.0);
   glBegin(GL_POLYGON);
glVertex3f(-0.37,0.1,0.5);
glVertex3f(-0.33,0.1,0.5);
glVertex3f(-0.34,0.07,0.5);
 glVertex3f(-0.36,0.07,0.5);
 glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.36,0.07,0.5);
    glVertex3f(-0.34,0.07,0.5);
glVertex3f(-0.33,-0.03,0.5);
glVertex3f(-0.37,-0.03,0.5);
  glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.37,-0.03,0.5);
    glVertex3f(-0.33,-0.03,0.5);
    glVertex3f(-0.35,-0.06,0.5);
     glEnd();

}
void leg(){
    //front
  glColor3f(1.0 ,0.6 ,0.0);
glBegin(GL_POLYGON);
glVertex3f(-0.5,-0.1,0.5);
    glVertex3f(-0.2,-0.1,0.5);
    glVertex3f(-0.2,-0.25,0.5);
glVertex3f(-0.5,-0.25,0.5);
    glEnd();
    //back
glBegin(GL_POLYGON);
glVertex3f(-0.5,-0.1,0.4);
    glVertex3f(-0.2,-0.1,0.4);
    glVertex3f(-0.2,-0.25,0.4);
glVertex3f(-0.5,-0.25,0.4);
    glEnd();

   //right

    glBegin(GL_POLYGON);
     glVertex3f(-0.2,-0.25,0.5);
        glVertex3f(-0.2,-0.1,0.5);
     glVertex3f(-0.2,-0.1,0.4);
    glVertex3f(-0.2,-0.25,0.4);
 glEnd();

 //left

   glBegin(GL_POLYGON);
     glVertex3f(-0.5,-0.25,0.5);
        glVertex3f(-0.5,-0.1,0.5);
     glVertex3f(-0.5,-0.1,0.4);
    glVertex3f(-0.5,-0.25,0.4);
 glEnd();
}
void left_hand(){
    //front
    glColor3f(1.0 ,0.6 ,0.0);
glBegin(GL_TRIANGLES);
    glVertex3f(-0.5,0.1,0.5);
    glVertex3f(-0.55,0,0.5);
 glVertex3f(-0.5,-0.03,0.5);
    glEnd();

}

void right_hand(){
    //front
    glColor3f(1.0 ,0.6 ,0.0);
    glBegin(GL_TRIANGLES);
 glVertex3f(-0.2,0.1,0.5);
 glVertex3f(-0.15,0,0.5);
 glVertex3f(-0.2,-0.03,0.5);
    glEnd();

}
void left_leg(){
     glBegin(GL_POLYGON);
     glColor3f(0, 0, 0);
    for (int i = 180; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = -0.08*cos(angle); //lenth
        float y = -0.13*sin(angle); //wedth
        glVertex3f(-0.42+x , -0.25+y,0.5); //output vertex
    }
 glEnd();
}
void right_leg(){
     glBegin(GL_POLYGON);
       glColor3f(0, 0, 0);
    for (int i = 180; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = -0.07*cos(angle); //lenth
        float y = -0.13*sin(angle); //wedth
        glVertex3f(-0.27+x , -0.25+y,0.5); //output vertex
    }
 glEnd();
}
void eye_left(){
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex3f(-0.42+x , 0.35+y,0.5); //output vertex
    }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.04*cos(angle); //lenth
        float y = 0.05*sin(angle); //wedth
        glVertex3f(-0.42+x , 0.35+y,0.5); //output vertex
    }
 glEnd();
}
void eye_right(){
     glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex3f(-0.28+x , 0.35+y,0.5); //output vertex
    }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.04*cos(angle); //lenth
        float y = 0.05*sin(angle); //wedth
        glVertex3f(-0.28+x , 0.35+y,0.5); //output vertex
    }
 glEnd();
}
void mouth(){
  glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 180; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.07*cos(angle);
        float y = 0.08*sin(angle);
        glVertex3f(-0.35+x , 0.2+y,0.5);
    }
 glEnd();
}
void ear_left(){
  glLineWidth(4);
   glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    for (int i = 0; i < 130; i++){
        float angle = i*3.14/180;
        float x = 0.07*cos(angle);
        float y = 0.2*sin(angle);
        glVertex3f(-0.5+x ,0.5+y,0.45);
    }
 glEnd();
}
void ear_right(){
      glLineWidth(4);
   glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    for (int i = 65; i < 180; i++){
        float angle = i*3.14/180;
        float x = 0.07*cos(angle);
        float y = 0.2*sin(angle);
        glVertex3f(-0.2+x,0.5+y,0.45);
    }
 glEnd();
}
void line_face(){
    glLineWidth(4);
  //front
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5,0.5,0.5);
    glVertex3f(-0.2,0.5,0.5);
    glVertex3f(-0.2,0.1,0.5);
     glVertex3f(-0.5,0.1,0.5);
    glEnd();

//back


    glBegin(GL_LINE_LOOP);
     glVertex3f(-0.5,0.5,0.4);
    glVertex3f(-0.2,0.5,0.4);
    glVertex3f(-0.2,0.1,0.4);
     glVertex3f(-0.5,0.1,0.4);
   glEnd();


//right


    glBegin(GL_LINE_LOOP);
     glVertex3f(-0.2,0.5,0.5);
        glVertex3f(-0.2,0.1,0.5);
     glVertex3f(-0.2,0.1,0.4);
    glVertex3f(-0.2,0.5,0.4);
 glEnd();


 //left
    glBegin(GL_LINE_LOOP);
     glVertex3f(-0.5,0.5,0.5);
        glVertex3f(-0.5,0.1,0.5);
     glVertex3f(-0.5,0.1,0.4);
    glVertex3f(-0.5,0.5,0.4);
 glEnd();

}
void line_stomach(){
     glLineWidth(4);
   //front
  glColor3f(0,0,0);
   glBegin(GL_LINE_LOOP);
 glVertex3f(-0.5,0.1,0.5);
    glVertex3f(-0.2,0.1,0.5);
    glVertex3f(-0.2,-0.1,0.5);
glVertex3f(-0.5,-0.1,0.5);
glEnd();
//back
glBegin(GL_LINE_LOOP);
 glVertex3f(-0.5,0.1,0.4);
    glVertex3f(-0.2,0.1,0.4);
    glVertex3f(-0.2,-0.1,0.4);
glVertex3f(-0.5,-0.1,0.4);
glEnd();

//right

    glBegin(GL_LINE_LOOP);
     glVertex3f(-0.2,-0.1,0.5);
        glVertex3f(-0.2,0.1,0.5);
     glVertex3f(-0.2,0.1,0.4);
    glVertex3f(-0.2,-0.1,0.4);
 glEnd();

 //left

    glBegin(GL_LINE_LOOP);
     glVertex3f(-0.5,-0.1,0.5);
        glVertex3f(-0.5,0.1,0.5);
     glVertex3f(-0.5,0.1,0.4);
    glVertex3f(-0.5,-0.1,0.4);
 glEnd();

}
void line_leg(){
     glLineWidth(4);
  //front
   glColor3f(0,0,0);
glBegin(GL_LINE_LOOP);
glVertex3f(-0.5,-0.1,0.5);
    glVertex3f(-0.2,-0.1,0.5);
    glVertex3f(-0.2,-0.25,0.5);
glVertex3f(-0.5,-0.25,0.5);
    glEnd();
    //back
glBegin(GL_LINE_LOOP);
glVertex3f(-0.5,-0.1,0.4);
    glVertex3f(-0.2,-0.1,0.4);
    glVertex3f(-0.2,-0.25,0.4);
glVertex3f(-0.5,-0.25,0.4);
    glEnd();

   //right

    glBegin(GL_LINE_LOOP);
     glVertex3f(-0.2,-0.25,0.5);
        glVertex3f(-0.2,-0.1,0.5);
     glVertex3f(-0.2,-0.1,0.4);
    glVertex3f(-0.2,-0.25,0.4);
 glEnd();

 //left

  glBegin(GL_LINE_LOOP);
     glVertex3f(-0.5,-0.25,0.5);
        glVertex3f(-0.5,-0.1,0.5);
     glVertex3f(-0.5,-0.1,0.4);
    glVertex3f(-0.5,-0.25,0.4);
 glEnd();

}
void line_left_hand(){
    glLineWidth(4);
     glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5,0.1,0.5);
    glVertex3f(-0.55,0,0.5);
 glVertex3f(-0.5,-0.03,0.5);
    glEnd();
}
void line_right_hand(){
     glLineWidth(4);
    glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
 glVertex3f(-0.2,0.1,0.5);
 glVertex3f(-0.15,0,0.5);
 glVertex3f(-0.2,-0.03,0.5);
    glEnd();
}
void background(){
     glColor3f(0,1.5,0); //green
  glBegin(GL_POLYGON);
 glVertex3f(2,2,-2);
 glVertex3f(-2,2,-2);
 glVertex3f(-2,0,-2);
 glVertex3f(2,0,-2);
  glEnd();
   glLineWidth(4);
    glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex3f(1,0,-1);
 glVertex3f(-1,0,-1);
  glEnd();
}
void baffles(){
glPushMatrix();  // second shape
glTranslatef (x_baffles1,y_baffles1,-1);
glRotatef(40,0,1,0);
glScalef(0.1f,0.1f,0.5f);
stomach();
glPopMatrix();

glPushMatrix();     // first shape
glTranslatef (x_baffles2,y_baffles2,-1);
glRotatef(40,0,1,0);
glScalef(0.1f,0.1f,0.5f);
stomach();
glPopMatrix();

glPushMatrix();                  //circle
glTranslated(x_circle,y_circle,-6);
glRotated(60,1,0,0);
glColor3f(1,0,0.5);
glutSolidSphere(0.28,16,16);
glPopMatrix();

 glPushMatrix();
       glTranslated(x_cone,y_cone,-6);   //cone
        glRotated(90,0,1,0);
        glColor3f(0,0,0.5);
        glutSolidCone(0.2,0.5,16,16);
glPopMatrix();
}


void player1(){
glPushMatrix();
glTranslatef (x_player1,y_player1,-1);
glRotatef(40,0,1,0);
glScalef(0.1f,0.1f,0.5f);
face();
stomach();
nickie();
leg();
left_hand();
right_hand();
left_leg();
right_leg();
eye_left();
eye_right();
mouth();
ear_left();
ear_right();
line_face();
line_stomach();
line_leg();
line_left_hand();
line_right_hand();
glPopMatrix();
}

void player2(){
glPushMatrix();
glTranslatef (x_player2,y_player2,-1);
glRotatef(40,0,1,0);
glScalef(0.1f,0.1f,0.5f);
face();
stomach();
nickie();
leg();
left_hand();
right_hand();
left_leg();
right_leg();
eye_left();
eye_right();
mouth();
ear_left();
ear_right();
line_face();
line_stomach();
line_leg();
line_left_hand();
line_right_hand();
glPopMatrix();
}

void message1(){
    glPushMatrix();
    glTranslatef(0,0,-20);
    char text[120];
    sprintf(text, "player1 win ",4.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -2.9 , 0.5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
         glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-20);
    char text1[120];
    sprintf(text1, "player2 lose ",4.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -2.9 ,-1 );
    for(int i = 0; text1[i] != '\0'; i++)
    {
         glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text1[i]);
    }
    glPopMatrix();

}
void message2(){
    glPushMatrix();
    glTranslatef(0,0,-20);
    char text[120];
    sprintf(text, "player2 win ",4.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -2.9 , 0.5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
         glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-20);
    char text1[120];
    sprintf(text1, "player1 lose ",4.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -2.9 ,-1 );
    for(int i = 0; text1[i] != '\0'; i++)
    {
         glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text1[i]);
    }
    glPopMatrix();

}
void display()
{
glClearColor(0,1,1,0);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
background();
player1();
player2();
baffles();
glutSwapBuffers();
}

void display1(){
glClearColor(0,1,1,0);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
message1();
glutSwapBuffers();
}
void display2(){
glClearColor(0,1,1,0);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
message2();
glutSwapBuffers();
}
 void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}
 void handleKeypress(unsigned char key,int x,int y)
{
    switch (key)
    {

      case 'a':
               x_player1-=0.01;
               if(x_player1<-0.55){
                x_player1=-0.55;
               }

                  break;
      case 'd':

            x_player1+=0.01;
            if(x_player1>0.3){
                x_player1=0.3;
               }

            break;

      case 'w':
          y_player1+=0.01;

            if(y_player1>0.25){
                 y_player1=0.25;
               }
          break;
      case's':
           y_player1-=0.01;
            if(y_player1<0.028){
                y_player1=0.028;
               }
          break;
  case '4':
               x_player2-=0.01;
               if(x_player2<-0.55){
                x_player2=-0.55;
               }
                  break;
      case '6':

            x_player2+=0.01;
             if(x_player2>0.3){
                x_player2=0.3;
               }
            break;

      case '8':
          y_player2+=0.01;
           if(y_player2>-0.05){
                y_player2=-0.05;
               }
          break;
      case '2':
           y_player2-=0.01;
            if(y_player2<-0.25){
                y_player2=-0.25;
               }
          break;
      case 'p':
         glutDestroyWindow(1);    //message1
         glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	        glutInitWindowSize(500, 500);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("19102706/19102610/19101002");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display1);
            glutReshapeFunc (reshapeFunc);
            glutMainLoop();
            break;
      case 'l':
         glutDestroyWindow(1);   //message2
         glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	        glutInitWindowSize(500, 500);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("19102706/19102610/19101002");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display2);
            glutReshapeFunc (reshapeFunc);
            glutMainLoop();
            break;
      case 'r':
         glutDestroyWindow(1);
         glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	        glutInitWindowSize(1200, 800);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("19102706/19102610/19101002");
            glutKeyboardFunc(handleKeypress);

            glutDisplayFunc(display);

            glutReshapeFunc (reshapeFunc);

            glutMainLoop();
            break;
      case 'e':
            exit(0);
            break;


 }
glutPostRedisplay();
}

int main (int argc, char **argv)
{
glutInit (&argc, argv);
glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
glutInitWindowSize(1200,800);
glutInitWindowPosition(200,0);
glutCreateWindow("19102706/19102610/19101002");

glutDisplayFunc(display);
glutKeyboardFunc(handleKeypress);
glutTimerFunc(1000,timer,0);
glutReshapeFunc (reshapeFunc);
sndPlaySound("D:\\My Projects\\opengl\12th\\music_12th.wav",SND_ASYNC);
glutMainLoop();
}
