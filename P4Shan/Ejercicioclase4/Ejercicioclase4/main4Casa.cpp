//Semestre 2019- 1 Visual Studio 2017
//************************************************************//
//************************************************************//
//********* Alumna: Trejo Luna Eva Marion Shanik *************//
//*************	Grupo:6									******//
//*************Practica 4: Ejercicio de casa 			******//
//************************************************************//
#include "Main.h"

int screenW = 0.0;
int screenH = 0.0;
float angleX = 0.0f;//angulos 
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;//traslaciones
float transY = 0.0f;
float transZ = -7.0f;


void InitGL(void)     // Inicializamos parametros
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
{//Creación del Prisma 
	GLfloat vertice[8][3] = {
		{ 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
		{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
		{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
		{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
		{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
		{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
		{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
		{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0, 0.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glColor3f(0.4, 0.2, 0.6);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.8, 0.2, 0.4);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
														//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, transZ);
	//Poner Código Aquí.
	glTranslatef(transX, transY, transZ);//se recorre hacia atras de nuestra vista
	glRotatef(angleX, 1, 0, 0);//Rotación con las flechas para X &Y
	glRotatef(angleY, 0, 1, 0);
	//Creacion de una Llama
	glPushMatrix();//Delimitamos el dibujo del torso

	  glScalef(15, 8, 5);
	  prisma();

	glPopMatrix();

	glPushMatrix();//Cuello
	   glTranslatef(6, 8, 0);//Traslación del pibote
	   glScalef(3, 8, 5);//Tamaño del cuello
	   prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//Cabeza
	   glTranslatef(7.5, 14, 0);//Traslación del pibote
	    glScalef(6, 4, 5);//Tamaño de la cabeza
	    prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//OrejaIzq
	    glTranslatef(5.5, 16,-2);//Traslación del pibote
	    glScalef(2, 3, -2);//Tamaño de la oreja Izq	
	    prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//OrejaDer
	    glTranslatef(5.5, 16, 2);//Traslación del pibote
	    glScalef(2, 3, -2);//Tamaño de la oreja Der
	    prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//Cola
	    glTranslatef(-7.9, 2.3, 0);//Traslación del pibote
	     glScalef(2, 3.4, 5);//Tamaño de la cola
	     prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//PataIzqTrasera
	     glTranslatef(-6.7, -6.5, -1.5);//Traslación del pibote
	     glScalef(1.5, 5, -1.5);//Tamaño de la pata Izq trasera
	     prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//PataIzqDelantera
	     glTranslatef(6.7, -6.5, -1.5);//Traslación del pibote
	     glScalef(1.5, 5, -1.5);//Tamaño de la pata delantera Izq
	     prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//PataDerTrasera
	    glTranslatef(-6.7, -6.5, 1.5);//Traslación del pibote
	    glScalef(1.5, 5, 1.5);//Tamaño de la pata Der trasera
	    prisma();//Se dibuja el prisma
	glPopMatrix();

	glPushMatrix();//PataDerDelantera
	   glTranslatef(6.7, -6.5, 1.5);//Traslación del pibote
	   glScalef(1.5, 5, 1.5);//Tamaño de la pata delantera Der
	   prisma();//Se dibuja el prisma
	glPopMatrix();

	prisma();

	glutSwapBuffers();
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

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.3f;
		break;
	case 's':
	case 'S':
		transZ -= 0.3f;
		break;
	case 'a':
	case 'A':
		transX += 0.3f;
		break;
	case 'd':
	case 'D':
		transX -= 0.3f;
		break;
	case 'q':
	case 'Q':
		transY += 0.3f;
		break;
	case 'e':
	case 'E':
		transY -= 0.3f;
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
	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY -= 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY += 1.0f;
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
	screenW = glutGet(GLUT_SCREEN_WIDTH);
	screenH = glutGet(GLUT_SCREEN_HEIGHT);
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 4"); // Nombre de la Ventana
	printf("Resolution H: %i \n", screenW);
	printf("Resolution V: %i \n", screenH);
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}
