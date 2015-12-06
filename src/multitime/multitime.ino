/* * * *
 * # DEFINES #
 * * * * */

// I/O PINS
#define SELECT 2                        // Hardware: Pushbutton on pin D2 without pullup
#define SPEAKER 3                       // Hardware: Speaker on pin D3
#define ROW1 A0                         // Hardware: Display common cathode row one on pin A0
#define ROW2 A1                         // Hardware: Display common cathode row one on pin A1
#define ROW3 A2                         // Hardware: Display common cathode row one on pin A2
#define ROW4 A3                         // Hardware: Display common cathode row one on pin A3
#define ROW5 4                          // Hardware: Display common cathode row one on pin D4
#define ROW6 5                          // Hardware: Display common cathode row one on pin D5
#define ROW7 6                          // Hardware: Display common cathode row one on pin D6
#define ROW8 7                          // Hardware: Display common cathode row one on pin D7
#define SPI_MOSI 11                     // Hardware: Display shift register data line on pint D11
#define SPI_SCK 13                      // Hardware: Display shift register clock line on pint D13
#define LATCH 9                         // Hardware: Display shift register latch line on pint D9
// TIME MESSAGES
#define TIME_HEADER "T"                 // Serial: Synchronization character for message detection (pc to board)
#define TIME_REQUEST 0x07               // Serial: Synchronization character for request time message (board to pc)
// FONT COLORS
#define FONT_RR 5                       // Font color: Mode red-red, for use within drawFont() function
#define FONT_RG 6                       // Font color: Mode red-green, for use within drawFont() function
#define FONT_RO 7                       // Font color: Mode red-orange, for use within drawFont() function
#define FONT_GR 9                       // Font color: Mode green-red, for use within drawFont() function
#define FONT_GG 10                      // Font color: Mode green-green, for use within drawFont() function
#define FONT_GO 11                      // Font color: Mode green-orange, for use within drawFont() function
#define FONT_OR 13                      // Font color: Mode orange-red, for use within drawFont() function
#define FONT_OG 14                      // Font color: Mode orange-green, for use within drawFont() function
#define FONT_OO 15                      // Font color: Mode orange-orange, for use within drawFont() function
// DISPLAY MODES
#define REFRESH 0                       // Display manage: Refresh display mode, for use within manageDisplay() function
#define CLEAR 1                         // Display manage: Clear display mode, for use within manageDisplay() function
#define LAMP_TEST 2                     // Display manage: Lamp test mode, for use within manageDisplay() function
#define DRAW_SPRITE 3                   // Display manage: Draw sprite mode, for use within manageDisplay() function
#define MASK_SPRITE 4                   // Display manage: Mask (remove) sprite mode, for use within manageDisplay() function
#define ADD_FLASH_EFFECT 5              // Display manage: Add flash effect mode, for use within manageDisplay() function
#define REMOVE_FLASH_EFFECT 6           // Display manage: Remove flash effect mode, for use within manageDisplay() function
#define ADD_INVERT_EFFECT 7             // Display manage: Add invert color effect mode, for use within manageDisplay() function
#define REMOVE_INVERT_EFFECT 8          // Display manage: Remove invert color effect mode, for use within manageDisplay() function
// LOGOS
#define LTIME 1                         // Draw: Time mode logo, for use within drawLogo() function
#define LWEEK 2                         // Draw: Week mode logo, for use within drawLogo() function
#define LDATE 3                         // Draw: Date mode logo, for use within drawLogo() function
#define LALARM 4                        // Draw: Daily alarm mode logo, for use within drawLogo() function
#define LPOMODORO 5                     // Draw: Pomodoro mode logo, for use within drawLogo() function
#define LTIMER 6                        // Draw: Timer mode logo, for use within drawLogo() function
#define LCONFERENCE 7                   // Draw: Conference mode logo, for use within drawLogo() function
#define LSYNC 8                         // Draw: Synchronization mode logo, for use within drawLogo() function
#define LBLANK 9                        // Draw: Empty logo (clear), for use within drawLogo() function
// BAR MODES
#define BMINUTES 0                      // Draw: Minutes mode bar, for use within drawBar() function
#define BWEEKDAY 1                      // Draw: Day of week mode bar, for use within drawBar() function
#define BYEAR 2                         // Draw: Year mode bar, for use within drawBar() function
#define BCOMPLETE_POMODORO 3            // Draw: Pomodoros mode bar, for use within drawBar() function
#define BPERCENT 4                      // Draw: Percentual mode bar, for use within drawBar() function
#define BBLANK 5                        // Draw: Empty bar (clear), for use within drawBar() function
// STATUS ENABLE VALUES
#define ENALARM 4                       // Draw: Daily alarm enabled indicator on status bar, for use within drawStatus() function
#define ENPOMODORO 3                    // Draw: Pomodoro enabled indicator on status bar, for use within drawStatus() function
#define ENTIMER 2                       // Draw: Timer enabled indicator on status bar, for use within drawStatus() function
#define ENCONFERENCE 1                  // Draw: Conference enabled indicator on status bar, for use within drawStatus() function
#define ENSYNC 0                        // Draw: Synchronism attempt indicator on status bar, for use within drawStatus() function
// INTERVALS
#define REFRESH_VALUES 300              // Adjustable: Milliseconds between update values from now() function (default: 300)
#define LONG_PRESS 1000                 // Adjustable: Milliseconds to hold push button before being considered long press (default: 1000)
#define DOUBLE_PRESS 2000               // Adjustable: Milliseconds to hold push button before being considered double press (default: 2000)
#define SYNC_INTERVAL 300*1000UL        // Adjustable: Milliseconds between synchronization request (default: 300000UL) UL is needed if greater than signed int (32767)
#define SYNC_TIMEOUT 10*1000            // Adjustable: Milliseconds between synchronization request after failed attempt (default: 10000)
#define POMODORO_DURATION 25*60         // Adjustable: Seconds of duration of the Pomodoro time (default: 1500)
#define POMODORO_SHORT_BREAK 5*60       // Adjustable: Seconds of duration of the Pomodoro short break (default: 300)
#define POMODORO_LONG_BREAK 15*60       // Adjustable: Seconds of duration of the Pomodoro long break (default: 900)
#define ALARM_TIMEOUT 10                // Adjustable: Seconds of duration to turn off the alarm (default: 90)
// KEYPRESS
#define NO_KEY 0                        // Button: Keypress identificator to no press of push button, for use within selectButton() function
#define SHORT_KEY 1                     // Button: Keypress identificator to short press of push button, for use within selectButton() function
#define LONG_KEY 2                      // Button: Keypress identificator to long press of push button, for use within selectButton() function
#define DOUBLE_KEY 3                    // Button: Keypress identificator to double press of push button, for use within selectButton() function
// TONES
#define TURNON_TONE 1                   // Audio: Tone identificator to turn on, for use within playMelody() function
#define SHORT_TONE 2                    // Audio: Tone identificator to short press of push button, for use within playMelody() function
#define LONG_TONE 3                     // Audio: Tone identificator to long press of push button, for use within playMelody() function
#define DOUBLE_TONE 4                   // Audio: Tone identificator to double press of push button, for use within playMelody() function
#define ALARM_TONE 5                    // Audio: Tone identificator to alarm, for use within playMelody() function
// SYNC STATUS
#define NO_SET_NOR_SYNCED 0             // Sync: The time has never been set
#define NEEDS_SYNC 1                    // Sync: The time may had been set but needs sync
#define SET_AND_SYNCED 3                // Sync: The time had been set and is synced

