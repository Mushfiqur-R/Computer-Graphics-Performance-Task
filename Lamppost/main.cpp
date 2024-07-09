#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <cmath>

#define PI 3.14159265358979323846
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}
void Bangladesh()
{
    glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(0,128,0);
    glVertex2f(1.56,9.27);//c
    glVertex2f(7.22,9.27);//d
    glVertex2f(7.22,5.89);//e
    glVertex2f(1.56,5.89);//f
    glEnd();
}
void Circle(GLfloat x, GLfloat y, GLfloat radius) {
    int i;
    int triangleAmount = 100; // Number of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);
    glVertex2f(x, y); // Center of the circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void Argentina()
{
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(135, 206, 235);
	glVertex2f(8.45,9.26);//g
	glVertex2f(8.45,8.12);//k
	glVertex2f(15.18,8.12);//l
	glVertex2f(15.18,9.26);//h
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,255,255);
	glVertex2f(8.45,8.12);//k
	glVertex2f(15.18,8.12);//l
	glVertex2f(15.18, 6.986);//n
	glVertex2f(8.45,6.986);//m
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(135, 206, 235);
	glVertex2f(8.45,6.986);//m
	glVertex2f(15.18, 6.986);//n
	glVertex2f(15.1744010389237, 5.8476349369611);//j
	glVertex2f(8.4530580821821, 5.8476349369611);//i
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.126,0.08);
    glVertex2f(0.140,0.006);
    glEnd();

}
void Circlearg(GLfloat x, GLfloat y, GLfloat radius) {
    int i;
    int triangleAmount = 100; // Number of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,0);
    glVertex2f(x, y); // Center of the circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void ghana()
{
     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(1.345, 4.48);//s
	glVertex2f(7.32, 4.48);//t
	glVertex2f(7.32,3.20);//z
	glVertex2f(1.34,3.20);//w
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(225,207,18);
	glVertex2f(1.34,3.20);//w
	glVertex2f(7.32,3.20);//z
	glVertex2f(7.39, 1.95);//b1
	glVertex2f(1.34,1.95);//a1
    glEnd();
      glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(0,128,0);
	glVertex2f(1.34,1.95);//a1
	glVertex2f(7.39, 1.95);//b1
	glVertex2f(7.39, 0.50);//z
	glVertex2f(1.34, 0.50);//w
    glEnd();
    //star
     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(0,0,0);
	glVertex2f(4.1523628296026, 2.6773433242349);//d1
	glVertex2f(4.323626851494, 3.1770973553278);//c1
	glVertex2f(4.4973341222554, 2.6755922878731);//e1
	glVertex2f(5.0139170254721, 2.6836638957359);//f1
	glVertex2f(4.5861218087458, 2.3607995812254);//g1
	glVertex2f(4.747553966001, 1.8845747173225);//h1
	glVertex2f(4.3197587492747, 2.1751526003819);//i1
	glVertex2f(3.9161783561366, 1.9168611487736);//j1
	glVertex2f(4.0533956898036, 2.3446563654999);//k1
	glVertex2f(3.63367208094, 2.6836638957359);//l1
    glEnd();

}
void America()
{
     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(0,0,139);
	glVertex2f(8.5294415277663, 4.9008448557114);//l1
	glVertex2f(10.8342926299842, 4.9008448557114);//m2
	glVertex2f(10.8342926299842, 2.5671831147157);//o2
	glVertex2f(8.529,2.567);//p2
    glEnd();

      glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(10.8342926299842, 4.9008448557114);//m2
	glVertex2f(15.6888852640308, 4.9020342169336);//j2
	glVertex2f(15.68069,4.598);//n2
	glVertex2f(10.834,4.598);//q2
    glEnd();
      glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(10.84,4.27);//r2
	glVertex2f(15.69,4.27);//s2
	glVertex2f(15.69,4.04);//nu2
	glVertex2f(10.84,4.04);//t2
    glEnd();
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(10.84,3.69);//v2
	glVertex2f(15.7,3.69);//w2
	glVertex2f(15.7,3.45);//a3
	glVertex2f(10.84,3.45);//z2
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(10.84,3.15);//b3
	glVertex2f(15.7,3.15);//c3
	glVertex2f(15.7,2.89);//e3
	glVertex2f(10.84,2.89);//d3
    glEnd();
     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	//glVertex2f(10.83,2.57);//o2
    glVertex2f(8.53,2.57);//p2
	glVertex2f(15.7,2.57);//f3
	glVertex2f(15.7,2.32);//h3
	glVertex2f(8.53,2.32);//g3
    glEnd();
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(8.53,2.03);//i3
	glVertex2f(15.71,2.03);//j3
	glVertex2f(15.71,1.75);//l3
	glVertex2f(8.53,1.75);//k3
    glEnd();
     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(8.53,1.4);//m3
	glVertex2f(15.71,1.39);//n3
	glVertex2f(15.71,1.14);//p3
	glVertex2f(8.53,1.14);//o3
    glEnd();
        glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,0,0);
	glVertex2f(8.53,0.87);//q3
	glVertex2f(15.71,0.85);//r3
	glVertex2f(15.69987, 0.56164);//k2
	glVertex2f(8.52944, 0.55044);//l2
    glEnd();

    //star
     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,255,255);
	glVertex2f(8.81541, 4.64486);//s3
	glVertex2f(8.85407, 4.76636);//t3
	glVertex2f(8.88789, 4.65669);//u3
	glVertex2f(9.04917, 4.64235);//v3
	glVertex2f(8.92373, 4.53841);//w3
	glVertex2f(8.96316, 4.40939);//z3
	glVertex2f(8.85922, 4.50616);//a4
	glVertex2f(8.74471, 4.4151);//j1
	glVertex2f(8.77679, 4.55633);//k1
	glVertex2f(8.66927, 4.64593);//l1
    glEnd();

     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,255,255);
	glVertex2f(9.49774, 4.65841);//s3
	glVertex2f(9.53939, 4.76531);//t3
	glVertex2f(9.58382, 4.65008);//u3
	glVertex2f(9.72265, 4.63897);//v3
	glVertex2f(9.62825, 4.55845);//w3
	glVertex2f(9.64629, 4.42378);//z3
	glVertex2f(9.54078, 4.48903);//a4
	glVertex2f(9.42555, 4.41128);//j1
	glVertex2f(9.4547, 4.54318);//k1
	glVertex2f(9.35197, 4.64453);//l1
    glEnd();

      glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,255,255);
	glVertex2f(10.17035, 4.65245);//s3
	glVertex2f(10.21635, 4.76945);//t3
	glVertex2f(10.25635, 4.64945);//u3
	glVertex2f(10.41335, 4.64245);//v3
	glVertex2f(10.29735, 4.55746);//w3
	glVertex2f(10.33735, 4.41646);//z3
	glVertex2f(10.21335, 4.48646);//a4
	glVertex2f(10.10135, 4.41146);//j1
	glVertex2f(10.13235, 4.55346);//k1
	glVertex2f(10.02935, 4.63345);//l1
    glEnd();
      glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(255,255,255);
	glVertex2f(9.15476, 4.2187);//s3
	glVertex2f(9.19236, 4.32365);//t3
	glVertex2f(9.23621, 4.2187);//u3
	glVertex2f(9.37562, 4.20461);//v3
	glVertex2f(9.27694, 4.12002);//w3
	glVertex2f(9.3, 4);//z3
	glVertex2f(9.20019, 4.06363);//a4
	glVertex2f(9.09054, 3.97591);//j1
	glVertex2f(9.10307, 4.11376);//k1
	glVertex2f(9, 4.2);//l1
    glEnd();
}
    //test





void display() {
    Bangladesh();
 Circle(4.155806027872, 7.6106101387293, 1.30);

 Argentina();
 Circlearg(11.713006197512, 7.5230917933114,0.242);
 ghana();
 America();
// drawStarsPattern();
  //drawStar();
glFlush();
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(50, 50);
    glutCreateWindow("Post");

	glutDisplayFunc(display);
	initGL();
	gluOrtho2D(-5,20,-10,20);
	glutMainLoop();
	return 0;
}
