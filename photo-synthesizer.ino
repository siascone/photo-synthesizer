void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    int pr1 = analogRead(A0);
    int pr2 = analogRead(A1);

    if (pr1 > 125 && pr2 > 125)
    {
        noTone(9);
    }

    if (pr1 < 125)
    {
        tone(9, 440);
    }
    if (pr2 < 125)
    {
        tone(9, 660);
    }

}