#include <windows.h>
#include <glut.h>

void init()
{
	glClearColor (0.0, 0.0, 0.0, 1.0);		//background color

	glColor3f(1.0, 1.0, 1.0);				//foreground color

	glMatrixMode (GL_PROJECTION);    
	glLoadIdentity ();    
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);  
}


void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glBegin(GL_POLYGON);					// Primitive type 1        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.5, -0.5);    
	glEnd();
	glFlush(); 
}

void mydisplay2(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glPointSize(10.0f);						 // Primitive type 2
	glBegin(GL_POINTS);        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.5, -0.5);    
	glEnd();
	glFlush(); 
}

void mydisplay3(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glLineWidth(3.0f);						// Primitive type 3
	glBegin(GL_LINES);        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.25, -0.75);    
	glEnd();
	glFlush(); 
}

void mydisplay4(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glLineWidth(3.0f);						// Primitive type 4
	glBegin(GL_LINE_LOOP);        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.25, -0.75);    
	glEnd();
	glFlush(); 
}

void mydisplay5(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glColor3f(0.0, 0.0, 1.0);	
	glLineWidth(3.0f);						// Primitive type 4
	glBegin(GL_LINE_LOOP);        
		glVertex2f(0, 1);        
		glVertex2f(-0.5, 0);        
		glVertex2f(0.5, 0);        
	glEnd();
 
	glColor3f(1.0, 0.0, 0.0);	
	glBegin(GL_LINE_LOOP);        
		glVertex2f(0.5, 0.75);        
		glVertex2f(-0.5, 0.75);        
		glVertex2f(0, -0.25);        
	glEnd();
	glFlush(); 
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
 
   // Define shapes enclosed within a pair of glBegin and glEnd
  
   glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 0.0f, 1.0f); // Blue
      glVertex2f(0, 1);  
	  glVertex2f(-0.5, 0);
	  glVertex2f(0.5, 0);  
 
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.5, 0.75);    
      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-0.5, 0.75);   ;
      glColor3f(0.0f, 0.0f, 1.0f); // Blue
      glVertex2f(0, -0.25);  
   glEnd();
 
 
   glFlush();  // Render now
}


int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Sample");     
	glutDisplayFunc(display);  
	init();  
	glutMainLoop();
}