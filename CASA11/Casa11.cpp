//Semestre 2019 - 1
//************************************************************//
//************************************************************//
//***** Alumno (s): Trejo Luna Eva Marion Shanik**************//
//*************Ejercicio Casa: Movimiento de manos		******//
//*************      Visual Studio 2017				    ******//
//************************************************************//
//************************************************************//
//Teclas Especiales para activar la animacion
//Z,z => Atras
//Q,q => Adelante
//D,d => Derecha
//I,i => Izquierda
//O,o => perfecto
//V,v => amor y paz
//M,m => Metalera
//Hombro=>H(-)/h(+)
//K,k =>Para guardar la animacion
//L,l =>Para correr la animacion

#include "Main.h"
float pulgar,indice, medio, anular, menique = 0;
float transZ = 0.0f;
float transX = 0.0f;
float angleX = 0.0f;
float angleY = 0.0f;

float anguloHombro = 0.0f;
float anguloCodo = 0.0f;
float anguloMuneca = 0.0f;
float anguloDedos = 0.0f;

int tam = 0;
FILE *archivo; //Apuntador
int contador = 0;
#define MAX_FRAMES 600
int i_max_steps = 100;
int i_curr_steps = 0;
//Frame de la mano
typedef struct _frame 
{
	float pulgar;
	float pulgarInc;
	float indice;
	float indiceInc;
	float medio;
	float medioInc;
	float anular;
	float anularInc;
	float menique;
	float meniqueInc;
}FRAME;
//Arreglo frame
FRAME KeyFrame[MAX_FRAMES]; 
int FrameIndex = 0;
bool play = false;
int playIndex = 0;
//NEW//////////////////NEW//////////////////NEW//////////////////NEW////////////////

int w = 500, h = 500;
int frame = 0, time, timebase = 0;
char s[30];

GLfloat g_lookupdown = 0.0f;    // Look Position In The Z-Axis (NEW) 

int font = (int)GLUT_BITMAP_HELVETICA_18;


