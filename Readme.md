UŽDUOTIS:
Sukurkite dalį vartotojo sąsajos, parašydami išvedimo sakinius pateiktai programai:
a) peržiūrėkite programos demonstraciją – užduoties tikslas yra pagaminti kodą programos, kuri veiktų taip, kaip veikia demonstruojama programa. Atsisiųskite kodo failą ui.c. Užduočiai atlikti, papildykte šį failą išvedimo sakiniais. Sakinius rašykite main funkcijos viduje, vietoje ten esančių komentarų, prasidedančių žodžiais “report” (šioje vietoje turi būti pateikiama informacija vartotojui) arba “ask” (šioje vietoje turi būti prašoma informacijos iš vartotojo) ir taip žyminčių vietas, kur kažką reikia rašyti; kitus komentarus palikite nepakeistus
b) Jūsų parengta programa iš failo ui.c turi taip, kaip veikia demonstracinė programa. Nuodugniai ištestuokite savo programą, kad įsitikintumėte, jog taip ir yra. Visi demonstracinės programos spausdinami pranešimai privalo būti (identiškai) pateikti ir jūsų programoje, tačiau atsižvelgiant į komentarus kode, galite (turite) papildyti vartotojo sąsają, spausdindami pranešimus daugiau/geriau, nei tai atliekama demonstracinėje programoje.
---
UŽDUOTIS 1. Vartotojas įveda tris sveikus skaičius (a, b, c). Programa turi atspausdinti kvadratinės lygties ax2+bx+c=0
sprendinių skaičių ir, jei sprendinių yra, jų reikšmes.

UŽDUOTIS 2. Vartotojas įveda tris sveikus skaičius (a, b, c). Programa turi atspausdinti visus teigiamus sveikus skaičius iš
intervalo (a; b], kurie dalijasi iš skaičiaus c su liekana 1.

UŽDUOTIS 3. Vartotojas įveda tris neneigiamus sveikuosius skaičius (a, b, c). Programa turi atspausdinti c-ąjį skaičių f_c, kur
f_c=f_(c-1)+f_(c-2), o f_0 = a ir f_1 = b. Jei a=0 ir b=1, f_c yra c-asis garsiosios Fibonačio sekos skaičius.

UŽDUOTIS 4. Vartotojas įveda tris natūraliuosius skaičius (a, b, c). Programa turi atspausdinti du skaičius – šių trijų skaičių
didžiausią bendrąjį daliklį (DBD) bei mažiausiąjį bendrą kartotinį (MBK).

UŽDUOTIS 5. Vartotojas įveda skaičių n, o po to – n realiųjų skaičių. Programa turi suskaičiuoti šių skaičių sumą ir vidurkį,
o taip pat mažiausią (minimumą) ir didžiausią (maksimumą) reikšmes.

UŽDUOTIS 6. Vartotojas įveda teigiamų skaičių seką, kurios pabaigą žymi pirma įvesta neteigiama reikšmė. Programa turi
rasti, kuris skaičius tarp įvestųjų turi daugiausiai skaitmenų.

---

UŽDUOTIS:
Parašykite kodo fragmentą, kuris nuskaito tris vartotojo įvestus sveikuosius skaičius, ir tarp jų randa maksimalią
(arba minimalią) reikšmę.
Svarbu: sąlygos sakinių (if) naudoti negalima ir spausdinant atsakymą žodį „printf“ galima rašyti tik vieną kartą.
• Parašę programą, ją nuodugniai ištestuokite (viso 6+6+1 testų). Jei norite, laiko taupymui galite įkoduoti kiekvieną
iš testų, priskirdami kintamiesiems reikšmes ir greta spausdindami gautą ir turėtą gauti reikšmę. Tokiu atveju
rekomenduojama parašytą kodo fragmentą apibrėžti kaip atskirą funkciją (jei mokate), tai stipriai sumažins kodo
dubliavimąsi.
• Optimalus algoritmas randa atsakymą įvykdęs lygiai dvi palyginimo operacijas. Pačiame algoritme (nevykdomų)
palyginimo operacijų gali būti ir daugiau.

---

UŽDUOTIS:
Užduoties esmė – parašyti kodą C kalba, kuris pagal tam tikrus (žr. komentarus žemiau) kriterijus filtruoja duomenis pateiktame duomenų faile ir leidžia gauti vienos ar kitos užklausos rezultatą.
Šioje užduotyje naudojami failai:
generator.c – programa, skirta sukurti duomenų failą db.bin
db.bin – duomenų failas, iš kurio užklausų pagalba reikės gauti reikiamą informaciją
query_engine.c – programos, skirtos apdoroti duomenų failą db.bin, skeletas
report.txt – tekstinis failas, kuriame nurodytu formatu rašoma ataskaita apie įvykdytų užklausų rezultatus
query1.c – failas, kuriame įgyvendintas filtravimas pagal atitinkamos (query1) užklausos sąlygą
query2.c – ...
...

