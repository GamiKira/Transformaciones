#include <GL/glut.h>
#include <math.h>

void drawTriangle()
{
	glBegin(GL_TRIANGLES); // comienza a dibujar el tri�ngulo
	glVertex2f(0.0, 0.5); // v�rtice superior
	glVertex2f(-0.5, -0.5); // v�rtice inferior izquierdo
	glVertex2f(0.5, -0.5); // v�rtice inferior derecho
	glEnd(); // termina de dibujar el tri�ngulo
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); // limpia la pantalla
	glColor3f(1.0, 0.0, 0.0); // establece el color rojo para el tri�ngulo
	glLoadIdentity(); //
	//glRotatef(45.0, 0.0, 0.0, 1.0); // rota el objeto 45 grados alrededor del eje z
	glScalef(2.0, 1.0, 1.0); // escala el objeto 2 veces en el eje x y 1 vez en el eje y
	//glTranslatef(0.5, 0.5, 0.0); // traslada el objeto 0.5 en el eje x y 0.5 en el eje y
	drawTriangle(); // dibuja el tri�ngulo
	glFlush(); // env�a los comandos de dibujo a la pantalla
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); // inicializa GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // establece el modo de visualizaci�n
	glutInitWindowSize(600, 600); // establece el tama�o de la ventana
	glutCreateWindow("Pol�gonos"); // crea la ventana con un
	glClearColor(1.0, 1.0, 1.0, 1.0); // establece el color de fondo de la ventana
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0);// establece el sistema de coordenadas
	glutDisplayFunc(display); // establece la funci�n de visualizaci�n
	glutMainLoop(); // bucle principal de GLUT

	return 0;
}