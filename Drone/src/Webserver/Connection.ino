#include <ESP8266WiFi.h>
#include <Webserver\Website.ino>

const char* ssid = "ASUS";
const char* password = "muffin12";
unsigned long currentTime = millis();
unsigned long previousTime = 0;
const long timeoutTime = 2000;
String header;

WiFiServer server(80);

void setup(){
    Serial.begin(115200);
    Serial.print("Connection to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);
    while(WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.println(".");
    }

Serial.println("");
Serial.println("Wifi Connected.");
Serial.println("IP Address: ");
Serial.println(WiFi.localIP());
server.begin();
}

void loop(){
    WiFiClient client = server.available();
    if(client) {
        Serial.println("New Client.");
        String currentline = "";
        currentTime = millis();
        if(client.available()){
            

        }

    }
}


 