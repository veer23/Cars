/********************************************************************************************************************
*  Author  :- Virendra Kumar                                                                                        *
*  Adm. No.:- 2013JE0816                                                                                            *
*  Date    :- 31 October 2016                                                                                       *
*                                                                                                                   *
*********************************************************************************************************************/
#include <GL/glut.h>
#include <iostream>
using namespace std;
int score,exit1=0;
int life = 3;
int level = 10;
float x,y;
float x1,y1=1000,x2=225,x3=-225,y2=1500,y3=2000;
void enemy(float a,float b)
{
	glBegin(GL_QUADS);
	glColor3f(0,0,1);
	glVertex2f(-75+a,50+b);
	glVertex2f(-75+a,100+b);
	glVertex2f(75+a,100+b);
	glVertex2f(75+a,50+b);
	glColor3f(0,0,1);
	glVertex2f(-75+a,150+b);
	glVertex2f(-75+a,200+b);
	glVertex2f(75+a,200+b);
	glVertex2f(75+a,150+b);
	glColor3f(1,0,0);
	glVertex2f(-25+a,50+b);
	glVertex2f(-25+a,250+b);
	glVertex2f(25+a,250+b);
	glVertex2f(25+a,50+b);
	glEnd();
}
void sc(int a)
{
	int i,j,k;
	i=a/100;
	j=a/10-i*10;
	k=a-j*10-i*100;
	glPushMatrix();
	glColor3f(0,1,0);
	glTranslated(400,815,0);
	glScaled(.4,.4,0);
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'c');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glColor3f(0,1,0);
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)':');
	glColor3f(0,1,0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)i+48);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)j+48);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)k+48);
	glPopMatrix();
    glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(300,275,0);
	glScaled(.2,.2,0);
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'->');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'P');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'a');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'G');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'a');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'m');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glPopMatrix();
glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslated(300,250,0);
	glScaled(.2,.2,0);
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'->');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'P');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'q');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'q');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'u');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'i');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glPopMatrix();

glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslated(300,300,0);
	glScaled(.3,.3,0);
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'M');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'N');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'U');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
glPopMatrix();
glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslated(300,450,0);
	glScaled(.3,.3,0);
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'C');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'N');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'R');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'L');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
glPopMatrix();

glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslated(300,405,0);
	glScaled(.3,.3,0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'-');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'>');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'4');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'-');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'L');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'F');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
    glPopMatrix();
    glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslated(300,355,0);
	glScaled(.3,.3,0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'-');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'>');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'6');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'-');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'R');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'I');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'G');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'H');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
glPopMatrix();


