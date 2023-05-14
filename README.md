# BINARY-SEARCH-ILE-ARAMA
Verilen dizide binary search ile arama yapar.
# PROJENİN AMACI VE NASIL KULLANILDIĞI
Bu algoritmada amac verilen dizide binary search ile istenen elemanın aranmasıdır.Ama binary search ile arama yaparken dizi elemanları
sıralı bir şekilde olması gerekir.
Bu yüzden önce dizideki elemanlar küçükten büyüğe doğru sıralanır.


Bu algoritmada sıralama için quick sort algoritması kullanılmıştır.
Önce verilen dizi quickSort fonksiyonu ile sıralanır.Daha sonra elemanlar binarySearch fonksiyonu ile istenilen eleman aranır.

# BİNARY SEARCH (İKİLİ ARAMA)
Binary Search çalışma zamanı olarak Linear Search’den daha iyidir. Her tekrarda arama uzayını yarıya indirmek üzere tasarlanmıştır. Öncelikle dizinin ortasındaki değeri aranan değer ile karşılaştırır. Eğer aranan değer ortanca değerden küçükse dizinin ikinci yarısını görmezden gelerek ilk yarısında aramaya devam eder. Daha sonra tekrar ilk yarının ortanca değeri ile karşılaştırır. Eğer aranan değer ortanca değerden küçükse sol yarı, büyükse sağ yarı ile devam eder. Bu şekilde aranan değeri bulana kadar sürer.

# QUİCK SORT(HIZLI SIRALAMA)
Algoritmada sıralama yapmak için quick sort sıralama tekniği kullanılmıştır.
Quicksort algoritması, sıralanacak bir diziyi daha küçük iki parçaya ayırıp oluşan bu küçük parçaların kendi içinde sıralanması mantığıyla çalışır.Çok kullanılan “böl ve yönet” stratejisine dayanan basit ve hızlı bir sıralama yöntemi kullanır.
