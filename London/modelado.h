
#ifndef MODELADO_H
#define MODELADO_H

#define anchoTextura 256
#define altoTextura  256
#define numTextura      3       

GLubyte textura[numTextura][anchoTextura][altoTextura][3];

GLint arco, poligono, cuerpo, base, torre, torrebase, linea, cono, cruz, escena, cubo, columna, relieveColumna;


void crearTorre();
void crearColumna();
void crearTorreBase();
void crearCuerpo();
void crearRelieve();
void crearBase();
void crearCubo();
void crearCruz();
void crearPoligono(float lados);
void crearCono(float lados);
void crearArco(float lados, float ancho, float prof);
void CreaEscenaIluminacion();

#endif