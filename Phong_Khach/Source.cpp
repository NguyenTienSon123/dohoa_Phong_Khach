#include "glut.h";

GLboolean klight2 = false, klight0 = false, klight7 = false, od = false;
double eyeX = 23.0, eyeY = 7.0, eyeZ = 12.0, refX = 2.0, refY = 1.0, refZ = 2.0;
double eyeXl = 23.0, eyeYl = 6.0, eyeZl = 15.0, refXl = -5.0, refYl = 0.0, refZl = 0.0;
//l3
void bacThem() {
	//glEnable(GL_LIGHTING);
	GLfloat light_pos[] = { -2.0, 2.0, 2.0, 1.0 };
	glLightfv(GL_LIGHT3, GL_POSITION, light_pos);
	GLfloat ambient[] = { 0.44705883,0.67058825,0.4862745, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diff_use[] = { 0.44705883,0.67058825,0.4862745, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	GLfloat specular[] = { 0.44705883,0.67058825,0.4862745, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	GLfloat shininess = 10.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	glutSolidCube(1);
}

void sach() {
	GLfloat ambient[] = { 0.0, 0.0, 0.4, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diff_use[] = { 0, 0, 0.4, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	GLfloat specular[] = { 0, 0, 0.8, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	GLfloat shininess = 10.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	glPushMatrix();
	glTranslatef(0, -0.16, 0.22);
	glRotatef(15, 8, 0, 0);
	glScaled(1, 1, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glRotatef(15, 8, 0, 0);
	glScaled(1, 1.3, 0.2);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0.16, 0.22);
	glRotatef(15, 8, 0, 0);
	glScaled(1, 1.3, 0.2);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0.1, 0.6);
	glRotatef(15, 8, 0, 0);
	glScaled(1, 1.3, 0.2);
	glutSolidCube(1);
	glPopMatrix();
}
//l2
void caiTu() {
	//vi tri nguon sang
	GLfloat light_pos[] = { -5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0.4, 0.2,0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 0.4, 0.2, 0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.4,0.2,0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 1.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	// Vẽ than tu
	glPushMatrix();
	glTranslatef(0.0, 0.0, -0.1);
	glScalef(5.0, 1.8, 2.0);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.0, 1.1);
	glutSolidSphere(0.1, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.0, 1.1);
	glutSolidSphere(0.1, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.5, 0.0, 0.0);
	glScalef(0.2, 2.0, 2.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.5, 0.0, 0.0);
	glScalef(0.2, 2.0, 2.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glScalef(0.2, 2.0, 2.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.9, 0.0);
	glScalef(5.2, 0.2, 2.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.9, 0.0);
	glScalef(5.2, 0.2, 2.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -0.9, 0.0);
	glScalef(5.2, 0.2, 2.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân tu
	glPushMatrix();
	glTranslatef(2.0, -0.8, 0.6);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân tu
	glPushMatrix();
	glTranslatef(2.0, -0.8, -0.6);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân tu
	glPushMatrix();
	glTranslatef(-2.0, -0.8, 0.6);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân tu
	glPushMatrix();
	glTranslatef(-2.0, -0.8, -0.6);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();
}
//l2
void soFa() {
	GLfloat light_pos[] = { 2.0, 5.0, 5.0, 1.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	GLfloat ambient[] = { 0.50196078, 0.50196078,0.50196078, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diff_use[] = { 0.50196078,0.50196078, 0.50196078, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	GLfloat specular[] = { 0.25098039, 0.25098039, 0.25098039, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	GLfloat shininess = 10.0f;
	glMateriali(GL_FRONT_AND_BACK, GL_SHININESS, shininess);

	// Vẽ phan tua
	glPushMatrix();
	glScalef(1.0, 3.0, 6.0); 
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ phan ngoi
	glPushMatrix();
	glTranslatef(0.9, -0.75, 0.0); 
	glScalef(2.0, 1.5, 6.0); 
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();
}
//l2
void caiGhe() {
	//vi tri nguon sang
	GLfloat light_pos[] = { -5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0.8, 0.4, 0.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 0.8, 0.4, 0.1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.0, 0.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 15.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	// Vẽ mặt Ghế 
	glPushMatrix();
	glTranslatef(0.0, 0.5, 0.0);
	glScalef(2.0, 0.3, 2.0);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân Ghế
	glPushMatrix();
	glTranslatef(0.8, 0.0, 0.8);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân Ghế
	glPushMatrix();
	glTranslatef(0.8, 0.0, -0.8);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	// Vẽ chân Ghế
	glPushMatrix();
	glTranslatef(-0.8, 0.0, 0.8);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân Ghế
	glPushMatrix();
	glTranslatef(-0.8, 0.0, -0.8);
	glScalef(0.2, 1.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();
}
//l2
void caiBan() {
	//vi tri nguon sang
	GLfloat light_pos[] = { -5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0.8, 0.4, 0.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 0.8, 0.4, 0.1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.0, 0.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 10.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	// Vẽ mặt bàn
	glPushMatrix();
	glTranslatef(0.0, 0.9, 0.0);
	glScalef(3.0, 0.3, 7.0);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân bàn
	glPushMatrix();
	glTranslatef(1.0, 0.0, 2.6);
	glScalef(0.2, 1.8, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân bàn
	glPushMatrix();
	glTranslatef(-1.0, 0.0, -2.6);
	glScalef(0.2, 1.8, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân bàn
	glPushMatrix();
	glTranslatef(-1.0, 0.0, 2.6);
	glScalef(0.2, 1.8, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ chân bàn
	glPushMatrix();
	glTranslatef(1.0, 0.0, -2.6);
	glScalef(0.2, 1.8, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();
}
//l2
void caiTiVi() {
	//vi tri nguon sang
	GLfloat light_pos[] = { -5.0, 5.0, 0.0, 0.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0.1, 0.1, 0.36, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 0.1, 0.1, 0.36, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.0, 0.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 20.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	//ve man hinh
	glPushMatrix();
	glTranslatef(0.0, 0.0, -0.2);
	glScalef(3.0, 1.7, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.6, 0.0, 0.0);
	glScalef(0.2, 2.0, 0.6);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.6, 0.0, 0.0);
	glScalef(0.2, 2.0, 0.6);
	glutSolidCube(1.0);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.0, 0.9, 0.0);
	glScalef(3.4, 0.2, 0.6);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -0.9, 0.0);
	glScalef(3.4, 0.2, 0.6);
	glutSolidCube(1.0);
	glPopMatrix();

	// Vẽ chân tivi
	glPushMatrix();
	glTranslatef(0.0, -1.3, 0.0);
	glScalef(0.4, 0.5, 0.4);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	// Vẽ de tivi
	glPushMatrix();
	glTranslatef(0.0, -1.4, 0.0);
	glScalef(1.0, 0.3, 0.8);
	glutSolidCube(1.0);
	glPopMatrix();
}
//l5
void Hoa() {
	glPushMatrix();
	GLfloat light_pos[] = { 5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT5, GL_POSITION, light_pos);
	GLfloat ambient[] = { 1.0, 0.6, 0.8, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diffuse[] = { 1.0, 0.6, 0.8, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diffuse);
	GLfloat specular[] = { 0.0, 0.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	GLfloat shininess = 1.0f;
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);

	glTranslatef(0.0, 7, 0.0);
	glScalef(0.9, 0.7, 0.9);
	glutSolidDodecahedron();
	glPopMatrix();

	glPushMatrix();
	GLfloat light_pos1[] = { 5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT6, GL_POSITION, light_pos1);
	GLfloat ambient1[] = { 0.0, 1.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient1);
	GLfloat diffuse1[] = { 0.0, 1.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diffuse1);
	GLfloat shininess1 = 0.0f;
	glMaterialf(GL_FRONT, GL_SHININESS, shininess1);

	glTranslatef(0.0, 4, 0.0);
	glScalef(0.4, 5, 0.4);
	glutSolidCube(1);
	glPopMatrix();
}
//l6
void caiBinhHoa() {
	Hoa();
	GLfloat light_pos[] = { 5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT6, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0.0, 1.0 ,1.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 0.0, 1.0, 1.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.0, 0.0, 1.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 20.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	//vẽ thân bình
	glPushMatrix();
	glScalef(0.7, 1.3, 0.7);
	glutSolidSphere(2, 100, 100); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	//vẽ miệng bình
	glPushMatrix();
	glTranslatef(0.0, 4.5, 0.0);
	glScalef(0.35, 1.1, 0.35);
	glRotatef(90, 8.0, 0.0, 0.0); // Xoay vật thể quanh trục (8,0,0)
	glutSolidCone(3, 4, 100, 100);
	glPopMatrix();

	//vẽ đế bình
	glPushMatrix();
	glTranslatef(0.0, -2.5, 0.0);
	glScalef(0.3, 0.4, 0.3);
	glRotatef(-90, 8.0, 0.0, 0.0); // Xoay vật thể quanh trục (8,0,0)
	glutSolidCone(3, 4, 100, 100);
	glPopMatrix();

	glFlush();
}
//l6
void boAmChen() {
	GLfloat light_pos[] = { 5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT6, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0.0, 1.0 ,1.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 0.0, 1.0, 1.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.0, 0.0, 1.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 20.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.5);
	glScalef(0.2, 0.4, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.0, -0.5);
	glScalef(0.2, 0.4, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 0.0, 0.5);
	glScalef(0.2, 0.4, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.0, -0.5);
	glScalef(0.2, 0.4, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.3, -1.5);
	glutSolidTeapot(0.6);
	glPopMatrix();
}
//l2
void tranh() {
	glDisable(GL_LIGHTING);
	glColor3f(1, 1, 1);
	glPushMatrix();
	glTranslatef(-0.1, 0.0, 0.0);
	glScalef(0.08, 2.73, 4.0);
	glutSolidCube(1.0);
	glPopMatrix();
	glEnable(GL_LIGHTING);

	GLfloat light_pos[] = { 5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 1.0, 1.0 ,0.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 1.0, 1.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 1.0, 1.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 20.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	glPushMatrix();
	glTranslatef(0.0, 1.5, 0.0);
	glScalef(0.3, 0.2, 4.0);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -1.5, 0.0);
	glScalef(0.3, 0.2, 4.0);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.0, -1.9);
	glScalef(0.3, 3.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.0, 1.9);
	glScalef(0.4, 3.0, 0.2);
	glutSolidCube(1.0); // Vẽ hình hộp chữ nhật
	glPopMatrix();
}
//l2
void caiBongDen() {
	GLfloat light_pos[] = { 5.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 1.0, 0.5 ,0.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 1.0, 0.5, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.0, 0.0, 1.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 20.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	glEnable(GL_LIGHTING);
	glRotatef(-90, 8.0, 0.0, 0.0); // Xoay vật thể quanh trục (8,0,0)
	glutSolidCone(0.8, 0.7, 100, 100);
	glDisable(GL_LIGHTING);
	glColor3f(0.9, 0.9, 0.9);
	glutSolidSphere(0.5, 100, 100);
	glEnable(GL_LIGHTING);
}
//l5
void caiQuat()
{
	GLfloat light_pos[] = { 10.0, 5.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT5, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0,0.4,0.4, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 0,1,1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0,0,0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 2.5f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	//cuc trung tam
	glColor3f(0, 0, 0);
	glPushMatrix();
	glScalef(1.5, 0.7, 1.5);
	glutSolidSphere(1.5, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glScalef(7, 0.2, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glRotatef(90, 0, 8, 0);
	glScalef(7, 0.2, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.0, 5.6);
	glScalef(2, 0.2, 5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.0, -5.6);
	glScalef(2, 0.2, 5);
	glutSolidCube(1);
	glPopMatrix();

	//canh 1
	glPushMatrix();
	glTranslatef(5.6, 0.0, 0.0);
	glScalef(5, 0.2, 2);
	glutSolidCube(1);
	glPopMatrix();

	//canh 2
	glPushMatrix();
	glTranslatef(-5.6, 0.0, 0.0);
	glScalef(5, 0.2, 2);
	glutSolidCube(1);
	glPopMatrix();

	//day treo
	glPushMatrix();
	glTranslatef(0.0, 3, 0.0);
	glScalef(0.1, 4, 0.1);
	glutSolidCube(1);
	glPopMatrix();

	//ba cai coc
	glPushMatrix();
	glTranslatef(0.8, -1.2, -0.3);
	glScalef(0.3, 2, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -1.2, -0.3);
	glScalef(0.3, 2, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -1.2, 0.7);
	glScalef(0.3, 2, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	//ba cai bong
	glPushMatrix();
	glTranslatef(0.0, -2, 0.7);
	caiBongDen();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, -2, -0.3);
	caiBongDen();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.8, -2, -0.3);
	caiBongDen();
	glPopMatrix();
}

void caiGia() {
	GLfloat ambient[] = { 0.2, 0.098003922 ,0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diff_use[] = { 0.2, 0.098003922 ,0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);

	//tam ngang 1
	glPushMatrix();
	glTranslatef(2.3, 8.8, 0.0);
	glScalef(5.0, 0.5, 9.0);
	glutSolidCube(1);
	glPopMatrix();

	//tam ngang giua tren
	glPushMatrix();
	glTranslatef(2.3, 4.55, 0.0);
	glScalef(5.0, 0.5, 9.0);
	glutSolidCube(1);
	glPopMatrix();

	//tam ngang giua
	glPushMatrix();
	glTranslatef(2.3, 0.0, 0.0);
	glScalef(5.0, 0.5, 9.0);
	glutSolidCube(1);
	glPopMatrix();

	//tam ngang giua duoi
	glPushMatrix();
	glTranslatef(2.3, -4.55, 0.0);
	glScalef(5.0, 0.5, 9.0);
	glutSolidCube(1);
	glPopMatrix();

	//tam ngang duoi
	glPushMatrix();
	glTranslatef(2.3, -8.8, 0.0);
	glScalef(5.0, 0.5, 9.0);
	glutSolidCube(1);
	glPopMatrix();

	//tam doc sau
	glPushMatrix();
	glScalef(0.5, 18.0, 9.0);
	glutSolidCube(1);
	glPopMatrix();

	//tam doc trai
	glPushMatrix();
	glTranslatef(2.3, 0.0, -4.7);
	glScalef(5.0, 18.0, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	//tam doc phai
	glPushMatrix();
	glTranslatef(2.3, 0.0, 4.7);
	glScalef(5.0, 18.0, 0.5);
	glutSolidCube(1);
	glPopMatrix();
}
//l3
void conLon() {
	GLfloat light_pos[] = { 1.0, 1.0, 0.0, 0.0 };
	glLightfv(GL_LIGHT3, GL_POSITION, light_pos);
	//Thiet lap mau moi truong vat lieu
	GLfloat ambient[] = { 0.6, 0.0, 0.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thiet lap do khuech tan mau
	GLfloat diff_use[] = { 1.0, 0.0, 0.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//thiet lap do phan chieu
	GLfloat specular[] = { 0.8, 0.0, 0.0, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thiet lap do lon cho do phan chieu
	GLfloat shininess = 5.0;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	//ve than
	glPushMatrix();
	glScalef(0.7, 0.7, 1.0);
	glutSolidSphere(1.0, 100, 100);
	glPopMatrix();

	//ve chan truoc
	glPushMatrix();
	glTranslatef(-0.4, -0.4, 0.3);
	glScalef(0.2, 0.7, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	//ve chan truoc
	glPushMatrix();
	glTranslatef(0.4, -0.4, 0.3);
	glScalef(0.2, 0.7, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	//ve chan
	glPushMatrix();
	glTranslatef(0.4, -0.4, -0.3);
	glScalef(0.2, 0.7, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	//ve chan
	glPushMatrix();
	glTranslatef(-0.4, -0.4, -0.3);
	glScalef(0.2, 0.7, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	//ve tai
	glPushMatrix();
	glTranslatef(-0.3, 0.45, 0.5);
	glScalef(0.7, 1.0, 0.3);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();

	//ve tai
	glPushMatrix();
	glTranslatef(0.3, 0.45, 0.5);
	glScalef(0.7, 1.0, 0.3);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();

	//ve mui
	glPushMatrix();
	glTranslatef(0.0, 0.0, 1);
	glScalef(0.1, 0.1, 0.1);
	glutSolidTorus(1, 1, 100, 100);
	glPopMatrix();
}
//l2
void cuaSo() {
	glDisable(GL_LIGHTING);
	//kinh
	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(0.0, 0.0, 3);
	glScalef(0.01, 9, 6);
	glutSolidCube(1);
	glPopMatrix();
	glEnable(GL_LIGHTING);

	GLfloat light_pos[] = { 5.0, 5.0, 5.0, 1.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	GLfloat ambient[] = { 0.8, 0.4 ,0.1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diff_use[] = { 0.8, 0.4 ,0.1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	GLfloat specular[] = { 0.8, 0.4 ,0.1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	GLfloat shininess = 10.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	//thanh doc 1 
	glPushMatrix();
	glScalef(0.3, 9, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	//thanh doc 2 
	glPushMatrix();
	glTranslatef(0.0, 0.0, 6);
	glScalef(0.3, 9, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	//thanh doc 3 
	glPushMatrix();
	glTranslatef(0.0, 0.0, 3);
	glScalef(0.3, 9, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	//thanh ngang tren
	glPushMatrix();
	glTranslatef(0.0, 4.35, 3.0);
	glScalef(0.3, 0.3, 6);
	glutSolidCube(1);
	glPopMatrix();

	//thanh ngang giua
	glPushMatrix();
	glTranslatef(0.0, 1.5, 3.0);
	glScalef(0.3, 0.3, 6);
	glutSolidCube(1);
	glPopMatrix();

	//thanh ngang giua
	glPushMatrix();
	glTranslatef(0.0, -1.5, 3.0);
	glScalef(0.3, 0.3, 6);
	glutSolidCube(1);
	glPopMatrix();

	//thanh ngang duoi
	glPushMatrix();
	glTranslatef(0.0, -4.35, 3.0);
	glScalef(0.3, 0.3, 6);
	glutSolidCube(1);
	glPopMatrix();
}
//l2
void caicua() {
	GLfloat light_pos[] = { -2.0, 2.0, 2.0, 1.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	GLfloat ambient[] = { 0.40392157,0.15686275,0.023529412, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diff_use[] = { 0.40392157,0.15686275,0.023529412, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	GLfloat specular[] = { 0.6117647,0.32941177,0.1764706, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	GLfloat shininess = 10.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	//khung cua
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glScalef(0.3, 10, 6);
	glutSolidCube(1);
	glPopMatrix();

	//tam tren 
	glPushMatrix();
	glTranslatef(0.0, 4.6, 0.0);
	glScalef(0.6, 1, 6);
	glutSolidCube(1);
	glPopMatrix();

	//tam giua 
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glScalef(0.6, 1, 6);
	glutSolidCube(1);
	glPopMatrix();

	//tam duoi 
	glPushMatrix();
	glTranslatef(0.0, -4.6, 0.0);
	glScalef(0.6, 1, 6);
	glutSolidCube(1);
	glPopMatrix();

	//tam ben
	glPushMatrix();
	glTranslatef(0.0, 0.0, -2.6);
	glScalef(0.6, 10, 1);
	glutSolidCube(1);
	glPopMatrix();

	//tam ben
	glPushMatrix();
	glTranslatef(0.0, 0.0, 2.6);
	glScalef(0.6, 10, 1);
	glutSolidCube(1);
	glPopMatrix();

	//tam trong
	glPushMatrix();
	glTranslatef(0.0, 2.4, 0.0);
	glScalef(0.6, 2.5, 2.5);
	glutSolidCube(1);
	glPopMatrix();

	//tam trong
	glPushMatrix();
	glTranslatef(0.0, -2.4, 0.0);
	glScalef(0.6, 2.5, 2.5);
	glutSolidCube(1);
	glPopMatrix();

	//co dinh tay cam
	glPushMatrix();
	glTranslatef(-0.13, 1, -2.5);
	glScalef(1.8, 0.35, 0.35);
	glutSolidCube(1);
	glPopMatrix();

	//co dinh tay cam
	glPushMatrix();
	glTranslatef(-0.13, -1, -2.5);
	glScalef(1.8, 0.35, 0.35);
	glutSolidCube(1);
	glPopMatrix();

	//tay cam truoc
	glPushMatrix();
	glTranslatef(0.85, 0.0, -2.5);
	glScalef(0.4, 3, 0.4);
	glutSolidCube(1);
	glPopMatrix();

	//tay cam sau
	glPushMatrix();
	glTranslatef(-0.85, 0.0, -2.5);
	glScalef(0.4, 3, 0.4);
	glutSolidCube(1);
	glPopMatrix();

}
//l2
void vecay() {
	glDisable(GL_LIGHTING);
	glColor3f(0.49019608, 0.20392157, 0.047058824);
	glPushMatrix();
	glTranslatef(0.0, 2.5, 0.0);
	glScalef(0.3, 5, 0.3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 3, 0.6);
	glRotatef(30, 8, 0, 0);
	glScalef(0.3, 2.5, 0.3);
	glutSolidCube(1);
	glPopMatrix();
	glEnable(GL_LIGHTING);

	GLfloat light_pos[] = { -5.0, 5.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos);
	GLfloat ambient[] = { 0.1, 1.0 ,0.1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	GLfloat diff_use[] = { 0.1, 1.0, 0.1, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	GLfloat specular[] = { 0.0, 0.0, 0.0, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	GLfloat shininess = 10.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	glPushMatrix();
	glTranslatef(0.0, 3.5, 1);
	glScalef(0.5, 0.5, 0.5);
	glutSolidDodecahedron();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 6, 0.0);
	glScalef(0.8, 0.8, 0.8);
	glutSolidDodecahedron();
	glPopMatrix();
}
//l3
void chaucay() {
	vecay();
	GLfloat light_pos[] = { 6.0, 6.0, 1.0, 0.5 };
	glLightfv(GL_LIGHT3, GL_POSITION, light_pos);
	//Thi?t l?p màu môi tr??ng c?a v?t li?u
	GLfloat ambient[] = { 0.0, 0.0 ,0.2, 0.5 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	//Thi?t l?p ?? khuy?ch tán màu
	GLfloat diff_use[] = { 0.2, 0.2, 0.8, 0.5 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
	//Thi?t l?p ?? ph?n chi?u
	GLfloat specular[] = { 0.0, 0.0, 0.2, 0.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	//Thi?t l?p ?? l?n cho specular
	GLfloat shininess = 3.0f;
	glMateriali(GL_FRONT, GL_SHININESS, shininess);

	//vẽ thân bình
	glPushMatrix();
	glScalef(1.0, 0.7, 1.0);
	glutSolidSphere(2, 100, 100); // Vẽ hình hộp chữ nhật
	glPopMatrix();

	//vẽ miệng bình
	glPushMatrix();
	glColor3f(0.4, 0.4, 1.0);
	glTranslatef(0.0, 1.5, 0.0);
	glScalef(0.5, 0.5, 0.5);
	glRotatef(90, 8.0, 0.0, 0.0); // Xoay vật thể quanh trục (8,0,0)
	glutSolidCone(3, 4, 100, 100);
	glPopMatrix();

	//vẽ miệng bình
	glPushMatrix();
	glColor3f(0.4, 0.4, 1.0);
	glTranslatef(0.0, -1.6, 0.0);
	glScalef(0.4, 0.4, 0.4);
	glRotatef(-90, 8.0, 0.0, 0.0); // Xoay vật thể quanh trục (8,0,0)
	glutSolidCone(3, 4, 100, 100);
	glPopMatrix();
}

void tuong() {
	//Thiết lập smooth shading
	glShadeModel(GL_SMOOTH);

	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);

	//mat sau tranh
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(23.0, 0.0, 0.0);
	glVertex3f(23.0, 10.0, 0.0);
	glVertex3f(0.0, 10.0, 0.0);

	//mat sau tivi
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 13.0);
	glVertex3f(0.0, 10.0, 13.0);
	glVertex3f(0.0, 10.0, 0.0);

	//noc nha
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 10.0, 0.0);
	glVertex3f(23.0, 10.0, 0.0);
	glVertex3f(23.0, 10.0, 13.0);
	glVertex3f(0.0, 10.0, 13.0);

	//san nha
	glNormal3f(0.0, -1.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(23.0, 0.0, 0.0);
	glVertex3f(23.0, 0.0, 13.0);
	glVertex3f(0.0, 0.0, 13.0);

	//mat sau cua so
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 0.0, 13.0);
	glVertex3f(23.0, 0.0, 13.0);
	glVertex3f(23.0, 10.0, 13.0);
	glVertex3f(0.0, 10.0, 13.0);

	//tren cua  ok
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(23.0, 6.6, 0.0);
	glVertex3f(23.0, 6.6, 13.0);
	glVertex3f(23.0, 10.0, 13.0);
	glVertex3f(23.0, 10.0, 0.0);

	//canh tu giay
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(23.0, 0.0, 0.0);
	glVertex3f(23.0, 0.0, 2.5);
	glVertex3f(23.0, 10.0, 2.5);
	glVertex3f(23.0, 10.0, 0.0);

	//doi dien tu giay
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(23.0, 0.0, 13.0);
	glVertex3f(23.0, 0.0, 12.48);
	glVertex3f(23.0, 10.0, 12.48);
	glVertex3f(23.0, 10.0, 13.0);


	glEnd();
}

void DrawCoordinate() {
	glDisable(GL_LIGHTING);
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(10.0, 0.0, 0.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 10.0, 0.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 10.0);
	glEnd();

	glEnable(GL_LIGHTING);
}

void keybroad(unsigned char key, int x, int y) {
	switch (key)
	{
	case '1':
		klight2 = !klight2;
		break;
	case '2'://dong, mo cua, mo cua - nha sang
		klight7 = !klight7;
		od = !od;
		break;
	case '3': 
		klight0 = !klight0;
		break;
	case 'w': // move eye point upwards along Y axis
		eyeY += 1.0;
		break;
	case 's': // move eye point downwards along Y axis
		eyeY -= 1.0;
		break;
	case 'a': // move eye point left along X axis
		eyeX -= 1.0;
		break;
	case 'd': // move eye point right along X axis
		eyeX += 1.0;
		break;
	case 'o':  //zoom out
		eyeZ += 1;
		break;
	case 'i': //zoom in
		eyeZ -= 1;
		break;
	case 'q': //back to default eye point and ref point
		eyeX = 23.0, eyeY = 7.0, eyeZ = 12.0, refX = 2.0, refY = 1.0, refZ = 2.0;
		break;
	//case 'e': //back to default eye point and ref point
	//	eyeX = 30.0; eyeY = 10.0; eyeZ = 30.0;
	//	refX = 0.0; refY = 0.0; refZ = 0.0;
	//	break;
	//case 'r': //back to default eye point and ref point
	//	eyeX = 0.0; eyeY = 5.0; eyeZ = 10.0;
	//	refX = 20.0; refY = 6.0; refZ = 8.0;
	//	break;
	//case 't': //back to default eye point and ref point
	//	eyeX = 23.0; eyeY = 3.0; eyeZ = 10.0;
	//	refX = 0.0; refY = 5.0; refZ = 6.0;
	//	break;
	case 'j': // move ref point upwards along Y axis
		refY += 1.0;
		break;
	case 'n': // move ref point downwards along Y axis
		refY -= 1.0;
		break;
	case 'b': // move ref point left along X axis
		refX -= 1.0;
		break;
	case 'm': // move eye point right along X axis
		refX += 1.0;
		break;
	case 'k':  //move ref point away from screen/ along z axis
		refZ += 1;
		break;
	case 'l': //move ref point towards screen/ along z axis
		refZ -= 1;
		break;

	//light
	case '0':
		eyeXl = 23.0, eyeYl = 6.0, eyeZl = 15.0, refXl = -5.0, refYl = 0.0, refZl = 0.0;
		break;
	case ';': 
		eyeYl += 1.0;
		break;
	case '.': 
		eyeYl -= 1.0;
		break;
	case ',': 
		eyeXl -= 1.0;
		break;
	case '/': 
		eyeXl += 1.0;
		break;
	case '[':  
		eyeZl += 1;
		break;
	case ']': 
		eyeZl -= 1;
		break;
	case 'f': 
		refYl += 1.0;
		break;
	case 'c':
		refYl -= 1.0;
		break;
	case 'x': 
		refXl -= 1.0;
		break;
	case 'v': 
		refXl += 1.0;
		break;
	case '4':  
		refZl += 1;
		break;
	case '5':
		refZl -= 1;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}

void Display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//nguon sang cua
	if (klight2) {
		glEnable(GL_LIGHT2);
	}
	else
	{
		glDisable(GL_LIGHT2);
	}

	if (klight0) {
		glEnable(GL_LIGHT0);
	}
	else
	{
		glDisable(GL_LIGHT0);
	}

	if (klight7) {
		glEnable(GL_LIGHT7);
	}
	else
	{
		glDisable(GL_LIGHT7);
	}
	//nguon sang 2 tu cua vao
	float light_pos2[] = { eyeXl, eyeYl, eyeZl, 1.0 };
	glLightfv(GL_LIGHT7, GL_POSITION, light_pos2);
	GLfloat ambient2[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat diffuse2[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat specular2[] = { 1.0, 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT7, GL_AMBIENT, ambient2);
	glLightfv(GL_LIGHT7, GL_DIFFUSE, diffuse2);
	glLightfv(GL_LIGHT7, GL_SPECULAR, specular2);
	GLfloat spotExp2 = 10.0;
	glLightf(GL_LIGHT7, GL_SPOT_EXPONENT, spotExp2);
	GLfloat spotCutoff2 = 30.0;
	glLightf(GL_LIGHT7, GL_SPOT_CUTOFF, spotCutoff2);
	float light_dir2[3] = { refXl,refYl,refZl};
	glLightfv(GL_LIGHT7, GL_SPOT_DIRECTION, light_dir2);
	
	glLoadIdentity();
	gluLookAt(eyeX, eyeY, eyeZ, refX, refY, refZ, 0, 1, 0);
	// từ tủ vào
	//gluLookAt(23, 7.0, 0, 2, 1, 5, 0, 1, 0);
	//gluLookAt(1, 7.0, 12, 2, 1, 5, 0, 1, 0);
	// từ phía trong ra cửa 
	//gluLookAt(2, eyeY-3, 1, 17, refY+4, refZ, 0, 1, 0);
	DrawCoordinate();

	//ke sach
	glPushMatrix();
	glTranslatef(0.7, 3.26, 1.5);// di chuyen thay doi vi tri
	glScaled(0.2, 0.25, 0.25);//thay doi khich thuoc
	caiGia();
	glPopMatrix();

	//conlon
	glPushMatrix();
	glTranslatef(1, 3.58, 1.3);
	glScaled(0.5, 0.5, 0.5);
	conLon();
	glPopMatrix();

	//binh tren ke
	glPushMatrix();
	glTranslatef(1.2, 2.49, 1.3);
	glScaled(0.3, 0.1, 0.3);
	caiBinhHoa();
	glPopMatrix();

	//tu tivi
	glPushMatrix();
	glTranslatef(1, 1.88, 5.5);
	glRotatef(90, 0, 8, 0);//xoay vat the
	glScaled(0.9, 0.7, 0.4); //(z,y,x)
	caiTu();
	glPopMatrix();

	//sach tren ke
	glPushMatrix();
	glTranslatef(1.2, 4.65, 1.45);
	glScaled(0.7, 0.4, 1.2);
	sach();
	glPopMatrix();

	//tivi
	glPushMatrix();
	glTranslatef(1, 4, 5.5);
	glRotatef(90, 0, 8, 0);
	glScaled(1.3, 1, 0.5); //(z, y, x)
	caiTiVi();
	glPopMatrix();

	//sofa x
	glPushMatrix();
	glTranslatef(8.5, 2, 0.7);
	glRotatef(-90, 0, 8, 0);
	glScaled(0.9, 0.7, 0.9); //(z, y, x)
	soFa();
	glPopMatrix();

	//sofa z
	glPushMatrix();
	glTranslatef(13, 2, 6);
	glRotatef(-180, 0, 8, 0);
	glScaled(0.9, 0.7, 0.9); //(z, y, x)
	soFa();
	glPopMatrix();

	//cai ban
	glPushMatrix();
	glTranslatef(8.3, 1.55, 6);
	glScaled(1.0, 0.7, 0.6);
	caiBan();
	glPopMatrix();

	//cai ghe
	glPushMatrix();
	glTranslatef(8.3, 1.3, 9.5);
	glScaled(0.6, 0.7, 0.6);
	caiGhe();
	glPopMatrix();

	//bo am chen
	glPushMatrix();
	glTranslatef(8.3, 2.4, 6);
	glScaled(0.5, 0.5, 0.5);
	boAmChen();
	glPopMatrix();

	//binh hoa tren ban
	glPushMatrix();
	glTranslatef(8.2, 2.75, 7.3);
	glScaled(0.17, 0.17, 0.17);
	caiBinhHoa();
	glPopMatrix();

	//tranh
	glPushMatrix();
	glTranslatef(9, 6, 0.3);
	glRotatef(-90, 0, 8, 0);
	glScaled(1.0, 0.8, 1.55);//(z, y, x)
	tranh();
	glPopMatrix();

	//chau cay canh tivi
	glPushMatrix();
	glTranslatef(1, 1.8, 8.8);
	glScaled(0.35, 0.4, 0.35);
	chaucay();
	glPopMatrix();

	//tu giay
	glPushMatrix();
	glTranslatef(17.5, 2, 1.2);
	glScaled(0.7, 1.5, 0.7);
	caiTu();
	glPopMatrix();

	//binh hoa tren tu dep
	glPushMatrix();
	glTranslatef(18, 4, 1);
	glScaled(0.17, 0.17, 0.17);
	caiBinhHoa();
	glPopMatrix();

	//cua dong
	if (!od) {
		//cua ra vao
		glPushMatrix();
		glTranslatef(23, 3.3, 10);
		glScaled(0.8, 0.65, 0.8);
		caicua();
		glPopMatrix();

		//cua ra vao
		glPushMatrix();
		glTranslatef(23, 3.3, 5);
		glRotatef(180, 8, 0, 0);
		glScaled(0.8, 0.65, 0.8);
		caicua();
		glPopMatrix();
	}
	//cua mo
	else {
		//cua ra vao phia cua so
		glPushMatrix();
		glTranslatef(25.4, 3.3, 12.5);
		glRotatef(-90, 0, 8, 0);
		glScaled(0.8, 0.65, 0.8);
		caicua();
		glPopMatrix();

		//cua ra vao gan tu dep
		glPushMatrix();
		glTranslatef(25.4, 3.3, 2.5);
		glRotatef(90, 0, 8, 0);
		glRotatef(180, 8, 0, 0);
		glScaled(0.8, 0.65, 0.8);
		caicua();
		glPopMatrix();
	}
	//cua so
	glPushMatrix();
	glTranslatef(7, 4.7, 13);
	glRotatef(90, 0, 8, 0);
	glScaled(0.5, 0.4, 0.6);//(z,y,x)
	cuaSo();
	glPopMatrix();

	//chau cay gan cua
	glPushMatrix();
	glTranslatef(16.5, 0.65, 12);
	glScaled(0.4, 0.4, 0.4);
	chaucay();
	glPopMatrix();

	//quat
	glPushMatrix();
	glTranslatef(8, 8, 7);
	glScaled(0.4, 0.4, 0.4);
	caiQuat();
	glPopMatrix();

	//bac them
	glPushMatrix();
	glTranslatef(7.5, 0.5, 6.5);
	glScaled(15, 1, 13);
	bacThem();
	glPopMatrix();

	tuong();

	glFlush();
}

void ReShape(int width, int height) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	float ratio = (float)width / (float)height;
	gluPerspective(45.0, ratio, 1, 100.0);
	glMatrixMode(GL_MODELVIEW);
}

void Init() {
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	//nguon sang den tran
	float light_pos1[] = { 20.0,5.0,20.0,1.0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_pos1);
	GLfloat ambient1[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat diffuse1[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat specular1[] = { 1.0, 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT2, GL_AMBIENT, ambient1);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, diffuse1);
	glLightfv(GL_LIGHT2, GL_SPECULAR, specular1);
	GLfloat spotExp1 = 10.0;
	glLightf(GL_LIGHT2, GL_SPOT_EXPONENT, spotExp1);
	GLfloat spotCutoff1 = 90.0;
	glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, spotCutoff1);
	float light_dir1[3] = { 0, -1, 0};
	glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, light_dir1);
}
int main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("phong khach");
	Init();
	glutReshapeFunc(ReShape);
	glutDisplayFunc(Display);
	glutKeyboardFunc(keybroad);
	glutMainLoop();
	return 0;
}