Pradinis testas
Prieš pradėdami, įsitikinkite, kad pateiktos programos veikia, kaip turėtų, ir galėsite su jomis sėkmingai dirbti. Pastebėję
problemų, kreipkitės į pratybų dėstytoją.
1. atsisiųskite failą generator.c ir jį sėkmingai sukompiliuokite, gautą programą paleiskite per terminalą su vienu parametru, kuris nurodo norimos gauti duomenų bazės dydį. Ekrane turėtumėte pamatyti generuojamus įrašus
su studentų duomenimis, o einamajame kataloge programai pasibaigus turėtų atsirasti failas db.bin, kuriame tie
įrašai išsaugoti. Testą rekomenduojama atlikti su 999 įrašais – būtent tiek reikės, kad sėkmingai atlikti šią užduotį.
2. Atsisiųskite failą query_engine.c ir jį sėkmingai sukompiliuokite, gautą programą paleiskite ir įsitikinkite, kad
ekrane gaunate tiek duomenų, kiek sugeneravote, t. y. 999 įrašus.

Pasirengimas darbui
Jei testą įvykdėte sėkmingai, pasirenkite tolimesniam darbui.
1. Peržvelkite query_engine.c faile esantį kodą ir prieš tęsdami įsitikinkite, kad suprantate programos veikimą ir
pagrindinius žingsnius.
2. Perskaitykite komentarus apie saugomus studentų duomenis, įsitikinkite, jog suprantate, ką jie reiškia.
3. Einamojo studento duomenys spausdinami ekrane 48, 53 ir 56 eilutėse. Suformatuokite išvedimą taip, kad jis
būtų aiškus ir būtų galima atsirinkti kas kur yra ir atskirti reikšmes vieną nuo kitos.
4. Generatoriaus pagalba sugeneruokite mažesnės apimties (10, 20, 50, 100, etc) duomenų failą, kurį naudosite
savo kodo testavimui. Esant poreikiui šį failą bet kada galima pergeneruoti.

Užduoties rezultatai
Užduotims atlikti, modifikuokite failą query_engine.c. Daliai užduočių atlikti pakaks modifikuoti tiktai eilutes, pažymėtas
trimis žvaigždutėmis, su sąlygos sakiniais, įgyvendinančiais filtravimą. Spręsdami užduotis, kiekvieną užklausą atitinkančią
programą išsisaugokite atskirai, atskirame faile (query1.c, query2.c ir t.t.). Šių failų reikės pratybų pabaigoje ataskaitai
report.txt pildyti.

Užduoties pabaigoje reikės:
1. Iš naujo sugeneruoti naujų duomenų failą db.bin su 999 įrašais
2. Susikurti (rankomis) failą report.txt
3. Paleisti kiekvieną iš įgyvendintų užklausų (query1, query4, etc) ir gautus duomenis užrašyti faile report.txt pagal
žemiau nurodytą formatą
4. Suarchyvavus įkelti į VU VMA naudotus duomenis (db.bin), užklausų kodus (query1.c, query4.c, etc) ir ataskaitą
(report.txt), kurioje matosi, ką gavote, vykdydami savo užklausas savo sugeneruotiems duomenims.

Ataskaitos formatas
QUERY1
[filtrą tenkinančių studentų skaičius]
Vardas Pavardė …
Vardas Pavardė …
Vardas Pavardė …
…
QUERY4
...
Paaiškinimas: neprivaloma atlikti visas užklausas. Ataskaitų faile rašomos tik tos užklausos, kurias įgyvendinote. Failą
siūloma pildyti rankomis, pagal tai, ką matote ekrane paleidę atitinkamą queryX.c failą. Vietoje laužtinių skliaustų eilutėje
reikia užrašyti, kiek studentų tenkina duotą užklausą. Jei skaičius teigiamas, žemiau reikia įkelti pirmųjų trijų užklausą
tenkinusių studentų įrašų duomenis (privaloma Vardas ir Pavardė, kitkas savo nuožiūra, kaip patogiau). Jei studentų
mažiau nei trys, įkelkite kiek yra, jei daugiau – vietoje ketvirtos ir vėlesnių eilučių dėkite daugtaškį.

