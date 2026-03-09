# Libft

C standart kütüphanesindeki temel fonksiyonların sıfırdan yeniden yazılmış halidir. Bu kütüphane; karakter kontrol, string işlemleri, bellek yönetimi, dönüştürme, dosya yazma ve bağlı liste fonksiyonlarını içerir.

## Kullanım

```bash
make        # Kütüphaneyi derle
make bonus  # Bonus fonksiyonları dahil derle
make clean  # Object dosyalarını temizle
make fclean # Tüm dosyaları temizle
make re     # Yeniden derle
```

Derleme sonucunda `libft.a` oluşur. Projende kullanmak için:

```bash
cc main.c -L. -lft -o program
```
