int sensor_pin= A0;
int output_value;
void setup(){
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  Serial.println("Reading from the Moisture sensor...");
  delay(2000);
}
void loop(){
  output_value= analogRead (sensor_pin);
  output_value= map (output_value,550,10,0,100);
  Serial.print("Moisture:");
  Serial.print(output_value);
  Serial.println("%");
if (output_value<0){
  digitalWrite(4, LOW);
}
else{
  digitalWrite (4,HIGH);  
}
delay (1000);
}