Užklausos
Standartinės užklausos:
QUERY 1. Studentai nepasirinkę nei vieno kurso.
QUERY 2. Studentai, kurių vidurkis 5.0 ir didesnis.
QUERY 3. Studentai, kurių vardas prasideda priebalse.
QUERY 4. Studentai, kurie yra antrame arba trečiame kurse.
QUERY 5. Studentai, kurių vardas yra ilgesnis už pavardę.
QUERY 6. Studentai, kurie neturi neigiamų pažymių.
QUERY 7. Studentai, kurių pažymiai tarp 6 ir 9 imtinai.
QUERY 8. Studentai, kurie mokosi „Calculus“ ir „Algebra“.
QUERY 9. Studentai, kurie mokosi „Philosohpy“ ir išlaikė egzaminą (>4).
QUERY 10. Studentai, kurie moka „Lithuanian“ kalbą.
QUERY 11. Studentai, kurie mokosi „Philosohpy“ arba turi dešimtukų.
Sudėtingesnės užklausos:
QUERY 12. Studentai, kurie moka daugiausiai kalbų.
QUERY 13. Studentai, kurių pažymių vidurkis suskaičiuotas neteisingai.
QUERY 14. Studentai, kurie neturi kursų, kuriuose jie būtų vieninteliu studentu.
QUERY 15. Studentai, kurie nuo geriausio studento atsilieka ne daugiau nei per vieną balą.
QUERY 16. Studentai, kurių įrašuose dubliuojasi kalba arba kursas.
QUERY 17. Studentai, kurių įrašuose tam pačiam kursui išsaugoti skirtingi įvertinimai.
QUERY 18. Studentai, kurių arba vardas, arba pavardė duomenų bazėje yra unikalūs.

---

Atmintinė.
• Pirmo masyvo elemento indeksas yra 0, paskutini s yra capacity 1 , kur capacity yra masyvo talpa
• Masyvo dydis gali kisti intervale [0; CAPACITY], o elementai pasiekiami per indeksus iš intervalo [0; size 1]

Užduotis 1.
Parašykite programą, kuri savo viduje iš eilės vieną po kito atlieka TIKSLIAI šiuos žingsnius:
a) apibrėžia masyvą, galinti sutalpinti 10 elementų, tame pačiame sakinyje inicializuodama juos nulinėmis reikšmėmis
b) atspausdina visą masyvą į ekraną
c) pačiam pirmam, ketvirtam ir dešimtam masyvo elementams priskiria reikšmes
atitinkamai 1, 2 ir 3
d) ištrina iš masyvo trečią elementą
e) įterpia į masyvą naują elementą su reikšme 4, taip, kad po įterpimo jis būtų septintas
f) atspausdina visą masyvą į ekraną
g) paprašo vartotojo įvesti du skaičius (x ir y), ir masyvo elementui s
u indeksu x nustato naują reikšmę, lygią y
h) paprašo vartotojo įvesti vieną skaičių (x), ir ištrina iš masyvo elementą su indeksu x
į) paprašo vartotoją įvesti du skaičius (x ir y), ir į masyvą įterpia naują elementą su reikšme y, taip, kad po įterpimo jo
indeksas būtų x
j) atspausdina visą masyvą į ekraną

Užduotis 2.
Parašykite programą, kurios viduje apibrėžiamas masyvas, galintis sutalpinti 1000 elementų. Ši programa turi paprašyti
vartotojo įvesti tris skaičius (a, b, c), į masyvą įrašyti c atsitiktinai sugeneruotų reikšmių, kurių kiekviena priklauso
intervalui [a; b], ir atspausdinti masyvo turinį (tas c reikšmių) į ekraną.
• Kad gautumėte atsitiktinį skaičių, pasinaudokite rand() funkcija iš <stdlib.h>, kuri leidžia gauti atsitiktinį skaičių iš
intervalo [0; RAND_MAX]
• Sugeneruotą reikšmę reikės transformuoti taip, kad ji papultų į nurodytą intervalą, aritmetinių operacijų pagalba
• Kad keletą kartų paleidus programą gautumėte vis ki tus skaičius, pasinaudokite funkcija srand() iš <stdlib.h>,
kuriai paduokite kaskart kitokį skaičių. Vienas iš sprendimų pasinaudoti funkcija time(NULL) iš <time.h>, kad
atsitiktinių skaičių generatorius būtų inicializuojamas priklausomai nuo nuolat kint ančio programos paleidimo
laiko momento.

Užduotis 3.
Parašykite programą, kuri paprašo vartotojo įvesti du skaičius (s ir n), o po to nuskaito lygiai n teigiamų būsimo masyvo
x elementų reikšmių. Jei reikšmė neteigiama – prašykite kartoti tos reikšmės įvedimą. Programa turi atspausdinti visas masyve esančių skaičių poras (x_i, x_j) tokias kad x_i ir x_j sandauga yra lygi s.

Užduotis 4.
Parašykite programą, kuri leidžia vesti ir įsimena vartotojo vedamus teigiamus skaičius iki tol, kol jis įveda pirmą
neteigiamą reikšmę. Programa turi atspausdinti visus įvestus pirminius skaičius, kiekvieną pirminį skaičių spausdindama
tik vieną kartą, t. y. išvedant rezultatus sykį jau atspausdinta pirminio skaičiaus reikšmė nebekartojama.

---

