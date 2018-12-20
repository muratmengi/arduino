int data;  
void setup() {  
    Serial.begin(9600);  
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);  
}  
void loop() {  
    if (Serial.available()) {  
        data = Serial.read();  
        if (data == 'X') {  
            digitalWrite(4, HIGH);  
        } else {  
            digitalWrite(4, LOW);  
        }

       // delay(20);

        if (data == 'Y') {  
            digitalWrite(5, HIGH);  
        } else {  
            digitalWrite(5, LOW);  
        }

       // delay(20);

        if (data == 'Z') {  
            digitalWrite(6, HIGH);  
        } else {  
            digitalWrite(6, LOW);  
        }
        //delay (50);

        if (data == 'V') {  
            digitalWrite(7, HIGH);  
        } else {  
            digitalWrite(7, LOW);  
        }


        if (data == 'T') {  
            digitalWrite(8, HIGH);  
        } else {  
            digitalWrite(8, LOW);  
        }


        if (data == 'A') {  
            digitalWrite(9, HIGH);  
        } else {  
            digitalWrite(9, LOW);  
        }


        if (data == 'U') {  
            digitalWrite(10, HIGH);  
        } else {  
            digitalWrite(10, LOW);  
        }

        if (data == 'F') {  
            digitalWrite(11, HIGH);  
        } else {  
            digitalWrite(11, LOW);  
        }

        if (data == 'S') {  
            digitalWrite(12, HIGH);  
        } else {  
            digitalWrite(12, LOW);  
        }
              
    } 
    //delay(150);
    //return; 
} 
