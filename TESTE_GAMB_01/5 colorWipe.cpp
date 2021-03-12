
void colorWipe(byte red, byte green, byte blue, int SpeedDelay)
{
  for (uint16_t i = 0; i < NUM_LEDS; i++)
  {
    setPixel(i, red, green, blue);
    /***/
      if (Serial.available() > 0)
      {
        deslig = Serial.read(); //lê os dados da porta serial
        if (deslig == '0')
        {
          funcReset(); //Reset
        }
      }
      /***/
    showStrip();
    delay(SpeedDelay);
  }
}
