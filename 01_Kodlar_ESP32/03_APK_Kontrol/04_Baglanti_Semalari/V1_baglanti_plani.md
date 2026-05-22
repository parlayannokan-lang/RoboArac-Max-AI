# RoboAraç Max AI - V1 Bağlantı Planı

Bu dosya V1 aşamasında kullanılacak temel elektronik bağlantıları ve güç dağıtım planını takip etmek için hazırlanmıştır.

## Ana Sistem Yapısı

V1 sisteminde ESP32 ana kontrolcü olarak kullanılacaktır.  
Motor sürüş sistemi için her motor ayrı BTS motor sürücü kartı ile kontrol edilecektir.

## Güç Dağıtımı

| Hat | Kaynak | Giden Yer | Not |
|---|---|---|---|
| 12V ana hat | 12V akü veya 3S LiPo | BTS motor sürücüler | Motor güç hattı |
| 12V giriş | 12V akü veya 3S LiPo | XL4016 | Voltaj düşürme |
| 5V hat | XL4016 / LM2596 çıkışı | ESP32, sensörler, LCD | Ayar ölçülerek yapılacak |
| GND ortak hat | Tüm sistem | ESP32, sürücüler, regülatörler | Ortak GND şart |

## Motor Sürücü Planı

| Motor | Sürücü | Durum | Not |
|---|---|---|---|
| Sol Ön Motor | BTS-1 | Planlandı | Ayrı sürücü |
| Sol Orta Motor | BTS-2 | Planlandı | Ayrı sürücü |
| Sol Arka Motor | BTS-3 | Planlandı | Ayrı sürücü |
| Sağ Ön Motor | BTS-4 | Planlandı | Ayrı sürücü |
| Sağ Orta Motor | BTS-5 | Planlandı | Ayrı sürücü |
| Sağ Arka Motor | BTS-6 | Planlandı | Ayrı sürücü |

## ESP32 Pin Planı

Bu bölüm motor testlerinden sonra kesinleştirilecektir.

| Görev | ESP32 Pin | Not |
|---|---|---|
| Sol motor grubu PWM | Belirlenecek | Test sonrası yazılacak |
| Sağ motor grubu PWM | Belirlenecek | Test sonrası yazılacak |
| İleri / geri kontrol pinleri | Belirlenecek | BTS bağlantısına göre |
| LCD bağlantısı | Belirlenecek | LCD modeline göre |
| Sensör bağlantısı | Belirlenecek | IR / ultrasonik test sonrası |

## Kablo Kanalı Planı

- Motor güç kabloları ayrı kanaldan ilerleyecek.
- ESP32 sinyal kabloları ayrı kanaldan ilerleyecek.
- Regülatör çıkışları etiketlenecek.
- Her BTS sürücünün motor çıkışı kendi motoruna en kısa yoldan gidecek.
- Kablo kesim uzunlukları şase ölçüsü kesinleşince yazılacak.

## Güvenlik Notları

- ESP32 doğrudan 12V ile beslenmeyecek.
- Servo motorlar ESP32 5V pininden beslenmeyecek.
- Motor güç hattı ile sinyal hattı ayrılacak.
- Tüm GND hatları ortaklanacak.
- İlk testlerde düşük güçte ve tekerlekler havadayken deneme yapılacak.
