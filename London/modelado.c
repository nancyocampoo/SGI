#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include "glut.h"
#include "luces.h"
#include "modelado.h"

void crearCuerpo() {
	cuerpo = glGenLists(1);
	if (cuerpo != 0)
	{
		glNewList(cuerpo, GL_COMPILE);
		glPushMatrix();
		//textura0();
		crearCubo(1.8,6.4,2.3);
		glPopMatrix();
		glEndList();
	}
	else puts("Se ha producido un error creando la display list.");
}

void crearTorre() {
	torre = glGenLists(1);
	if (torre != 0)
	{
		glNewList(torre, GL_COMPILE);

		glPushMatrix();
		glTranslatef(0.0, 0.0, 0.0);
	//	textura0();
		glCallList(cuerpo);
		glPopMatrix();

		//Primera linea de fuera
		glPushMatrix();
		glTranslatef(0.0, -1.10, 0.0);
		glCallList(linea);
		glPopMatrix();

		//Segunda linea de fuera
		glPushMatrix();
		glTranslatef(0.0, -0.80, 0.0);
		glCallList(linea);
		glPopMatrix();

		//Tercera linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 0.30, 0.0);
		glCallList(linea);
		glPopMatrix();

		//Cuarta linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 0.70, 0.0);
		glCallList(linea);
		glPopMatrix();

		//Quinta linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 1.70, 0.0);
		glCallList(linea);
		glPopMatrix();

		//Sexta linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 2.10, 0.0);
		glCallList(linea);
		glPopMatrix();

		//Septima linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 3.10, 0.0);
		glCallList(linea);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0.9, 0.0, 1.15);
		glCallList(columna);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-0.9, 0.0, 1.15);
		glCallList(columna);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-0.9, 0.0, -1.15);
		glCallList(columna);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0.9, 0.0, -1.15);
		glCallList(columna);
		glPopMatrix();

		glEndList();

	}
	else puts("Se ha producido un error creando la display list.");

}

void crearColumna() {
	columna = glGenLists(1);
	if (columna != 0) {
		glNewList(columna, GL_COMPILE);

		//cono
		glPushMatrix();
		glTranslatef(0.0, 4.75, 0.0);
		glScalef(0.5, 1.2, 0.5);
		glCallList(cono);
		glPopMatrix();

		//cruz
		glPushMatrix();
		glTranslatef(0.0, 5.35, 0.0);
		glScalef(0.4, 0.4, 0.4);
		glCallList(cruz);
		glPopMatrix();

		//Octagono
		glPushMatrix();
		glTranslatef(0.0, 0.5, 0.0);
		glScalef(0.5, 7.3, 0.5);
		glCallList(poligono);
		glPopMatrix();

		//Primera linea de fuera
		glPushMatrix();
		glTranslatef(0.0, -1.10, 0.0);
		glScalef(0.7, 0.1, 0.7);
		glCallList(poligono);
		glPopMatrix();

		//Segunda linea de fuera
		glPushMatrix();
		glTranslatef(0.0, -0.80, 0.0);
		glScalef(0.7, 0.1, 0.7);
		glCallList(poligono);
		glPopMatrix();

		//Tercera linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 0.30, 0.0);
		glScalef(0.7, 0.1, 0.7);
		glCallList(poligono);
		glPopMatrix();

		//Cuarta linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 0.70, 0.0);
		glScalef(0.7, 0.1, 0.7);
		glCallList(poligono);
		glPopMatrix();

		//Quinta linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 1.70, 0.0);
		glScalef(0.7, 0.1, 0.7);
		glCallList(poligono);
		glPopMatrix();

		//Sexta linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 2.10, 0.0);
		glScalef(0.7, 0.1, 0.7);
		glCallList(poligono);
		glPopMatrix();

		//Septima linea de fuera
		glPushMatrix();
		glTranslatef(0.0, 3.10, 0.0);
		glScalef(0.7, 0.1, 0.7);
		glCallList(poligono);
		glPopMatrix();

		glEndList();
	}
	else puts("Se ha producido un error creando la display list.");
}

void crearRelieveColumna() {
	relieveColumna = glGenLists(1);
	if (relieveColumna != 0) {

	}
	else puts("Se ha producido un error creando la display list.");
}

