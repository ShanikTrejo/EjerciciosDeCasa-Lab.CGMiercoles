//Semestre 2019-1
//************************************************************//
//************************************************************//
//******* Alumno (s):Trejo Luna Eva Marion Shanik ************//
//*************Visual Studio 2017 ****************************//
//*******************Ejercicio de casa: Atomo ****************//
//******************Práctica #6*******************************//
#include "Main.h"
// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;


//Variables used to create movement
//variables a utilizar Un nucleo, 7 electrones

float nucleo, electron1, electron2, electron3, electron4,electron5,electron6, electron7 = 0.0;
float camaraZ = 0.0;
float camaraX = 0.0;
//Nucleo del atomo
GLfloat NucleoDiffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f }; // Diffuse Light Values
GLfloat NucleoSpecular[] = { 1.0, 1.0, 1.0, 1.0 }; // Specular Light Values
GLfloat NucleoPosition[] = { 0.0f, 0.0f, 0.0f, 1.0f }; // Light Position
GLfloat ElectronDiffuse[] = { 0.2f, 0.2f, 1.0f, 1.0f }; // Electron
GLfloat ElectronSpecular[] = { 0.8, 0.8, 0.8, 1.0 };
GLfloat ElectronShininess[] = { 50.0 };

GLfloat ElectronsDiffuse[] = { 0.8f, 0.4f, 0.1f, 1.0f }; // Electron
GLfloat ElectronsSpecular[] = { 1.0, 0.5, 0.0, 1.0 };
GLfloat ElectronsShininess[] = { 50.0 };
void InitGL(GLvoid)//Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Negro de fondo

	glClearDepth(1.0f); // Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST); // Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL); // Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void display(void)//Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX, 0.0, -5.0 + camaraZ); //camara
	glPushMatrix();
	glRotatef(nucleo, 0.0, 1.0, 0.0);//El Nucleo gira sobre su eje y queda fuera para que los para que los electrones giren alrededor de él
	glPushMatrix();//Nucleo
	glColor3f(0.5, 0.1, 0.0); //Nucleo guinda
	glutSolidSphere(1.5, 12, 12);//Draw Nucleo (radio,H,V); horizontal, vertical mientras mas vertices mas suave es la imagen:Esfera
	glPopMatrix();
	//Todos los electrones rotan en diferentes direcciones alrededor del nucleo 
		glPushMatrix();//Electron1
	        glRotatef(nucleo, 0, 1, 0);//Rotacion alrededor del nucleo
			glTranslatef(2.9, 0, 0);//Traslación del pivote
			glRotatef(electron1, 0, 0, 1);//Rotacion del primer electron
			glColor3f(0.4, 1, 1);//Color Verde aqua
			glutSolidSphere(0.4, 8, 8);//Radio del electron
	    glPopMatrix();

		glPushMatrix();//Electron2
		    glRotatef(nucleo, 1, -1, 0);//Rotacion alrededor del nucleo
		    glTranslatef(4.3, 0, 0);//Traslación del pivote
		    glRotatef(electron2, 0, 0, 1);//Rotacion del segundo electron
		    glColor3f(0.0, 0.9, 0.5);//Color Verde
		    glutSolidSphere(0.4, 8, 8);//radio del electron
		glPopMatrix();
		glPushMatrix();//3er.Electron
		    glRotatef(nucleo, 1, 0, 1);//Rotacion alrededor del nucleo
		    glTranslatef(5.7, 0, 0);//Traslación del pivote
		    glRotatef(electron3, 0, 0, 1);//Rotacion del 3er.electron
		    glColor3f(0.3, 0.1, 0.8);//Color Azul
		    glutSolidSphere(0.4, 8, 8);//Radio del electron
		glPopMatrix();

		glPushMatrix();//4to.Electron
		    glRotatef(nucleo, 0, 1, -1);//Rotacion alrededor del nucleo
		    glTranslatef(7.3, 0, 0);//Traslación del pivote
		    glRotatef(electron4, 0, 0, 1);//Rotacion del planeta Marte
		    glColor3f(0.0, 0.8, 0.8);//Color Turqueza
		    glutSolidSphere(0.4, 8, 8);//Radio del electron
		glPopMatrix();

		glPushMatrix();//5to.Electron
		   glRotatef(nucleo, -1, 0, -1);//Rotacion alrededor del nucleo 
		   glTranslatef(8.7, 0, 0);//Traslación del pivote
		   glRotatef(electron5, 0, 0, 1);//Rotacion del 5to. electron
		   glColor3f(1.0, 0.0, 0.0);//Color Rojo
		   glutSolidSphere(0.4, 8, 8);//Radio del electron
		glPopMatrix();

		glPushMatrix();//6to.Electron
		    glRotatef(nucleo, -1, 0, 1);//Rotacion alrededor del nucleo
		    glTranslatef(10.1, 0, 0);//Traslación del pivote
		    glRotatef(electron6, 0, 0, 1);//Rotacion del 6to.electron
		    glColor3f(1.0, 0.6, 0.6);//Color Rosa
		    glutSolidSphere(0.4, 8, 8);//Radio del electron
		glPopMatrix();
		
		glPushMatrix();//7mo.Electron
		    glRotatef(nucleo, 1, 1, 1);//Rotacion alrededor del sol
		    glTranslatef(11, 0, 0);//Traslación del pivote
		    glRotatef(electron7, 0, 0, 1);//Rotacion del 7mo. electron
		    glColor3f(0.9, 7, 1);//Color Lila
		    glutSolidSphere(0.4, 8, 8);//Radio del electron
		glPopMatrix();

	
	glutSwapBuffers();

}

