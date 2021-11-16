#include <LiquidCrystal.h>

const int aPin = A0;  //アナログピン番号変数宣言
const int buzzer = 3; //ブザーピン番号変数宣言
LiquidCrystal lcd( 4, 6, 10, 11, 12, 13 );  //LCD通信ピン指定
void _playSound();  //プロトタイプ宣言

void setup() {
  /*-----初期化-----*/
  Serial.begin(9600);      //シリアル通信開始
  pinMode(buzzer,OUTPUT);  //３番ピン(ブザー)を出力に設定
  lcd.begin( 16, 2 );      //LCD通信を開始
  lcd.clear();             //LCDをクリアしてカーソル位置を初期化
  lcd.setCursor(0, 0);     //カーソルを左上にセット
  lcd.print("");           //LCDへ出力
  tone(buzzer,523);        //初期化完了ブザー
}

void loop() {
  int raw;                    //生値格納用変数
  float vo;                   //ボルトへ変換した値を格納する変数
  raw = analogRead(aPin);     //入力生値の読み取り
  vo = raw * 5.0f / 1023.0f;  //生値からボルトへ変換
  /*-----シリアル出力-----*/
  Serial.print("RawData: "); 
  Serial.print(raw);
  Serial.print(", Vo : ");
  Serial.print(vo);
  Serial.println("");
  /*---------------------*/
  lcd.clear();          //LCDをクリアしてカーソル位置を初期化
  lcd.setCursor(0, 0);  //カーソルを左上にセット
  if(vo > 2.5f){
    lcd.print("Hello World !!");  //LCDへ出力
    _playSound();
  }else{
    lcd.print("");   //LCDへ出力
    noTone(buzzer);  //ブザー無音
  }
  delay(500); //500ms遅延
}

void _playSound(){
  int outTone[9] = {493, 698, 0, 698, 698, 659, 0, 587, 523};  //音階周波数配列
  for (int i = 0; i < 9; i++) {
      tone(buzzer, outTone[i], 100); //配列内周波数でブザー音発生
      delay(150);                    //150ms遅延
    }
}