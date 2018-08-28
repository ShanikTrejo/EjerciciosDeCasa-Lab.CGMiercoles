//Semestre 2019 - 1
//************************************************************//
//************************************************************//
//************** Alumno (s): Trejo Luna Eva Marion Shanik //
//*************		Visual Studio 2017 				******//
//*************Ejercicio casa					******//
//************************************************************//
#include "Main.h"
void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.9f, 0.8f, 0.5f, 0.0f);				// CAFE de fondo
														//glClearDepth(1.0f);	// Configuramos Depth Buffer
														//glEnable(GL_DEPTH_TEST);// Habilitamos Depth Testing
														//glDepthFunc(GL_LEQUAL);// Tipo de Depth Testing a realizar


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

//Poner aqui codigo ha dibujar
//Charmander
	//Contorno gris
	//1------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(0.0f, 15.0f, -1.0f);
	glVertex3f(4.0f, 15.0f, -1.0f);
	glVertex3f(4.0f, 16.0f, -1.0f);
	glVertex3f(0.0f, 16.0f, -1.0f);
	glEnd();
	//2--------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(4.0f, 14.0f, -1.0f);
	glVertex3f(5.0f, 14.0f, -1.0f);
	glVertex3f(5.0f, 15.0f, -1.0f);
	glVertex3f(4.0f, 15.0f, -1.0f);
	glEnd();
	//3----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(5.0f, 13.0f, -1.0f);
	glVertex3f(6.0f, 13.0f, -1.0f);
	glVertex3f(6.0f, 14.0f, -1.0f);
	glVertex3f(5.0f, 14.0f, -1.0f);
	glEnd();
	//4------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(5.0f, 12.0f, -1.0f);
	glVertex3f(6.0f, 12.0f, -1.0f);
	glVertex3f(6.0f, 13.0f, -1.0f);
	glVertex3f(5.0f, 13.0f, -1.0f);
	glEnd();
	//5----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(6.0f, 11.0f, -1.0f);
	glVertex3f(7.0f,11.0f, -1.0f);
	glVertex3f(7.0f, 12.0f, -1.0f);
	glVertex3f(6.0f, 12.0f, -1.0f);
	glEnd();
	//6------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(7.0f, 8.0f, -1.0f);
	glVertex3f(8.0f, 8.0f, -1.0f);
	glVertex3f(8.0f, 11.0f, -1.0f);
	glVertex3f(7.0f,11.0f, -1.0f);
	glEnd();
	//7--------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(6.0f, 7.0f, -1.0f);
	glVertex3f(7.0f, 7.0f, -1.0f);
	glVertex3f(7.0f, 8.0f, -1.0f);
	glVertex3f(6.0f, 8.0f, -1.0f);
	glEnd();
	//8--------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(4.0f, 6.0f, -1.0f);
	glVertex3f(6.0f, 6.0f, -1.0f);
	glVertex3f(6.0f, 7.0f, -1.0f);
	glVertex3f(4.0f, 7.0f, -1.0f);
	glEnd();
	//9-------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(1.0f, 5.0f, -1.0f);
	glVertex3f(4.0f, 5.0f, -1.0f);
	glVertex3f(4.0f, 6.0f, -1.0f);
	glVertex3f(1.0f, 6.0f, -1.0f);
	glEnd();
	//----------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(2.0f, 3.0f, -1.0f);
	glVertex3f(3.0f, 3.0f, -1.0f);
	glVertex3f(3.0f, 5.0f, -1.0f);
	glVertex3f(2.0f, 5.0f, -1.0f);
	glEnd();
	//2--------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(3.0f, 2.0f, -1.0f);
	glVertex3f(4.0f, 2.0f, -1.0f);
	glVertex3f(4.0f, 3.0f, -1.0f);
	glVertex3f(3.0f, 3.0f, -1.0f);
	glEnd();