Užduotis 1.
Parašykite programą, kuri paprašo duomenų faile „in.txt“ pateikti realų skaičių, ne mažesnį už 10 ir nedidesnį už 1000, su ne daugiau kaip 3 skaičiais po kablelio. Laikykite, kad įvestyje trupmeninę dalį nuo sveikosios skiria kablelis. Programa turi atspausdinti įvesto skaičiaus ilgį. Jei duomenys pateikti nekorektiškai, programa turi prašyti įvesti (tikėtina, kito) duomenų failo vardą, su galimai jau korektiškais duomenimis.

Užduotis 2.
Parašykite programą, kuri paprašo įvesti tris skaičius vienoje eilutėje, be tarpų, teigiamus arba neigiamus, kuriuos vieną nuo kito skiria kabliataškiai, ir raskite vidurinį (pagal reikšmę) skaičių. Jei įvestis korektiška, rezultatą (reikšmę) programa turi atspausdinti rezultatų faile, kurio vardas įvedamas ir privalo baigtis simboliais „.txt“ (jei taip nėra, prašoma failo vardą įvesti iš naujo).

Užduotis 3.
Parašykite programą, kuri patikrina, ar eilutėje yra korektiškai įvesta data, formatu YYYY-MM-DD. Jei taip, programa turi atspausdinti, kokia tai savaitės diena. Savaitės dienų pavadinimai turi būti skaitomi iš tekstinio failo „week.txt“, kuriame yra iš anksto įrašytos septynios eilutės su atitinkamų dienų pavadinimais. Pakeitus pavadinimus faile (pvz. iš lietuvių kalbos į anglų), programoje spausdinamos reikšmės irgi turi pasikeisti (automatiškai).

Užduotis 4.
Parašykite programą, kuri patikrina, ar eilutėje yra korektiškai įvestas el.pašto adresas. Laikykite, kad jis korektiškas, jei eilutėje yra vienas simbolis @ ir (po jo) bent vienas taškas, o prieš @, po taško ir tarp šių dviejų simbolių – ne mažiau nei vienas kitoks simbolis. Jei įvestis korektiška, programa turi atspausdinti domeną, t.y. el.pašto dalį po simbolio @. Visi kada nors pateikti korektiški elektroninio pašto adresai turi būti kaupiami (append) tekstiniame faile “emails.txt”.

---

Užduotis 1.
Apibrėžkite funkciją createArray , kuri dinaminėje atmintyje leidžia sukurti (naują) sveikųjų skaičių masyvą, užpildytą
atsitiktinėmis reikšmėmis iš nurodyto intervalo. Ši funkcija gauna būsimo masyvo dydį size , išskiria atitinkamo dydžio
bloką dinaminėje atmintyje, ir užpildo jį atsitiktiniais skaičiais iš intervalo [ low ; high ]. Paskutiniajam veiksmui atlikti, jei
norite, galite pasinaudoti anksčiau (7 sav. 4 užd.) parengta funkcija generateArray . Funkcija createArray sėkmės
atveju turi grąžinti rodyklę į pirmą naujai sukurto masyvo elementą, nesėkmės atveju NULL
Įdomumo dėlei, perrašykite funkcijas
createArray ir/ar generateArray taip, kad jų viduje vietoje operatoriaus [] masyvo
elementui pasiekti būtų naudojamas išrodyklinimo operatorius *, adreso operatorius ir rodyklių aritmetika. Pasikeisti turi tiktai tekstas kodo faile, o funkcijų veikimas turi išlikti nepasikeitęs.


Užduotis 2.
Apibrėžkite funkciją, kuri gauna argc-1 failų vardų per komandinės eilutės parametrus , ir grąžina daugiausiai baitų atmintyje užimančio failo vardą.

Užduotis 3.
Apibrėžkite funkciją swap , kuri moka sukeisti dviejų (tai funkcijai perduodamų) kintamųjų (sveikųjų skaičių) reikšmes
vietomis, taip, kad apkeitimas vyktų funkcijoje, o efektas liktų galioti ne tik funkcijoje, bet ir už jos ribų.

Užduotis 4.
Apibrėžkite funkciją splitData , kuri moka vieną masyvą padalinti į dvi dalis, dinaminėje atmintyje sukurdama du naujus masyvus (į pirmą masyvą įrašydama skaičius esančius pradinio m asyvo pradžioje, o į antrą masyvą pradinio masyvo likusią dalį). Ši funkcija gauna penkis parametrus. Du pirmi parametrai leidžia gauti pradinio masyvo duomenis ir dydį, trečias parametras nurodo pirmosios dalies dydį (pagal jį nustatoma, kurioje vietoje vyksta perskėlimas), o likę du
parametrai skirti perduoti (grąžinti) tuos du naujai sukurtus masyvus (pirmųjų elementų adresus) iš funkcijos į likusią
programą. Funkcija pirmiausia patikrina, ar visų (!) parametr ų reikšmės korektiškos, tuomet sukuria du n aujus atitinkamų
dydžių masyvus dinaminėje atmintyje, po ko perkelia reikiamą skaičių elementų į atitinkamai pirmą ir į antrą masyvą.
Funkcija tikisi, jog iki ją iškviečiant šie du masyvai dar nebus sukurti, t.y. tikisi, jog gaus parametrų reikšmes lygias NULL ir
sukurs masyvus savo viduje. Sėkmės atveju, funkcija grąžina skaičių 0, nesėkmės atveju -1.

