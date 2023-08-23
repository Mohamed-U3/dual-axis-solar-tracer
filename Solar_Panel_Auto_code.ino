char buff[20];

void setup()
{
  Serial.begin(9600);
  motors_init();
  initializeSD();  createFile("Sensors.txt"); //closeFile();
  //  lcd_init();
  CurrentSensorInit();
}

void loop()
{
  if (X_axis() < 100 && X_axis() > -100)
  {
    motor3_s();
  }
  else if ( X_axis() > 100 )
  {
    motor3_f();
  }
  else
  {
    motor3_b();
  }

  if (Y_axis() < 100 && Y_axis() > -100)
  {
    motor2_s();
  }
  else if ( Y_axis() > 100 )
  {
    motor2_f();
  }
  else
  {
    motor2_b();
  }

  //every 30 minutes store data in file
  if (real_Minute() == 30 || real_Minute() == 0)
  {
    createFile("Sensors.txt");
    writeToFile("Time: ");
    dtostrf(real_hr(), 2, 0, buff);
    writeToFile(buff);
    writeToFile(":");
    dtostrf(real_Minute(), 2, 0, buff);
    writeToFile(buff);
    writeToFile(":");
    dtostrf(real_sec(), 2, 0, buff);
    writeToFile(buff);

    writeToFile(" - Date(Y/M/D)= ");
    dtostrf(real_year(), 4, 0, buff);
    writeToFile(buff);
    writeToFile("/");
    dtostrf(real_month(), 2, 0, buff);
    writeToFile(buff);
    writeToFile("/");
    dtostrf(real_day(), 2, 0, buff);
    writeToFile(buff);

    dtostrf(DHT_Sensor_temp(), 3, 1, buff);
    writeToFile(" - temp:");
    writeToFile(buff);
    writeToFile(" - Voltage: ");
    dtostrf(bus_voltage(), 2, 4, buff);
    writeToFile(buff);
    writeToFile(" - Power mW: ");
    dtostrf(Power_mW(), 2, 4, buff);
    writeToFileln(buff);

    closeFile();
  }

  //  motor2_f();
  //  motor1_f();

  //  Show_time();
  //  X_axis();
  //  Y_axis();
  //  Serial.println();
  //  delay(100);
  //  printCurrent();
  //
  //  Serial.print("Temp: ");
  //  Serial.print(DHT_Sensor_temp(),1);
  //  Serial.print(" C\t - Hum: ");
  //  Serial.print(DHT_Sensor_hum(),1);
  //  Serial.println(" %\t");
}