//3----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(1.0f, 2.0f, -1.0f);
	glVertex3f(2.0f, 2.0f, -1.0f);
	glVertex3f(2.0f, 3.0f, -1.0f);
	glVertex3f(1.0f, 3.0f, -1.0f);
	glEnd();
	//4------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(0.0f, 1.0f, -1.0f);
	glVertex3f(3.0f, 1.0f, -1.0f);
	glVertex3f(3.0f, 2.0f, -1.0f);
	glVertex3f(0.0f, 2.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-3.0f, 0.0f, -1.0f);
	glVertex3f(0.0f, 0.0f, -1.0f);
	glVertex3f(0.0f, 1.0f, -1.0f);
	glVertex3f(-3.0f, 1.0f, -1.0f);
	glEnd();
	//6------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-2.0f, 0.0f, -1.0f);
	glEnd();
	//7--------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-6.0f, -2.0f, -1.0f);
	glVertex3f(-2.0f, -2.0f, -1.0f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glVertex3f(-6.0f, -1.0f, -1.0f);
	glEnd();
	//8--------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-6.0f, -2.0f, -1.0f);
	glVertex3f(-5.0f, -2.0f, -1.0f);
	glVertex3f(-5.0f, 2.0f, -1.0f);
	glVertex3f(-6.0f, 2.0f, -1.0f);
	glEnd();
	//9-------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-7.0f, 1.0f, -1.0f);
	glVertex3f(-6.0f, 1.0f, -1.0f);
	glVertex3f(-6.0f, 6.0f, -1.0f);
	glVertex3f(-7.0f, 6.0f, -1.0f);
	glEnd();
	//10-------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-8.0f, 2.0f, -1.0f);
	glVertex3f(-7.0f, 2.0f, -1.0f);
	glVertex3f(-7.0f, 3.0f, -1.0f);
	glVertex3f(-8.0f, 3.0f, -1.0f);
	glEnd();
	//1----------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-9.0f, 3.0f, -1.0f);
	glVertex3f(-8.0f, 3.0f, -1.0f);
	glVertex3f(-8.0f, 4.0f, -1.0f);
	glVertex3f(-9.0f, 4.0f, -1.0f);
	glEnd();
	//2--------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-10.0f, 4.0f, -1.0f);
	glVertex3f(-9.0f, 4.0f, -1.0f);
	glVertex3f(-9.0f, 6.0f, -1.0f);
	glVertex3f(-10.0f,6.0f, -1.0f);
	glEnd();
	//3----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-11.0f, 6.0f, -1.0f);
	glVertex3f(-10.0f, 6.0f, -1.0f);
	glVertex3f(-10.0f, 9.0f, -1.0f);
	glVertex3f(-11.0f, 9.0f, -1.0f);
	glEnd();
	//4------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-12.0f, 8.0f, -1.0f);
	glVertex3f(-11.0f, 8.0f, -1.0f);
	glVertex3f(-11.0f, 9.0f, -1.0f);
	glVertex3f(-12.0f, 9.0f, -1.0f);
	glEnd();
	//5----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-13.0f, 9.0f, -1.0f);
	glVertex3f(-12.0f, 9.0f, -1.0f);
	glVertex3f(-12.0f, 12.0f, -1.0f);
	glVertex3f(-13.0f, 12.0f, -1.0f);
	glEnd();
	//6------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-12.0f, 12.0f, -1.0f);
	glVertex3f(-11.0f, 12.0f, -1.0f);
	glVertex3f(-11.0f, 14.0f, -1.0f);
	glVertex3f(-12.0f, 14.0f, -1.0f);
	glEnd();
	//7--------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-11.0f, 14.0f, -1.0f);
	glVertex3f(-10.0f, 14.0f, -1.0f);
	glVertex3f(-10.0f, 15.0f, -1.0f);
	glVertex3f(-11.0f, 15.0f, -1.0f);
	glEnd();
	//8--------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-10.0f, 15.0f, -1.0f);
	glVertex3f(-9.0f, 15.0f, -1.0f);
	glVertex3f(-9.0f, 16.0f, -1.0f);
	glVertex3f(-10.0f, 16.0f, -1.0f);
	glEnd();
	//9-------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-9.0f, 12.0f, -1.0f);
	glVertex3f(-8.0f, 12.0f, -1.0f);
	glVertex3f(-8.0f, 15.0f, -1.0f);
	glVertex3f(-9.0f, 15.0f, -1.0f);
	glEnd();
	//10-------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-8.0f, 9.0f, -1.0f);
	glVertex3f(-7.0f, 9.0f, -1.0f);
	glVertex3f(-7.0f, 12.0f, -1.0f);
	glVertex3f(-8.0f, 12.0f, -1.0f);
	glEnd();
	//--------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-9.0f, 7.0f, -1.0f);
	glVertex3f(-8.0f, 7.0f, -1.0f);
	glVertex3f(-8.0f, 9.0f, -1.0f);
	glVertex3f(-9.0f, 9.0f, -1.0f);
	glEnd();
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-8.0f, 6.0f, -1.0f);
	glVertex3f(-7.0f, 6.0f, -1.0f);
	glVertex3f(-7.0f, 7.0f, -1.0f);
	glVertex3f(-8.0f, 7.0f, -1.0f);
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-6.0f, 5.0f, -1.0f);
	glVertex3f(-5.0f, 5.0f, -1.0f);
	glVertex3f(-5.0f, 7.0f, -1.0f);
	glVertex3f(-6.0f, 7.0f, -1.0f);
	glEnd();
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-5.0f, 7.0f, -1.0f);
	glVertex3f(-4.0f, 7.0f, -1.0f);
	glVertex3f(-4.0f, 8.0f, -1.0f);
	glVertex3f(-5.0f, 8.0f, -1.0f);
	glEnd();
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-4.0f, 8.0f, -1.0f);
	glVertex3f(-3.0f, 8.0f, -1.0f);
	glVertex3f(-3.0f, 10.0f, -1.0f);
	glVertex3f(-4.0f, 10.0f, -1.0f);
	glEnd();
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-3.0f, 10.0f, -1.0f);
	glVertex3f(-2.0f, 10.0f, -1.0f);
	glVertex3f(-2.0f, 12.0f, -1.0f);
	glVertex3f(-3.0f, 12.0f, -1.0f);
	glEnd();
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-2.0f, 12.0f, -1.0f);
	glVertex3f(-1.0f, 12.0f, -1.0f);
	glVertex3f(-1.0f, 14.0f, -1.0f);
	glVertex3f(-2.0f, 14.0f, -1.0f);
	glEnd();
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-1.0f, 14.0f, -1.0f);
	glVertex3f(0.0f, 14.0f, -1.0f);
	glVertex3f(0.0f, 15.0f, -1.0f);
	glVertex3f(-1.0f, 15.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(-5.0f, 0.0f, -1.0f);
	glVertex3f(-4.0f, 0.0f, -1.0f);
	glVertex3f(-4.0f, 1.0f, -1.0f);
	glVertex3f(-5.0f, 1.0f, -1.0f);
	glEnd();
	//BLANCO----------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.9f, 1.0f);
	glVertex3f(-5.0f, -1.0f, -1.0f);
	glVertex3f(-4.0f, -1.0f, -1.0f);
	glVertex3f(-4.0f, 0.0f, -1.0f);
	glVertex3f(-5.0f, 0.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.9f, 1.0f);
	glVertex3f(-3.0f, -1.0f, -1.0f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glVertex3f(-2.0f, 0.0f, -1.0f);
	glVertex3f(-3.0f, 0.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.9f, 1.0f);
	glVertex3f(2.0f, 2.0f, -1.0f);
	glVertex3f(3.0f, 2.0f, -1.0f);
	glVertex3f(3.0f, 3.0f, -1.0f);
	glVertex3f(2.0f, 3.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.9f, 1.0f);
	glVertex3f(2.0f, 10.0f, -1.0f);
	glVertex3f(3.0f, 10.0f, -1.0f);
	glVertex3f(3.0f, 11.0f, -1.0f);
	glVertex3f(2.0f, 11.0f, -1.0f);
	glEnd();
	//NEGRO--------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 3.0f, -1.0f);
	glVertex3f(-2.0f, 3.0f, -1.0f);
	glVertex3f(-2.0f, 4.0f, -1.0f);
	glVertex3f(-3.0f, 4.0f, -1.0f);
	glEnd();
	//-------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, 3.0f, -1.0f);
	glVertex3f(-1.0f, 3.0f, -1.0f);
	glVertex3f(-1.0f, 4.0f, -1.0f);
	glVertex3f(-2.0f, 4.0f, -1.0f);
	glEnd();
	//---------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, 4.0f, -1.0f);
	glVertex3f(0.0f, 4.0f, -1.0f);
	glVertex3f(0.0f, 5.0f, -1.0f);
	glVertex3f(-1.0f, 5.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, 5.0f, -1.0f);
	glVertex3f(-1.0f, 5.0f, -1.0f);
	glVertex3f(-1.0f, 6.0f, -1.0f);
	glVertex3f(-2.0f, 6.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 8.0f, -1.0f);
	glVertex3f(3.0f, 8.0f, -1.0f);
	glVertex3f(3.0f, 10.0f, -1.0f);
	glVertex3f(1.0f, 10.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 10.0f, -1.0f);
	glVertex3f(2.0f, 10.0f, -1.0f);
	glVertex3f(2.0f, 11.0f, -1.0f);
	glVertex3f(1.0f, 11.0f, -1.0f);
	glEnd();
	//ROJO-------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-10.0f, 14.0f, -1.0f);
	glVertex3f(-9.0f, 14.0f, -1.0f);
	glVertex3f(-9.0f, 15.0f, -1.0f);
	glVertex3f(-10.0f, 15.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-11.0f, 12.0f, -1.0f);
	glVertex3f(-9.0f, 12.0f, -1.0f);
	glVertex3f(-9.0f, 14.0f, -1.0f);
	glVertex3f(-11.0f, 14.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-12.0f, 11.0f, -1.0f);
	glVertex3f(-11.0f, 11.0f, -1.0f);
	glVertex3f(-11.0f, 12.0f, -1.0f);
	glVertex3f(-12.0f, 12.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-11.0f, 11.0f, -1.0f);
	glVertex3f(-10.0f, 11.0f, -1.0f);
	glVertex3f(-10.0f, 12.0f, -1.0f);
	glVertex3f(-11.0f, 12.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-10.0f, 10.0f, -1.0f);
	glVertex3f(-8.0f, 10.0f, -1.0f);
	glVertex3f(-8.0f, 12.0f, -1.0f);
	glVertex3f(-10.0f, 12.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-9.0f, 9.0f, -1.0f);
	glVertex3f(-8.0f, 9.0f, -1.0f);
	glVertex3f(-8.0f, 10.0f, -1.0f);
	glVertex3f(-9.0f, 10.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-12.0f, 10.0f, -1.0f);
	glVertex3f(-11.0f, 10.0f, -1.0f);
	glVertex3f(-11.0f, 11.0f, -1.0f);
	glVertex3f(-12.0f, 11.0f, -1.0f);
	glEnd();
	//------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex3f(-12.0f, 9.0f, -1.0f);
	glVertex3f(-11.0f, 9.0f, -1.0f);
	glVertex3f(-11.0f, 10.0f, -1.0f);
	glVertex3f(-12.0f, 10.0f, -1.0f);
	glEnd();
	//AMARILLO----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(-11.0f, 10.0f, -1.0f);
	glVertex3f(-10.0f, 10.0f, -1.0f);
	glVertex3f(-10.0f, 11.0f, -1.0f);
	glVertex3f(-11.0f, 11.0f, -1.0f);
	glEnd();
	//-------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(-11.0f, 9.0f, -1.0f);
	glVertex3f(-10.0f, 9.0f, -1.0f);
	glVertex3f(-10.0f, 10.0f, -1.0f);
	glVertex3f(-11.0f, 10.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(-10.0f, 9.0f, -1.0f);
	glVertex3f(-9.0f, 9.0f, -1.0f);
	glVertex3f(-9.0f, 10.0f, -1.0f);
	glVertex3f(-10.0f, 10.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(-10.0f, 8.0f, -1.0f);
	glVertex3f(-9.0f, 8.0f, -1.0f);
	glVertex3f(-9.0f, 9.0f, -1.0f);
	glVertex3f(-10.0f, 9.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(-2.0f, 1.0f, -1.0f);
	glVertex3f(0.0f, 1.0f, -1.0f);
	glVertex3f(0.0f, 3.0f, -1.0f);
	glVertex3f(-2.0f, 3.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(-1.0f, 3.0f, -1.0f);
	glVertex3f(0.0f, 3.0f, -1.0f);
	glVertex3f(0.0f, 4.0f, -1.0f);
	glVertex3f(-1.0f, 4.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(0.0f, 3.0f, -1.0f);
	glVertex3f(2.0f, 3.0f, -1.0f);
	glVertex3f(2.0f, 5.0f, -1.0f);
	glVertex3f(0.0f, 5.0f, -1.0f);
	glEnd();
	//---------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.8f, 1.0f, 0.0f);
	glVertex3f(0.0f, 2.0f, -1.0f);
	glVertex3f(1.0f, 2.0f, -1.0f);
	glVertex3f(1.0f, 3.0f, -1.0f);
	glVertex3f(0.0f, 3.0f, -1.0f);
	glEnd();
	//NARANJA--------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-10.0f, 7.0f, -1.0f);
	glVertex3f(-9.0f, 7.0f, -1.0f);
	glVertex3f(-9.0f, 8.0f, -1.0f);
	glVertex3f(-10.0f, 8.0f, -1.0f);
	glEnd();
	//-------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-10.0f, 6.0f, -1.0f);
	glVertex3f(-9.0f, 6.0f, -1.0f);
	glVertex3f(-9.0f, 7.0f, -1.0f);
	glVertex3f(-10.0f, 7.0f, -1.0f);
	glEnd();
	//---------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-9.0f, 6.0f, -1.0f);
	glVertex3f(-8.0f, 6.0f, -1.0f);
	glVertex3f(-8.0f, 7.0f, -1.0f);
	glVertex3f(-9.0f, 7.0f, -1.0f);
	glEnd();
	//---------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-9.0f, 4.0f, -1.0f);
	glVertex3f(-7.0f, 4.0f, -1.0f);
	glVertex3f(-7.0f, 6.0f, -1.0f);
	glVertex3f(-9.0f, 6.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-8.0f, 3.0f, -1.0f);
	glVertex3f(-7.0f, 3.0f, -1.0f);
	glVertex3f(-7.0f, 4.0f, -1.0f);
	glVertex3f(-8.0f, 4.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-6.0f, 2.0f, -1.0f);
	glVertex3f(-3.0f, 2.0f, -1.0f);
	glVertex3f(-3.0f, 5.0f, -1.0f);
	glVertex3f(-6.0f, 5.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-5.0f, 1.0f, -1.0f);
	glVertex3f(-4.0f, 1.0f, -1.0f);
	glVertex3f(-4.0f, 2.0f, -1.0f);
	glVertex3f(-5.0f, 2.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-4.0f, 1.0f, -1.0f);
	glVertex3f(-3.0f, 1.0f, -1.0f);
	glVertex3f(-3.0f, 2.0f, -1.0f);
	glVertex3f(-4.0f, 2.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-4.0f, 0.0f, -1.0f);
	glVertex3f(-3.0f, 0.0f, -1.0f);
	glVertex3f(-3.0f, 1.0f, -1.0f);
	glVertex3f(-4.0f, 1.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-4.0f, -1.0f, -1.0f);
	glVertex3f(-3.0f, -1.0f, -1.0f);
	glVertex3f(-3.0f, 0.0f, -1.0f);
	glVertex3f(-4.0f, 0.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-3.0f, 1.0f, -1.0f);
	glVertex3f(-2.0f, 1.0f, -1.0f);
	glVertex3f(-2.0f, 2.0f, -1.0f);
	glVertex3f(-3.0f, 2.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-3.0f, 2.0f, -1.0f);
	glVertex3f(-2.0f, 2.0f, -1.0f);
	glVertex3f(-2.0f, 3.0f, -1.0f);
	glVertex3f(-3.0f, 3.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-5.0f, 5.0f, -1.0f);
	glVertex3f(-3.0f, 5.0f, -1.0f);
	glVertex3f(-3.0f, 7.0f, -1.0f);
	glVertex3f(-5.0f, 7.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-3.0f, 4.0f, -1.0f);
	glVertex3f(-2.0f, 4.0f, -1.0f);
	glVertex3f(-2.0f, 5.0f, -1.0f);
	glVertex3f(-3.0f, 5.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-2.0f, 4.0f, -1.0f);
	glVertex3f(-1.0f, 4.0f, -1.0f);
	glVertex3f(-1.0f, 5.0f, -1.0f);
	glVertex3f(-2.0f, 5.0f, -1.0f);
	glEnd();
	//---------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-3.0f, 5.0f, -1.0f);
	glVertex3f(-2.0f, 5.0f, -1.0f);
	glVertex3f(-2.0f, 6.0f, -1.0f);
	glVertex3f(-3.0f, 6.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-1.0f, 5.0f, -1.0f);
	glVertex3f(0.0f, 5.0f, -1.0f);
	glVertex3f(0.0f, 6.0f, -1.0f);
	glVertex3f(-1.0f, 6.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(0.0f, 5.0f, -1.0f);
	glVertex3f(1.0f, 5.0f, -1.0f);
	glVertex3f(1.0f, 6.0f, -1.0f);
	glVertex3f(0.0f, 6.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-4.0f, 7.0f, -1.0f);
	glVertex3f(-3.0f, 7.0f, -1.0f);
	glVertex3f(-3.0f, 8.0f, -1.0f);
	glVertex3f(-4.0f, 8.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-3.0f, 6.0f, -1.0f);
	glVertex3f(0.0f, 6.0f, -1.0f);
	glVertex3f(0.0f, 9.0f, -1.0f);
	glVertex3f(-3.0f, 9.0f, -1.0f);
	glEnd();
	//-----------------------------21
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(0.0f, 6.0f, -1.0f);
	glVertex3f(2.0f, 6.0f, -1.0f);
	glVertex3f(2.0f, 8.0f, -1.0f);
	glVertex3f(0.0f, 8.0f, -1.0f);
	glEnd();
	//----------------------------22
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(2.0f, 6.0f, -1.0f);
	glVertex3f(4.0f, 6.0f, -1.0f);
	glVertex3f(4.0f, 8.0f, -1.0f);
	glVertex3f(2.0f, 8.0f, -1.0f);
	glEnd();
	//----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(4.0f, 7.0f, -1.0f);
	glVertex3f(6.0f, 7.0f, -1.0f);
	glVertex3f(6.0f, 8.0f, -1.0f);
	glVertex3f(4.0f, 8.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-3.0f, 9.0f, -1.0f);
	glVertex3f(-2.0f, 9.0f, -1.0f);
	glVertex3f(-2.0f, 10.0f, -1.0f);
	glVertex3f(-3.0f, 10.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-2.0f, 9.0f, -1.0f);
	glVertex3f(1.0f, 9.0f, -1.0f);
	glVertex3f(1.0f, 12.0f, -1.0f);
	glVertex3f(-2.0f, 12.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(0.0f, 8.0f, -1.0f);
	glVertex3f(1.0f, 8.0f, -1.0f);
	glVertex3f(1.0f, 9.0f, -1.0f);
	glVertex3f(0.0f, 9.0f, -1.0f);
	glEnd();
	//----------------------------28
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(3.0f, 8.0f, -1.0f);
	glVertex3f(6.0f, 8.0f, -1.0f);
	glVertex3f(6.0f, 11.0f, -1.0f);
	glVertex3f(3.0f, 11.0f, -1.0f);
	glEnd();
	//-----------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(6.0f, 8.0f, -1.0f);
	glVertex3f(7.0f, 8.0f, -1.0f);
	glVertex3f(7.0f, 11.0f, -1.0f);
	glVertex3f(6.0f, 11.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(5.0f, 11.0f, -1.0f);
	glVertex3f(6.0f, 11.0f, -1.0f);
	glVertex3f(6.0f, 12.0f, -1.0f);
	glVertex3f(5.0f, 12.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(3.0f, 11.0f, -1.0f);
	glVertex3f(5.0f, 11.0f, -1.0f);
	glVertex3f(5.0f, 13.0f, -1.0f);
	glVertex3f(3.0f, 13.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(3.0f, 13.0f, -1.0f);
	glVertex3f(5.0f, 13.0f, -1.0f);
	glVertex3f(5.0f, 14.0f, -1.0f);
	glVertex3f(3.0f, 14.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(3.0f, 14.0f, -1.0f);
	glVertex3f(4.0f, 14.0f, -1.0f);
	glVertex3f(4.0f, 15.0f, -1.0f);
	glVertex3f(3.0f, 15.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(0.0f, 12.0f, -1.0f);
	glVertex3f(3.0f, 12.0f, -1.0f);
	glVertex3f(3.0f, 15.0f, -1.0f);
	glVertex3f(0.0f, 15.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-1.0f, 12.0f, -1.0f);
	glVertex3f(0.0f, 12.0f, -1.0f);
	glVertex3f(0.0f, 14.0f, -1.0f);
	glVertex3f(-1.0f, 14.0f, -1.0f);
	glEnd();
	//------------------------------
	glBegin(GL_QUADS);
	glPointSize(20.0f);
	glColor3f(0.9f, 0.5f, 0.0f);
	glVertex3f(1.0f, 11.0f, -1.0f);
	glVertex3f(3.0f, 11.0f, -1.0f);
	glVertex3f(3.0f, 12.0f, -1.0f);
	glVertex3f(1.0f, 12.0f, -1.0f);
	glEnd();

	glFlush();
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-25, 25, -25, 25, .25, 2);//-10,10,-10,10,0.1

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(500,500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("CHARMANDER"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutMainLoop();          // 

	return 0;
}
