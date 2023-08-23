#define m1p1  2
#define m1p2  3
#define m2p1  4
#define m2p2  5
#define m3p1  6
#define m3p2  7

void motors_init()
{
  pinMode(m1p1,OUTPUT);
  pinMode(m1p2,OUTPUT);
  pinMode(m2p1,OUTPUT);
  pinMode(m2p2,OUTPUT);
  pinMode(m3p1,OUTPUT);
  pinMode(m3p2,OUTPUT);
}

////////// motor 1 ....//////////
void motor1_f()
{
  digitalWrite(m1p1, HIGH);
  digitalWrite(m1p2, LOW);
}

void motor1_b()
{
  digitalWrite(m1p1, LOW);
  digitalWrite(m1p2, HIGH);
}

void motor1_s()
{
  digitalWrite(m1p1, LOW);
  digitalWrite(m1p2, LOW);
}
////////// motor 2 ....//////////
/////////////////////////////////
void motor2_f()
{
  digitalWrite(m2p1, HIGH);
  digitalWrite(m2p2, LOW);
}

void motor2_b()
{
  digitalWrite(m2p1, LOW);
  digitalWrite(m2p2, HIGH);
}

void motor2_s()
{
  digitalWrite(m2p1, LOW);
  digitalWrite(m2p2, LOW);
}

////////// motor 3 ....//////////
/////////////////////////////////
/////////////////////////////////

void motor3_f()
{
  digitalWrite(m3p1, HIGH);
  digitalWrite(m3p2, LOW);
}

void motor3_b()
{
  digitalWrite(m3p1, LOW);
  digitalWrite(m3p2, HIGH);
}

void motor3_s()
{
  digitalWrite(m3p1, LOW);
  digitalWrite(m3p2, LOW);
}