/* * * *
 * # HEADER # 
 * * * * */

// LIBRARIES
#include <Time.h>                       // Timekeeping library
#include <NewTone.h>                    // Tone generation library
#include <MsTimer2.h>                   // Periodic interrupt library
#include <SPI.h>                        // SPI library and configuration
SPISettings normal(400000, LSBFIRST, SPI_MODE0);
// FUNCTION DECLARATION
void playTone(unsigned char melody = 0);
void drawLogo(unsigned char mode = 9);
void drawText(char text[], unsigned char color = 5);
void drawBar(byte bar = 5, unsigned int data = NULL);
void manageDisplay( unsigned char function, unsigned char data[] = NULL);

/* * * *
 * # MAIN #
 * * * * */

void setup() {
    Serial.begin(9600);                 // Open serial port
    pinMode(SELECT, INPUT_PULLUP);      // Set I/O pins
    pinMode(ROW1, OUTPUT);
    pinMode(ROW2, OUTPUT);
    pinMode(ROW3, OUTPUT);
    pinMode(ROW4, OUTPUT);
    pinMode(ROW5, OUTPUT);
    pinMode(ROW6, OUTPUT);
    pinMode(ROW7, OUTPUT);
    pinMode(ROW8, OUTPUT);
    pinMode(LATCH, OUTPUT);
    SPI.begin();                        // Enable SPI module
    digitalWrite(LATCH, LOW);           // Latch idle
    MsTimer2::set(2, refreshDisplay);   // Enable periodic interrupt
    MsTimer2::start();
    clearDisplay();                     // Let's go!
    lampTest();
    playTone(TURNON_TONE);
    clearDisplay();
}

