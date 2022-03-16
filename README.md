# ArduinoLCD-VoltageRead-Buzzer
## About - 説明
The Arduino will be used to display the LCD, measure the voltage, and sound the buzzer.  
ArduinoでLCDの表示、電圧測定、ブザーで音を鳴らすといった動作をします。

## Circuit Diagram - 回路図
LCDに接続されている２個の抵抗器は両方とも1kΩです。
LCDのアノード端子抵抗はディスプレイの明るさ調整なので各自で設定してください。
![arduino LCD Demo_ブレッドボード](https://user-images.githubusercontent.com/25848834/141890894-3c2fa0f4-0ca3-48cd-850c-ea7c65327449.png)  
  
## Action - 動作
When the voltage is less than Vo = 2.5  
電圧がVo=2.5より小さい場合。  
<img src="https://user-images.githubusercontent.com/25848834/141922863-ef84a02e-313f-4f9d-8d35-c503d6eab375.jpg" width="25%">  
  
When the voltage is greater than Vo = 2.5  
電圧がVo=2.5より大きい場合。  
<img src="https://user-images.githubusercontent.com/25848834/141922878-ff2797fe-49a7-4a35-ac02-08fd3b7bc51e.jpg" width="25%">
