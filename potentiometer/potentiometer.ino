int percent = 0;
int prevPercent = 0;
int pinInput = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  percent = round(analogRead(pinInput) / 1024.00 * 100);

  if(percent != prevPercent) {

    Serial.println(percent);
    prevPercent = percent;
    
  }

  delay(100);

}
