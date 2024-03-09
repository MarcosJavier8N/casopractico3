#include <gl/glut.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

void DibujarCirculo(float centrox, float centroy, float r, int num_segments) {
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < num_segments; i++) {
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
		float x = r * cosf(theta);
		float y = r * sinf(theta);
		glVertex2f(x + centrox, y + centroy);
	}
	glEnd();
}

void Piernas(){
	//DERECHO
	glBegin(GL_LINE_LOOP);
	glVertex2i(70, 75);
	glVertex2i(150, 75);
	glVertex2i(150, 100);
	glEnd();
	
	//DERECHO-1
	glBegin(GL_LINE_LOOP);
	glVertex2i(150, 100);
	glVertex2i(120, 100);
	glVertex2i(120, 91);
	glEnd();
	
	//DERECHO-2
	glBegin(GL_LINE_LOOP);
	glVertex2i(120, 100);
	glVertex2i(150, 100);
	glVertex2i(150, 205);
	glVertex2i(120, 205);
	glEnd();
	
	//--------------------
	//IZQUIERDO
	glBegin(GL_LINE_LOOP);
	glVertex2i(220, 75);
	glVertex2i(300, 75);
	glVertex2i(220, 100);
	glEnd();
	
	//IZQUIERDO-1
	glBegin(GL_LINE_LOOP);
	glVertex2i(220, 100);
	glVertex2i(250, 100);
	glVertex2i(250, 91);
	glEnd();
	
	//IZQUIERDO-2
	glBegin(GL_LINE_LOOP);
	glVertex2i(250, 205);
	glVertex2i(220, 205);
	glVertex2i(220, 100);
	glVertex2i(250, 100);
	glEnd();		
}

void Brazos(){
	//DERECHO
	glBegin(GL_LINE_LOOP);
	glVertex2i(35, 190);
	glVertex2i(50, 190);
	glVertex2i(50, 225);
	glVertex2i(35, 225);
	glEnd();
	
	//IZQUIERDO
	glBegin(GL_LINE_LOOP);
	glVertex2i(75, 190);
	glVertex2i(90, 190);
	glVertex2i(90, 225);
	glVertex2i(75, 225);
	glEnd();
	
	//MANO
	glBegin(GL_LINE_LOOP);
	glVertex2i(60, 255);
	glVertex2i(65, 255);
	glVertex2i(65, 260);
	glVertex2i(60, 260);
	glEnd();
	
	//CIRCULOS MANOS
	float centroxD = (65 + 60) / 2.0f;
	float centroyD = (230 + 245) / 2.0f;
	float radioD = 18.0f;
	int num_segmentsD = 50;
	DibujarCirculo(centroxD, centroyD, radioD, num_segmentsD);
	
	//BRAZO
	glBegin(GL_LINE_LOOP);
	glVertex2i(50, 260);
	glVertex2i(75, 260);
	glVertex2i(75, 350);
	glVertex2i(50, 350);
	glEnd();
	
	//SOPORTE BRAZO
	glBegin(GL_LINE_LOOP);
	glVertex2i(55, 350);
	glVertex2i(70, 350);
	glVertex2i(70, 365);
	glVertex2i(55, 365);
	glEnd();
	
	//DEFINICIONES HOMBRO
	float centroxHD = (60 + 65) / 2.0f;
	float centroyHD = (370 + 405) / 2.0f;
	float radioHD = 22.0f;
	int num_segmentsHD = 50;
	DibujarCirculo(centroxHD, centroyHD, radioHD, num_segmentsHD);
	float centroxHDp = (60 + 65) / 2.0f;
	float centroyHDp = (370 + 405) / 2.0f;
	float radioHDp = 8.0f; 
	int num_segmentsHDp = 50;
	DibujarCirculo(centroxHDp, centroyHDp, radioHDp, num_segmentsHDp);
	
	//HOMBRO
	glBegin(GL_LINE_LOOP);
	glVertex2i(85, 385);
	glVertex2i(100, 385);
	glVertex2i(100, 395);
	glVertex2i(85, 395);
	glEnd();
	
	//DEDOS
	glBegin(GL_LINE_LOOP);
	glVertex2i(295, 190);
	glVertex2i(280, 190);
	glVertex2i(280, 225);
	glVertex2i(295, 225);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(320, 190);
	glVertex2i(335, 190);
	glVertex2i(335, 225);
	glVertex2i(320, 225);
	glEnd();
	
	//MANO
	glBegin(GL_LINE_LOOP);
	glVertex2i(305, 255);
	glVertex2i(310, 255);
	glVertex2i(310, 260);
	glVertex2i(305, 260);
	glEnd();
	float centroxI = (305 + 310) / 2.0f;
	float centroyI = (230 + 245) / 2.0f;
	float radioI = 18.0f;
	int num_segmentsI = 50;
	DibujarCirculo(centroxI, centroyI, radioI, num_segmentsI);
	
	
	//BRAZO
	glBegin(GL_LINE_LOOP);
	glVertex2i(295, 260);
	glVertex2i(320, 260);
	glVertex2i(320, 350);
	glVertex2i(295, 350);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(300, 350);
	glVertex2i(315, 350);
	glVertex2i(315, 365);
	glVertex2i(300, 365);
	glEnd();
	float centroxHI = (305 + 310) / 2.0f;
	float centroyHI = (370 + 405) / 2.0f;
	float radioHI = 22.0f;
	int num_segmentsHI = 50;
	DibujarCirculo(centroxHI, centroyHI, radioHI, num_segmentsHI);
	float centroxHIp = (305 + 310) / 2.0f;
	float centroyHIp = (370 + 405) / 2.0f;
	float radioHIp = 8.0f;
	int num_segmentsHIp = 50;
	DibujarCirculo(centroxHIp, centroyHIp, radioHIp, num_segmentsHIp);
	
	//HOMBRO
	glBegin(GL_LINE_LOOP);
	glVertex2i(270, 385);
	glVertex2i(285, 385);
	glVertex2i(285, 395);
	glVertex2i(270, 395);
	glEnd();
}

