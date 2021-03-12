
void FadeInOut(byte red, byte green, byte blue)
{
  float r, g, b;

  for (int k = 0; k < 256; k = k + 1)
  {
    r = (k / 256.0) * red;
    g = (k / 256.0) * green;
    b = (k / 256.0) * blue;
    setAll(r, g, b);
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
  }

  for (int k = 255; k >= 0; k = k - 2)
  {
    r = (k / 256.0) * red;
    g = (k / 256.0) * green;
    b = (k / 256.0) * blue;
    setAll(r, g, b);
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
  }
}
