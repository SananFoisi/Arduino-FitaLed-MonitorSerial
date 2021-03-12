
void RGBLoop()
{
  for (int j = 0; j < 3; j++)
  {
    // Fade IN
    for (int k = 0; k < 256; k++)
    {
      switch (j)
      {
      case 0:
        setAll(k, 0, 0);
        break;
      case 1:
        setAll(0, k, 0);
        break;
      case 2:
        setAll(0, 0, k);
        break;
      }

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
      delay(3);
    }
    // Fade OUT
    for (int k = 255; k >= 0; k--)
    {
      switch (j)
      {
      case 0:
        setAll(k, 0, 0);
        break;
      case 1:
        setAll(0, k, 0);
        break;
      case 2:
        setAll(0, 0, k);
        break;
      }

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
      delay(3);
    }
  }
}
