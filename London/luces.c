

#include "glut.h"

/********************** RUTINA DE INICIO *************************/
/******************************************************************************************/
/* Inicia los parametros de iluminacion de OpenGL                                         */
/* Parametros: Ninguno                                                                    */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/
void IniciaLuces(void)
{
	GLfloat lmodel_ambient[] = { 0.4f, 0.4f, 0.4f, 1.0f };

	/* Par�metros del modelo de iluminaci�n */

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);

	/* Activa la iluminaci�n de la escena */

	glEnable(GL_LIGHTING);
	glEnable(GL_NORMALIZE);

}


/*********************** DEFINICION DE LUCES ****************************/

/******************************************************************************************/
/* Define y activa la luz 0                                                               */
/* Parametros: Ninguno                                                                    */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/
void Luz0(void)
{
	//float luz0_posicion[] = {0.0f, 1.0f, 1.0f, 0.0f};
	float luz0_ambiente[] = { 0.2f, 0.2f, 0.2f, 2.0f };
	//float luz0_difusa[] = {0.5f, 0.5f, 0.5f, 1.0f};
	//float luz0_especular[] = {0.6f, 0.6f, 0.6f, 1.0f};

	/*glLightfv (GL_LIGHT0, GL_POSITION, luz0_posicion);*/
	glLightfv(GL_LIGHT0, GL_AMBIENT, luz0_ambiente);
	/*glLightfv (GL_LIGHT0, GL_DIFFUSE, luz0_difusa);
	glLightfv (GL_LIGHT0, GL_SPECULAR, luz0_especular);*/

	glEnable(GL_LIGHT0);
}

void Luz1(void)
{
	float luz0_posicion[] = { 20.0f, 0.0f, -20.0f, 0.0f };
	glLightfv(GL_LIGHT0, GL_POSITION, luz0_posicion);
	glEnable(GL_LIGHT0);
}
