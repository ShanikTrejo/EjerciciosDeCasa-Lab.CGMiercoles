//Semestre 2019-1
//************************************************************//
//************************************************************//
//******* Alumno (s):Trejo Luna Eva Marion Shanik ************//
//*************Visual Studio 2017 ****************************//
//*************Ejercicio de casa: Sistema Solar *************//
//******************Práctica #7*******************************//
#include "Main.h"


// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;


//Variables used to create movement

float sol, mercurio, venus, tierra, marte, jupiter, saturno, urano, luna1, luna2, luna3, anillo1, anillo2 = 0.0;//variables a utilizar


float camaraZ = 0.0;
float camaraX = 0.0;
GLfloat LuzAmbientalSol[] = { 1.0f, 1.0f, 1.0f, 1.0f }; // Diffuse Light Values
GLfloat LuzDifusaSol[] = { 1.0, 1.0, 1.0, 1.0 }; // Specular Light Values
GLfloat LuzEspecularSol[] = { 0.0f, 0.0f, 0.0f, 1.0f }; // Light Position
GLfloat LuzPosicionSol[] = { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position(X,Y,Z, )

GLfloat LuzAmbientalMercurio[] = { 0.25f, 0.25f, 0.25f, 1.0f };
GLfloat LuzDifusaMercurio[] = { 0.4f, 0.4f, 0.4f, 1.0f }; // Mercurio =Cromo
GLfloat LuzEspecularMercurio[] = { 0.774597, 0.774597, 0.774597, 1.0 };
GLfloat MercurioShininess[] = { 0.6 };

GLfloat LuzAmbientalVenus[] = { 0.329412f, 0.223529f, 0.027451f, 1.0f };
GLfloat LuzDifusaVenus[] = { 0.780392f, 0.568627f, 0.113725f, 1.0f }; // Venus = brass 
GLfloat LuzEspecularVenus[] = { 0.992157, 0.941176, 0.807843, 1.0 };
GLfloat VenusShininess[] = { 0.21794872 };


GLfloat LuzAmbientalTierra[] = { 0.0f, 0.05f, 0.05f, 1.0f };
GLfloat LuzDifusaTierra[] = { 0.4f, 0.5f, 0.5f, 1.0f }; // Tierra =cyan rubber
GLfloat LuzEspecularTierra[] = { 0.04, 0.7, 0.7, 1.0 };
GLfloat TierraShininess[] = { 0.078125 };

GLfloat LuzAmbientalLuna1[] = { 1.0f, 1.0f, 1.0f, 1.0f };
GLfloat LuzDifusaLuna1[] = { 0.8f, 0.8f, 0.8f, 1.0f }; // Luna1
GLfloat LuzEspecularLuna1[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat Luna1Shininess[] = { 50.0 };

GLfloat LuzAmbientalMarte[] = { 0.1745f, 0.1745f, 0.1745f, 1.0f };
GLfloat LuzDifusaMarte[] = { 0.61424f, 0.04136f, 0.04136f, 1.0f }; // Marte =ruby
GLfloat LuzEspecularMarte[] = { 0.727811, 0.626959, 0.626959, 1.0 };
GLfloat MarteShininess[] = { 0.6 };

GLfloat LuzAmbientalLuna2[] = { 0.25f, 0.20725f, 0.20725f, 1.0f };
GLfloat LuzDifusaLuna2[] = { 1.0f, 0.829f, 0.829f, 1.0f }; // Luna2=pearl
GLfloat LuzEspecularLuna2[] = { 0.296648, 0.296648,0.296648, 1.0 };
GLfloat Luna2Shininess[] = { 0.088 };

GLfloat LuzAmbientalJupiter[] = { 0.2125f, 0.1275f, 0.054f, 1.0f };
GLfloat LuzDifusaJupiter[] = { 0.714f, 0.4284f, 0.18144f, 1.0f }; // Jupiter =bronze
GLfloat LuzEspecularJupiter[] = { 0.393548, 0.271906, 0.166721, 1.0 };
GLfloat JupiterShininess[] = { 0.2 };

GLfloat LuzAmbientalLuna3[] = { 0.05f, 0.05f, 0.05f, 1.0f };
GLfloat LuzDifusaLuna3[] = { 0.5f, 0.5f, 0.5f, 1.0f }; // Luna2=white rubber
GLfloat LuzEspecularLuna3[] = { 0.7, 0.7,0.7, 1.0 };
GLfloat Luna3Shininess[] = { 0.078125 };

GLfloat LuzAmbientalSaturno[] = { 0.24725f, 0.1995f, 0.0745f, 1.0f };
GLfloat LuzDifusaSaturno[] = { 0.75164f, 0.60648f, 0.22648f, 1.0f }; // Saturno =gold
GLfloat LuzEspecularSaturno[] = { 0.628281, 0.555802, 0.366065, 1.0 };
GLfloat SaturnoShininess[] = { 0.4 };

GLfloat LuzAmbientalAnillo1[] = { 0.0f, 0.0f, 0.0f, 1.0f };
GLfloat LuzDifusaAnillo1[] = { 0.5f, 0.0f, 0.0f, 1.0f }; // Anillo1 =red plastic
GLfloat LuzEspecularAnillo1[] = { 0.7, 0.6, 0.6, 1.0 };
GLfloat Anillo1Shininess[] = { 0.25 };

GLfloat LuzAmbientalAnillo2[] = { 0.05f, 0.0f, 0.0f, 1.0f };
GLfloat LuzDifusaAnillo2[] = { 0.5f, 0.4f, 0.4f, 1.0f }; // Anillo2 =red rubber
GLfloat LuzEspecularAnillo2[] = { 0.7, 0.04, 0.04, 1.0 };
GLfloat Anillo2Shininess[] = { 0.078125 };

GLfloat LuzAmbientalUrano[] = { 0.1f, 0.18725f, 0.1745f, 1.0f };
GLfloat LuzDifusaUrano[] = { 0.396f, 0.74151f, 0.69102f, 1.0f }; // Urano =turquoise
GLfloat LuzEspecularUrano[] = { 0.297254, 0.30829, 0.306678, 1.0 };
GLfloat UranoShininess[] = { 0.1 };



void InitGL(GLvoid)//Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Negro de fondo

	glClearDepth(1.0f); // Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST); // Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL); // Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	glLightfv(GL_LIGHT1, GL_AMBIENT, LuzAmbientalSol);				// Setup The Ambient Light Se inicializa la var 
	glLightfv(GL_LIGHT1, GL_DIFFUSE, LuzDifusaSol);				// Setup The Diffuse Light
	glLightfv(GL_LIGHT1, GL_SPECULAR, LuzEspecularSol);				// Setup The Diffuse Light

	glEnable(GL_LIGHT1);

}

void display(void)//Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX, 0.0, -5.0 + camaraZ); //camara
	glLightfv(GL_LIGHT1, GL_POSITION, LuzPosicionSol);
	glEnable(GL_LIGHTING);

	glPushMatrix();
	glRotatef(sol, 0.0, 1.0, 0.0); //El Sol gira sobre su eje y queda fuera para que los para que los planetas giren en traslacion
	glDisable(GL_LIGHTING);
	glPushMatrix();//Sol
	glColor3f(1.0, 1.0, 0.0); //Sol amarillo
	glutSolidSphere(1.9, 12, 12);//Draw Sun (radio,H,V); horizontal, vertical mientras mas vertices mas suave es la imagen:Esfera
	glEnable(GL_LIGHTING);
	glPopMatrix();

	glPushMatrix();//Mercurio
	glRotatef(sol, 0, 1, 0);//Rotacion alrededor del sol
	glTranslatef(3.2, 0, 0);//Traslación del pivote
	glRotatef(mercurio, 0, 1, 0);//Rotacion del planeta Mercurio
								
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalMercurio);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaMercurio);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularMercurio);
	glMaterialfv(GL_FRONT, GL_SHININESS, MercurioShininess);

	glutSolidSphere(0.3, 8, 8);//Radio del plantea

	glPopMatrix();

	glPushMatrix();//Venus
	glRotatef(sol, 0, 1, 0);//Rotacion alrededor del sol
	glTranslatef(5.7, 0, 0);//Traslación del pivote
	glRotatef(venus, 0, 1, 0);//Rotacion del planeta Venus
	
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalVenus);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaVenus);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularVenus);
	glMaterialfv(GL_FRONT, GL_SHININESS, VenusShininess);

	glutSolidSphere(0.5, 8, 8);//radio del planeta

	glPopMatrix();

	glPushMatrix();//Tierra
	glRotatef(sol, 0, 1, 0);//Rotacion alrededor del sol
	glTranslatef(7.9, 0, 0);//Traslación del pivote
	glRotatef(tierra, 0, 1, 0);//Rotacion del planeta Tierra
							   //glColor3f(0.3, 0.1, 0.8);//Color Azul
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalTierra);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaTierra);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularTierra);
	glMaterialfv(GL_FRONT, GL_SHININESS, TierraShininess);
	glutSolidSphere(0.7, 8, 8);//Radio del planeta

	glPushMatrix();//Luna
	glRotatef(tierra, 0, 1, 0);//Rotacion alrededor de la tierra
	glTranslatef(7.9, 0, 0);//Traslación del pivote
	glRotatef(luna1, 0, 1, 0);//Rotacion de la luna terrestre
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalLuna1);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaLuna1);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularLuna1);
	glMaterialfv(GL_FRONT, GL_SHININESS, Luna1Shininess);
	glutSolidSphere(0.25, 8, 8);//radio de la luna

	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//Marte
	glRotatef(sol, 0, 1, 0);//Rotacion alrededor del sol
	glTranslatef(10.5, 0, 0);//Traslación del pivote
	glRotatef(marte, 0, 1, 0);//Rotacion del planeta Marte
							 
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalMarte);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaMarte);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularMarte);
	glMaterialfv(GL_FRONT, GL_SHININESS, MarteShininess);
	glutSolidSphere(0.4, 8, 8);//Radio del planeta

	glPushMatrix();//Luna1
	glRotatef(marte, 0, 1, 0);//Rotacion alrededor de Marte
	glTranslatef(10.5, 0, 0);//Traslación del pivote
	glRotatef(luna1, 0, 1, 0);//Rotacion de la luna1
	
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalLuna1);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaLuna1);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularLuna1);
	glMaterialfv(GL_FRONT, GL_SHININESS, Luna1Shininess);
	glutSolidSphere(0.25, 8, 8);//radio de la luna

	glPopMatrix();
	glPushMatrix();//Luna2
	glRotatef(marte, 0, 1, 0);//Rotacion alrededor de Marte
	glTranslatef(11.5, 0, 0);//Traslación del pivote
	glRotatef(luna2, 0, 1, 0);//Rotacion de la luna de marte
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalLuna2);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaLuna2);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularLuna2);
	glMaterialfv(GL_FRONT, GL_SHININESS, Luna2Shininess);
	glutSolidSphere(0.25, 8, 8);//radio de la luna

	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//Júpiter
	glRotatef(sol, 0, 1, 0);//Rotacion alrededor del sol
	glTranslatef(13.5, 0, 0);//Traslación del pivote
	glRotatef(jupiter, 0, 1, 0);//Rotacion del planeta Júpiter
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalJupiter);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaJupiter);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularJupiter);
	glMaterialfv(GL_FRONT, GL_SHININESS, JupiterShininess);
	glutSolidSphere(1, 8, 8);//Radio del planeta

	glPushMatrix();//Luna1
	glRotatef(jupiter, 0, 1, 0);//Rotacion alrededor de Marte
	glTranslatef(13.5, 0, 0);//Traslación del pivote
	glRotatef(luna1, 0, 1, 0);//Rotacion de la luna1
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalLuna1);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaLuna1);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularLuna1);
	glMaterialfv(GL_FRONT, GL_SHININESS, Luna1Shininess);
	glutSolidSphere(0.35, 8, 8);//radio de la luna

	glPopMatrix();
	glPushMatrix();//Luna2
	glRotatef(jupiter, 0, 1, 0);//Rotacion alrededor de Marte
	glTranslatef(14.5, 0, 0);//Traslación del pivote
	glRotatef(luna2, 0, 1, 0);//Rotacion de la luna terrestre
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalLuna2);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaLuna2);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularLuna2);
	glMaterialfv(GL_FRONT, GL_SHININESS, Luna2Shininess);
	glutSolidSphere(0.25, 8, 8);//radio de la luna

	glPopMatrix();
	glPushMatrix();//Luna3
	glRotatef(jupiter, 0, 1, 0);//Rotacion alrededor de Marte
	glTranslatef(15, 0, 0);//Traslación del pivote
	glRotatef(luna2, 0, 1, 0);//Rotacion de la luna terrestre
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalLuna3);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaLuna3);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularLuna3);
	glMaterialfv(GL_FRONT, GL_SHININESS, Luna3Shininess);
	glutSolidSphere(0.25, 8, 8);//radio de la luna

	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//Saturno
	glRotatef(sol, 0, 1, 0);//Rotacion alrededor del sol
	glTranslatef(18.5, 0, 0);//Traslación del pivote
	glRotatef(saturno, 0, 1, 0);//Rotacion del planeta Saturno
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalSaturno);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaSaturno);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularSaturno);
	glMaterialfv(GL_FRONT, GL_SHININESS, SaturnoShininess);
	glutSolidSphere(0.9, 8, 8);//Radio del planeta

	glPushMatrix();//Anillo1
	glRotatef(45, 1, 0, 0);//Angulo de rotación y  cambio de posición en el eje X
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalAnillo1);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaAnillo1);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularAnillo1);
	glMaterialfv(GL_FRONT, GL_SHININESS, Anillo1Shininess);
	glutSolidTorus(0.3, 0.8, 15, 15);//Toroide de :Radio interno 0.3, Radio externo 0.8
	glPopMatrix();
	glPushMatrix();//Anillo2
	glRotatef(45, 4, 0, 0);//Angulo de rotación y  cambio de posición en el eje X
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalAnillo2);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaAnillo2);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularAnillo2);
	glMaterialfv(GL_FRONT, GL_SHININESS, Anillo2Shininess);

	glutSolidTorus(0.4, 0.9, 15, 15);//Toroide de:Radio interno 0.4, Radio externo 0.9
	glPopMatrix();
	glPushMatrix();//Urano
	glRotatef(sol, 0, 1, 0);//Rotacion alrededor del sol
	glTranslatef(20.5, 0, 0);//Traslación del pivote
	glRotatef(urano, 0, 1, 0);//Rotacion del planeta Urano
	glMaterialfv(GL_FRONT, GL_AMBIENT, LuzAmbientalUrano);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, LuzDifusaUrano);
	glMaterialfv(GL_FRONT, GL_SPECULAR, LuzEspecularUrano);
	glMaterialfv(GL_FRONT, GL_SHININESS, UranoShininess);
	glutSolidSphere(0.8, 8, 8);//Radio del planeta
	glPopMatrix();

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
		sol = sol - (5 % 10) % 360;//%= modulo al llegar a los 360° se reinicia la var
								   //Velocidad de rotacion de los planetas, sus lunas correspondientes y los anillos para el caso de Saturno
		mercurio = mercurio - (6 % 100) % 360;//No tiene lunas o anillos, se divide entre 100 para bajar la velocidad
		venus = venus - (15 % 100) % 360;//No tiene lunas o anillos, se divide entre 100 para bajar la velocidad
		tierra = tierra - (8 % 100) % 360;//se divide entre 100 para bajar la velocidad
		luna1 = luna1 - (8 % 100) % 360;//se divide entre 100 para bajar la velocidad
		marte = marte - (18 % 100) % 360;//se divide entre 100 para bajar la velocidad
		luna1 = luna1 - (18 % 100) % 360;//se divide entre 100 para bajar la velocidad
		luna2 = luna2 - (18 % 100) % 360;//se divide entre 100 para bajar la velocidad
		jupiter = jupiter - (13 % 100) % 360;//se divide entre 100 para bajar la velocidad
		luna1 = luna1 - (13 % 100) % 360;//se divide entre 100 para bajar la velocidad
		luna2 = luna2 - (13 % 100) % 360;//se divide entre 100 para bajar la velocidad
		luna3 = luna3 - (13 % 100) % 360;//se divide entre 100 para bajar la velocidad
		saturno = saturno - (12 % 100) % 360;//se divide entre 100 para bajar la velocidad
		anillo1 = anillo1 - (12 % 100) % 360;//se divide entre 100 para bajar la velocidad
		anillo2 = anillo2 - (12 % 100) % 360;//se divide entre 100 para bajar la velocidad
		urano = urano - (10 % 100) % 360;//No tiene lunas o anillos,//se divide entre 100 para bajar la velocidad
										 //saturno = (saturno - 12) % 360;
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
	glutCreateWindow("Practica 7:Sistema Solar By: Shanik"); // Nombre de la Ventana
	InitGL(); // Parametros iniciales de la aplicacion
	glutDisplayFunc(display);//Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape); //Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard); //Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys); //Otras
	glutIdleFunc(animacion);//Nos aseguramos que se actualice la variable 
	glutMainLoop();// 

	return 0;
}