void animacion()//Permite el efecto de girar
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if (dwElapsedTime >= 30)//tiempo final
	{
		nucleo = nucleo - (5 % 10) % 360;//%= modulo al llegar a los 360° se reinicia la variable
	//Velocidad de rotacion de los electrones 
	//se divide entre 100 para bajar la velocidad
		electron1= electron1 - (10 % 100) % 360;
		electron2 = electron2 - (14 % 100) % 360;
		electron3 = electron3 - (18 % 100) % 360;
		electron4 = electron4 - (22 % 100) % 360;
		electron5 = electron5 - (24 % 100) % 360;
		electron6 = electron6 - (28 % 100) % 360;
		electron7 = electron7 - (32 % 100) % 360;
		
		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();//Regreso a la parte donde se dibuja
}

void reshape(int width, int height)//Creamos funcion Reshape
{
	if (height == 0) // Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION); // Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW); // Seleccionamos Modelview Matrix
								//glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y)//Create Keyboard Function
{
	switch (key) {
		//Movimientos de camara
	case 'w':
	case 'W':
		camaraZ += 0.5f;
		break;
	case 's':
	case 'S':
		camaraZ -= 0.5f;
		break;
	case 'a':
	case 'A':
		camaraX -= 0.5f;
		break;
	case 'd':
	case 'D':
		camaraX += 0.5f;
		break;

	case 'i': //Movimientos de Luz
	case 'I':
		break;
	case 'k':
	case 'K':
		break;
		//Activamos/desactivamos luz
	case 'l':
	case 'L':
		break;
		//Cuando Esc es presionado...
	case 27:
		//Salimos del programa
		exit(0);
		break;
		// Cualquier otra
	default:
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)// Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP://Presionamos tecla ARRIBA...
		break;
	case GLUT_KEY_DOWN://Presionamos tecla ABAJO...
		break;
	case GLUT_KEY_LEFT://Presionams tecla IZQUIERDA
		break;
	case GLUT_KEY_RIGHT://Presionamos tecla DERECHA
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)// Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500); // Tamaño de la Ventana
	glutInitWindowPosition(20, 60); //Posicion de la Ventana
	glutCreateWindow("Practica 6:Atomo de Rutherford By: Shanik"); // Nombre de la Ventana
	InitGL(); // Parametros iniciales de la aplicacion
	glutDisplayFunc(display);//Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape); //Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard); //Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys); //Otras
	glutIdleFunc(animacion);//Nos aseguramos que se actualice la variable 
	glutMainLoop();// 

	return 0;
}