Kiekvienai iš užduočių skirtą kodą rašykite atskirame kodo faile . Funkcija main yra skirta parašytos funkcijos testavimui ir demonstracijai, kaip veikia jūsų parašytas kodas . Specialios vartotojo sąsajos daryti nereikia pratybų rezultatas yra funkcija, o ne main esantis kodas.

---

Užduotis 1.
Apibrėžkite funkciją, kuri patikrina, ar duotas skaičius papuola į nustatytą intervalą.
Funkcijos prototipas: int isInRange(int number, int low, int high)
Aprašymas: funkcija turi grąžinti
true , j ei skaičius number priklauso intervalui [ low ; high ] (su sąlyga, kad low nevir šija
high ), kitaip ji turi grąžinti false

Užduotis 2.
Apibrėžkite funkciją, kuri suskaičiuoja duoto skaičiaus faktorialą.
Funkcijos prototipas: int getFactorial(int number)
Aprašymas: funkcija skaičiavimams naudojasi rekursija ir grąžina neneigiamo skaičiaus number faktorialą, o jei jo
suskaičiuoti negalima grąžina 0.
Įdomu: apibrėžkite (kitą) funkciją, kuri duoda tą patį rezultatą, bet rekursija nesinaudoja.

Užduotis 3.
Apibrėžkite funkciją, kuri leidžia gauti (įvesti) vieną skaičių iš standartinio įvedimo srauto.
Funkcijos prototipas: int getPositiveNumber(char *msg)
Aprašymas: funkcija atspausdina į ekraną tekstinę eilutę msg (kurioje tikisi gauti vartotojui skirtą pran
ešimą apie tai, ką reikia įvesti), ir ją (eilutę ekrane) kartoja (prašo vartotojo įvesti vėl ir vėl) tol, kol vartotojas neįveda vieno skaičiaus eilutėje, kurį ši funkcija ir grąžina.

Užduotis 4.
Apibrėžkite funkciją, kuri leidžia užpildyti masyvą atsitik
tinėmis reikšmėmis.
Funkcijos prototipas: void generateArray(int data[], int size, int low, int high)
Aprašymas: kiekvienam iš size elementų, esančių masyve data , funkcija turi priskirti atsitiktinę reikšmę iš intervalo low ; high ]; nieko papildomai grąžinti nereikia, t.y. funkcijos rezultatas yra masyve esančios (naujos) reikšmės.

Užduotis 5.
Apibrėžkite funkciją, kuri grąžina failo dydį baitais.
Funkcijos prototipas: long getFileSize(char *fileName)
Aprašymas: funkcija gauna failo vardą kaip parametrą, b
ando jį atidaryti (skaitymui binariniu režimu), ir peršokus į failo pabaigą (fseek) sužinoti (ftell) kiek baitų jis užima; tą baitų skaičių funkcija ir grąžina (patikrinkite su OS rodomomis reikšmėmis), o jei kažkas nepavyko (pvz. tokio failo nėra) funkcija grąžina reikšmę -1.

Užduotis 6.
Apibrėžkite funkciją, skirtą vartotojo sąsajoje pateikiamam meniu spausdinti ir vartotojo pasirinkimui gauti.
Funkcijos prototipas: int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg)
Aprašymas: funkcija turi atspausdinti meniu antraštę (parametras menuTitle ), tuomet atspausdinti meniu iš menuSize pasirinkimų, kur meniu elementų (eilučių) pavadinimai pateikiami (eilučių) masyve menuOptions . Tuomet funkcija atspausdina tekstinę eilutę inputMsg , kurioje perduodamas vartotojui skirtas tekstas, kuriame prašoma įvesti savo pasirinkimą, ir gavusi iš vartotojo skaičių (atitinkamo meniu punkto numerį) jį ir grąžina; jeigu vartotojo įvedimas nekorektiškas (įvedamas ne skaičius arba tokio meniu punkto n ėra), visas spausdinimo procesas (antraštė, meniu, prašymas įvesti) kartojamas iš naujo, tol, kol įvedimas netaps korektiškas.

---