glPushMatrix();
	glColor3f(0,1,0);
	glTranslated(-800,815,0);
	glScaled(.4,.4,0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'L');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'I');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'F');
   	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
   
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	 if(life==0)
    {
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'L');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'T');
    }
    else
	for(int i=0;i<life;i++)
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'X');
glPopMatrix();
}
void car(float a,float b)
{
	glBegin(GL_QUADS);
	glColor3f(0.25,1,0.75);
	glVertex2f(-75+a,50+b);
	glVertex2f(-75+a,100+b);
	glVertex2f(75+a,100+b);
	glVertex2f(75+a,50+b);
	glColor3f(0.6,0.2,0.4);
	glVertex2f(-75+a,150+b);
	glVertex2f(-75+a,200+b);
	glVertex2f(75+a,200+b);
	glVertex2f(75+a,150+b);
	glColor3f(0.5,1,0.5);
	glVertex2f(-25+a,50+b);
	glVertex2f(-25+a,250+b);
	glVertex2f(25+a,250+b);
	glVertex2f(25+a,50+b);
	glEnd();
}
void display()
{
	if(exit1==0)
	{
		if(score<50)
		{
	y1-=level;
	y2-=level;
	y3-=level;
		}
if(score>=50&&score<200)
		{
			level = 20;
	y1-=level;
	y2-=level;
	y3-=level;
		}
if(score>=200)
		{
			level = 30;
	y1-=level;
	y2-=level;
	y3-=level;
		}
	//
	if(y1<-250)
	{
		score+=level;
	    y1=1000;
	}
	if(y2<-250)
	{
		score+=level;
		y2=1500;
	}
	if(y3<-250)
	{
		score+=level;
		y3=2000;
	}
	//
	if(x<-200||x>200)
	{
		if(x<-200)
			x = -200;
		else
			x = 200;
	}

	if(y<0)
	{
		y = 0;
	}

	if(75+x>-76&&-75+x<76)
	if(250+y>100+y1&&250+y1>50+y)
	{
		life--;
		y1 = 1000;
		y2 = 1500;
		y3 = 2000;
		if(life==0)
		{
			exit1 = 1;
		}
	}
	if(75+x>-250&&-75+x<-140)
	if(250+y>100+y3&&250+y3>50+y)
	{
		life--;
		y1 = 1000;
		y2 = 1500;
		y3 = 2000;
		if(life==0)
		{
			exit1 = 1;
		}
	}
	if(75+x>140&&-75+x<260)
	if(250+y>100+y2&&250+y2>50+y)
	{
		life--;
		y1 = 1000;
		y2 = 1500;
		y3 = 2000;
		if(life==0)
		{
			exit1 = 1;
		}
	}

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);
    glBegin(GL_QUADS);
	glVertex2f(-300,0);
	glVertex2f(-300,2000);
	glVertex2f(-2000,2000);
	glVertex2f(-2000,0);

	glVertex2f(300,0);
	glVertex2f(300,2000);
	glVertex2f(2050,2050);
	glVertex2f(2000,0);
	glEnd();

	glColor3f(0.11,0.38,0.03);
    glBegin(GL_QUADS);
	glVertex2f(-300,0);
	glVertex2f(-300,100);
	glVertex2f(-2000,100);
	glVertex2f(-2000,0);
	
	glVertex2f(300,0);
	glVertex2f(300,100);
	glVertex2f(2000,100);
	glVertex2f(2000,0);

	glVertex2f(-300,300);
	glVertex2f(-300,400);
	glVertex2f(-2000,400);
	glVertex2f(-2000,300);
	
	glVertex2f(300,300);
	glVertex2f(300,400);
	glVertex2f(2000,400);
	glVertex2f(2000,300);

	glVertex2f(-300,600);
	glVertex2f(-300,700);
	glVertex2f(-2000,700);
	glVertex2f(-2000,600);
	
	glVertex2f(300,600);
	glVertex2f(300,700);
	glVertex2f(2000,700);
	glVertex2f(2000,600);

	glVertex2f(-300,900);
	glVertex2f(-300,1000);
	glVertex2f(-2000,1000);
	glVertex2f(-2000,900);
	
	glVertex2f(300,900);
	glVertex2f(300,1000);
	glVertex2f(2000,1000);
	glVertex2f(2000,900);

	glEnd();


	glColor3f(0.93,0.67,0.58);
    glBegin(GL_QUADS);
	glVertex2f(-300,100);
	glVertex2f(-300,200);
	glVertex2f(-2000,200);
	glVertex2f(-2000,100);
	
	glVertex2f(300,100);
	glVertex2f(300,200);
	glVertex2f(2000,200);
	glVertex2f(2000,100);

	glVertex2f(-300,400);
	glVertex2f(-300,500);
	glVertex2f(-2000,500);
	glVertex2f(-2000,400);
	
	glVertex2f(300,400);
	glVertex2f(300,500);
	glVertex2f(2000,500);
	glVertex2f(2000,400);

	glVertex2f(-300,700);
	glVertex2f(-300,800);
	glVertex2f(-2000,800);
	glVertex2f(-2000,700);
	
	glVertex2f(300,700);
	glVertex2f(300,800);
	glVertex2f(2000,800);
	glVertex2f(2000,700);

	glVertex2f(-300,1000);
	glVertex2f(-300,1100);
	glVertex2f(-2000,1100);
	glVertex2f(-2000,1000);
	
	glVertex2f(300,1000);
	glVertex2f(300,1100);
	glVertex2f(2000,1100);
	glVertex2f(2000,1000);

	glEnd();

    system("mplayer final2.wav");
    glColor3f(1,1,1);
   	glBegin(GL_QUADS);
	glVertex2f(-20,0);
	glVertex2f(-20,100);
	glVertex2f(20,100);
	glVertex2f(20,0);

	glVertex2f(-20,200);
	glVertex2f(-20,300);
	glVertex2f(20,300);
	glVertex2f(20,200);

	glVertex2f(-20,400);
	glVertex2f(-20,500);
	glVertex2f(20,500);
	glVertex2f(20,400);

	glVertex2f(-20,600);
	glVertex2f(-20,700);
	glVertex2f(20,700);
	glVertex2f(20,600);

	glVertex2f(-20,800);
	glVertex2f(-20,900);
	glVertex2f(20,900);
	glVertex2f(20,800);

	glVertex2f(-20,1000);
	glVertex2f(-20,1100);
	glVertex2f(20,1100);
	glVertex2f(20,1000);

	glVertex2f(-20,1200);
	glVertex2f(-20,1300);
	glVertex2f(20,1300);
	glVertex2f(20,1200);

	glVertex2f(-20,1300);
	glVertex2f(-20,1400);
	glVertex2f(20,1400);
	glVertex2f(20,1300);

	glVertex2f(-20,1500);
	glVertex2f(-20,1600);
	glVertex2f(20,1600);
	glVertex2f(20,1500);

	glVertex2f(-20,1700);
	glVertex2f(-20,1800);
	glVertex2f(20,1800);
	glVertex2f(20,1700);

	glVertex2f(-20,1900);
	glVertex2f(-20,2000);
	glVertex2f(20,2000);
	glVertex2f(20,1900);

	glEnd();

	sc(score);
	car(x,y);
	enemy(x1,y1);
	enemy(x2,y2);
	enemy(x3,y3);
	glutSwapBuffers();
	}
	else
	{
    glLineWidth(5);
	glClear(GL_COLOR_BUFFER_BIT);
	sc(score);

	glPushMatrix();
	glColor3f(0.6,0.2,0.8);
	glTranslated(-200,800,0);
	glScaled(.5,.5,0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'G');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'A');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'M');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'V');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'R');
	glPopMatrix();

	glutSwapBuffers();
	}
}
void keyboards(unsigned char keys,int x4,int y4)
{
	//to quit
    if(keys=='q'||keys=='Q')
	{
		  exit(-1);
	}
     	//to start
	if(keys=='s')
    {
		glutIdleFunc(display);
    }

  	//movement keys
	if(keys=='4')
		x-=200;
	if(keys=='6')
		x+=200;
	if(keys=='8')
		y+=20;
	if(keys=='2')
		y-=20;
	glutPostRedisplay();
}
void dropmenu(int keys)
{
	  keyboards((unsigned char) keys,0,0);
}

int main(int argc, char **argv)
{
  glutInit(&argc,argv);

  glutInitWindowSize(1280,720);
  glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
  glutCreateWindow("Car Race");
  glClearColor(0,0,0,1);//set Background
  glutDisplayFunc(display);
  glutKeyboardFunc(keyboards);
  gluOrtho2D(-1000,1000,0,1000);
  glutMainLoop();
  return 0;
}

