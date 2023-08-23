int X_axis()
{
  int angleX = analogRead(A0) - analogRead(A1);

//  Serial.print("1 axis = ");
//  Serial.print(analogRead(A0));
//  Serial.print(" -  2 axis = ");
//  Serial.print(analogRead(A1));

  Serial.print("- X axis = ");
  Serial.print(angleX);
  return angleX;
}

int Y_axis()
{
  int angleY = analogRead(A0) - analogRead(A3);

//  Serial.print(" - 3 axis = ");
//  Serial.print(analogRead(A2));
//  Serial.print(" -  4 axis = ");
//  Serial.print(analogRead(A3));
  
  Serial.print(" - Y axis = ");
  Serial.println(angleY);
  return angleY;
}
