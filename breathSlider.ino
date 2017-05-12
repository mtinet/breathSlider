int led[10] = { 13,12,11,10,9,8,7,6,5,4 };  // LED 변수입니다요
int inputed = 0;  // 입력된 센서 값
int score = 0;    // 점수 변수
 
#define FIRST_MIN_VALUE 60    // 1점 올라가는 최소점수
#define FIRST_MAX_VALUE 200    // 1점 올라가는 최대점수
 
#define SECOND_MIN_VALUE 201   // 2점 올라가는 최소점수
#define SECOND_MAX_VALUE 1023    // 2점 올라가는 최대점수
 
#define SENSOR_READ A0       // 아날로그 센서 받는 핀
 
void THINGS_ON(int LED1, int LED2);
void THINGS_OFF(int LED1, int LED2);
 
void setup()
{
  Serial.begin(9600);
  for (int i = 0; i < 10; ++i)
  {
 
    pinMode(led[i], OUTPUT);
  }
}
 
void loop()
{
  inputed = analogRead(SENSOR_READ);
  Serial.print("SENSOR : ");
  Serial.print(inputed);
  Serial.print("  SCORE : ");
  Serial.println(score);
 
 
  if (inputed >= FIRST_MIN_VALUE &&
    inputed < FIRST_MAX_VALUE)
  {
    score+= 17;
  }
  else if (inputed > SECOND_MIN_VALUE &&
      inputed <= SECOND_MAX_VALUE)
  {
    score += 20;
  }
  else
  {
    score++;
    delay(50);
  }
 
  //=================================================
 
  if (score >= 0 &&
    score <= 60)
  {
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
  else if (score >= 51 &&
    score <= 100)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
  else if (score >= 101 &&
    score <= 150)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
  else if (score >= 151 &&
    score <= 200)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
  else if (score >= 201 &&
    score <= 250)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
  else if (score >= 251 &&
    score <= 300)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
    else if (score >= 301 &&
    score <= 350)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
    else if (score >= 351 &&
    score <= 400)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
    else if (score >= 401 &&
    score <= 470)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], LOW);
    digitalWrite(led[9], LOW);
  }
      else if (score >= 471 &&
    score <= 540)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], HIGH);
    digitalWrite(led[9], LOW);
  }
      else if (score >= 541 &&
    score <= 570)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], HIGH);
    digitalWrite(led[9], HIGH);
  }
   else if (score >= 571 &&
    score <= 1000000)
  {
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], HIGH);
    digitalWrite(led[9], HIGH);
  }
  
  if(score <= 0)
  {
    score = 0;
  }
  delay(100);
}
 
 
void THINGS_ON(int LED1, int LED2)
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
}
 
void THINGS_OFF(int LED1, int LED2)
{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}
