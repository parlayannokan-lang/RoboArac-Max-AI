# RoboAraç Max AI - V1 Malzeme Listesi

Bu dosya RoboAraç Max AI V1 aşamasında kullanılacak ana parçaları takip etmek için hazırlanmıştır.

## Elektronik Parçalar

| Parça | Adet | Durum | Not |
|---|---:|---|---|
| ESP32 | 1 | Var | Ana kontrol kartı |
| BTS7960 / BTS motor sürücü | 6 | Var | Her motor için 1 adet |
| XL4016 voltaj regülatörü | 2 | Var | Güç düşürme için |
| LM2596 voltaj regülatörü | 1 | Var | Yardımcı voltaj düşürme |
| LCD ekran | 1 | Var | Araç üstü bilgi ekranı |
| nRF24L01 antenli modül | 4 | Var | Kablosuz haberleşme için |
| Kızılötesi mesafe sensörü | 1 | Var | Engel algılama için |
| Açma/kapama anahtarı | 1 | Planlanacak | Ana güç kontrolü |
| Acil stop sistemi | 1 | Sonra değerlendirilecek | Basit ve ekonomik çözüm aranacak |
| Klemens / dağıtım bloğu | Belirlenecek | Alınacak | Güç dağıtımı için |

## Motor ve Hareket Sistemi

| Parça | Adet | Durum | Not |
|---|---:|---|---|
| 12V DC motor | 6 | Seçilecek / alınacak | V1 için 6 motorlu sistem kesin |
| MG996R servo | 4 | Var | Robot kol / güçlü hareketler |
| MG90S servo | 3 | Var | Küçük hareketler |
| 608ZZ rulman | Belirlenecek | Var | Tekerlek/göbek sisteminde kullanılabilir |
| Kaplin / göbek adaptörü | 6 | Alınacak veya 3D basılacak | Motor mili - teker bağlantısı için kritik |
| Tekerlek | 6 | Tasarlanacak | TPU planlanıyor |

## Güç Sistemi

| Parça | Adet | Durum | Not |
|---|---:|---|---|
| 12V kuru akü | 1 | Var | Ölçüleri netleşmeden yerleşim yapılmayacak |
| 3S LiPo pil | 1 | Alternatif | Kuru akü yerine kullanılabilir, güç planı değişir |
| Sigorta | Belirlenecek | Alınacak | Ana güç hattı için önerilir |
| Kalın güç kablosu | Belirlenecek | Alınacak | Motor güç hattı için |
| İnce sinyal kablosu | Belirlenecek | Alınacak | ESP32 ve sensör bağlantıları için |

## Mekanik ve 3D Baskı

| Parça | Adet | Durum | Not |
|---|---:|---|---|
| PLA filament | Belirlenecek | Kullanılacak | Şase ve prototip parçalar |
| TPU filament | Belirlenecek | Kullanılacak | Tekerlek/lastik için |
| Şase parçaları | Belirlenecek | Tasarlanacak | 3D yazıcı ile üretilecek |
| Kablo kanalları | Belirlenecek | Tasarlanacak | Şase üzerinde olacak |
| Elektronik katman plakası | 1 | Tasarlanacak | BTS sürücüler ve regülatörler için |

## V1 İçin Net Kararlar

- V1 araç 6x6 olacak.
- 6 tekerlek için 6 ayrı motor kullanılacak.
- Her motor için ayrı BTS motor sürücü kullanılacak.
- L298N kullanılmayacak.
- Süspansiyon şimdilik ertelendi.
- Akü ölçüleri alınmadan elektronik yerleşim kesinleştirilmeyecek.
- Kablo kanalları şase tasarımına dahil edilecek.

## Eksik / Alınacak Parçalar

| Parça | Öncelik | Not |
|---|---|---|
| 6 adet uygun 12V DC motor | Çok yüksek | Motor seçimi kesinleşmeli |
| Kaplin veya teker göbek adaptörü | Çok yüksek | Motor-teker bağlantısı için |
| Klemens / güç dağıtım bloğu | Yüksek | Kablo düzeni için |
| Sigorta | Yüksek | Güvenlik için |
| Uygun kablo seti | Yüksek | Güç ve sinyal ayrılmalı |
| Vida, somun, pul seti | Orta | Mekanik montaj için |
