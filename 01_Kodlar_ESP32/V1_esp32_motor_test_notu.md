# RoboAraç Max AI - ESP32 Motor Test Notu

Bu dosya ESP32 ile BTS motor sürücü ve DC motor testleri için hazırlanmıştır.

## Test Amacı

ESP32 ile BTS motor sürücü kartının doğru çalışıp çalışmadığını kontrol etmek.

## Test Edilecek Parçalar

- ESP32
- BTS motor sürücü
- 12V DC motor
- 12V güç kaynağı / akü / 3S LiPo
- Ortak GND bağlantısı
- Motor güç kabloları
- Sinyal kabloları

## İlk Test Kuralı

İlk testte sadece 1 motor ve 1 BTS sürücü kullanılacak.

6 motor aynı anda bağlanmayacak.

## Güvenlik

- Tekerlek boştayken test yapılacak.
- ESP32’ye 12V verilmeyecek.
- BTS motor beslemesi ayrı güç hattından verilecek.
- ESP32 GND ile BTS GND ortaklanacak.
- Regülatör çıkışı multimetre ile ölçülmeden ESP32’ye bağlanmayacak.

## Test Sonucu

| Tarih | Motor | Sürücü | Voltaj | Sonuç | Not |
|---|---|---|---:|---|---|
| - | - | - | - | - | - |
