// --- Definindo Controle ---

char state;

// --- Definindo Motores ---
#define in1 9
#define in2 6
#define in3 5
#define in4 3

// --- Iniciando ---
void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

// --- Rodando pra sempre ---
void loop() {
  if(Serial.available()){
    state = Serial.read();
    if (state=='F'){
      frente();
    }
    if (state=='B'){

    }
    if (state=='R'){
      direita();
    }
    if (state=='L'){
      esquerda();
    }
    if (state=='S'){
      para();
    }
  }
}

// --- Funções legais ---

// --- Frente ---
void frente(){
  digitalWrite(in1, 100);
  digitalWrite(in2, LOW);
  digitalWrite(in3, 100);
  digitalWrite(in4, LOW);
}

// --- Direita ---
void direita(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

// --- Esquerda ---
void esquerda(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

// --- Para ---
void para(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
