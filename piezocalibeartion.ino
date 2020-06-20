const int knock1 = 15; 
int sensorReading1 = 0;  

void setup() {
  pinMode(knock1, INPUT); // declare the ledPin as as OUTPUT
  Serial.begin(9600);       // use the serial port
}

void loop() {
    sensorReading1 = digitalRead(knock1);
  Serial.println(sensorReading1);
  delay(1000);
}
/*  int p=0;
  // read the sensor and store it in the variable sensorReading:
  sensorReading1 = analogRead(knock1);
  Serial.print(sensorReading1);
  if(sensorReading1==1023)
  {p=1;
  Serial.print("P1 = ");
  Serial.println(p);
  }
  else
  {Serial.print("P1 = ");
  Serial.println(p);
    }
  
  delay(1000);  // delay to avoid overloading the serial port buffer
}*/