void loop() {
    static unsigned char mode = 1;
    static unsigned char modeLatched = 0xFF;
    static unsigned char modeSet = 0;
    static unsigned char setOption = 0;
    static unsigned char optionEdited = 0;
    static unsigned char optionValue = 0;
    static unsigned char enabled = 0;
    static unsigned char updateDisplay = 0;
    static unsigned char syncStatus = NO_SET_NOR_SYNCED;
    static unsigned char keyStatus = NO_KEY;
    static unsigned char alarmActive = 0;
//    static unsigned char alarmWas = 0;
//    static unsigned char alarmHour = 0;
//    static unsigned char alarmMin = 0;
    static unsigned char pomodoroTime = 0; //tiempo de cuenta en display (pomodoro o break)
    static unsigned char pomodoroCount = 0; //número de pomodoros completados
    static unsigned char pomodoroStat = 0; //flag de cambio de estado
//    static unsigned char timerTime = 0;
//    static unsigned char timerPerc = 0;
//    static unsigned char timerSet= 0;
//    static unsigned char conferenceTime = 0;
//    static unsigned char conferencePerc = 0;
    static char str[3];
    static unsigned long modeShowLogoTime = 0;
    static unsigned long updateValuesTime = 0;
    static unsigned long previousSync = 0;
    static unsigned long lastSyncAttempt = (SYNC_TIMEOUT)+1;
    static unsigned long pomodoroFrom = 0;
    static unsigned long pomodoroEvent = 0;
//    static unsigned long timerFrom = 0;
//    static unsigned long timerEvent = 0;
//    static unsigned long conferenceEvent = 0;
    static unsigned long alarmTimeout = 0;

    // if button pressed, process
    keyStatus = selectButton(DOUBLE_KEY);
    if (alarmActive) {
        if (keyStatus != NO_KEY) {
            if (bitRead(enabled,ENPOMODORO) == 1) pomodoroStat = 1;
            alarmActive = 0;
            noFlash();
        }
    }
    if (keyStatus == SHORT_KEY) { // 1 - up/continue
        //si hay un modo seleccionado
        if (modeLatched) {
            if (modeSet) {
                if (setOption) {
                    optionValue++;
                }
                else {
                    optionEdited++;
                }
            }
        }
        //si no hay ningún modo seleccionado, avanza el modo
        else {
            mode++;
            //XXX
            if (mode == 4) mode = 5;
            if (mode == 6) mode = 8;
            //XXX
            if (mode > 8) mode = 1;
        }
    }
    else if (keyStatus == LONG_KEY) { // 2 - mode/set
        //si no está en edición de modo, selecciona/deselecciona el modo
        if (!modeSet) modeLatched = !modeLatched;
        else {
            setOption = !setOption;
            if (!setOption) {
                optionValue = 0;
                optionEdited++;
            }
        }
    }
    else if (keyStatus == DOUBLE_KEY) { // 3 - options
        //si el modo seleccionado está entre el 4 y el 7 entra en edición
        if (modeLatched) {
            if (mode == 5) { //if ((mode > 3) && (mode < 8)) {
                if (!setOption) modeSet = !modeSet;
            }
        }
    }
    
    // if refresh val exceed, get now()
    if ((millis() - updateValuesTime) > REFRESH_VALUES) {
        updateValuesTime = millis();
        updateDisplay = 1;
        //alarmas
//        if (bitRead(enabled,ENALARM) == 1) {
//            if ((alarmHour == hour()) && (alarmMin == minute())) {
//                if (!alarmWas) {
//                    alarmActive = ENALARM;
//                    alarmTimeout = now() + ALARM_TIMEOUT;
//                }
//            }
//            else alarmWas = 0;
//        }
        if (bitRead(enabled,ENPOMODORO) == 1) {
            if (pomodoroEvent == now()) {
                alarmActive = ENPOMODORO;
                alarmTimeout = now() + ALARM_TIMEOUT;
            }
        }
//        if (bitRead(enabled,ENTIMER) == 1) {
//            if (timerEvent == now()) {
//                alarmActive = ENTIMER;
//                alarmTimeout = now() + ALARM_TIMEOUT;
//            }
//        }
//        if (bitRead(enabled,ENCONFERENCE) == 1) {
//            if (conferenceEvent == now()) {
//                alarmActive = ENCONFERENCE;
//                alarmTimeout = now() + ALARM_TIMEOUT;
//            }
//        }
        if (alarmActive) {
            if (alarmTimeout < now()) {
//                if (bitRead(enabled,ENTIMER) == 1) enabled -= bit(ENTIMER);
                if (bitRead(enabled,ENPOMODORO) == 1) {
                    enabled -= bit(ENPOMODORO);
                    pomodoroCount = 0;
                }
                alarmActive = 0;
                noFlash();
            }
        }
        // if time not set or synced long time ago, try to sync
        if (((millis() - previousSync ) > (SYNC_INTERVAL)) || (timeStatus() == timeNotSet)) {
            syncStatus = NEEDS_SYNC;
            if (bitRead(enabled,ENSYNC) == 0) enabled += bit(ENSYNC); //activa flag en pantalla si no lo estaba
            if (Serial.available()) { //si hay dato en puerto serie, intenta sincronizar
                if (processSyncMessage()) previousSync = millis(); //si ha sincronizado, establece variable
            }
            if ((millis() - lastSyncAttempt) > (SYNC_TIMEOUT)) { //si ultimo intento fue hace mas de SYNC_TIMEOUT
                lastSyncAttempt = millis(); //manda peticion de sync
                Serial.write(TIME_REQUEST);
            }
        }
        // if time is synced
        else {
            syncStatus = SET_AND_SYNCED;
            if (bitRead(enabled,ENSYNC) == 1) enabled -= bit(ENSYNC);
        }
        drawStatus(mode,enabled);
    }
    else updateDisplay = 0;


    if (alarmActive) { //alarma
         if (updateDisplay) {
//            alarmWas = 1;
            playTone(ALARM_TONE);
//            if (bitRead(enabled,ENALARM) == 1) drawLogo(LALARM);
            if (bitRead(enabled,ENPOMODORO) == 1) drawLogo(LPOMODORO); //elseif
//            else if (bitRead(enabled,ENTIMER) == 1) drawLogo(LTIMER);
//            else if (bitRead(enabled,ENCONFERENCE) == 1) drawLogo(LCONFERENCE);
            flashAll();
         }
    }
    else {
        if (!modeLatched) {
            if (updateDisplay) {
                drawBar(BBLANK);
                drawLogo(mode);
            }
        }
        else {
            if (modeSet) { //edición
                if (updateDisplay) {
                    switch (mode) {
//                      // DAILY ALARM
//                      case 4:
//                        if (optionEdited > 2) optionEdited = 0;
//                        if (!setOption) {
//                            noFlash();
//                            if (optionEdited == 0) {
//                                str[0] = 'h';
//                                str[1] = 'o';
//                            }
//                            else if (optionEdited == 1) {
//                                str[0] = 'm';
//                                str[1] = 'i';
//                            }
//                            else if (optionEdited == 2) {
//                                str[0] = 'e';
//                                str[1] = 'n';
//                            }
//                            drawText(str,FONT_OO);
//                        }
//                        else {
//                            flashAll();
//                            if (optionEdited == 0) {
//                                if (optionValue > 23) optionValue = 0;
//                                alarmHour = optionValue;
//                                inttostr(alarmHour,str);
//                                drawText(str,FONT_OO);
//                            }
//                            else if (optionEdited == 1) {
//                                if (optionValue > 11) optionValue = 0;
//                                alarmMin = optionValue * 5;
//                                inttostr(alarmMin,str);
//                                drawText(str,FONT_OO);
//                            }
//                            else if (optionEdited == 2) {
//                                if (optionValue > 1) optionValue = 0;
//                                if (optionValue) {
//                                    str[0] = 'o';
//                                    str[1] = 'n';
//                                    drawText(str,FONT_RR);
//                                    if (bitRead(enabled,ENALARM) == 0) enabled += bit(ENALARM);
//                                }
//                                else {
//                                    str[0] = 'o';
//                                    str[1] = 'f';
//                                    drawText(str,FONT_GG);
//                                    if (bitRead(enabled,ENALARM) == 1) enabled -= bit(ENALARM);
//                                }
//                            }
//                        }
//                        break;
                      // POMODORO
                      case 5:
                        if (optionEdited > 0) optionEdited = 0;
                        if (!setOption) {
                            noFlash();
                            if (optionEdited == 0) {
                                str[0] = 'e';
                                str[1] = 'n';
                            }
                            drawText(str,FONT_OO);
                        }
                        else {
                            flashAll();
                            if (optionEdited == 0) {
                                if (optionValue > 1) optionValue = 0;
                                if (optionValue) {
                                    str[0] = 'o';
                                    str[1] = 'n';
                                    drawText(str,FONT_RR);
                                    if (bitRead(enabled,ENPOMODORO) == 0) enabled += bit(ENPOMODORO);
                                    pomodoroCount |= 0x40;
                                    pomodoroFrom = now();
                                    pomodoroEvent = pomodoroFrom + (POMODORO_DURATION);
                                }
                                else {
                                    str[0] = 'o';
                                    str[1] = 'f';
                                    drawText(str,FONT_GG);
                                    if (bitRead(enabled,ENPOMODORO) == 1) enabled -= bit(ENPOMODORO);
                                    pomodoroCount = 0;
                                }
                            }
                        }
                        break;
//                      // TIMER
//                      case 6:
//                        if (optionEdited > 1) optionEdited = 0;
//                        if (!setOption) {
//                            noFlash();
//                            if (optionEdited == 0) {
//                                str[0] = 't';
//                                str[1] = 'i';
//                            }
//                            else if (optionEdited == 1) {
//                                str[0] = 'e';
//                                str[1] = 'n';
//                            }
//                            drawText(str,FONT_OO);
//                        }
//                        else {
//                            flashAll();
//                            if (optionEdited == 0) {
//                                if (optionValue == 0) optionValue = 1;
//                                if (optionValue > 90) optionValue = 1;
//                                timerTime = optionValue;
//                                inttostr(timerTime,str);
//                                drawText(str,FONT_OO);
//                            }
//                            else if (optionEdited == 1) {
//                                if (optionValue > 1) optionValue = 0;
//                                if (optionValue) {
//                                    str[0] = 'o';
//                                    str[1] = 'n';
//                                    drawText(str,FONT_RR);
//                                    if (bitRead(enabled,ENTIMER) == 0) enabled += bit(ENTIMER);
//                                    timerFrom = now();
//                                    timerEvent = timerFrom + (timerTime*60);
//                                }
//                                else {
//                                    str[0] = 'o';
//                                    str[1] = 'f';
//                                    drawText(str,FONT_GG);
//                                    if (bitRead(enabled,ENTIMER) == 1) enabled -= bit(ENTIMER);
//                                }
//                            }
//                        }
//                        break;
//                      // CONFERENCE
//                      case 7:
//                        if (optionEdited > 1) optionEdited = 0;
//                        if (!setOption) {
//                            noFlash();
//                            if (optionEdited == 0) {
//                                str[0] = 't';
//                                str[1] = 'i';
//                            }
//                            else if (optionEdited == 1) {
//                                str[0] = 'e';
//                                str[1] = 'n';
//                            }
//                            drawText(str,FONT_OO);
//                        }
//                        else {
//                            flashAll();
//                            if (optionEdited == 0) {
//                                if (optionValue == 0) optionValue = 1;
//                                if (optionValue > 90) optionValue = 1;
//                                conferenceTime = optionValue;
//                                inttostr(conferenceTime,str);
//                                drawText(str,FONT_OO);
//                            }
//                            else if (optionEdited == 1) {
//                                if (optionValue > 1) optionValue = 0;
//                                if (optionValue) {
//                                    str[0] = 'o';
//                                    str[1] = 'n';
//                                    drawText(str,FONT_RR);
//                                    if (bitRead(enabled,ENCONFERENCE) == 0) enabled += bit(ENCONFERENCE);
//                                    conferenceEvent = now() + (conferenceTime*60);
//                                }
//                                else {
//                                    str[0] = 'o';
//                                    str[1] = 'f';
//                                    drawText(str,FONT_GG);
//                                    if (bitRead(enabled,ENCONFERENCE) == 1) enabled -= bit(ENCONFERENCE);
//                                }
//                            }
//                        }
//                        break;
                    }
                }
            }
            else { //normal
                if (updateDisplay) {
                    switch (mode) {
                      // HOUR
                      case 1:
                        inttostr(hour(),str);
                        drawText(str, FONT_RR);
                        drawBar(BMINUTES, minute());
                        break;
                      // DAY
                      case 2:
                        inttostr(day(),str);
                        drawText(str,FONT_RR);
                        drawBar(BWEEKDAY,weekday());
                        break;
                      // MONTH
                      case 3:
                        inttostr(month(),str);
                        drawText(str,FONT_RR);
                        drawBar(BYEAR,year());
                        break;
//                      // DAILY ALARM
//                      case 4:
//                        inttostr(alarmHour,str);
//                        drawText(str,FONT_RR);
//                        drawBar(BMINUTES,alarmMin);
//                        break;
                      // POMODORO
                      case 5:
                        if ((pomodoroCount & 0x40) == 0) { //apagado
                            pomodoroTime = 0;
                            pomodoroCount = 0;
                        }
                        else {
                            pomodoroCount |= 0x40;
                            pomodoroTime = (pomodoroEvent - now()) / 60;
                            if (pomodoroCount & 0x30) { //activo, break
                                if (pomodoroStat == 1) {
                                    pomodoroStat = 0;
                                    pomodoroEvent = (now() + POMODORO_DURATION);
                                    pomodoroCount++;
                                    pomodoroCount &= 0x03;
                                }
                            }
                            else {
                                if (pomodoroStat == 1) {
                                    pomodoroStat = 0;
                                    pomodoroCount++;
                                    pomodoroCount &= 0x33;
                                    pomodoroFrom = now();
                                    if (pomodoroCount % 4 != 0) {
                                        pomodoroEvent = pomodoroFrom + (POMODORO_SHORT_BREAK);
                                        pomodoroCount |= 0x10;
                                    }
                                    else {
                                        pomodoroEvent = pomodoroFrom + (POMODORO_LONG_BREAK);
                                        pomodoroCount |= 0x20;
                                    }
                                }
                            }
                        }
                        inttostr(pomodoroTime,str);
                        drawText(str,FONT_RR);
                        drawBar(BCOMPLETE_POMODORO,pomodoroCount);
                        break;
//                      // TIMER
//                      case 6:
//                        if (bitRead(enabled,ENTIMER) == 1) {
//                            timerTime = ((timerEvent - now()) / 60);
//                            timerPerc = map(now(),timerFrom,timerEvent,0,100);
//                        }
//                        else timerTime = 0;
//                        inttostr(timerTime,str);
//                        drawText(str,FONT_RR);
//                        drawBar(BPERCENT,timerPerc);
//                        break;
//                      // CONFERENCE
//                      case 7:
//                        /*
//                         * XXX
//                         * calcular valor conferenceTime
//                         * calcular porcentaje del tiempo asignado
//                         */
//                        inttostr(conferenceTime,str);
//                        drawText(str,FONT_RR);
//                        drawBar(BPERCENT,conferencePerc);
//                        break;
                      // SYNC
                      case 8:
                        if (syncStatus == NO_SET_NOR_SYNCED) {
                            str[0]='N';
                            str[1]='o';
                        }
                        else if (syncStatus == NEEDS_SYNC) {
                            str[0]='S';
                            str[1]='y';
                        }
                        else if (syncStatus == SET_AND_SYNCED) {
                            str[0]='O';
                            str[1]='k';
                        }
                        drawText(str,FONT_RR);
                        break;
                    }
                }
            }
        }
    }
}

