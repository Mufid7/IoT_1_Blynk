// Pin yang terhubung ke LED
const int ledPin = 2;

// Setup dijalankan sekali saat program dimulai
void setup() {
  // Atur pin LED sebagai output
  pinMode(ledPin, OUTPUT);
}

// Loop dijalankan berulang kali setelah setup
void loop() {
  // Nyalakan LED
  digitalWrite(ledPin, HIGH);
  
  // Tunggu selama 1 detik (1000 milidetik)
  delay(1500);
  
  // Matikan LED
  digitalWrite(ledPin,LOW);
  
  // Tunggu selama 1 detik (1000 milidetik)
  delay(1000);
}