//GLfloat Diffuse[]= { 1.0f, 1.0f, 1.0f, 1.0f };				// Diffuse Light Values
GLfloat Diffuse[] = { 0.5f, 0.5f, 0.5f, 1.0f };				// Diffuse Light Values
GLfloat Specular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat Position[] = { 0.0f, 7.0f, -5.0f, 0.0f };			// Light Position
GLfloat Position2[] = { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

GLfloat m_dif1[] = { 0.0f, 0.2f, 1.0f, 1.0f };				// Diffuse Light Values
GLfloat m_spec1[] = { 0.0, 0.0, 0.0, 1.0 };				// Specular Light Values
GLfloat m_amb1[] = { 0.0, 0.0, 0.0, 1.0 };				// Ambiental Light Values
GLfloat m_s1[] = { 18 };

GLfloat m_dif2[] = { 0.8f, 0.2f, 0.0f, 1.0f };				// Diffuse Light Values
GLfloat m_spec2[] = { 0.0, 0.0, 0.0, 1.0 };				// Specular Light Values
GLfloat m_amb2[] = { 0.0, 0.0, 0.0, 1.0 };				// Ambiental Light Values
GLfloat m_s2[] = { 22 };


void saveFrame2(void) {		 // Movimientos guardados 

	int contador = -1;
	float arreglo[] = {
		//Valores de la animacion
		//OK
		0.000,0.000,0.000,0.000,0.000,			
		16.000,13.000,0.000,0.000,0.000,
		34.000,32.000,0.000,0.000,0.000,
		46.000,48.000,0.000,0.000,0.000,
		55.000,51.000,0.000,0.000,0.000,
		65.000,63.000,0.000,0.000,0.000,
		74.000,96.000,0.000,0.000,0.000,
		82.000,81.000,0.000,0.000,0.000,
		91.000,90.000,0.000,0.000,0.000,
		98.000,95.000,0.000,0.000,0.000,
		106.000,104.000,0.000,0.000,0.000,
		92.000,90.000,0.000,0.000,0.000,
		79.000,80.000,0.000,0.000,0.000,
		72.000,73.000,0.000,0.000,0.000,
		65.000,64.000,0.000,0.000,0.000,
		57.000,56.000,0.000,0.000,0.000,
		50.000,49.000,0.000,0.000,0.000,
		41.000,40.000,0.000,0.000,0.000,
		33.000,32.000,0.000,0.000,0.000,
		24.000,23.000,0.000,0.000,0.000,
		15.000,16.000,0.000,0.000,0.000,
		10.000,11.000,0.000,0.000,0.000,
		//Amor y Paz (Y)
		25.000,0.000,11.000,15.000,15.000,		
		38.000,0.000,11.000,28.000,28.000,
		53.000,0.000,11.000,42.000,42.000,
		62.000,0.000,11.000,51.000,51.000,
		72.000,0.000,11.000,61.000,61.000,
		83.000,0.000,11.000,71.000,71.000,
		89.000,0.000,11.000,78.000,78.000,
		98.000,0.000,11.000,87.000,87.000,
		105.000,0.000,10.000,95.000,95.000,
		116.000,0.000,10.000,106.000,106.000,
		126.000,0.000,10.000,116.000,116.000,
		136.000,0.000,10.000,126.000,126.000,
		143.000,0.000,10.000,133.000,133.000,
		152.000,0.000,10.000,142.000,142.000,
		157.000,0.000,10.000,147.000,147.000,
		127.000,0.000,10.000,117.000,117.000,
		114.000,0.000,10.000,104.000,104.000,
		103.000,0.000,10.000,93.000,93.000,
		97.000,0.000,10.000,87.000,87.000,
		90.000,0.000,10.000,80.000,80.000,
		82.000,0.000,10.000,72.000,72.000,
		75.000,0.000,10.000,65.000,65.000,
		64.000,0.000,10.000,54.000,54.000,
		57.000,0.000,10.000,47.000,47.000,
		50.000,0.000,10.000,40.000,40.000,
		44.000,0.000,10.000,34.000,34.000,
		34.000,0.000,10.000,24.000,24.000,
		27.000,0.000,10.000,17.000,17.000,
		//Metalera (|m|)
		19.000,0.000,10.000,11.000,11.000,     
		19.000,0.000,25.000,26.000,11.000,
		19.000,0.000,35.000,36.000,11.000,
		19.000,0.000,42.000,43.000,11.000,
		19.000,0.000,50.000,51.000,11.000,
		19.000,0.000,56.000,57.000,11.000,
		19.000,0.000,62.000,63.000,11.000,
		19.000,0.000,68.000,69.000,11.000,
		19.000,0.000,76.000,77.000,11.000,
		19.000,0.000,83.000,84.000,11.000,
		19.000,0.000,89.000,90.000,11.000,
		19.000,0.000,95.000,96.000,11.000,
		19.000,0.000,103.000,104.000,11.000,
		19.000,0.000,112.000,113.000,11.000,
		19.000,0.000,121.000,122.000,11.000,
		19.000,0.000,130.000,131.000,11.000,
		19.000,0.000,139.000,140.000,11.000,
		19.000,0.000,123.000,124.000,11.000,
		19.000,0.000,113.000,114.000,11.000,
		19.000,0.000,109.000,110.000,11.000,
		19.000,0.000,102.000,103.000,11.000,
		19.000,0.000,93.000,94.000,11.000,
		19.000,0.000,83.000,84.000,11.000,
		19.000,0.000,72.000,73.000,11.000,
		19.000,0.000,59.000,60.000,11.000,
		19.000,0.000,51.000,52.000,11.000,
		19.000,0.000,41.000,42.000,11.000,
		19.000,0.000,31.000,32.000,11.000,
		19.000,0.000,24.000,25.000,11.000,
		19.000,0.000,17.000,18.000,11.000,
		19.000,0.000,12.000,13.000,11.000

	};

	//Ciclo para realizar las señales
	for (int i = 0; i < 81; i++) {
		contador++;	
		KeyFrame[i].pulgar = arreglo[contador];
		contador++;
		KeyFrame[i].indice = arreglo[contador];
		contador++;
		KeyFrame[i].medio = arreglo[contador];
		contador++;
		KeyFrame[i].anular = arreglo[contador];
		contador++;
		KeyFrame[i].menique = arreglo[contador];
		FrameIndex++;
	}
}
//Interpolacion
void interpolation(void) 
{
	//Incremento de las rotaciones de los dedos
	KeyFrame[playIndex].pulgarInc = (KeyFrame[playIndex + 1].pulgar - KeyFrame[playIndex].pulgar) / i_max_steps; //Pulgar
	KeyFrame[playIndex].indiceInc = (KeyFrame[playIndex + 1].indice - KeyFrame[playIndex].indice) / i_max_steps; //Indice
	KeyFrame[playIndex].medioInc = (KeyFrame[playIndex + 1].medio - KeyFrame[playIndex].medio) / i_max_steps; //Medio
	KeyFrame[playIndex].anularInc = (KeyFrame[playIndex + 1].anular - KeyFrame[playIndex].anular) / i_max_steps;//Anular
	KeyFrame[playIndex].meniqueInc = (KeyFrame[playIndex + 1].menique - KeyFrame[playIndex].menique) / i_max_steps; //Meñique
}
void saveFrame(void)
{
	//Se guardan los movimientos de los dedos
	printf("frameindex %d\n", FrameIndex);
	KeyFrame[FrameIndex].pulgar = pulgar; //Guardar pulgar
	KeyFrame[FrameIndex].indice = indice; //guardar indice
	KeyFrame[FrameIndex].medio = medio; //Guardar medio
	KeyFrame[FrameIndex].anular = anular; //Guardar anular
	KeyFrame[FrameIndex].menique = menique;//Guardar menique
//Se guardan en un archivo el cual muestra los valores adquiridos en los angulos de rotacion de cada dedo
	fprintf(archivo, "%.3f\n,", pulgar);
	fprintf(archivo, "%.3f\n,", indice);
	fprintf(archivo, "%.3f\n,", medio);
	fprintf(archivo, "%.3f\n,", anular);
	fprintf(archivo, "%.3f\n, ", menique);
	printf("Pulgar: %.3f \n", KeyFrame[FrameIndex].pulgar);	
	printf("Indice: %.3f \n", KeyFrame[FrameIndex].indice);
	printf("Medio: %.3f \n", KeyFrame[FrameIndex].medio);
	printf("Anular: %.3f \n", KeyFrame[FrameIndex].anular);
	printf("Meñique: %.3f \n ", KeyFrame[FrameIndex].menique);
	FrameIndex++;
}

//Reinicio de los dedos
void resetElements(void)
{

	pulgar = KeyFrame[0].pulgar;	
	indice = KeyFrame[0].indice;	
	medio = KeyFrame[0].medio;		
	anular = KeyFrame[0].anular;	
	menique = KeyFrame[0].menique;	
}

void prisma()
{
	GLfloat vertice[8][3] = {
		{ 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V 0
		{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V 1
		{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V 2
		{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V 3
		{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V 4
		{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V 5
		{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V 6
		{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V 7
	};

	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void mano() {
	
	glTranslatef(transX - 5.5, 0.0f, transZ - 3.0);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glRotatef(anguloHombro, 0.0, 0.0, 1.0);
	// Hombro
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glScalef(1.0f, 2.0f, 0.5f);
	prisma();
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(2.0f, 0.0f, 0.0f);
	glScalef(3.0f, 2.0f, 0.5f);
	prisma();
	glPopMatrix();
	
	glTranslatef(3.75f, 0.0f, 0.0f);
	glRotatef(anguloCodo, 0.0f, 0.0f, 1.0f);
	glTranslatef(-3.75f, 0.0f, 0.0f);
	//Codo
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(3.75f, 0.0f, 0.0f);
	glScalef(0.5f, 2.0f, 0.5f);
	prisma();
	glPopMatrix();
	// Antebrazo
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(6.0f, 0.0f, 0.0f);
	glScalef(4.0f, 2.0f, 0.5f);
	prisma();
	glPopMatrix();

	glTranslatef(8.25f, 0.0f, 0.0f);
	glRotatef(anguloMuneca, 0.0f, 1.0f, 0.0f);
	glTranslatef(-8.25f, 0.0f, 0.0f);
	// Muñeca
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(8.25f, 0.0f, 0.0f);
	glScalef(0.5f, 2.0f, 0.5f);
	prisma();
	glPopMatrix();
	glTranslatef(9.5f, 0.0f, 0.0f);
	// Palma
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glScalef(2.0f, 2.0f, 0.5f);
	prisma();
	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.5f, 1.0f, 0.0f);
	glRotatef(pulgar, 1.0, 0.0, 0.0);
	glTranslatef(0.5f, -1.0f, 0.0f);
	//Dedos
	//Pulgar
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(-0.5f, 1.25f, 0.0f);
	glScalef(0.4f, 0.5f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(-0.5f, 1.5f, 0.0f);
	glRotatef(pulgar, 1.0, 0.0, 0.0);
	glTranslatef(0.5f, -1.5f, 0.0f);

	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(-0.5f, 1.75f, 0.0f);
	glScalef(0.4f, 0.5f, 0.5f);
	prisma();
	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	//Movimiento
	glTranslatef(1.0f, 1.25f, 0.0f);
	glRotatef(indice, 0.0, -1.0, 0.0);
	glTranslatef(-1.0f, -1.25f, 0.0f);
	//Indice
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.25f, 0.75f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(1.5f, 1.25f, 0.0f);
	glRotatef(indice, 0.0, -1.0, 0.0);
	glTranslatef(-1.5f, -1.25f, 0.0f);

	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.75f, 0.75f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(2.0f, 1.25f, 0.0f);
	glRotatef(indice, 0.0, -1.0, 0.0);
	glTranslatef(-2.0f, -1.25f, 0.0f);

	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(2.25f, 0.75f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	//Movimiento
	glTranslatef(1.0f, 0.25f, 0.0f);
	glRotatef(medio, 0.0, -1.0, 0.0);
	glTranslatef(-1.0f, -0.25f, 0.0f);
	//Medio
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.25f, 0.25f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(1.5f, 0.25f, 0.0f);
	glRotatef(medio, 0.0, -1.0, 0.0);
	glTranslatef(-1.5f, -0.25f, 0.0f);

	glPushMatrix();
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.75f, 0.25f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(2.0f, 0.25f, 0.0f);
	glRotatef(medio, 0.0, -1.0, 0.0);
	glTranslatef(-2.0f, -0.25f, 0.0f);

	glPushMatrix();  
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(2.25f, 0.25f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	//Movimiento
	glTranslatef(1.0f, -0.25f, 0.0f);
	glRotatef(anular, 0.0, -1.0, 0.0);
	glTranslatef(-1.0f, 0.25f, 0.0f);
	//Anular
	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.25f, -0.25f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(1.5f, -0.25f, 0.0f);
	glRotatef(anular, 0.0, -1.0, 0.0);
	glTranslatef(-1.5f, 0.25f, 0.0f);

	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.75f, -0.25f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(2.0f, -0.25f, 0.0f);
	glRotatef(anular, 0.0, -1.0, 0.0);
	glTranslatef(-2.0f, 0.25f, 0.0f);

	glPushMatrix();
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(2.25f, -0.25f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();

	glPopMatrix();
	//Meñique
	glPushMatrix(); 
	//Movimiento
	glTranslatef(1.0f, -0.75f, 0.0f);
	glRotatef(menique, 0.0, -1.0, 0.0);
	glTranslatef(-1.0f, 0.75f, 0.0f);

	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.25f, -0.75f, 0.0f);
	glScalef(0.5f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(1.5f, -0.75f, 0.0f);
	glRotatef(menique, 0.0, -1.0, 0.0);
	glTranslatef(-1.5f, 0.75f, 0.0f);

	glPushMatrix(); 
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.65f, -0.75f, 0.0f);
	glScalef(0.3f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();
	//Movimiento
	glTranslatef(1.8f, -0.75f, 0.0f);
	glRotatef(menique, 0.0, -1.0, 0.0);
	glTranslatef(-1.8f, 0.75f, 0.0f);

	glPushMatrix();
	glColor3f(0.0, 0.6, 0.5);
	glTranslatef(1.9f, -0.75f, 0.0f);
	glScalef(0.2f, 0.4f, 0.5f);
	prisma();
	glPopMatrix();

	glPopMatrix();
}

void InitGL(GLvoid)     // Inicializamos parametros
{
	glClearColor(0.0f, 0.1f, 0.1f, 0.0f);				// Negro de fondo	

	glEnable(GL_TEXTURE_2D);

	glShadeModel(GL_SMOOTH);

	glLightfv(GL_LIGHT1, GL_POSITION, Position);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, Diffuse);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);

	for (int i = 0; i < MAX_FRAMES; i++)
	{
		KeyFrame[i].anular = 0;					//Declaracion de keyframes
		KeyFrame[i].anularInc = 0;
		KeyFrame[i].indice = 0;
		KeyFrame[i].indiceInc = 0;
		KeyFrame[i].medio = 0;
		KeyFrame[i].medioInc = 0;
		KeyFrame[i].menique = 0;
		KeyFrame[i].meniqueInc = 0;
		KeyFrame[i].pulgar = 0;
		KeyFrame[i].pulgarInc = 0;
	}
	//NEW//////////////////NEW//////////////////NEW///////////
	//Archivo
	archivo = fopen("datos.txt", "w"); 

	saveFrame2();

}

void pintaTexto(float x, float y, float z, void *font, char *string)
{

	char *c;     //Almacena los caracteres a escribir
	glRasterPos3f(x, y, z);	//Posicion apartir del centro de la ventana
							//glWindowPos2i(150,100);
	for (c = string; *c != '\0'; c++)//Condicion de fin de cadena
	{
		glutBitmapCharacter(font, *c); //imprime
	}
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();
	glPushMatrix();


	glRotatef(g_lookupdown, 1.0f, 0, 0);
	mano();

	glPopMatrix();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	glDisable(GL_LIGHTING);
	glColor3f(0.0, 0.40, 0.40);
	pintaTexto(-11, 12.0, -14.0, (void *)font, "Ejercicio Casa 11:Simbolos con las manos");
    glColor3f(0.0, 0.40, 0.40);
	pintaTexto(-11, 8.0, -14.0, (void *)font, "Shanik Trejo");
	glColor3f(0.0, 0.40, 0.40);
	glEnable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);

	glutSwapBuffers();

}

void animacion()
{
	//Mano
	if (play)
	{

		if (i_curr_steps >= i_max_steps) //end of animation between frames?
		{
			playIndex++;
			if (playIndex > FrameIndex - 2)	//end of total animation?
			{
				printf("termina anim\n");
				playIndex = 0;
				play = false;
				//resetElements();
			}
			else
			{
				i_curr_steps = 0; //Reset counter
								  //Interpolation
				interpolation();

			}
		}
		else
		{
			//Draw animation
			pulgar += KeyFrame[playIndex].pulgarInc; //avanzar cuadro
			indice += KeyFrame[playIndex].indiceInc;
			medio += KeyFrame[playIndex].medioInc;
			//Rotacion de los dedos
			anular += KeyFrame[playIndex].anularInc; 
													 
			menique += KeyFrame[playIndex].meniqueInc;
			i_curr_steps++;
		}

	}


	glutPostRedisplay();
}

void reshape(int width, int height)   //Reshape
{
	if (height == 0)
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);			// Projection Matrix
	glLoadIdentity();

	// Tipo de Vista

	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 170.0);

	glMatrixMode(GL_MODELVIEW);			//Modelview Matrix
	glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard 
{
	switch (key) {
//Atras
	case 'z':
	case 'Z':
		transZ--;
		
		break;
//Adelante
	case 'q':
	case 'Q':
		transZ++;
		break;
//Derecha
	case 'D':
	case 'd':
		transX++;
		break;
//Izquierda
	case 'i':
	case 'I':
		transX--;
		break;
//OK
	case 'o': 
		indice++;
		pulgar++;
		break;

	case 'O': 
		pulgar--;
		break;
//Amor y Paz
	case 'v': 
		menique++;
		anular++;
		pulgar++;
		break;

	case 'V': 
		menique--;
		anular--;
		pulgar--;
		break;
//Señal metalera
	case 'm': 
		medio++;
		anular++;
		break;

	case 'M': 
		medio--;
		anular--;
		break;
//Mover Hombro
	case 'h': 
		if (anguloHombro <= 80.0)
			anguloHombro += 1.0;
		break;

	case 'H': 
		if (anguloHombro >= -80.0)
			anguloHombro -= 1.0;
		break;
//Se guarda la animacion
	case 'k':	
	case 'K':
		if (FrameIndex < MAX_FRAMES)
		{

			saveFrame();


		}

		break;

	case 'l':				//correr animacion
	case 'L':
		if (play == false && (FrameIndex > 1))
		{

			resetElements();
			//First Interpolation				
			interpolation();

			play = true;
			playIndex = 0;
			i_curr_steps = 0;
		}
		else
		{
			play = false;
		}
		break;
	
	case 27:
		fclose(archivo);// Esc para salir
		exit(0);
		break;
	default:
		break;
	}

	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angleX += 2.0f;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -= 2.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY += 2.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 2.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}

void menuKeyFrame(int id)
{
	switch (id)
	{
	case 0:	//Save KeyFrame
		if (FrameIndex < MAX_FRAMES)
		{
			saveFrame();
		}
		break;

	case 1:	//Play animation
		if (play == false && FrameIndex > 1)
		{


			resetElements();

			//First Interpolation
			interpolation();

			play = true;
			playIndex = 0;
			i_curr_steps = 0;
		}
		else
		{
			play = false;
		}
		break;


	}
}


void menu(int id)
{

}



int main(int argc, char** argv)   // Main Function
{
	int submenu;
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 11 By:Shanik Trejo"); // Nombre de la Ventana
									 //glutFullScreen     ( );         // Full Screen
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutIdleFunc(animacion);

	submenu = glutCreateMenu(menuKeyFrame);
	glutAddMenuEntry("Guardar KeyFrame", 0);
	glutAddMenuEntry("Reproducir Animacion", 1);
	glutCreateMenu(menu);
	glutAddSubMenu("Animacion Monito", submenu);

	glutAttachMenu(GLUT_RIGHT_BUTTON);


	glutMainLoop();          // 

	return 0;
}