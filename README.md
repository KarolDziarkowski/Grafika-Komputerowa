# Grafika Komputerowa Uklad Sloneczny
Projekt z Grafiki Komputerowej przestawiający nasz animowany układ słoneczny. 
Robiąc projekt korzystaliśmy z takich bibliotek jak: 
- **OpenGL** – biblioteka graficzna 
- **GLFW** – biblioteka pozwalająca zarządzać oknami, kontekstami, klawiaturą i myszką do OpenGL
- **GLEW** – biblioteka pomagająca w odpytywaniu i ładowaniu rozszerzeń OpenGL
- **GLM** – biblioteka matematyczna
- **STB** - biblioteka pozwalająca korzystać z tekstur

Nasz układ słoneczny jest heliocentryczny. Wszystkie planety kręcą się wokół własnej osi oraz wokół słońca. Do Ziemi dodaliśmy również Księżyc. Orbitujące planety oświetlane są przez Słońce.

# Sterowanie kamerą

W naszym programie zastosowaliśmy sterowanie kamerą za pomocą myszki oraz klawiatury. Myszką możemy się obracać w pełnym zakresie ruchu, o 360 stopni, natomiast klawiaturą chodzimy w 4 kierunkach – lewo, prawo, przód, tył. Możemy również skorzystać z opcji „zlockowania” kamery na różnych planetach za pomocą przycisków 0-9: np. za pomocą 3 możemy „zlockować” kamerę na Ziemi, natomiast przyciskiem 0 uwalniamy kamerę i możemy swobodnie poruszać się po układnie słonecznym.

![obraz](https://github.com/FlafyKings/Grafika-Komputerowa-Uklad-Sloneczny/assets/93160173/d2a34149-8486-455f-ad86-f3481e66eed7)

Tutaj renderujemy planety w naszym układnie słonecznym. Z ciekawszych rzeczy dodaliśmy tutaj księżyc, który kręci się jeszcze wokół Ziemi. 
Planety to sfery, na które nakładamy specjalne tesktury. 

![obraz](https://github.com/FlafyKings/Grafika-Komputerowa-Uklad-Sloneczny/assets/93160173/85f6bfa6-b13b-4adf-b0ff-590122d95905)

**Wykrywanie inputu z myszki**

![obraz](https://github.com/FlafyKings/Grafika-Komputerowa-Uklad-Sloneczny/assets/93160173/bdd4cbc1-5ceb-4896-baa0-e3521e6c5750)

![obraz](https://github.com/FlafyKings/Grafika-Komputerowa-Uklad-Sloneczny/assets/93160173/42c248e8-3bdb-4548-8614-2852fdb84460)

![obraz](https://github.com/FlafyKings/Grafika-Komputerowa-Uklad-Sloneczny/assets/93160173/81f73431-9b93-4977-847b-825e21f5f206)

**Wykrywanie inputu z klawiatury**

![obraz](https://github.com/FlafyKings/Grafika-Komputerowa-Uklad-Sloneczny/assets/93160173/3650bd40-ae83-45c4-b1df-f71b8846a40f)


Tutaj zaimplementowaliśmy korzystanie z myszki oraz scrolla do sterowania kamerą w programie. Scrollem możemy przybliżać i oddalać kamerę, natomiast myszką, rozglądać się w programie.

![obraz](https://github.com/FlafyKings/Grafika-Komputerowa-Uklad-Sloneczny/assets/93160173/49e12510-1ef5-4155-8885-ae10ecd8daf4)

Tutaj wczytujemy shadery fragmentów i wierzchołków dla słońca. Następnie tworzymy program shaderowy i dodajemy oba shadery do programu. Następnie usuwamy shadery, by nie zajmowały niepotrzebnie miejsca w pamięci. 


Link do dysku google, który zawiera zdjęcia oraz krótki filmik prezentujący program: https://drive.google.com/drive/folders/16YfQRm4PkAYe07WJn2nsSoI8vb-FTbFY?usp=sharing

**Autorzy**: Kacper Sagan, Kamil Salamończyk 