Užduotis 1.
Sukurkite duomenų tipus ir funkcijas atstumui tarp dviejų taškų plokštumoje suskaičiuoti:
a) apibrėžkite struktūrinį duomenų
tipą Point , kurio viduje būtų saugomi du realūs skaičiai taško plokštumoje koordinatės x ir y . Duomenų tipo vardui sutrumpinti pasinaudokite raktiniu žodžiu typedef . Funkcijoje main sukurkite du Point tipo kintamuosius p1 ir p2, atitinkančius tašką su k oordinatėmis (2.0, 3.0) ir tašką su koordinatėmis ( 4.0, 5.0) atitinkamai
b) apibrėžkite funkciją
void printPoint(Point p) p), kuri gavusi taško koordinates nusakančią struktūrą Point , atspausdina jo
koordinates į ekraną, formatu (x, y). Pasinaudokite funkcija printPoint taškų p1 ir p2 koordinatėms atspausdinti
c) apibrėžkite funkciją
Point createPoint(double x, double y), kuri turint du realius skaičius leistų gauti tašką su atitinkamomis koordinatėmis (sukurtų Point tipo struktūrą, užpildytų ją koordinatėmis, ir grąžintų tolesniam panaudojimui). Perrašykite main funkciją taip, kad taškai p1 ir p2 būtų kuriami naudojantis funkcija createPoint
d) apibrėžkite funkciją
double getDistance(Point a, Point b), kuri randa (gr ąžina) atstumą tarp dviejų taškų plokštumoje.
Perrašykite main funkciją taip, kad ji atliktų vieną veiksmą apskaičiuotų atstumą tarp taškų p1 ir p2 . Tai reikia atlikti
vienu C kalbos sakiniu funkcijai getDistance tiesiogiai perduokite createPoint rezul tatą( us), o kintamieji p1 ir p2 tampa nebūtini.

Užduotis 2.
Sukurkite sveikųjų skaičių steką, apibrėždami reikiamus duomenų tipus ir su jais dirbančias funkcijas:
a) apibrėžkite struktūrinį duomenų tipą
Stack , kurio viduje būtų saugomas dinaminis masyvas (rodyklė į pirmą dinaminio
masyvo elementą) ir jo talpa (dydis). Duomenų tipo vardui sutrumpinti pasinaudokite žodžiu typedef
b) apibrėžkite funkciją
void initStack(Stack * stack), kuri nustatytų pradines struktūros reikšmes (lygias 0)
c) apibrėžkite funkciją void printStack(Stack *stack), kuri cikle atspausdintų visus dinaminio masyvo elementus
d) apibrėžkite funkciją
int getStackSize(Stack * stack), kuri tiesiog grąžina Stack viduje talpinamo dinaminio masyvo talpą
(dydį)
d) apibrėžkite funkciją void push(Stack *stack, int value), kuri (padidinusi dinaminio masyvo talpą) įterptų naują reikšmę į pabaigą
e) apibrėžkite funkciją
int top(Stack * stack), kuri grąžintu paskutinį dinaminio masyvo elementą (arba 0, jei masyvas tuščias).
f) apibrėžkite funkciją int pop(Stack * stack), kuri ne tik grąžina paskutinį dinaminio masyvo elementą (daro tą patį, ką ir funkciją top , ir todėl į ją kreipiasi), bet ir ištrina jį iš masyvo (atitinkamai sumažina ir dinaminio masyvo
g) apibrėžkite
funkciją void destroyStack(Stack * stack), kuri atlaisvina visą naudojamą atmintį (atitinkamai, atnaujina ir Stack viduje esančius laukus).
Daugiau informacijos:
https://en.wikipedia.org/wiki/Stack_(abstract_data_type)

Užduotis 3.
Sukurkite taškų steką, modifikuodami iki šiol sukurtus duomenų tipų aprašus ir funkcijas:
a) modifikuokite 2 užduoties struktūrą
Stack , nustatydami jog struktūros viduje (dinaminiame masyve) bus saugomos ne int tipo reikšmės, bet Point tipo (1 užduotis) elementai
b) modifikuokite 2 užduoties punktuose d f nurodytų funkcijų prototipus taip, kad jos dirbtų ne su int , o su Point tipo parametrais
c) modifikuokite 2 užduotyje apibrėžtas funkcijas taip, kad jos korektiškai dirbtų su Point tipo duomenimis, ir
pasinaudodami sukurtomis funkcijomis, į Stack esantį dinaminį masyvą įdėkite penkis taškus ( Point ), o tada
atspausdinkite jų koordinates ir atstumus iki koordinačių pradžios (tam modifikuokite funkciją printStack)

---

