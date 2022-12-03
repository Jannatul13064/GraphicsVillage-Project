#include<cstdio>
#include <windows.h>
#include<math.h>
#include <vector>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>

//Translation of Birds
GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;

void birdd(int value) {
  if (position22 > 1.0)
    position22 = -1.0f;
  position22 += speed22;
  glutPostRedisplay();
  glutTimerFunc(100, birdd, 0);
}

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;
void cloud(int value) {
  if (position2 > 1.0)
    position2 = -1.0f;
  position2 += speed2;
  glutPostRedisplay();
  glutTimerFunc(100, cloud, 0);
}
GLfloat position1 = 1.0f;
GLfloat speed1 = -0.005f;

void cloud1()
{
  int i;

  GLfloat x = .5f; GLfloat y = .86f; GLfloat radius = .05f;
  int triangleAmount = 20;
  GLfloat twicePi = 2.0f * PI;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(x, y); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      x + (radius * cos(i * twicePi / triangleAmount)),
      y + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat a = .55f; GLfloat b = .83f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(a, b); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      a + (radius * cos(i * twicePi / triangleAmount)),
      b + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat c = .45f; GLfloat d = .83f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(c, d); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      c + (radius * cos(i * twicePi / triangleAmount)),
      d + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat e = .52f; GLfloat f = .8f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(e, f); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e + (radius * cos(i * twicePi / triangleAmount)),
      f + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat g = .6f; GLfloat h = .82f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(g, h); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      g + (radius * cos(i * twicePi / triangleAmount)),
      h + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
}

void cloud2()
{
  int i;

  GLfloat x = -.5f; GLfloat y = .86f; GLfloat radius = .05f;
  int triangleAmount = 20;
  GLfloat twicePi = 2.0f * PI;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(x, y); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      x + (radius * cos(i * twicePi / triangleAmount)),
      y + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat a = -.55f; GLfloat b = .83f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(a, b); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      a + (radius * cos(i * twicePi / triangleAmount)),
      b + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat c = -.45f; GLfloat d = .83f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(c, d); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      c + (radius * cos(i * twicePi / triangleAmount)),
      d + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat e = -.52f; GLfloat f = .8f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(e, f); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e + (radius * cos(i * twicePi / triangleAmount)),
      f + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat g = -.6f; GLfloat h = .82f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(g, h); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      g + (radius * cos(i * twicePi / triangleAmount)),
      h + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
}
void cloud3()
{
  // glLoadIdentity();
  int i;

  GLfloat x = 0.0f; GLfloat y = .86f; GLfloat radius = .05f;
  int triangleAmount = 20;
  GLfloat twicePi = 2.0f * PI;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(x, y); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      x + (radius * cos(i * twicePi / triangleAmount)),
      y + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat a = .05f; GLfloat b = .83f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(a, b); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      a + (radius * cos(i * twicePi / triangleAmount)),
      b + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat c = -0.05f; GLfloat d = .83f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(c, d); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      c + (radius * cos(i * twicePi / triangleAmount)),
      d + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat e = .02f; GLfloat f = .8f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(e, f); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e + (radius * cos(i * twicePi / triangleAmount)),
      f + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat g = .1f; GLfloat h = .82f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 217, 255);
  glVertex2f(g, h); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      g + (radius * cos(i * twicePi / triangleAmount)),
      h + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();


}
void sky()
{
  glBegin(GL_QUADS);
  glColor3ub(51, 204, 255);
  glVertex2f(-1.0f, 0.45f);
  glVertex2f(1.0f, 0.45f);
  glVertex2f(1.0f, 1.0f);
  glVertex2f(-1.0f, 1.0f);
  glEnd();
}

