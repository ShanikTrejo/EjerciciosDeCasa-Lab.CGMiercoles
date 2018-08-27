//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Trejo Luna Eva Marion Shanik //
//*************		Visual Studio 2017 				******//
//*************Ejercicio Lab					******//
//************************************************************//
#include "Main.h"
void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
														//glClearDepth(1.0f);	// Configuramos Depth Buffer
														//glEnable(GL_DEPTH_TEST);// Habilitamos Depth Testing
														//glDepthFunc(GL_LEQUAL);// Tipo de Depth Testing a realizar


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

//Poner aqui codigo ha dibujar
/*glBegin(GL_POINTS);//minima representacion=PUNTO
glPointSize(20.0f);														
glVertex3f(0.0f,0.0f,-1.0f);
glEnd();
glFlush();*/

/*glBegin(GL_TRIANGLES);//gl_LINES:Solo acepta si se escriben las lineas por un par de vertices,
gl_LINES_LOOP:acepta diferentes vertices, gl_TRIANGLES:dibuja dentro de los vertices
glPointSize(200.0f);
glVertex3f(0.0f, 0.0f, -1.0f);
glVertex3f(1.0f, 1.0f, 0.0f);
glVertex3f(-2.0f, 0.0f, 0.0f);
/*glVertex3f(0.0f, 0.0f, 0.0f);
glVertex3f(3.0f,3.0f,0.0f);
glVertex3f(5.0f,3.0f,-1.0f);*/
/*	glBegin(GL_QUADS);
glPointSize(200.0f);
glVertex3f(-1.5f, -1.5f, -1.0f);
glVertex3f(1.5f, -1.5f, -1.0f);
glVertex3f(1.5f, 1.5f, -1.0f);
glVertex3f(-1.5f, 1.5f, -1.0f);*/
	//letra C
	//1----------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(0.0f, 0.0f, -1.0f);
	glVertex3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(0.0f, 1.0f, -1.0f);
	glEnd();
	//2--------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(1.0f, 0.0f, -1.0f);
	glVertex3f(2.0f, 0.0f, -1.0f);
	glVertex3f(2.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glEnd();//termina mi dibujo
	//3----------------------------
	
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(2.0f, 0.0f, -1.0f);
	glVertex3f(3.0f, 0.0f, -1.0f);
	glVertex3f(3.0f, 1.0f, -1.0f);
	glVertex3f(2.0f, 1.0f, -1.0f);
	glEnd();
	//4------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(0.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, 2.0f, -1.0f);
	glVertex3f(0.0f, 2.0f, -1.0f);
	glEnd();
	//5----------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(0.0f, 2.0f, -1.0f);
	glVertex3f(1.0f, 2.0f, -1.0f);
	glVertex3f(1.0f, 3.0f, -1.0f);
	glVertex3f(0.0f, 3.0f, -1.0f);
	glEnd();
	//6------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(0.0f, 3.0f, -1.0f);
	glVertex3f(1.0f, 3.0f, -1.0f);
	glVertex3f(1.0f, 4.0f, -1.0f);
	glVertex3f(0.0f, 4.0f, -1.0f);
	glEnd();
	//7--------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(0.0f, 4.0f, -1.0f);
	glVertex3f(1.0f, 4.0f, -1.0f);
	glVertex3f(1.0f, 5.0f, -1.0f);
	glVertex3f(0.0f, 5.0f, -1.0f);
	glEnd();
	//8--------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(1.0f, 4.0f, -1.0f);
	glVertex3f(2.0f, 4.0f, -1.0f);
	glVertex3f(2.0f, 5.0f, -1.0f);
	glVertex3f(1.0f, 5.0f, -1.0f);
	glEnd();
	//9-------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0, 0, 1);//0,0,1=AZUL
	glVertex3f(2.0f, 4.0f, -1.0f);
	glVertex3f(3.0f, 4.0f, -1.0f);
	glVertex3f(3.0f, 5.0f, -1.0f);
	glVertex3f(2.0f, 5.0f, -1.0f);
	glEnd();
	//letra G
	//1----------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(6.0f, 1.0f, -1.0f);
	glVertex3f(7.0f, 1.0f, -1.0f);
	glVertex3f(7.0f, 2.0f, -1.0f);
	glVertex3f(6.0f, 2.0f, -1.0f);
	glEnd();
	//2--------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(6.0f, 0.0f, -1.0f);
	glVertex3f(7.0f, 0.0f, -1.0f);
	glVertex3f(7.0f, 1.0f, -1.0f);
	glVertex3f(6.0f, 1.0f, -1.0f);
	glEnd();//termina mi dibujo
//3----------------------------

	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(5.0f, 0.0f, -1.0f);
	glVertex3f(6.0f, 0.0f, -1.0f);
	glVertex3f(6.0f, 1.0f, -1.0f);
	glVertex3f(5.0f, 1.0f, -1.0f);
	glEnd();
	//4------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(4.0f, 0.0f, -1.0f);
	glVertex3f(5.0f, 0.0f, -1.0f);
	glVertex3f(5.0f, 1.0f, -1.0f);
	glVertex3f(4.0f, 1.0f, -1.0f);
	glEnd();
	//5----------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(4.0f, 1.0f, -1.0f);
	glVertex3f(5.0f, 1.0f, -1.0f);
	glVertex3f(5.0f, 2.0f, -1.0f);
	glVertex3f(4.0f, 2.0f, -1.0f);
	glEnd();
	//6------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(4.0f, 2.0f, -1.0f);
	glVertex3f(5.0f, 2.0f, -1.0f);
	glVertex3f(5.0f, 3.0f, -1.0f);
	glVertex3f(4.0f, 3.0f, -1.0f);
	glEnd();
	//7--------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(4.0f, 3.0f, -1.0f);
	glVertex3f(5.0f, 3.0f, -1.0f);
	glVertex3f(5.0f, 4.0f, -1.0f);
	glVertex3f(4.0f, 4.0f, -1.0f);
	glEnd();
	//8--------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(4.0f, 4.0f, -1.0f);
	glVertex3f(5.0f, 4.0f, -1.0f);
	glVertex3f(5.0f, 5.0f, -1.0f);
	glVertex3f(4.0f, 5.0f, -1.0f);
	glEnd();
	//9-------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(5.0f, 4.0f, -1.0f);
	glVertex3f(6.0f, 4.0f, -1.0f);
	glVertex3f(6.0f, 5.0f, -1.0f);
	glVertex3f(5.0f, 5.0f, -1.0f);
	glEnd();
	//10-------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(1, 0, 1);//1,0,1=ROSA
	glVertex3f(6.0f, 4.0f, -1.0f);
	glVertex3f(7.0f, 4.0f, -1.0f);
	glVertex3f(7.0f, 5.0f, -1.0f);
	glVertex3f(6.0f, 5.0f, -1.0f);
	glEnd();
	//letra E
	//1----------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(2.0f, -5.0f, -1.0f);
	glVertex3f(3.0f, -5.0f, -1.0f);
	glVertex3f(3.0f, -6.0f, -1.0f);
	glVertex3f(2.0f, -6.0f, -1.0f);
	glEnd();
	//2--------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(1.0f, -5.0f, -1.0f);
	glVertex3f(2.0f, -5.0f, -1.0f);
	glVertex3f(2.0f, -6.0f, -1.0f);
	glVertex3f(1.0f, -6.0f, -1.0f);
	glEnd();//termina mi dibujo
	//3----------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(0.0f, -5.0f, -1.0f);
	glVertex3f(1.0f, -5.0f, -1.0f);
	glVertex3f(1.0f, -6.0f, -1.0f);
	glVertex3f(0.0f, -6.0f, -1.0f);
	glEnd();
	//4------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(0.0f, -4.0f, -1.0f);
	glVertex3f(1.0f, -4.0f, -1.0f);
	glVertex3f(1.0f, -5.0f, -1.0f);
	glVertex3f(0.0f, -5.0f, -1.0f);
	glEnd();
	//5----------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(1.0f, -3.0f, -1.0f);
	glVertex3f(2.0f, -3.0f, -1.0f);
	glVertex3f(2.0f, -4.0f, -1.0f);
	glVertex3f(1.0f, -4.0f, -1.0f);
	glEnd();
	//6------------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(0.0f, -3.0f, -1.0f);
	glVertex3f(1.0f, -3.0f, -1.0f);
	glVertex3f(1.0f, -4.0f, -1.0f);
	glVertex3f(0.0f, -4.0f, -1.0f);
	glEnd();
	//7--------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(0.0f, -2.0f, -1.0f);
	glVertex3f(1.0f, -2.0f, -1.0f);
	glVertex3f(1.0f, -3.0f, -1.0f);
	glVertex3f(0.0f, -3.0f, -1.0f);
	glEnd();
	//8--------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(0.0f, -1.0f, -1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glVertex3f(1.0f, -2.0f, -1.0f);
	glVertex3f(0.0f, -2.0f, -1.0f);
	glEnd();
	//9-------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(1.0f, -1.0f, -1.0f);
	glVertex3f(2.0f, -1.0f, -1.0f);
	glVertex3f(2.0f, -2.0f, -1.0f);
	glVertex3f(1.0f, -2.0f, -1.0f);
	glEnd();
	//10-------------------------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.8f, 0.3f, 0.9f);//=LILA
	glVertex3f(2.0f, -1.0f, -1.0f);
	glVertex3f(3.0f, -1.0f, -1.0f);
	glVertex3f(3.0f, -2.0f, -1.0f);
	glVertex3f(2.0f, -2.0f, -1.0f);
	glEnd();
	//letra T--------
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.7f, 0.0f, 0.5f);//=MORADO
	glVertex3f(4.0f, -1.0f, -1.0f);
	glVertex3f(7.0f, -1.0f, -1.0f);
	glVertex3f(7.0f, -2.0f, -1.0f);
	glVertex3f(4.0f, -2.0f, -1.0f);
	glEnd();
	glBegin(GL_QUADS);
	glPointSize(200.0f);
	glColor3f(0.7f, 0.0f, 0.5f);//=MORADO
	glVertex3f(5.0f, -2.0f, -1.0f);
	glVertex3f(6.0f, -2.0f, -1.0f);
	glVertex3f(6.0f, -6.0f, -1.0f);
	glVertex3f(5.0f, -6.0f, -1.0f);

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
	glOrtho(-10, 10, -10, 10, 0.1, 2);

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
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 2"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutMainLoop();          // 

	return 0;
}