/* * * *
 * # FUNCTIONS #
 * * * * */

// INT TO CHAR ARRAY
void inttostr(int value, char chararray[]) {
    if (value < 10) chararray[0] = '0';
    else chararray[0] = (value / 10) + '0';
    chararray[1] = (value % 10) + '0';
    chararray[2] = NULL;
}

// SYNC TIME
unsigned char processSyncMessage() {
    unsigned char ret = 0;
    unsigned long pctime = 0;

    if (Serial.find(TIME_HEADER)) {
        pctime = Serial.parseInt();
        setTime(pctime);
        ret = 1;
    }
    Serial.flush();
    return ret;
}

// PUSH BUTTON
unsigned char selectButton(unsigned char limit) {
    unsigned char btnstatus = 0;
    unsigned long btntime = 0;

    if (!digitalRead(SELECT)) {
        btntime = millis();
        btnstatus = SHORT_KEY;
        playTone(SHORT_TONE);
        while (!digitalRead(SELECT)) {
            if (((btnstatus == SHORT_KEY) && (millis() - btntime) > LONG_PRESS) && (limit > SHORT_KEY)) {
                btnstatus = LONG_KEY;
                playTone(LONG_TONE);
            }
            if (((btnstatus == LONG_KEY) && (millis() - btntime) > DOUBLE_PRESS) && (limit > LONG_KEY)) {
                btnstatus = DOUBLE_KEY;
                playTone(DOUBLE_TONE);
            }
        }
    }
    return btnstatus;
}