void hills()
{
  glBegin(GL_POLYGON);
  glColor3ub(34, 139, 34);
  glVertex2f(-1.0f, 0.45f);
  glVertex2f(-0.98f, 0.5f);
  glVertex2f(-0.93f, 0.56);
  glVertex2f(-0.9f, 0.6f);
  glVertex2f(-0.82f, 0.64);
  glVertex2f(-0.75f, 0.67);///
  glVertex2f(-0.68f, 0.64);
  glVertex2f(-0.6f, 0.6f);
  glVertex2f(-0.57f, 0.56);
  glVertex2f(-0.52f, 0.5f);
  glVertex2f(-0.5f, 0.45f);
  glVertex2f(-1.0f, 0.45f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(34, 139, 34);
  glVertex2f(1.0f, 0.45f);
  glVertex2f(0.98f, 0.5f);
  glVertex2f(0.93f, 0.56);
  glVertex2f(0.9f, 0.6f);
  glVertex2f(0.82f, 0.64);
  glVertex2f(0.75f, 0.67);///
  glVertex2f(0.68f, 0.64);
  glVertex2f(0.6f, 0.6f);
  glVertex2f(0.57f, 0.56);
  glVertex2f(0.52f, 0.5f);
  glVertex2f(0.5f, 0.45f);
  glVertex2f(1.0f, 0.45f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(34, 139, 34);
  glVertex2f(-0.5f, 0.45f);
  glVertex2f(-0.48f, 0.5f);
  glVertex2f(-0.45f, 0.56);
  glVertex2f(-0.42f, 0.6f);
  glVertex2f(-0.37f, 0.62);///
  glVertex2f(-0.32f, 0.6);
  glVertex2f(-0.29f, 0.56f);
  glVertex2f(-0.27f, 0.5f);
  glVertex2f(-0.25f, 0.45f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(34, 139, 34);
  glVertex2f(0.5f, 0.45f);
  glVertex2f(0.48f, 0.5f);
  glVertex2f(0.45f, 0.56);
  glVertex2f(0.42f, 0.6f);
  glVertex2f(0.37f, 0.62);///
  glVertex2f(0.32f, 0.6);
  glVertex2f(0.29f, 0.56f);
  glVertex2f(0.27f, 0.5f);
  glVertex2f(0.25f, 0.45f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(34, 139, 34);
  glVertex2f(-.25f, 0.45f);
  glVertex2f(-0.23f, 0.5f);
  glVertex2f(-0.18f, 0.56);
  glVertex2f(-0.15f, 0.6f);
  glVertex2f(-0.07f, 0.64);
  glVertex2f(-0.00f, 0.67);///
  glVertex2f(0.07f, 0.64);
  glVertex2f(0.15f, 0.6f);
  glVertex2f(0.18f, 0.56);
  glVertex2f(0.23f, 0.5f);
  glVertex2f(.25f, 0.45f);
  glEnd();

}
void bird()
{
  int i;

  GLfloat mm = 0.182f; GLfloat nn = .801f; GLfloat radiusmm = .01f;
  int triangleAmount = 20;
  GLfloat twicePi = 2.0f * PI;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(225, 225, 208);
  glVertex2f(mm, nn); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      mm + (radiusmm * cos(i * twicePi / triangleAmount)),
      nn + (radiusmm * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  glBegin(GL_POLYGON);
  glColor3ub(225, 225, 208);
  glVertex2f(0.1f, 0.8f);
  glVertex2f(0.11f, 0.79f);
  glVertex2f(0.12f, 0.78f);
  glVertex2f(0.16f, 0.77f);
  glVertex2f(0.19f, 0.79f);
  glVertex2f(0.201f, 0.8f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3ub(217, 217, 217);
  glVertex2f(0.175f, 0.8f);
  glVertex2f(0.15f, 0.8f);
  glVertex2f(0.14f, 0.84f);
  glEnd();


  glBegin(GL_TRIANGLES);
  glColor3ub(242, 242, 242);
  glVertex2f(0.175f, 0.8f);
  glVertex2f(0.144f, 0.8f);
  glVertex2f(0.12f, 0.83f);
  glEnd();
  /////2nd bird////
  glBegin(GL_POLYGON);
  glColor3ub(225, 225, 208);
  glVertex2f(-0.02f, 0.8f);
  glVertex2f(-0.01f, 0.79f);
  glVertex2f(0.0f, 0.78f);
  glVertex2f(0.04f, 0.77f);
  glVertex2f(0.07f, 0.79f);
  glVertex2f(0.081f, 0.8f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3ub(217, 217, 217);
  glVertex2f(0.055f, 0.8f);
  glVertex2f(0.03f, 0.8f);
  glVertex2f(0.02f, 0.84f);
  glEnd();


  glBegin(GL_TRIANGLES);
  glColor3ub(242, 242, 242);
  glVertex2f(0.055f, 0.8f);
  glVertex2f(0.024f, 0.8f);
  glVertex2f(0.0f, 0.83f);
  glEnd();

  GLfloat mmm = 0.062f; GLfloat nnn = .801f; GLfloat radiusmmm = .01f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(225, 225, 208);
  glVertex2f(mmm, nnn); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      mmm + (radiusmmm * cos(i * twicePi / triangleAmount)),
      nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  /////3rd bird/////
  glBegin(GL_POLYGON);
  glColor3ub(225, 225, 208);
  glVertex2f(-0.72f, 0.8f);
  glVertex2f(-0.71f, 0.79f);
  glVertex2f(-0.7f, 0.78f);
  glVertex2f(-0.66f, 0.77f);
  glVertex2f(-0.63f, 0.79f);
  glVertex2f(-0.619f, 0.8f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3ub(217, 217, 217);
  glVertex2f(-0.645f, 0.8f);
  glVertex2f(-0.67f, 0.8f);
  glVertex2f(-0.68f, 0.84f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3ub(242, 242, 242);
  glVertex2f(-0.645f, 0.8f);
  glVertex2f(-0.676f, 0.8f);
  glVertex2f(-0.7f, 0.83f);
  glEnd();

  GLfloat mmmm = -0.638f; GLfloat nnnn = .801f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(225, 225, 208);
  glVertex2f(mmmm, nnnn); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      mmmm + (radiusmmm * cos(i * twicePi / triangleAmount)),
      nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  ////4th bird////
  GLfloat mmmmm = -0.518f; GLfloat nnnnn = .801f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(225, 225, 208);
  glVertex2f(mmmmm, nnnnn); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      mmmmm + (radiusmm * cos(i * twicePi / triangleAmount)),
      nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  glBegin(GL_POLYGON);
  glColor3ub(225, 225, 208);
  glVertex2f(-0.6f, 0.8f);
  glVertex2f(-0.59f, 0.79f);
  glVertex2f(-0.58f, 0.78f);
  glVertex2f(-0.54f, 0.77f);
  glVertex2f(-0.51f, 0.79f);
  glVertex2f(-0.499f, 0.8f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3ub(217, 217, 217);
  glVertex2f(-0.525f, 0.8f);
  glVertex2f(-0.55f, 0.8f);
  glVertex2f(-0.56f, 0.84f);
  glEnd();


  glBegin(GL_TRIANGLES);
  glColor3ub(242, 242, 242);
  glVertex2f(-0.525f, 0.8f);
  glVertex2f(-0.556f, 0.8f);
  glVertex2f(-0.58f, 0.83f);
  glEnd();
}

void sun()
{
  int i;

  GLfloat x = -.6f; GLfloat y = .9f; GLfloat radius = .06f;
  int triangleAmount = 20;
  GLfloat twicePi = 2.0f * PI;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 204, 0);
  glVertex2f(x, y); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      x + (radius * cos(i * twicePi / triangleAmount)),
      y + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
}

void ground()
{
  glBegin(GL_POLYGON);
  glColor3ub(102, 255, 51);
  glVertex2f(-1.0f, -1.0f);
  glVertex2f(-1.0f, 0.0f);
  glVertex2f(0.0f, 0.0f);
  glVertex2f(0.1f, -0.03);
  glVertex2f(0.2f, -0.07);
  glVertex2f(0.3f, -0.1);
  glVertex2f(0.2f, -0.13);
  glVertex2f(0.1f, -0.17);
  glVertex2f(0.2f, -0.2);
  glVertex2f(0.35f, -0.23);

  glVertex2f(0.5f, -1.0);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(102, 0, 0);
  glVertex2f(0.3f, -0.60f);
  glVertex2f(0.12f, -0.35);
  glVertex2f(0.0f, -0.35);
  glVertex2f(0.17f, -0.60f);


  glEnd();

  glBegin(GL_LINES);
  glVertex2f(0.0f, -0.35);
  glVertex2f(0.0f, -0.45);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(0.12f, -0.35);
  glVertex2f(0.12f, -0.45);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(0.3f, -0.60f);
  glVertex2f(0.3f, -0.70f);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(0.17f, -0.60f);
  glVertex2f(0.17f, -0.70f);
  glEnd();

}
void river()
{
  glBegin(GL_QUADS);
  glColor3ub(38, 154, 214);
  glVertex2f(-1.0f, 0.45f);
  glVertex2f(1.0f, 0.45f);
  glVertex2f(1.0f, -1.0f);
  glVertex2f(-1.0f, -1.0f);
  glEnd();
}

void hut()
{
  glBegin(GL_POLYGON);
  glColor3ub(204, 153, 0);
  glVertex2f(-0.5f, 0.2f);
  glVertex2f(-0.1f, 0.2f);
  glVertex2f(-0.18f, 0.5f);
  glVertex2f(-0.58f, 0.5f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(204, 153, 0);
  glVertex2f(-0.49f, 0.2f);
  glVertex2f(-0.13f, 0.2f);
  glVertex2f(-0.13f, -0.2f);
  glVertex2f(-0.49f, -0.2f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(153, 115, 0);
  glVertex2f(-0.58f, 0.5f);
  glVertex2f(-0.63f, 0.2f);
  glVertex2f(-0.61f, 0.2f);
  glVertex2f(-0.61f, -0.15f);
  glVertex2f(-0.49f, -0.2f);
  glVertex2f(-0.17f, -0.2f);

  glEnd();
  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.5f, 0.2f);
  glVertex2f(-0.1f, 0.2f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.49f, 0.2f);
  glVertex2f(-0.49f, -0.2f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.13f, -0.2f);
  glVertex2f(-0.49f, -0.2f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.13f, -0.2f);
  glVertex2f(-0.13f, 0.2f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.5f, 0.2f);
  glVertex2f(-0.58f, 0.5f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.58f, 0.5f);
  glVertex2f(-0.63f, 0.2f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.57f, 0.445f);
  glVertex2f(-0.61f, 0.2f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.61f, 0.2f);
  glVertex2f(-0.61f, -0.15f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.61f, -0.15f);
  glVertex2f(-0.49f, -0.2f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.1f, 0.2f);
  glVertex2f(-0.18f, 0.5f);

  glColor3ub(0, 0, 0);
  glVertex2f(-0.18f, 0.5f);
  glVertex2f(-0.58f, 0.5f);

  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(245, 222, 179);
  glVertex2f(-0.35f, 0.1f);
  glVertex2f(-0.22f, 0.1f);    //main door
  glVertex2f(-0.22f, -0.2f);
  glVertex2f(-0.35f, -0.2f);
  glEnd();
  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.35f, 0.1f);
  glVertex2f(-0.22f, 0.1f);
  glVertex2f(-0.22f, 0.1f);
  glVertex2f(-0.22f, -0.2f);
  glVertex2f(-0.35f, 0.1f);
  glVertex2f(-0.35f, -0.2f);
  glVertex2f(-0.285f, 0.1f);
  glVertex2f(-0.285f, -0.2f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(153, 115, 0);
  glVertex2f(-0.44f, 0.05f);
  glVertex2f(-0.38f, 0.05f); //left window
  glVertex2f(-0.38f, -0.05f);
  glVertex2f(-0.44f, -0.05f);
  glEnd();
  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.44f, 0.05f);
  glVertex2f(-0.44f, -0.05f);
  glVertex2f(-0.38f, 0.05f);
  glVertex2f(-0.38f, -0.05f);
  glVertex2f(-0.44f, 0.05f);
  glVertex2f(-0.38f, 0.05f);
  glVertex2f(-0.44f, -0.05f);
  glVertex2f(-0.38f, -0.05f);
  glVertex2f(-0.41f, 0.05f);
  glVertex2f(-0.41f, -0.05f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(245, 222, 179);
  glVertex2f(-0.51f, 0.12f); //2nd door
  glVertex2f(-0.58f, 0.14f);
  glVertex2f(-0.58f, -0.17f);
  glVertex2f(-0.51f, -0.2f);
  glEnd();
  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.58f, 0.14f);
  glVertex2f(-0.58f, -0.17f);
  glVertex2f(-0.51f, 0.12f);
  glVertex2f(-0.51f, -0.2f);
  glVertex2f(-0.58f, 0.14f);
  glVertex2f(-0.51f, 0.12f);
  glVertex2f(-0.545f, 0.13f);
  glVertex2f(-0.545f, -0.185f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(153, 115, 0);
  glVertex2f(-0.14f, 0.05f);
  glVertex2f(-0.2f, 0.05f);   //rightwindow
  glVertex2f(-0.2f, -0.05f);
  glVertex2f(-0.14f, -0.05f);
  glEnd();
  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.14f, 0.05f);
  glVertex2f(-0.14f, -0.05f);
  glVertex2f(-0.2f, 0.05f);
  glVertex2f(-0.2f, -0.05f);
  glVertex2f(-0.14f, 0.05f);
  glVertex2f(-0.2f, 0.05f);
  glVertex2f(-0.14f, -0.05f);
  glVertex2f(-0.2f, -0.05f);
  glVertex2f(-0.17f, 0.05f);
  glVertex2f(-0.17f, -0.05f);
  glEnd();
}
void hut1()   ///Outline of Hut
{
  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.35f, 0.1f);
  glVertex2f(-0.22f, 0.1f);
  glVertex2f(-0.22f, 0.1f);
  glVertex2f(-0.22f, -0.2f);
  glVertex2f(-0.35f, 0.1f);
  glVertex2f(-0.35f, -0.2f);
  glVertex2f(-0.285f, 0.1f);
  glVertex2f(-0.285f, -0.2f);
  glEnd();

  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.35f, 0.1f);
  glVertex2f(-0.22f, 0.1f);
  glVertex2f(-0.22f, 0.1f);
  glVertex2f(-0.22f, -0.2f);
  glVertex2f(-0.35f, 0.1f);
  glVertex2f(-0.35f, -0.2f);
  glVertex2f(-0.285f, 0.1f);
  glVertex2f(-0.285f, -0.2f);
  glEnd();


  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.44f, 0.05f);
  glVertex2f(-0.44f, -0.05f);
  glVertex2f(-0.38f, 0.05f);
  glVertex2f(-0.38f, -0.05f);
  glVertex2f(-0.44f, 0.05f);
  glVertex2f(-0.38f, 0.05f);
  glVertex2f(-0.44f, -0.05f);
  glVertex2f(-0.38f, -0.05f);
  glVertex2f(-0.41f, 0.05f);
  glVertex2f(-0.41f, -0.05f);
  glEnd();


  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.58f, 0.14f);
  glVertex2f(-0.58f, -0.17f);
  glVertex2f(-0.51f, 0.12f);
  glVertex2f(-0.51f, -0.2f);
  glVertex2f(-0.58f, 0.14f);
  glVertex2f(-0.51f, 0.12f);
  glVertex2f(-0.545f, 0.13f);
  glVertex2f(-0.545f, -0.185f);
  glEnd();



  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.14f, 0.05f);
  glVertex2f(-0.14f, -0.05f);
  glVertex2f(-0.2f, 0.05f);
  glVertex2f(-0.2f, -0.05f);
  glVertex2f(-0.14f, 0.05f);
  glVertex2f(-0.2f, 0.05f);
  glVertex2f(-0.14f, -0.05f);
  glVertex2f(-0.2f, -0.05f);
  glVertex2f(-0.17f, 0.05f);
  glVertex2f(-0.17f, -0.05f);
  glEnd();

  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.5f, 0.2f);
  glVertex2f(-0.1f, 0.2f);
  glVertex2f(-0.49f, 0.2f);
  glVertex2f(-0.49f, -0.2f);
  glVertex2f(-0.13f, -0.2f);
  glVertex2f(-0.49f, -0.2f);
  glVertex2f(-0.13f, -0.2f);
  glVertex2f(-0.13f, 0.2f);
  glVertex2f(-0.5f, 0.2f);
  glVertex2f(-0.58f, 0.5f);
  glVertex2f(-0.58f, 0.5f);
  glVertex2f(-0.63f, 0.2f);
  glVertex2f(-0.57f, 0.445f);
  glVertex2f(-0.61f, 0.2f);
  glVertex2f(-0.61f, 0.2f);
  glVertex2f(-0.61f, -0.15f);
  glVertex2f(-0.61f, -0.15f);
  glVertex2f(-0.49f, -0.2f);
  glVertex2f(-0.1f, 0.2f);
  glVertex2f(-0.18f, 0.5f);
  glVertex2f(-0.18f, 0.5f);
  glVertex2f(-0.58f, 0.5f);


  glEnd();
  glBegin(GL_POLYGON);
  glColor3ub(204, 153, 0);
  glVertex2f(-0.5f, 0.2f);
  glVertex2f(-0.1f, 0.2f);
  glVertex2f(-0.18f, 0.5f);
  glVertex2f(-0.58f, 0.5f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(204, 153, 0);
  glVertex2f(-0.49f, 0.2f);
  glVertex2f(-0.13f, 0.2f);
  glVertex2f(-0.13f, -0.2f);
  glVertex2f(-0.49f, -0.2f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(204, 153, 0);
  glVertex2f(-0.58f, 0.5f);
  glVertex2f(-0.63f, 0.2f);
  glVertex2f(-0.61f, 0.2f);
  glVertex2f(-0.61f, -0.15f);
  glVertex2f(-0.49f, -0.2f);
  glVertex2f(-0.17f, -0.2f);
  glEnd();

}


//Tree using polygon and circle
void tree()
{
  glBegin(GL_POLYGON);
  glColor3ub(102, 51, 0);
  glVertex2f(-0.72f, -0.15f);
  glVertex2f(-0.65f, -0.2f);
  glVertex2f(-0.735f, -0.17f);
  glVertex2f(-0.74f, -0.25f);
  glVertex2f(-0.775f, -0.17f);
  glVertex2f(-0.85f, -0.2f);
  glVertex2f(-0.78f, -0.15f);
  //glVertex2f(-0.7f,-0.25f);
  glEnd();

  glBegin(GL_QUADS);
  glColor3ub(102, 51, 0);
  glVertex2f(-0.78f, -0.15f);
  glVertex2f(-0.78f, 0.23f);
  glVertex2f(-0.72f, 0.23f);
  glVertex2f(-0.72f, -0.15f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3ub(102, 51, 0);
  glVertex2f(-0.76f, 0.23f);
  glVertex2f(-0.76f, 0.3f);
  glVertex2f(-0.74f, 0.3f);
  glVertex2f(-0.74f, 0.23f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3ub(102, 51, 0);
  glVertex2f(-0.74f, 0.23f);
  glVertex2f(-0.71f, 0.29f);
  glVertex2f(-0.7f, 0.28f);
  glVertex2f(-0.72f, 0.23f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3ub(102, 51, 0);
  glVertex2f(-0.78f, 0.23f);
  glVertex2f(-0.8f, 0.28f);
  glVertex2f(-0.79f, 0.29f);
  glVertex2f(-0.76f, 0.23f);
  glEnd();

  int i;

  GLfloat x = -.75f; GLfloat y = .33f; GLfloat radius = .06f;
  int triangleAmount = 20;
  GLfloat twicePi = 2.0f * PI;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(x, y); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      x + (radius * cos(i * twicePi / triangleAmount)),
      y + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat a = -.68f; GLfloat b = .31f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(a, b); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      a + (radius * cos(i * twicePi / triangleAmount)),
      b + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat c = -.81f; GLfloat d = .31f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(c, d); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      c + (radius * cos(i * twicePi / triangleAmount)),
      d + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat e = -.87f; GLfloat f = .35f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(e, f); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e + (radius * cos(i * twicePi / triangleAmount)),
      f + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat g = -.61f; GLfloat h = .35f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(g, h); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      g + (radius * cos(i * twicePi / triangleAmount)),
      h + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  GLfloat a1 = -.61f; GLfloat b1 = .4f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(a1, b1); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      a1 + (radius * cos(i * twicePi / triangleAmount)),
      b1 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat c1 = -.88f; GLfloat d1 = .4f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(c, d); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      c1 + (radius * cos(i * twicePi / triangleAmount)),
      d1 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat e1 = -.87f; GLfloat f1 = .44f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(e1, f1); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e1 + (radius * cos(i * twicePi / triangleAmount)),
      f1 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat g1 = -.61f; GLfloat h1 = .4f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(g, h); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      g1 + (radius * cos(i * twicePi / triangleAmount)),
      h1 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  GLfloat e11 = -.64f; GLfloat f11 = .44f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(e11, f11); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e11 + (radius * cos(i * twicePi / triangleAmount)),
      f11 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();

  GLfloat e12 = -.75f; GLfloat f12 = .44f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(e12, f12); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e12 + (radius * cos(i * twicePi / triangleAmount)),
      f12 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  glBegin(GL_QUADS);
  glColor3ub(51, 204, 51);
  glVertex2f(-0.85f, 0.33f);
  glVertex2f(-0.85f, 0.44f);
  glVertex2f(-0.65f, 0.44f);
  glVertex2f(-0.65f, 0.33f);
  glEnd();

  GLfloat e123 = -.8f; GLfloat f123 = .5f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(e123, f123); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e123 + (radius * cos(i * twicePi / triangleAmount)),
      f123 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
  GLfloat e1232 = -.7f; GLfloat f1232 = .5f;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(51, 204, 51);
  glVertex2f(e1232, f1232); // center of circle
  for (i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      e1232 + (radius * cos(i * twicePi / triangleAmount)),
      f1232 + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();
}

void boat2()
{

  glBegin(GL_POLYGON);
  glColor3ub(0, 0, 0);
  glVertex2f(0.63f, -0.53f);
  glVertex2f(0.53f, -0.53f);
  glVertex2f(0.43f, -0.5f);
  glVertex2f(0.53f, -0.6f);
  glVertex2f(0.78f, -0.6f);
  glVertex2f(0.88f, -0.5f);
  glVertex2f(0.78f, -0.53f);
  glVertex2f(0.73f, -0.53f);
  glEnd();
  glBegin(GL_POLYGON);
  glColor3ub(122, 122, 82);
  glVertex2f(0.43f, -0.5f);
  glVertex2f(0.53f, -0.53f);
  glVertex2f(0.63f, -0.53f);
  glVertex2f(0.73f, -0.53f);
  glVertex2f(0.78f, -0.53f);
  glVertex2f(0.88f, -0.5f);////
  glVertex2f(0.78f, -0.48f);
  glVertex2f(0.73f, -0.48f);
  glVertex2f(0.63f, -0.48f);
  glVertex2f(0.53f, -0.48f);
  glVertex2f(0.43f, -0.5f);
  glEnd();

  glLineWidth(3);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(0.88f, -0.5f);////
  glVertex2f(0.78f, -0.48f);
  glVertex2f(0.78f, -0.48f);
  glVertex2f(0.73f, -0.48f);
  glVertex2f(0.73f, -0.48f);
  glVertex2f(0.63f, -0.48f);
  glVertex2f(0.63f, -0.48f);
  glVertex2f(0.53f, -0.48f);
  glVertex2f(0.53f, -0.48f);
  glVertex2f(0.43f, -0.5f);
  glEnd();

  glLineWidth(9);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(0.53f, -0.48f);
  glVertex2f(0.53f, -0.535f);
  glVertex2f(0.63f, -0.48f);
  glVertex2f(0.63f, -0.535f);
  glVertex2f(0.73f, -0.48f);
  glVertex2f(0.73f, -0.535f);
  glVertex2f(0.81f, -0.48f);
  glVertex2f(0.81f, -0.535f);
  glEnd();

  glLineWidth(6);
  glBegin(GL_LINES);
  glColor3ub(204, 153, 0);
  glVertex2f(0.38f, -0.38f);
  glVertex2f(0.4f, -0.53f);
  glEnd();

  glLineWidth(3);
  glBegin(GL_LINES);
  glColor3ub(153, 153, 102);
  glVertex2f(0.38f, -0.42f);
  glVertex2f(0.43f, -0.5f);
  glEnd();
}


void way()
{
  glBegin(GL_QUADS);
  glColor3ub(153, 153, 102);
  glVertex2f(-0.35f, -0.2f);
  glVertex2f(-0.22f, -0.2f);
  glVertex2f(-0.28f, -0.5f);
  glVertex2f(-0.43f, -0.5f);
  glEnd();

  glBegin(GL_QUADS);
  glColor3ub(153, 153, 102);
  glVertex2f(-0.43f, -0.5f);
  glVertex2f(-0.35f, -1.0f);
  glVertex2f(-0.16f, -1.0f);
  glVertex2f(-0.28f, -0.5f);

  glEnd();


}

void well()
{

  glBegin(GL_POLYGON);
  glColor3ub(47, 79, 79);
  glVertex2f(-0.9f, -0.35f);
  glVertex2f(-0.9f, -0.55f);
  glVertex2f(-0.85f, -0.575f);
  glVertex2f(-0.8f, -0.59f);
  glVertex2f(-0.7f, -0.59f);
  glVertex2f(-0.65f, -0.575f);
  glVertex2f(-0.6f, -0.55f);
  glVertex2f(-0.6f, -0.35f);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(255, 102, 51);
  glVertex2f(-0.9f, -0.35f);
  glVertex2f(-0.85f, -0.375f);
  glVertex2f(-0.8f, -0.38f);
  glVertex2f(-0.7f, -0.38f);
  glVertex2f(-0.65f, -0.375f);
  glVertex2f(-0.6f, -0.35f);
  glVertex2f(-0.65f, -0.33f);
  glVertex2f(-0.7f, -0.325f);
  glVertex2f(-0.8f, -0.325f);
  glVertex2f(-0.85f, -0.33f);
  glEnd();

  glLineWidth(5);
  glBegin(GL_LINES);
  glColor3ub(0, 0, 0);
  glVertex2f(-0.9f, -0.35f);
  glVertex2f(-0.85f, -0.33f);//
  glVertex2f(-0.85f, -0.33f);
  glVertex2f(-0.8f, -0.325f);//
  glVertex2f(-0.8f, -0.325f);
  glVertex2f(-0.7f, -0.325f);//
  glVertex2f(-0.7f, -0.325f);
  glVertex2f(-0.65f, -0.33f);//
  glVertex2f(-0.65f, -0.33f);
  glVertex2f(-0.6f, -0.35f);
  glEnd();
}

void display2()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnable(GL_DEPTH_TEST);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();


  glLoadIdentity();
  glutSwapBuffers();

}

struct Point
{
  float x, y;
  unsigned char r, g, b, a;
};
std::vector< Point > points;

void display1(void)
{
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glLineWidth(2);
  sky();
  hills();
  river();
  ground();

  way();
  boat2();

  tree();
  well();

  hut();
  glOrtho(-50, 50, -50, 50, -1, 1);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glPushMatrix();

  glColor3ub(255, 255, 255);
  glEnableClientState(GL_VERTEX_ARRAY);
  glEnableClientState(GL_COLOR_ARRAY);
  glVertexPointer(2, GL_FLOAT, sizeof(Point), &points[0].x);
  glColorPointer(4, GL_UNSIGNED_BYTE, sizeof(Point), &points[0].r);
  glPointSize(2.5);
  glDrawArrays(GL_POINTS, 0, points.size());
  glDisableClientState(GL_VERTEX_ARRAY);
  glDisableClientState(GL_COLOR_ARRAY);
  glPopMatrix();
  glFlush();
  glutSwapBuffers();
}

void display() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glLineWidth(2);
  sky();
  sun();
  glPushMatrix();
  glTranslatef(position2, 0.0f, 0.0f);
  cloud1();
  cloud2();
  glPopMatrix();
  glPushMatrix();
  glTranslatef(position22, 0.0f, 0.0f);
  bird();
  glPopMatrix();
  hills();
  river();
  glPushMatrix();
  glTranslatef(position1, 0.0f, 0.0f);

  glPopMatrix();
  ground();

  way();
  boat2();

  well();

  tree();
  hut();
  glFlush();
  glutSwapBuffers();
}
void reshape(int w, int h)
{
  float aspectRatio = (float)w / (float)h;
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(145, aspectRatio, 1.0, 100.0);
  glMatrixMode(GL_MODELVIEW);

}

void Display(void)
{

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  glTranslatef(0, 0, -20);
  glFlush();
  glutSwapBuffers();
}

void init(void)
{
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
  glClearDepth(1.0);
  glEnable(GL_DEPTH_TEST);
  glEnable(GL_LIGHTING);
  glShadeModel(GL_SMOOTH);
  glEnable(GL_COLOR_MATERIAL);
  glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
  glEnable(GL_LIGHT0);

}

void handleKeypress(unsigned char key, int x, int y) {
  switch (key) {
  case  'd':
    glutDestroyWindow(1);
    glutInitWindowSize(1240, 750);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
    glutCreateWindow("village scenario");
    glutKeyboardFunc(handleKeypress);
    glutDisplayFunc(display);
    PlaySound(TEXT("bird-2.wav"), NULL, SND_ASYNC);
    break;
    break;


  case  'D':
    glutDestroyWindow(1);
    glutInitWindowSize(1240, 750);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
    glutCreateWindow("village scenario");
    glutKeyboardFunc(handleKeypress);
    glutDisplayFunc(display);
    PlaySound(TEXT("bird-2.wav"), NULL, SND_ASYNC);
    break;
    break;
  }
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitWindowSize(1240, 750);
  glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
  glutCreateWindow("village scenario");
  init();
  glutReshapeFunc(reshape);
  glutDisplayFunc(Display);
  for (size_t i = 0; i < 1000; ++i)
  {
    Point pt;
    pt.x = -50 + (rand() % 100);
    pt.y = -50 + (rand() % 100);
    pt.r = 255;
    pt.g = 255;
    pt.b = 255;
    pt.a = 255;
    points.push_back(pt);
  }
  glutTimerFunc(100, cloud, 0);
  glutTimerFunc(100, birdd, 0);
  glutKeyboardFunc(handleKeypress);
  init();
  glutMainLoop();
  return 0;
}
