#include "assignment3.hpp"
#include <string>
#include <vector>
#include <array>
#include <typeinfo>
#include <iostream>

// Funktsioonid (functions)
// Looge funktsioon funk, mis ei tagasta midagi
// ja prindib (cout) "Hello World!" konsoolile




// Looge funktsioon funk5, mis tagastab int väärtuse 5




// Looge funktsiooni sum deklaratsioon, 
// mis tagastab kahe int väärtuse summa

// Looge funktsioon sum, mis tagastab kahe int väärtuse summa




// Looge funktsioon sum, mis tagastab kahe double väärtuse summa




// Looge funktsioon increase, mis suurendab int väärtust 1 võrra




// Looge funktsioon decrease, mis vähendab int väärtust 1 võrra
// kasutades pointerit




// Looge constexpr funktsioon square, mis tagastab int väärtuse ruudu




// Looge consteval funktsioon cube, mis tagastab int väärtuse kuupi




//Funktsioonide kutsumine
bool RG::Homework2::assignment3()
{
    using namespace std::literals;
    int i1{ 3 };
    int i2{ 8 };

    // Kutsuge funktsiooni funk

    // Kutsuge funktsiooni funk5 
    // ja salvestage tulemus muutujasse a1
    int a1{ /*funktsioon()*/ };
    // Kutsuge funktsiooni sum argumentidega 3, 2 
    // ja salvestage tulemus muutujasse a2
    int a2{  };
    // Kutsuge funktsiooni sum argumentidega 5.4, 4.5 
    // ja salvestage tulemus muutujasse a3
    double a3{  };
    // Kutsuge funktsiooni increase argumentidega i1

    // Kutsuge funktsiooni decrease argumentidega i2

    // Kutsuge funktsiooni square argumentidega 3
    // ja salvestage tulemus muutujasse a4
    int a4{  };
    // Kutsuge funktsiooni cube argumentidega 3
    // ja salvestage tulemus muutujasse a5
    int a5{  };

    // Kontroll, et muutujad on õiget tüüpi ja väärtusega
    static_assert(square(5) == 25);
    return (typeid(&funk) == typeid(void(*)()))
    && (typeid(&funk5) == typeid(int(*)()))
    && (a1 == 5)
    && (a2 == 5)
    && (a3 == 9.9)
    && (typeid(&increase) == typeid(void(*)(int&)))
    && (i1 == 4)
    && (typeid(&decrease) == typeid(void(*)(int*)))
    && (i2 == 7)
    && (typeid(&square) == typeid(int(*)(int)))
    && (a4 == 9)
    && (typeid(&cube) == typeid(int(*)(int)))
    && (a5 == 27);
}