Šių užduočių esmė - susipažinti su vienetų testais (angl. unit testing) ir testais grįstu programavimu (angl. test driven development). Įgyvendindami žemiau nurodytas užduotis, pirmiausia:
1) parašykite nepraeinantį testą (angl. failed test),
2) įgyvendinkite funkciją tiek ir tik tiek, kad testas praeitų ir
3) paleiskite visus testus, kad įsitikinti, jog jie visi praeina.
Pratybų užduotims atlikti pasirinktinai įgyvendinkite pasirinktas funkcijas iš string.h , o vienetų testams vykdyti
pasinaudokite assert.h . Šių pratybų kontekste funkcija main - ne daugiau nei vienetų testų vykdymo priemonė. Funkcijų
viduje negali būti funkcionalumo, kuris netikrinamas main viduje esančiais testais. Kiekvienos užduoties kodą rašykite atskirame faile .

Užduotis 1.
Įgyvendinkite funkciją strlen
Užduotis 2.
Įgyvendinkite funkciją strcpy , strcat , arba strcmp
Užduotis 3.
Įgyvendinkite funkciją strncpy , strncat , arba strncmp
Užduotis 4.
Įgyvendinkite funkciją strchr , strrchr , arba strstr
Užduotis 5.
Įgyvendinkite funkciją memcpy , memcmp , memset , arba memchr

---
Funkcija main yra skirta testavimui ir demonstracijai, kaip veikia jūsų parašytos funkcijos. Nei vienoje iš žemiau
užduotyse aprašomų funkcijų negali būti nei skaitymo iš, nei spausdinimo į ekraną (nebent užduotyje nurodoma kitaip,
pvz. printArray ar main). Specialios vartotojo sąsajos daryti nereikia – rezultatas yra funkcijos ir moduliai, o ne
main esantis kodas.
Naudojamo kompiliatoriaus parinktis (angl. compiler options), leidžiančias vykdyti žemiau nurodytus veiksmus, kurti bibliotekas ir valdyti transliavimo procesą, rasite kompiliatoriaus dokumentacijoje. Jei naudojatės GCC, galite
pasinaudoti paskaitos metu pateikta informacija.
Darbo pabaigoje suarchyvuokite visus užduočių rengimo procese sukurtus (tiek rankomis, tiek automatiškai) failus (įtraukiame bibliotekas ir kodo failus, (.i, .s, .o); binarinių failų su išsaugotais duomenimis kelti nereikia).

Užduotis 1a.
Sukurkite modulį, atskirame faile file.c apibrėždami dvi funkcijas: saveToFile, leidžiančią sveikų skaičių masyvo turinį
išsaugoti binariniame faile, ir loadFromFile, leidžiančią iš to failo jį užkrauti. Kad užkraunant žinoti kiek elementų buvo
saugoma masyve, išsaugodami duomenis binarinio failo pradžioje išsaugokite to masyvo dydį. Šių funkcijų prototipus
pateikite antraštės faile file.h, kurį būtinai apsaugokite nuo pakartotinio įtraukimo (angl. include guard). Kitame faile
main.c įtraukite file.h ir apibrėžkite dvi naujas funkcijas: fillArray, leidžiančią užpildyti masyvą atsitiktiniais duomenimis, ir printArray, leidžiančią atspausdinti visus to masyvo elementus į ekraną. Faile main.c sukurkite funkciją main ir patikrinkite savo parašytas funkcijas tokiu būdu: 1) sugeneruokite masyvą m1 2) atspausdinkite m1 3) išsaugokite m1 faile 4) užkraukite iš failo masyvą m2 5) atspausdinkite m2. Jei abiejų masyvų turinys sutampa (kas reiškia, jog funkcijos veikia korektiškai), parašykite programą, kuri spausdina tekstą „all good“ į ekraną, jei masyvų turinys sutampa, ir „something’s wrong“, jei masyvų turinys skiriasi.

Užduotis 1b.
Papildykite file.h ir file.c esantį modulį dviem skaitliukais (globalūs kintamieji), leidžiančiais įsiminti, kiek kartų masyvas
buvo saugomas į failą ir kiek kartų buvo iš failo nuskaitoma. Patikrinkite, jog tie skaitliukai skaičiuoja operacijas
korektiškai, tokiu būdu: 1) sugeneruokite masyvus m1, m2 ir m3 su atsitiktiniais duomenimis 2) išsaugokite masyvą m1
į failą 3) į tą patį failą („ant viršaus“) išsaugokite masyvą m3 4) užkraukite iš to failo masyvą m1 5) išsaugokite kitame
faile masyvą m2 6) užkraukite iš to (kito) failo masyvą m3 7) užkraukite iš pirmo (ankstesnio) failo masyvą m2.
Parašykite programą, kuri spausdina „all good“, jei įvykdžius minėtą scenarijų skaitliukas saveCount lygus 3 ir skaitliukas
loadCount lygus 3, o kitu atveju – spausdinkite „something’s wrong“.