void crearTorreBase() {
	torrebase = glGenLists(1);
	if (torrebase != 0)
	{
		glNewList(torrebase, GL_COMPILE);
		glPushMatrix();
		//textura0();
		//glColor3f(1.0, 0.0, 0.0);
		//glTranslatef(0.0, 0.0, 0.0);
		glTranslatef(0.0, -3.15, 0.0);
		glCallList(base);
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(0.0, 1.25, 0.0);
		glCallList(torre);
		glPopMatrix();

		glEndList();
	}
	else puts("Se ha producido un error creando la display list.");
}

void crearRelieve() {
	linea = glGenLists(1);
	if (linea != 0)
	{
		glNewList(linea, GL_COMPILE);
		glColor3f(0.0, 0.0, 1.0);
		glScalef(2.0, 0.1, 2.5);
		glutSolidCube(1);
		glEndList();
	}
	else puts("Se ha producido un error creando la display list.");
}

void crearBase() {
	base = glGenLists(1);
	if (base != 0) {
		glNewList(base, GL_COMPILE);
		crearCubo(3.5,2.5,3.5);
		glEndList();
	}
	else puts("Se ha producido un error creando la display list.");
}

void crearCubo(float x, float y, float z) {
		glPushMatrix();
		glBegin(GL_QUADS);
		glNormal3f(0.0,0.0,1.0);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-(x/2), -(y/2), (z/2));
		glTexCoord2f(0.0f, y); glVertex3f(-(x / 2), (y / 2), (z / 2));
		glTexCoord2f(x, y); glVertex3f((x / 2), (y / 2), (z / 2));
		glTexCoord2f(x, 0.0f); glVertex3f((x / 2), -(y / 2), (z / 2));
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
		glBegin(GL_QUADS);
		glNormal3f(1.0, 0.0, 0.0);
		glTexCoord2f(0.0f, 0.0f); glVertex3f((x / 2), -(y / 2), (z / 2));
		glTexCoord2f(0.0f, y); glVertex3f((x / 2), (y / 2), (z / 2));
		glTexCoord2f(x, y); glVertex3f((x / 2), (y / 2), -(z / 2));
		glTexCoord2f(x, 0.0f); glVertex3f((x / 2), -(y / 2), -(z / 2));
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glBegin(GL_QUADS);
		glNormal3f(0.0, 0.0, -1.0);
		glTexCoord2f(0.0f, 0.0f); glVertex3f((x / 2), -(y / 2), -(z / 2));
		glTexCoord2f(0.0f, y); glVertex3f((x / 2), (y / 2), -(z / 2));
		glTexCoord2f(x, y); glVertex3f(-(x / 2), (y / 2), -(z / 2));
		glTexCoord2f(x, 0.0f); glVertex3f(-(x / 2), -(y / 2), -(z / 2));
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glBegin(GL_QUADS);
		glNormal3f(-1.0, 0.0, 0.0);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-(x / 2), -(y / 2), -(z / 2));
		glTexCoord2f(0.0f, y); glVertex3f(-(x / 2), (y / 2), -(z / 2));
		glTexCoord2f(x, y); glVertex3f(-(x / 2), (y / 2), (z / 2));
		glTexCoord2f(x, 0.0f); glVertex3f(-(x / 2), -(y / 2), (z / 2));
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glBegin(GL_QUADS);
		glNormal3f(0.0, 1.0, 0.0);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-(x / 2), (y / 2), (z / 2));
		glTexCoord2f(0.0f, y); glVertex3f((x / 2), (y / 2), (z / 2));
		glTexCoord2f(x, y); glVertex3f((x / 2), (y / 2), -(z / 2));
		glTexCoord2f(x, 0.0f); glVertex3f(-(x / 2), (y / 2), -(z / 2));
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glBegin(GL_QUADS);
		glNormal3f(0.0, -1.0, 0.0);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-(x / 2), -(y / 2), (z / 2));
		glTexCoord2f(0.0f, y); glVertex3f((x / 2), -(y / 2), (z / 2));
		glTexCoord2f(x, y); glVertex3f((x / 2), -(y / 2), -(z / 2));
		glTexCoord2f(x, 0.0f); glVertex3f(-(x / 2), -(y / 2), -(z / 2));
		glEnd();
		glPopMatrix();
}