void Cabeza(){
	//CUELLO
	glBegin(GL_LINE_LOOP);
	glVertex2i(150, 405);
	glVertex2i(220, 405);
	glVertex2i(220, 420);
	glVertex2i(150, 420);
	glEnd();
	
	//CHOMPA
	glBegin(GL_LINE_LOOP);
	glVertex2i(120, 420);
	glVertex2i(250, 420);
	glVertex2i(250, 480);
	glVertex2i(120, 480);
	glEnd();
	
	//OJO
	float centroxD = (140 + 165) / 2.0f;
	float centroyD = (450 + 470) / 2.0f;
	float radioD = 15.0f;
	int num_segmentsD = 50;
	DibujarCirculo(centroxD, centroyD, radioD, num_segmentsD);

	//OJO-2
	float centroxI = (205 + 230) / 2.0f;
	float centroyI = (450 + 470) / 2.0f;
	float radioI = 15.0f;
	int num_segmentsI = 50;
	DibujarCirculo(centroxI, centroyI, radioI, num_segmentsI);
	
	//CURVATURAS DE OJOS
	glBegin(GL_LINE_STRIP);
	glVertex2f(centroxD - 5, centroyD - 5);
	glVertex2f(centroxD - 2.5, centroyD - 2.5);
	glVertex2f(centroxD, centroyD);
	glVertex2f(centroxD + 2.5, centroyD - 2.5);
	glVertex2f(centroxD + 5, centroyD - 5);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex2f(centroxI - 5, centroyI - 5);
	glVertex2f(centroxI - 2.5, centroyI - 2.5);
	glVertex2f(centroxI, centroyI);
	glVertex2f(centroxI + 2.5, centroyI - 2.5);
	glVertex2f(centroxI + 5, centroyI - 5);
	glEnd();	
	
	//TROMPA
	glBegin(GL_LINE_LOOP);
	glVertex2i(160, 425);
	glVertex2i(210, 425);
	glVertex2i(210, 435);
	glVertex2i(160, 435);
	glEnd();
	
	//DIENTES?
	glBegin(GL_LINES);
	glVertex2i(172.5, 425);
	glVertex2i(172.5, 435);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(185, 425);
	glVertex2i(185, 435);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(197.5, 425);
	glVertex2i(197.5, 435);
	glEnd();
	
	//ANTENA 3
	glBegin(GL_LINE_LOOP);
	glVertex2i(180, 480);
	glVertex2i(190, 480);
	glVertex2i(190, 520);
	glVertex2i(180, 520);
	glEnd();
	
	//ANTENA 2
	float centroxA = (180 + 190) / 2.0f;
	float centroyA = (528 + 538) / 2.0f;
	float radioA = 13.0f;
	int num_segmentsA = 50;
	DibujarCirculo(centroxA, centroyA, radioA, num_segmentsA);
}
void Cuerpo(){
	//FACHIS
	glBegin(GL_LINE_LOOP);
	glVertex2i(100, 205);
	glVertex2i(270, 205);
	glVertex2i(270, 405);
	glVertex2i(100, 405);
	glEnd();
	
	//CIRCUL
	float centroxU = (160 + 170) / 2.0f;
	float centroyU = (220 + 230) / 2.0f;
	float radioU = 7.0f; 
	int num_segmentsU = 50;
	DibujarCirculo(centroxU, centroyU, radioU, num_segmentsU);
	float centroxV = (180 + 190) / 2.0f;
	float centroyV = (220 + 230) / 2.0f;
	float radioV = 7.0f;
	int num_segmentsV = 50;
	DibujarCirculo(centroxV, centroyV, radioV, num_segmentsV);
	float centroxT = (200 + 210) / 2.0f;
	float centroyT = (220 + 230) / 2.0f;
	float radioT = 7.0f;
	int num_segmentsT = 50;
	DibujarCirculo(centroxT, centroyT, radioT, num_segmentsT);
	
	//PECHUGA
	glBegin(GL_LINE_LOOP);
	glVertex2i(125, 310);
	glVertex2i(245, 310);
	glVertex2i(245, 375);
	glVertex2i(125, 375);
	glEnd();
	
	//TINGULOS
	glBegin(GL_LINE_LOOP);
	glVertex2i(135, 340);
	glVertex2i(150, 340);
	glVertex2i(142.5, 365);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(160, 340);
	glVertex2i(175, 340);
	glVertex2i(167.5, 365);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(185, 340);
	glVertex2i(200, 340);
	glVertex2i(192.5, 365);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(210, 340);
	glVertex2i(225, 340);
	glVertex2i(217.5, 365);
	glEnd();	
}
void myInit() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	Piernas();
	Brazos();
	Cuerpo();
	Cabeza();	
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Demo ROBOC");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
