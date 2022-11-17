#define LEDR 5
#define LEDG 18
#define LEDB 19

#define R_Channel 0
#define G_Channel 1
#define B_Channel 2

#define pwm_frequency 5000
#define pwm_resolution 8


void setup() {
  
  // put your setup code here, to run once:
  ledcAttachPin(LEDR, R_Channel);
  ledcAttachPin(LEDG, G_Channel);
  ledcAttachPin(LEDB, B_Channel);

  ledcSetup(R_Channel, pwm_frequency, pwm_resolution);
  ledcSetup(G_Channel, pwm_frequency, pwm_resolution);
  ledcSetup(B_Channel, pwm_frequency, pwm_resolution);
}

void loop() {
  // put your main code here, to run repeatedly:
  RGB_Color(255,0,0);
  delay(500);

  RGB_Color(0,255,0);
  delay(500);

  RGB_Color(0,0,255);
  delay(500);

}

void RGB_Color(int i, int j, int k){
  ledcWrite(R_Channel,i);
  ledcWrite(G_Channel,j);
  ledcWrite(B_Channel,k);
}