void crearCruz() {
	cruz = glGenLists(1);
	if (cruz != 0)
	{
		glNewList(cruz, GL_COMPILE);
		glPushMatrix();
		glTranslated(0.0, 0.0, 0.0);
		glScalef(0.2, 1.5, 0.2);
		glutSolidCube(1);
		glPopMatrix();
		glPushMatrix();
		glTranslated(0.0, 0.2, 0.0);
		glScalef(1.0, 0.2, 0.2);
		glutSolidCube(1);
		glPopMatrix();
		glEndList();
	}
	else puts("Se ha producido un error creando la display list para los arcos.");
}

void crearPoligono(float lados) {
	poligono = glGenLists(1);

	if (poligono != 0)
	{
		glNewList(poligono, GL_COMPILE);
		glBegin(GL_POLYGON);
		glNormal3f(0.0, 1.0, 0.0);
		for (int i = 0; i < lados; ++i) {
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), 0.5, cos(i / lados * 2 * 3.14159)*(0.5));
		}
		glEnd();

		glBegin(GL_POLYGON);
		glNormal3f(0.0, -1.0, 0.0);

		for (int i = 0; i < lados; ++i) {
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), -0.5, cos(i / lados * 2 * 3.14159)*(0.5));
		}
		glEnd();

		for (int i = 0; i < lados; ++i) {
			glBegin(GL_QUADS);
			glNormal3f(sin((2*i+1) / (lados * 2) * 2 * 3.14159), 0.0, cos((2 * i + 1) / (lados * 2) * 2 * 3.14159));
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), -0.5, cos(i / lados * 2 * 3.14159)*(0.5));
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), 0.5, cos(i / lados * 2 * 3.14159)*(0.5));
			if (i < (lados - 1)) {
				glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5), 0.5, cos((i + 1) / lados * 2 * 3.14159)*(0.5));
				glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5), -0.5, cos((i + 1) / lados * 2 * 3.14159)*(0.5));
			}else {
				glVertex3f(sin((0) / lados * 2 * 3.14159)*(0.5), 0.5, cos(0 / lados * 2 * 3.14159)*(0.5));
				glVertex3f(sin((0) / lados * 2 * 3.14159)*(0.5), -0.5, cos(0 / lados * 2 * 3.14159)*(0.5));
			}
			glEnd();
		}

		glEndList();
	}
	else puts("Se ha producido un error creando la display list para los arcos.");
}

void crearCono(float lados) {
	cono = glGenLists(1);

	if (cono != 0)
	{
		glNewList(cono, GL_COMPILE);

		//cara inferior cono
		glBegin(GL_POLYGON);
		/*	glColor3f(0.0, 1.0, 0.0);*/
		glNormal3f(0, -1, 0);
		for (int i = 0; i < lados; ++i) {
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), -0.5, cos(i / lados * 2 * 3.14159)*(0.5));
		}
		glEnd();

		glBegin(GL_POINT);
		glNormal3f(0, 1, 0);
		glVertex3f(0.0, 0.50, 0.0);
		glEnd();

		for (int i = 0; i < lados; ++i) {
			glBegin(GL_TRIANGLES);
			float x = (0.0 - sin((2 * i + 1) / (lados * 2) * 2 * 3.14159))*sin((2 * i + 1) / (lados * 2) * 2 * 3.14159);
			float z = (0.0 - cos((2 * i + 1) / (lados * 2) * 2 * 3.14159))*cos((2 * i + 1) / (lados * 2) * 2 * 3.14159);

			glNormal3f(sin((2 * i + 1) / (lados * 2) * 2 * 3.14159), (-x-z)/0.5, cos((2 * i + 1) / (lados * 2) * 2 * 3.14159));
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), -0.5, cos(i / lados * 2 * 3.14159)*(0.5));
			glVertex3f(0.0, 0.50, 0.0);
			if (i < (lados - 1)) {
				glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5), -0.5, cos((i + 1) / lados * 2 * 3.14159)*(0.5));
			}
			else {
				glVertex3f(sin((0) / lados * 2 * 3.14159)*(0.5), -0.5, cos(0 / lados * 2 * 3.14159)*(0.5));
			}
			glEnd();
		}
		glEndList();
	}
	else puts("Se ha producido un error creando la display list para los arcos.");
}






