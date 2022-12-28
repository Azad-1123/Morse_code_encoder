int buzz=8;
int dot=60;
int sp=60;
int dash=180;
int wd=420;
int len=0;
char ch;
String msg;

void A()
{ 
  //for A
  delay(wd);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void B(){
  //forB DASH,DOT,DOT,DOT
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  delay(wd);
}

void C(){

  //for c dash,dot,dash,dot
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}
  void D()
  {
  //for d DAH,DOT,DOT
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void E(){
  //for E DOT
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void f(){
  // for F DOT,DOT,DASH,DOT
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void G(){
  //for G DASH,DASH,DOT
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void H(){
  //for H DOT,DOT,DOT,DOT

  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void I(){
 //for I  DOT,DOT
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void J(){
  //for J dot,dash,dash,dash
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
}
void K(){
  //for K  dash,dot,dash
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
}

void L(){
  // for L dot ,dash,dot,dot
   digitalWrite(buzz,HIGH);
   delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
}

void M(){
  //FOR M DASH DASH

   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
}
 void N(){ 
 //for N dash,dot

   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
 }
 void O(){
// for o dash,dash,dash
 digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
 }

 void P(){
 //for P dot,dash,dash,dot

  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
 }

 void Q(){
//for Q  dash,dash,dot,dash
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
 }

 void R(){
//for R dot,dash,dot

 digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);}


  void S(){
    
//for S dot ,dot,dot
 digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void T(){
    
  //for T dash
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void U(){
 //for U dot,dot,dash

  digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
   void V()
   {
  //for V dot,dot,dot,dash
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void W(){
//for W dot,dash,dash

 digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
  void X(){
  //for X dash,dot,dot,dash
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void Y(){
 //for Y dash,dot,dash,dash
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void Z(){
  //for Z dash,dash,dot,dot

  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void one(){
//for 1 dot,dash,dash,dash,dash
 digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
 void two(){
// for 2 dot,dot,dash,dash,dash
 digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
  void three()
  {
  //for 3 dot,dot,dot,dash,dash

   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void four(){
    
  // for 4 dot dot dot dot dash

   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }

  void five()
  {
  //for  5 .....
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd); 
  }
  void six(){
  //for 6 -....
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
  void seven(){
    

  //for 7 --...
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
  void eight(){
  //for 8  ---..
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
  void nine()
  {
  //for9  ----.
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
   digitalWrite(buzz,HIGH);
  delay(dot);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
  void zero()
  {
    //for zero dash ,dash,dash,dash
    digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(sp);
  digitalWrite(buzz,HIGH);
  delay(dash);
  digitalWrite(buzz,LOW);
  delay(wd);
  }
  void morse()
{
  if (ch == 'A' || ch == 'a')
  {
    A();
    Serial.print(" ");
  }
  else if (ch == 'B' || ch == 'b')
  {
    B();
    Serial.print(" ");
  }
  else if (ch == 'C' || ch == 'c')
  {
    C();
    Serial.print(" ");
  }
  else if (ch == 'D' || ch == 'd')
  {
    D();
    Serial.print(" ");
  }
  else if (ch == 'E' || ch == 'e')
  {
    E();
    Serial.print(" ");
  }
  else if (ch == 'f' || ch == 'f')
  {
    f();
    Serial.print(" ");
  }
  else if (ch == 'G' || ch == 'g')
  {
    G();
    Serial.print(" ");
  }
  else if (ch == 'H' || ch == 'h')
  {
    H();
    Serial.print(" ");
  }
  else if (ch == 'I' || ch == 'i')
  {
    I();
    Serial.print(" ");
  }
  else if (ch == 'J' || ch == 'j')
  {
    J();
    Serial.print(" ");
  }
  else if (ch == 'K' || ch == 'k')
  {
    K();
    Serial.print(" ");
  }
  else if (ch == 'L' || ch == 'l')
  {
    L();
    Serial.print(" ");
  }
  else if (ch == 'M' || ch == 'm')
  {
    M();
    Serial.print(" ");
  }
  else if (ch == 'N' || ch == 'n')
  {
    N();
    Serial.print(" ");
  }
  else if (ch == 'O' || ch == 'o')
  {
    O();
    Serial.print(" ");
  }
  else if (ch == 'P' || ch == 'p')
  {
    P();
    Serial.print(" ");
  }
  else if (ch == 'Q' || ch == 'q')
  {
    Q();
    Serial.print(" ");
  }
  else if (ch == 'R' || ch == 'r')
  {
    R();
    Serial.print(" ");
  }
  else if (ch == 'S' || ch == 's')
  {
    S();
    Serial.print(" ");
  }
  else if (ch == 'T' || ch == 't')
  {
    T();
    Serial.print(" ");
  }
  else if (ch == 'U' || ch == 'u')
  {
    U();
    Serial.print(" ");
  }
  else if (ch == 'V' || ch == 'v')
  {
    V();
    Serial.print(" ");
  }
  else if (ch == 'W' || ch == 'w')
  {
    W();
    Serial.print(" ");
  }
  else if (ch == 'X' || ch == 'x')
  {
    X();
    Serial.print(" ");
  }
  else if (ch == 'Y' || ch == 'y')
  {
    Y();
    Serial.print(" ");
  }
  else if (ch == 'Z' || ch == 'z')
  {
    Z();
    Serial.print(" ");
  }
  else if (ch == '0')
  {
    zero();
    Serial.print(" ");
  }
  else if (ch == '1')
  {
    one();
    Serial.print(" ");
  }
  else if (ch == '2')
  {
    two();
    Serial.print(" ");
  }
  else if (ch == '3')
  {
    three();
    Serial.print(" ");
  }
  else if (ch == '4')
  {
    four();
    Serial.print(" ");
  }
  else if (ch == '5')
  {
    five();
    Serial.print(" ");
  }
  else if (ch == '6')
  {
    six();
    Serial.print(" ");
  }
  else if (ch == '7')
  {
    seven();
    Serial.print(" ");
  }
  else if (ch == '8')
  {
    eight();
    Serial.print(" ");
  }
  else if (ch == '9')
  {
    nine();
    Serial.print(" ");
  }
  else if(ch == ' ')
  {
    delay(wd);
    Serial.print("/ ");
  }
  else
    Serial.println("Unknown symbol!");
}
void String2Morse()
{
  len = msg.length();
  for (int i = 0; i < len; i++)
  {
    ch = msg.charAt(i);
    morse();
  }
}
void setup(){
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
  
}
   void loop(){
    Serial.println("Enter your text that want to encode:");
    while (Serial.available()==0)
  {
    
  }
    Serial.println("Encoding...");
    delay(1500);
    msg=Serial.readString();
    String2Morse();
    delay(1000);
}

  
  
  