// AUDIO
void playTone(unsigned char melody) {
    switch (melody) {
      // SILENCE
      case 0:
        noNewTone(SPEAKER);
        break;
      // "BU BO BI" TURN ON
      case 1:
        NewTone(SPEAKER, 440);
        delay(200);
        NewTone(SPEAKER, 660);
        delay(200);
        NewTone(SPEAKER, 880);
        delay(200);
        noNewTone(SPEAKER);
        break;
      // SHORT BEEP
      case 2:
        NewTone(SPEAKER, 1000);
        delay(150);
        noNewTone(SPEAKER);
        break;
      // LONG BEEP
      case 3:
        NewTone(SPEAKER, 1000);
        delay(300);
        noNewTone(SPEAKER);
        break;
      // DOUBLE BEEP
      case 4:
        NewTone(SPEAKER, 1000);
        delay(150);
        noNewTone(SPEAKER);
        delay(50);
        NewTone(SPEAKER, 1000);
        delay(150);
        noNewTone(SPEAKER);
        break;
      // ALARM
      case 5:
        NewTone(SPEAKER, 50);
        delay(50);
        NewTone(SPEAKER, 150);
        delay(50);
        noNewTone(SPEAKER);
        break;
    }
}

// DISPLAY
void refreshDisplay() {
    manageDisplay(REFRESH);
}

void clearDisplay() {
    manageDisplay(CLEAR);
}

void lampTest() {
    manageDisplay(LAMP_TEST);
}

void flashAll() {
    unsigned char textEffectMask[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00};

    manageDisplay(ADD_FLASH_EFFECT,textEffectMask);
}

void invertAll() {
    unsigned char textEffectMask[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00};

    manageDisplay(ADD_INVERT_EFFECT,textEffectMask);
}

void noFlash() {
    unsigned char textEffectMask[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00};

    manageDisplay(REMOVE_FLASH_EFFECT,textEffectMask);
}

void noInvert() {
    unsigned char textEffectMask[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00};

    manageDisplay(REMOVE_INVERT_EFFECT,textEffectMask);
}

