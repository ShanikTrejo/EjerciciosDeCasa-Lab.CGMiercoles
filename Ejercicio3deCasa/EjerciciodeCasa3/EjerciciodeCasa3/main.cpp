//Semestre 2019 - 1
//*************************************************************//
//************************************************************//
//****** Alumno (s): Trejo Luna Eva Marion Shanik************//
//************* Visual Studio 2017			****************//
//*************	Ejercicio de casa:Práctica #3		*******//
//********************************************************//

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;//angulos 
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;//traslaciones
float transY = 0.0f;
float transZ = -5.0f;


void InitGL(GLvoid)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
														//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
														//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {//arreglo de vertices 0-7
		{ 1,0,0 },    //Coordenadas Vértice 0 V0
		{ 1,1,0 },    //Coordenadas Vértice 1 V1
		{ 0,1,0 },    //Coordenadas Vértice 2 V2
		{ 0,0,0 },    //Coordenadas Vértice 3 V3
		{ 0,1,5 },    //Coordenadas Vértice 4 V4
		{ 1,1,5 },    //Coordenadas Vértice 5 V5
		{ 0,0,5 },    //Coordenadas Vértice 6 V6
		{ 1,0, 5 },    //Coordenadas Vértice 7 V7
	};




	glBegin(GL_POLYGON);	//Front poligono 
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);//cara frontal
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);	//Right Derecha
	glColor3f(0.0, 0.0, 1.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glEnd();

	glBegin(GL_POLYGON);	//Back Atrás
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON);  //Left Izq
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom tapa

	glColor3f(0.4, 0.2, 0.6);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top tapa
	glColor3f(0.8, 0.2, 0.4);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[6]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//Poner Código Aquí.
	glTranslatef(transX, transY, transZ);//se recorre hacia atras de nuestra vista
	glRotatef(angleX, 1, 0, 0);//Rotación con las flechas para X &Y
	glRotatef(angleY, 0, 1, 0);
	prisma();
	glTranslatef(2, 0, 0);
	int opcion;
float x, y, z;
 do{
	 printf("\n\tMenu de traslaciones\n");
	 printf("[1]Traslacion de X positivo\n[2]Traslacion de X negativo\n[3]Traslacion de Y positivo\n[4]Traslacion de Y negativo\n[5]Traslacion de Z positivo\n[6]Traslacion de Z negativo\n[7]Salir\n");
	 scanf("%d",&opcion);
	 switch(opcion)
	 {
	 case 1:
		 printf("Ingresa la posicion que deseas en el eje X:\n", &x);
		 scanf("%f", &x);
		 //if (x >= 0)
			 x = (transX += 0.2f);
		// else
			// x = (transX -= 0.2f);
			 return display();
		 break;
	 case 2:
		 printf("Ingresa la posicion que deseas en el eje X:\n", &x);
		 scanf("%f", &x);
		 x = (transX -= 0.2f);
		 return display();
		 break;
	 case 3:
		 printf("Ingresa la posicion que deseas en el eje Y:\n", &y);
		 scanf("%f", &y);
		 //if (y >= 0)
			 transY += 0.2f;
		// else
		// transY -= 0.2f;
			 return display();
		 break;
	 case 4:
		 printf("Ingresa la posicion que deseas en el eje Y:\n", &y);
		 scanf("%f", &y);
		 transY -= 0.2f;
		 return display();
		 break;
	 case 5:
		 printf("Ingresa la posicion que deseas en el eje Z:\n", &z);
		 scanf("%f", &z);
		// if (z >= 0)
			 transZ += 0.2f;
		// else
			// transZ -= 0.2f;
			 return display();
		 break;
	 case 6:
		 printf("Ingresa la posicion que deseas en el eje Z:\n", &z);
		 scanf("%f", &z);
		// if (z >= 0)
			// transZ += 0.2f;
		 //else
			 transZ -= 0.2f;
			 return display();
		 break;
	 case 7:
		 break;
		 break;
	 default: printf("Opcion incorrecta,prueba de nuevo\n");
		 opcion = 7;
	 }
 
	 glutSwapBuffers();
 } while (opcion == 7);

	
	//glFlush();
	// Swap The Buffers
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

	// Tipo de Vista A(izquierda) y D (derecha) para mover 
	//glOrtho(-5,5,-5,5,0.1,20);//0.1 resolucion ,20 volumen de vista	
	//glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);
	//glFrustum (-2,2,-2,2,0.1,50);
	//glFrustum(-0.5, 0.5, -0.5, 0.5, 0.1, 50);
	glFrustum(-0.5, 0.5, -0.5, 0.5, 0.1, 50);//vista en perspectiva
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	
	//casos para trasladar el prisma en los ejes X,Y y Z en sentido positivo y negativo
	switch (key) {
		
	case 'w':
	case 'W':
		transZ += 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 'a':
	case 'A':
		transX += 0.2f;
		printf("Posicion en X: %f\n", transX);
		break;
	case 'd':
	case 'D':
		transX -= 0.2f;
		printf("Posicion en X: %f\n", transX);
		break;
	case 'q':
	case 'Q':
		transY += 0.2f;
		printf("Posicion en Y: %f\n", transY);
		break;
	case 'e':
	case 'E':
		transY -= 0.2f;
		printf("Posicion en Y: %f\n", transY);
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
		//glutFullScreen ( ); // Full Screen Mode
		//break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
		//glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
		//break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
						   //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 3"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamaño
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}