void crearArco(float lados, float ancho, float prof) {
	arco = glGenLists(1);

	if (arco != 0)
	{
		glNewList(arco, GL_COMPILE);
		//Crea una cara del arco
		for (int i = 0; i < lados / 2; ++i) {
			glBegin(GL_POLYGON);
			glColor3f(1.0, 0.0, 0.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), cos(i / lados * 2 * 3.14159)*(0.5), 0.0);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5), cos((i + 1) / lados * 2 * 3.14159)*(0.5), 0.0);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), cos((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), 0.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5 + ancho), cos(i / lados * 2 * 3.14159)*(0.5 + ancho), 0.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), cos(i / lados * 2 * 3.14159)*(0.5), 0.0);
			glEnd();
		}

		for (int i = 0; i < lados / 2; ++i) {
			glBegin(GL_POLYGON);
			glColor3f(1.0, 1.0, 0.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), cos(i / lados * 2 * 3.14159)*(0.5), prof);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5), cos((i + 1) / lados * 2 * 3.14159)*(0.5), prof);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), cos((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), prof);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5 + ancho), cos(i / lados * 2 * 3.14159)*(0.5 + ancho), prof);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), cos(i / lados * 2 * 3.14159)*(0.5), prof);
			glEnd();
		}

		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(sin(0 / lados * 2 * 3.14159)*(0.5), cos(0 / lados * 2 * 3.14159)*(0.5), 0.0);
		glVertex3f(sin(0 / lados * 2 * 3.14159)*(0.5), cos(0 / lados * 2 * 3.14159)*(0.5), prof);
		glVertex3f(sin(0 / lados * 2 * 3.14159)*(0.5 + ancho), cos(0 / lados * 2 * 3.14159)*(0.5 + ancho), prof);
		glVertex3f(sin(0 / lados * 2 * 3.14159)*(0.5 + ancho), cos(0 / lados * 2 * 3.14159)*(0.5 + ancho), 0.0);
		glEnd();

		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(sin((lados / 2) / lados * 2 * 3.14159)*(0.5), cos((lados / 2) / lados * 2 * 3.14159)*(0.5), 0.0);
		glVertex3f(sin((lados / 2) / lados * 2 * 3.14159)*(0.5), cos((lados / 2) / lados * 2 * 3.14159)*(0.5), prof);
		glVertex3f(sin((lados / 2) / lados * 2 * 3.14159)*(0.5 + ancho), cos((lados / 2) / lados * 2 * 3.14159)*(0.5 + ancho), prof);
		glVertex3f(sin((lados / 2) / lados * 2 * 3.14159)*(0.5 + ancho), cos((lados / 2) / lados * 2 * 3.14159)*(0.5 + ancho), 0.0);
		glEnd();

		for (int i = 0; i < (lados / 2); ++i) {
			glBegin(GL_QUADS);
			glColor3f(0.0, 0.0, 1.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), cos(i / lados * 2 * 3.14159)*(0.5), 0.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5), cos(i / lados * 2 * 3.14159)*(0.5), prof);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5), cos((i + 1) / lados * 2 * 3.14159)*(0.5), prof);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5), cos((i + 1) / lados * 2 * 3.14159)*(0.5), 0.0);
			glEnd();
		}

		for (int i = 0; i < (lados / 2); ++i) {
			glBegin(GL_QUADS);
			glColor3f(0.0, 1.0, 1.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5 + ancho), cos(i / lados * 2 * 3.14159)*(0.5 + ancho), 0.0);
			glVertex3f(sin(i / lados * 2 * 3.14159)*(0.5 + ancho), cos(i / lados * 2 * 3.14159)*(0.5 + ancho), prof);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), cos((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), prof);
			glVertex3f(sin((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), cos((i + 1) / lados * 2 * 3.14159)*(0.5 + ancho), 0.0);
			glEnd();
		}


		glEndList();
	}
	else puts("Se ha producido un error creando la display list para los arcos.");
}

void CreaEscenaIluminacion(void)
{
	escena = glGenLists(1);

	if (escena != 0)
	{
		glNewList(escena, GL_COMPILE);
//		glPushMatrix();

		//textura2();
		//SemiEsfera();
		////glColor3f(0.5, 0.5, 0.25);
		//textura1();
		//ArcosSolid();
		//glColor3f(0.25, 0.5, 0.5);
		//SueloSolid();
		//textura0();
		////glColor3f (0.5f, 0.11f, 0.0f);
		//glScalef(0.5, 0.5, 0.5);

		/*igSolidSphere(20, 20);
		glDisable(GL_TEXTURE_2D);*/
		glTranslatef(0.0, 0.0, 0.0);
		//textura0();
		glCallList(torrebase);

	//	glPopMatrix();
		glEndList();
	}
}