void drawLogo(unsigned char mode) {
    const unsigned char PROGMEM logos[]  = {
        0x1c, 0x22, 0x41, 0x4d, 0x41, 0x22, 0x1c, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,     // Time
        0x42, 0xff, 0x81, 0x81, 0x81, 0x81, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x38, 0x00, 0x00, 0x00,     // Week
        0x42, 0xff, 0x81, 0x81, 0x81, 0x81, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,     // Date
        0x08, 0x1c, 0x1c, 0x1c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,     // Daily alarm
        0x00, 0x00, 0x00, 0x00, 0xff, 0x55, 0x00, 0x00, 0x00, 0x14, 0x08, 0x00, 0x00, 0x55, 0x00, 0x00,     // Pomodoro
        0x00, 0x18, 0x24, 0x42, 0x42, 0x24, 0x18, 0x00, 0x42, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,     // Timer
        0x7e, 0x42, 0x24, 0x18, 0x24, 0x42, 0x7e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x3c, 0x00, 0x00,     // Conference
        0x04, 0x0e, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x00, 0x20, 0x20, 0x20, 0x20, 0xf8, 0x70, 0x20, 0x00,     // Synchronization
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00      // Blank
    };
    unsigned char logoMask[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF};
    unsigned char logoBuffer[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    for (unsigned char i = 0; i < 16; i++) {
        logoBuffer[i] = logos[(mode - 1) * 16 + i];
    }
    manageDisplay(MASK_SPRITE, logoMask);
    manageDisplay(DRAW_SPRITE, logoBuffer);
}

void drawText(char text[], unsigned char color) {
    const unsigned char PROGMEM font3x5[] = {               // CHAR    ASCII POS       LITERAL POS
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,     //          0x20            0
        0x02, 0x02, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00,     //  !       0x21            1
        0x00, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,     //  "       0x22            2
        0x05, 0x07, 0x05, 0x07, 0x05, 0x00, 0x00, 0x00,     //  #       0x23            3
        0x02, 0x06, 0x05, 0x03, 0x02, 0x00, 0x00, 0x00,     //  $       0x24            4
        0x05, 0x01, 0x02, 0x04, 0x05, 0x00, 0x00, 0x00,     //  %       0x25            5
        0x02, 0x05, 0x02, 0x05, 0x03, 0x00, 0x00, 0x00,     //  &       0x26            6
        0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,     //  '       0x27            7
        0x02, 0x04, 0x04, 0x04, 0x02, 0x00, 0x00, 0x00,     //  (       0x28            8
        0x02, 0x01, 0x01, 0x01, 0x02, 0x00, 0x00, 0x00,     //  )       0x29            9
        0x05, 0x02, 0x07, 0x02, 0x05, 0x00, 0x00, 0x00,     //  *       0x2A            10
        0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00,     //  +       0x2B            11
        0x00, 0x00, 0x00, 0x02, 0x06, 0x00, 0x00, 0x00,     //  ,       0x2C            12
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,     //  -       0x2D            13
        0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,     //  .       0x2E            14
        0x01, 0x01, 0x02, 0x04, 0x04, 0x00, 0x00, 0x00,     //  /       0x2F            15
        0x02, 0x05, 0x05, 0x05, 0x02, 0x00, 0x00, 0x00,     //  0       0x30            16
        0x02, 0x06, 0x02, 0x02, 0x07, 0x00, 0x00, 0x00,     //  1       0x31            17
        0x07, 0x01, 0x07, 0x04, 0x07, 0x00, 0x00, 0x00,     //  2       0x32            18
        0x07, 0x01, 0x03, 0x01, 0x07, 0x00, 0x00, 0x00,     //  3       0x33            19
        0x05, 0x05, 0x07, 0x01, 0x01, 0x00, 0x00, 0x00,     //  4       0x34            20
        0x07, 0x04, 0x07, 0x01, 0x07, 0x00, 0x00, 0x00,     //  5       0x35            21
        0x04, 0x04, 0x07, 0x05, 0x07, 0x00, 0x00, 0x00,     //  6       0x36            22
        0x07, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,     //  7       0x37            23
        0x07, 0x05, 0x07, 0x05, 0x07, 0x00, 0x00, 0x00,     //  8       0x38            24
        0x07, 0x05, 0x07, 0x01, 0x01, 0x00, 0x00, 0x00,     //  9       0x39            25
        0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,     //  :       0x3A            26
        0x00, 0x02, 0x00, 0x02, 0x06, 0x00, 0x00, 0x00,     //  ;       0x3B            27
        0x01, 0x02, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00,     //  <       0x3C            28
        0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,     //  =       0x3D            29
        0x04, 0x02, 0x01, 0x02, 0x04, 0x00, 0x00, 0x00,     //  >       0x3E            30
        0x07, 0x01, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00,     //  ?       0x3F            31
        0x07, 0x05, 0x05, 0x04, 0x07, 0x00, 0x00, 0x00,     //  @       0x40            32
        0x02, 0x05, 0x05, 0x07, 0x05, 0x00, 0x00, 0x00,     //  A       0x41            33
        0x06, 0x05, 0x07, 0x05, 0x06, 0x00, 0x00, 0x00,     //  B       0x42            34
        0x02, 0x05, 0x04, 0x05, 0x02, 0x00, 0x00, 0x00,     //  C       0x43            35
        0x06, 0x05, 0x05, 0x05, 0x06, 0x00, 0x00, 0x00,     //  D       0x44            36
        0x07, 0x04, 0x06, 0x04, 0x07, 0x00, 0x00, 0x00,     //  E       0x45            37
        0x07, 0x04, 0x06, 0x04, 0x04, 0x00, 0x00, 0x00,     //  F       0x46            38
        0x07, 0x04, 0x05, 0x05, 0x07, 0x00, 0x00, 0x00,     //  G       0x47            39
        0x05, 0x05, 0x07, 0x05, 0x05, 0x00, 0x00, 0x00,     //  H       0x48            40
        0x07, 0x02, 0x02, 0x02, 0x07, 0x00, 0x00, 0x00,     //  I       0x49            41
        0x01, 0x01, 0x01, 0x05, 0x07, 0x00, 0x00, 0x00,     //  J       0x4A            42
        0x05, 0x05, 0x06, 0x05, 0x05, 0x00, 0x00, 0x00,     //  K       0x4B            43
        0x04, 0x04, 0x04, 0x04, 0x07, 0x00, 0x00, 0x00,     //  L       0x4C            44
        0x05, 0x07, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00,     //  M       4x4D            45
        0x01, 0x05, 0x07, 0x05, 0x04, 0x00, 0x00, 0x00,     //  N       0x4E            46
        0x07, 0x05, 0x05, 0x05, 0x07, 0x00, 0x00, 0x00,     //  O       0x4F            47
        0x07, 0x05, 0x07, 0x04, 0x04, 0x00, 0x00, 0x00,     //  P       0x50            48
        0x07, 0x05, 0x05, 0x07, 0x01, 0x00, 0x00, 0x00,     //  Q       0x51            49
        0x06, 0x05, 0x06, 0x05, 0x05, 0x00, 0x00, 0x00,     //  R       0x52            50
        0x03, 0x04, 0x02, 0x01, 0x06, 0x00, 0x00, 0x00,     //  S       0x53            51
        0x07, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,     //  T       0x54            52
        0x05, 0x05, 0x05, 0x05, 0x07, 0x00, 0x00, 0x00,     //  U       0x55            53
        0x05, 0x05, 0x05, 0x05, 0x02, 0x00, 0x00, 0x00,     //  V       0x56            54
        0x05, 0x05, 0x05, 0x07, 0x05, 0x00, 0x00, 0x00,     //  W       0x57            55
        0x05, 0x05, 0x02, 0x05, 0x05, 0x00, 0x00, 0x00,     //  X       0x58            56
        0x05, 0x05, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,     //  Y       0x59            57
        0x07, 0x01, 0x02, 0x04, 0x07, 0x00, 0x00, 0x00,     //  Z       0x5A            58
        0x06, 0x04, 0x04, 0x04, 0x06, 0x00, 0x00, 0x00,     //  [       0x5B            59
        0x04, 0x04, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00,     //  \       0x5C            60
        0x03, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00,     //  ]       0x5D            61
        0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,     //  ^       0x5E            62
        0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,     //  _       0x5F            63
        0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,     //  `       0x60            64
        0x06, 0x01, 0x03, 0x05, 0x03, 0x00, 0x00, 0x00,     //  a       0x61            65
        0x04, 0x04, 0x06, 0x05, 0x06, 0x00, 0x00, 0x00,     //  b       0x62            66
        0x00, 0x03, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00,     //  c       0x63            67
        0x01, 0x01, 0x03, 0x05, 0x03, 0x00, 0x00, 0x00,     //  d       0x64            68
        0x02, 0x05, 0x07, 0x04, 0x03, 0x00, 0x00, 0x00,     //  e       0x65            69
        0x01, 0x02, 0x07, 0x02, 0x02, 0x00, 0x00, 0x00,     //  f       0x66            70
        0x03, 0x05, 0x03, 0x01, 0x06, 0x00, 0x00, 0x00,     //  g       0x67            71
        0x04, 0x04, 0x06, 0x05, 0x05, 0x00, 0x00, 0x00,     //  h       0x68            72
        0x02, 0x00, 0x06, 0x02, 0x07, 0x00, 0x00, 0x00,     //  i       0x69            73
        0x01, 0x00, 0x03, 0x01, 0x06, 0x00, 0x00, 0x00,     //  j       0x6A            74
        0x04, 0x05, 0x06, 0x05, 0x05, 0x00, 0x00, 0x00,     //  k       0x6B            75
        0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,     //  l       0x6C            76
        0x00, 0x05, 0x07, 0x05, 0x05, 0x00, 0x00, 0x00,     //  m       0x6D            77
        0x00, 0x06, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00,     //  n       0x6E            78
        0x00, 0x02, 0x05, 0x05, 0x02, 0x00, 0x00, 0x00,     //  o       0x6F            79
        0x06, 0x05, 0x06, 0x04, 0x04, 0x00, 0x00, 0x00,     //  p       0x70            80
        0x03, 0x05, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00,     //  q       0x71            81
        0x00, 0x03, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00,     //  r       0x72            82
        0x03, 0x04, 0x02, 0x01, 0x06, 0x00, 0x00, 0x00,     //  s       0x73            83
        0x02, 0x07, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,     //  t       0x74            84
        0x00, 0x05, 0x05, 0x05, 0x07, 0x00, 0x00, 0x00,     //  u       0x75            85
        0x00, 0x05, 0x05, 0x05, 0x02, 0x00, 0x00, 0x00,     //  v       0x76            86
        0x00, 0x05, 0x05, 0x07, 0x05, 0x00, 0x00, 0x00,     //  w       0x77            87
        0x00, 0x00, 0x05, 0x02, 0x05, 0x00, 0x00, 0x00,     //  x       0x78            88
        0x05, 0x05, 0x03, 0x01, 0x06, 0x00, 0x00, 0x00,     //  y       0x79            89
        0x07, 0x01, 0x02, 0x04, 0x07, 0x00, 0x00, 0x00,     //  z       0x7A            90
        0x03, 0x02, 0x04, 0x02, 0x03, 0x00, 0x00, 0x00,     //  {       0x7B            91
        0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00,     //  |       0x7C            92
        0x06, 0x02, 0x01, 0x02, 0x06, 0x00, 0x00, 0x00,     //  }       0x7D            93
        0x00, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00      //  ~       0x7E            94
    };
    unsigned char textMask[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF};
    unsigned char textBuffer[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    unsigned char fontcolor = 0;
    unsigned int stchar = 0;
    unsigned int ndchar = 0;

    fontcolor = color & 0x0F;
    stchar = (text[0] - 0x20) * 8;
    ndchar = (text[1] - 0x20) * 8;
    for (unsigned char i = 0; i < 8; i++) {
        if (fontcolor == FONT_RR) {
            textBuffer[i] = font3x5[stchar + i];
            textBuffer[i] = textBuffer[i] << 4;
            textBuffer[i] |= font3x5[ndchar + i];
        }
        else if (fontcolor == FONT_RG) {
            textBuffer[i] = font3x5[stchar + i];
            textBuffer[i] = textBuffer[i] << 4;
            textBuffer[8 + i] = font3x5[ndchar + i];
        }
        else if (fontcolor == FONT_RO) {
            textBuffer[i] = font3x5[stchar + i];
            textBuffer[i] = textBuffer[i] << 4;
            textBuffer[8 + i] = font3x5[ndchar + i];
            textBuffer[i] |= textBuffer[8 + i];
        }
        else if (fontcolor == FONT_GR) {
            textBuffer[8 + i] = font3x5[stchar + i];
            textBuffer[8 + i] = textBuffer[8 + i] << 4;
            textBuffer[i] = font3x5[ndchar + i];
        }
        else if (fontcolor == FONT_GG) {
            textBuffer[8 + i] = font3x5[stchar + i];
            textBuffer[8 + i] = textBuffer[8 + i] << 4;
            textBuffer[8 + i] |= font3x5[ndchar + i];
        }
        else if (fontcolor == FONT_GO) {
            textBuffer[8 + i] = font3x5[stchar + i];
            textBuffer[8 + i] = textBuffer[8 + i] << 4;
            textBuffer[i] = font3x5[ndchar + i];
            textBuffer[8 + i] |= textBuffer[i];
        }
        else if (fontcolor == FONT_OR) {
            textBuffer[i] = font3x5[stchar + i];
            textBuffer[i] = textBuffer[i] << 4;
            textBuffer[8 + i] = textBuffer[i];
            textBuffer[i] |= font3x5[ndchar + i];
        }
        else if (fontcolor == FONT_OG) {
            textBuffer[8 + i] = font3x5[stchar + i];
            textBuffer[8 + i] = textBuffer[8 + i] << 4;
            textBuffer[i] = textBuffer[8 + i];
            textBuffer[8 + i] |= font3x5[ndchar + i];
        }
        else if (fontcolor == FONT_OO) {
            textBuffer[i] = font3x5[stchar + i];
            textBuffer[i] = textBuffer[i] << 4;
            textBuffer[i] |= font3x5[ndchar + i];
            textBuffer[8 + i] = textBuffer[i];
        }
    }
    manageDisplay(MASK_SPRITE, textMask);
    manageDisplay(DRAW_SPRITE, textBuffer);
}

void drawBar(byte bar, unsigned int data) {
    unsigned char barMask[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF};
    unsigned char barBuffer[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    switch (bar) {
      case BMINUTES:
        if (data < 5) {
            barBuffer[6] = 0x00;
            barBuffer[14] = 0x00;
        }
        else if (data >= 5 && data < 10) {
            barBuffer[6] = 0x00;
            barBuffer[14] = 0x40;
        }
        else if (data >= 10 && data < 15) {
            barBuffer[6] = 0x40;
            barBuffer[14] = 0x00;
        }
        else if (data >= 15 && data < 20) {
            barBuffer[6] = 0x40;
            barBuffer[14] = 0x20;
        }
        else if (data >= 20 && data < 25) {
            barBuffer[6] = 0x60;
            barBuffer[14] = 0x00;
        }
        else if (data >= 25 && data < 30) {
            barBuffer[6] = 0x60;
            barBuffer[14] = 0x10;
        }
        else if (data >= 30 && data < 35) {
            barBuffer[6] = 0x70;
            barBuffer[14] = 0x00;
        }
        else if (data >= 35 && data < 40) {
            barBuffer[6] = 0x70;
            barBuffer[14] = 0x08;
        }
        else if (data >= 40 && data < 45) {
            barBuffer[6] = 0x78;
            barBuffer[14] = 0x00;
        }
        else if (data >= 45 && data < 50) {
            barBuffer[6] = 0x78;
            barBuffer[14] = 0x04;
        }
        else if (data >= 50 && data < 55) {
            barBuffer[6] = 0x7C;
            barBuffer[14] = 0x00;
        }
        else if (data >= 55 && data < 60) {
            barBuffer[6] = 0x7C;
            barBuffer[14] = 0x02;
        }
        break;
      case BWEEKDAY:
        barBuffer[6] = 0xFB;
        if (data == 1) barBuffer[14] = 0x01;        // Sunday
        else if (data == 2) barBuffer[14] = 0x80;   // Monday
        else if (data == 3) barBuffer[14] = 0x40;   // Tuesday
        else if (data == 4) barBuffer[14] = 0x50;   // Wednesday
        else if (data == 5) barBuffer[14] = 0x10;   // Thursday
        else if (data == 6) barBuffer[14] = 0x08;   // Friday
        else if (data == 7) barBuffer[14] = 0x02;   // Saturday
        break;
      case BYEAR:
        barBuffer[14] = 0x00;
        for (unsigned char i = 0; i < 8; i++) {
            if (data < 2000) barBuffer[6] |= bitRead(data - 1900, i) << i;
            else barBuffer[6] |= bitRead(data - 2000, i) << i;
        }
        break;
      case BCOMPLETE_POMODORO:
        if (data & 0x40) {
            if (data & 0x10) barBuffer[14] = 0x02;
            if (data & 0x20) barBuffer[14] = 0x03;
            data &= 0x03;
            if (data == 0) barBuffer[6] = 0x40;
            else if (data == 1) barBuffer[6] = 0x60;
            else if (data == 2) barBuffer[6] = 0x70;
            else if (data == 3) barBuffer[6] = 0x78;
        }
        else {
            barBuffer[6] = 0x00;
            barBuffer[14] = 0x00;
        }
//            if (data == 1) {
//                barBuffer[6] = 0x40;
//                barBuffer[14] = 0x40;
//            }
//            else if (data == 2) {
//                barBuffer[6] = 0x60;
//                barBuffer[14] = 0x20;
//            }
//            else if (data == 3) {
//                barBuffer[6] = 0x70;
//                barBuffer[14] = 0x10;
//            }
//            else if (data == 4) {
//                barBuffer[6] = 0x78;
//                barBuffer[14] = 0x08;
//            }
//            else if (data == 5) {
//                barBuffer[6] = 0x78;
//                barBuffer[14] = 0x02;
//            }
//            else if (data == 6) {
//                barBuffer[6] = 0x78;
//                barBuffer[14] = 0x03;
//            }
        break;
      case BPERCENT:
        barBuffer[14] = 0x00;
        if (map(data, 0, 100, 0, 8) == 0) barBuffer[6] = 0x00;
        else if (map(data, 0, 100, 0, 8) == 1) barBuffer[6] = 0x80;
        else if (map(data, 0, 100, 0, 8) == 2) barBuffer[6] = 0xC0;
        else if (map(data, 0, 100, 0, 8) == 3) barBuffer[6] = 0xE0;
        else if (map(data, 0, 100, 0, 8) == 4) barBuffer[6] = 0xF0;
        else if (map(data, 0, 100, 0, 8) == 5) barBuffer[6] = 0xF8;
        else if (map(data, 0, 100, 0, 8) == 6) barBuffer[6] = 0xFC;
        else if (map(data, 0, 100, 0, 8) == 7) barBuffer[6] = 0xFE;
        else if (map(data, 0, 100, 0, 8) == 8) barBuffer[6] = 0xFF;
        break;
      case BBLANK:
        barBuffer[6] = 0x00;
        barBuffer[14] = 0x00;
        break;
    }
    manageDisplay(MASK_SPRITE, barMask);
    manageDisplay(DRAW_SPRITE, barBuffer);
}

void drawStatus(unsigned char cursorpos, unsigned char enabled) {
    unsigned char statusMask[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00};
    unsigned char statusBuffer[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    for (unsigned char i = 0; i < 8; i++) {
        statusBuffer[7] |= bitRead(enabled, i) << i;
    }
    statusBuffer[15] = 0x01 << 8 - cursorpos;
    manageDisplay(MASK_SPRITE, statusMask);
    manageDisplay(DRAW_SPRITE, statusBuffer);
}

void manageDisplay( unsigned char function, unsigned char data[]) {
    static unsigned char flashStatus = 0;
    static unsigned char thisRow = 0;
    static unsigned char flashMask[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    static unsigned char invertMask[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    static unsigned char effectBuffer[2][8] = {
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // Red
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // Green
    };
    static unsigned char displayBuffer[2][8] = {
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // Red
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // Green
    };
    static unsigned int timesRefreshed = 0;

    // REFRESH DISPLAY
    if (function == REFRESH) {
        for (unsigned char color = 0; color < 2; color++) {
            for (unsigned char row = 0; row < 8; row++) {
                displayBuffer[color][row] = effectBuffer[color][row] ^ invertMask[row];
                if (flashStatus) displayBuffer[color][row] &= ~flashMask[row];
            }
        }
        SPI.beginTransaction(normal);
        SPI.transfer(displayBuffer[0][thisRow]);
        SPI.transfer(displayBuffer[1][thisRow]);
        SPI.endTransaction();
        switch (thisRow++) {
            case 0:
                digitalWrite(ROW8, LOW);
                digitalWrite(ROW1, HIGH);
                break;
            case 1:
                digitalWrite(ROW1, LOW);
                digitalWrite(ROW2, HIGH);
                break;
            case 2:
                digitalWrite(ROW2, LOW);
                digitalWrite(ROW3, HIGH);
                break;
            case 3:
                digitalWrite(ROW3, LOW);
                digitalWrite(ROW4, HIGH);
                break;
            case 4:
                digitalWrite(ROW4, LOW);
                digitalWrite(ROW5, HIGH);
                break;
            case 5:
                digitalWrite(ROW5, LOW);
                digitalWrite(ROW6, HIGH);
                break;
            case 6:
                digitalWrite(ROW6, LOW);
                digitalWrite(ROW7, HIGH);
                break;
            case 7:
                digitalWrite(ROW7, LOW);
                digitalWrite(ROW8, HIGH);
                thisRow = 0;
                break;
        }
        digitalWrite(LATCH, HIGH);
        digitalWrite(LATCH, LOW);
        if (timesRefreshed > 200) {
            flashStatus = ~flashStatus;
            timesRefreshed = 0;
        }
        else timesRefreshed++;
    }
    // CLEAR DISPLAY
    else if (function == CLEAR) {
        for (unsigned char color = 0; color < 2; color++) {
            for (unsigned char row = 0; row < 8; row++) {
                effectBuffer[color][row] = 0x00;
            }
        }
    }
    // LAMP TEST
    else if (function == LAMP_TEST) {
        for (unsigned char color = 0; color < 2; color++) {
            for (unsigned char row = 0; row < 8; row++) {
                effectBuffer[color][row] = 0xFF;
            }
        }
    }
    // IOR DATA
    else if (function == DRAW_SPRITE) {
        for (unsigned char color = 0; color < 2; color++) {
            for (unsigned char row = 0; row < 8; row++) {
                effectBuffer[color][row] |= data[row + 8 * color];
            }
        }
    }
    // AND DATA
    else if (function == MASK_SPRITE) {
        for (unsigned char color = 0; color < 2; color++) {
            for (unsigned char row = 0; row < 8; row++) {
                effectBuffer[color][row] &= data[row + 8 * color];
            }
        }
    }
    // ADD FLASH PATTERN
    else if (function == ADD_FLASH_EFFECT) {
        for (unsigned char i = 0; i < 8; i++) {
            flashMask[i] |= data[i];
        }
    } 
    // REMOVE FLASH PATTERN
    else if (function == REMOVE_FLASH_EFFECT) {
        for (unsigned char i = 0; i < 8; i++) {
            flashMask[i] &= ~data[i];
        }
    }
    // ADD INVERT PATTERN
    else if (function == ADD_INVERT_EFFECT) {
        for (unsigned char i = 0; i < 8; i++) {
            invertMask[i] |= data[i];
        }
    }
    // REMOVE INVERT PATTERN
    else if (function == REMOVE_INVERT_EFFECT) {
        for (unsigned char i = 0; i < 8; i++) {
            invertMask[i] &= ~data[i];
        }
    }
}