Užduotis 1c.
Kompiliuodami per komandinę eilutę, sugeneruokite šiuos failus: 1) gaukite file.i, apdoroję file.c preprocesoriumi 2)
gaukite file.s su asemblerio kodu, atitinkančiu file.c ir/ar file.i esantį kodą 3) gaukite file.o, kuriame būtų sukompiliuotas
file.c kodas 4-6) analogiškai gaukite failus main.i, main.s ir main.o, iš failo main.c ir 7) gaukite programos vykdomąjį failą
(main.exe arba jo analogą), surišdami (angl. linking) failus file.o ir main.o. Pasižiūrėkite, kaip atrodo kiekvienas iš gautų
failų, per tekstinį redaktorių. Kurie failai yra tekstiniai, skaitomi/suprantami žmogui, o kurie ne (skirti „kompiuteriui“)?

Užduotis 1d.
Sukurkite statinę biblioteką libfile.a (arba libfile.lib), į kurios vidų įdėkite failą file.o. Pagaminkite vykdomąjį failą
(main-static.exe arba jo analogą), naudodamiesi ta sukurta statine biblioteka. Įsitikinkite, kad programa main-static
veikia korektiškai.

Užduotis 1e.
Sukurkite dinaminę biblioteką libfile.dll (arba libfile.so), į kurios vidų įdėkite failą file.o. Pagaminkite vykdomąjį failą
(main-dynamic.exe arba jo analogą), kuris galėtų dirbti su ta dinamine biblioteka. Įsitikinkite, kad programa
main-dynamic veikia korektiškai.

---

Kiekvieną algoritmą (arba jo variantą) realizuokite kaip atskirą funkciją, o funkcijoje main įvertinkite kiekvieno jų
efektyvumą ir palyginkite juos tarpusavyje. Kiekvienoje iš funkcijų berikiuodami skaičiuokite, kiek kartų buvo lyginami
gretimi elementai, ir kiek kartų jiems buvo vykdomos priskyrimo operacijos. Jei norite, dviem šių operacijų skaitliukams galite naudoti globalius kintamuosius. Main funkcijoje atspausdinkite lentelę, kurioje būtų galima pažiūrėti, kiek operacijų buvo atlikta kiekvienoje iš nagrinėjami algoritmo versijų.

Užduotis 1a.
Apibrėžkite funkciją, skirtą užpildyti turimą masyvą atsitiktinai sugeneruotais duomenimis. Jei turite jau parašytą
realizaciją, galite ja naudotis.
Užduotis 1b.
Apibrėžkite funkciją, skirtą rikiavimo algoritmo korektiškumui tikrinti. Ši funkcija patikrina, ar masyve esantys duomenys
surikiuoti reikiama tvarka.

Užduotis 2.
Realizuokite žemiau nurodytas rikiavimo algoritmų versijas. Svarbu: pirmiausia pagaminkite joms korektišką testavimo aplinką, t.y. tokią, kurioje lyginimas būtų korektiškas, nes kiekviena iš algoritmo versijų eksperimento metu rikiuoja tą patį (nesurikiuotą, programos pradžioje sugeneruotą) duomenų masyvą. Kad sugeneruoti duomenis, naudokitės funkciją iš užduoties 1a, o surikiavę juos vienu ar kitu užduoties 2 algoritmų pasinaudokite užduoties 1b funkcija algoritmo darbo rezultatui patikrinti. Jei algoritmas duomenų neišrikiuoja – atspausdinkite tai rezultatų lentelėje. Tai reiškia, jog programuodami padarėte klaidą.
Algoritmai:
a) Burbuliuko metodas (angl. bubble sort, https://en.wikipedia.org/wiki/Bubble_sort)
b) Greitojo rikiavimo metodas (angl. quick sort, https://en.wikipedia.org/wiki/Quicksort)
c) Įterpimo metodas (angl. insertion sort, https://en.wikipedia.org/wiki/Insertion_sort)
d) Išrinkimo metodas (angl. selection sort, https://en.wikipedia.org/wiki/Selection_sort)
e) Sąlajos metodas (angl. merge sort, https://en.wikipedia.org/wiki/Merge_sort)

Užduotis 3.
a) Perrašykite testavimo aplinką taip, kad būtų atliekamas ne vienas, bet daug eksperimentų (t. y. rikiuojamas ne vienas, o
daug skirtingų duomenų rinkinių), ir rezultatų lentelėje atsispindėtų visuminis palyginimas, o ne vieno duomenų
rinkinio rezultatai.
b) Atlikite eksperimentus realizuotų algoritmų efektyvumui įvertinti. Eksperimento rezultatus atspausdinkite main
funkcijoje, nurodydami kiek operacijų/laiko reikėjo vienam ar kitam algoritmui. Naudodamiesi globaliais kintamaisiais, suskaičiuokite kiek priskyrimo ir kiek palyginimo operacijų atliko kiekvienas iš algoritmų; išmatuokite, kiek sekundžių algoritmas dirbo (tam pasinaudokite <time.h>
aprašytomis funkcijomis)