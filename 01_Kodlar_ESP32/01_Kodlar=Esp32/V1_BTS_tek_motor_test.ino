/*
  RoboAraç Max AI - V1
  ESP32 + BTS7960 Tek Motor Test Kodu

  Amaç:
  - 1 adet BTS motor sürücü ile 1 adet DC motoru test etmek
  - İleri, dur, geri hareketini kontrol etmek

  DİKKAT:
  - ESP32'ye kesinlikle 12V verme
  - BTS motor beslemesi ayrı 12V hattan gelecek
  - ESP32 GND ile BTS GND ortak olacak
*/

// BTS7960 bağlantı pinleri
#define RPWM 25
#define LPWM 26
#define R_EN 27
#define L_EN 14

// ESP32 PWM ayarları
#define PWM_FREQ 1000
#define PWM_RESOLUTION 8

#define RPWM_CHANNEL 0
#define LPWM_CHANNEL 1

int hiz = 120; // 0-255 arası hız değeri. İlk test için düşük tutuldu.

void setup() {
  Serial.begin(115200);

  pinMode(R_EN, OUTPUT);
  pinMode(L_EN, OUTPUT);

  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, HIGH);

  ledcSetup(RPWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
  ledcSetup(LPWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);

  ledcAttachPin(RPWM, RPWM_CHANNEL);
  ledcAttachPin(LPWM, LPWM_CHANNEL);

  motorDur();

  Serial.println("RoboArac Max AI - BTS tek motor test basladi");
}

void loop() {
  Serial.println("Motor ileri donuyor");
  motorIleri(hiz);
  delay(3000);

  Serial.println("Motor durdu");
  motorDur();
  delay(2000);

  Serial.println("Motor geri donuyor");
  motorGeri(hiz);
  delay(3000);

  Serial.println("Motor durdu");
  motorDur();
  delay(2000);
}

void motorIleri(int pwmDegeri) {
  ledcWrite(RPWM_CHANNEL, pwmDegeri);
  ledcWrite(LPWM_CHANNEL, 0);
}

void motorGeri(int pwmDegeri) {
  ledcWrite(RPWM_CHANNEL, 0);
  ledcWrite(LPWM_CHANNEL, pwmDegeri);
}

void motorDur() {
  ledcWrite(RPWM_CHANNEL, 0);
  ledcWrite(LPWM_CHANNEL, 0);
}
