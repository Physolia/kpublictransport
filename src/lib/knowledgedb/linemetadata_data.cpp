/*
    SPDX-FileCopyrightText: OpenStreetMap contributors
    SPDX-License-Identifier: ODbL-1.0

    Generated code based on data from OpenStreetMap (ODbL) and Wikidata (CC0), do not edit!
*/

#include "linemetadata_p.h"

namespace KPublicTransport {

static const char line_name_stringtab[] = {
    "U70\0"
    "S75\0"
    "M4\0"
    "M5\0"
    "U12\0"
    "M8\0"
    "318\0"
    "S16\0"
    "M6\0"
    "STH\0"
    "EAST\0"
    "S7\0"
    "S5\0"
    "S8\0"
    "S2\0"
    "S11\0"
    "M13\0"
    "S1\0"
    "M10\0"
    "TER 21\0"
    "U13\0"
    "S63\0"
    "S61\0"
    "S68\0"
    "TER 62\0"
    "37\0"
    "888\0"
    "U1\0"
    "U2\0"
    "U3\0"
    "U4\0"
    "U5\0"
    "U6\0"
    "U7\0"
    "U8\0"
    "U9\0"
    "U11\0"
    "U14\0"
    "U15\0"
    "U19\0"
    "U72\0"
    "U76\0"
    "U77\0"
    "S60\0"
    "S3\0"
    "1967\0"
    "N27\0"
    "M17\0"
    "S50\0"
    "U79\0"
    "S24\0"
    "WLB\0"
    "58\0"
    "S6\0"
    "TER T1\0"
    "665\0"
    "S4\0"
    "RS 1\0"
    "N17\0"
    "S25\0"
    "KJ\0"
    "3F\0"
    "S46\0"
    "S45\0"
    "N20\0"
    "RB23\0"
    "A3\0"
    "S51\0"
    "FM1\0"
    "MRT Blue\0"
    "Yellow\0"
    "Red\0"
    "89\0"
    "LO\0"
    "FXC\0"
    "LS\0"
    "LSM\0"
    "LM\0"
    "LU\0"
    "614P\0"
    "96\0"
    "86\0"
    "U49\0"
    "FM2\0"
    "24E\0"
    "59\0"
    "181 (SN)\0"
    "S85\0"
    "FL4\0"
    "FL1\0"
    "FL2\0"
    "ML3\0"
    "109\0"
    "657\0"
    "North Jersey Coast\0"
    "48\0"
    "Z30\0"
    "U43\0"
    "U41\0"
    "ATS\0"
    "IK\0"
    "ISL\0"
    "TCL\0"
    "AEL\0"
    "EAL\0"
    "TML\0"
    "28E\0"
    "S9\0"
    "Green\0"
    "C-1\0"
    "RI\0"
    "STB\0"
    "U35\0"
    "SIR1\0"
    "SG\0"
    "25N\0"
    "Q\0"
    "T1 A\0"
    "VMLR\0"
    "Bx\0"
    "155\0"
    "TER T2\0"
    "656\0"
    "S47\0"
    "215\0"
    " MSC 2008\0"
    "MD-W\0"
    "N10\0"
    "N4\0"
    "N1\0"
    "H5\0"
    "S64\0"
    "Raritan Valley\0"
    "DRL\0"
    "N82\0"
    "Harlem\0"
    "Hudson\0"
    "Port Jervis\0"
    "SFMA\0"
    "SFM 2\0"
    "308\0"
    "310\0"
    "306\0"
    "302\0"
    "301\0"
    "S 5\0"
    "Port Jefferson\0"
    "New Haven\0"
    "Oyster Bay\0"
    "Kingston/Plymouth Line\0"
    "Needham Line\0"
    "Fairmount Line\0"
    "Greenbush Line\0"
    "Middleborough/Lakeville Line\0"
    "Framingham/Worcester\0"
    "H7\0"
    "Main\0"
    "Gladstone\0"
    "Bergen County\0"
    "Morristown\0"
    "Montclair-Boonton\0"
    "DOY\0"
    "WAR\0"
    "Camden\0"
    "Brunswick\0"
    "12E\0"
    "15E\0"
    "98\0"
    "91\0"
    "U78\0"
    "1992\0"
    "93\0"
    "94\0"
    "S33\0"
    "N19\0"
    "Zoo Tram\0"
    "S32\0"
    "S10\0"
    "399\0"
    "TMR\0"
    "S29\0"
    "S12\0"
    "H9\0"
    "H8\0"
    "H6\0"
    "S42\0"
    "69\0"
    "S52\0"
    "62A\0"
    "51A\0"
    "28A\0"
    "S28\0"
    "37A\0"
    "RED\0"
    "326\0"
    "639\0"
    "8А\0"
    "38\0"
    "S31\0"
    "СТ\0"
    "2 Салтівська\0"
    "1 Холодногірсько-заводська\0"
    "3 Олексіївська\0"
    "12а\0"
    "SSL\0"
    "S40\0"
    "Port Washington\0"
    "TER 22\0"
    "S36\0"
    "SFM3\0"
    "U75\0"
    "66\0"
    "S20\0"
    "Тр3\0"
    "Тр2\0"
    "Тр4\0"
    "FC1\0"
    "FL5\0"
    "FL6\0"
    "FL7\0"
    "FL8\0"
    "LEX\0"
    "655\0"
    "631\0"
    "635\0"
    "TER 01\0"
    "TER 60\0"
    "IR87\0"
    "901\0"
    "S13\0"
    "Μ3\0"
    "Тр1\0"
    "Тр9\0"
    "Тр6\0"
    "7bis\0"
    "Brown\0"
    "Orange\0"
    "100\0"
    "Scala mobile\0"
    "S 8\0"
    "RS 4\0"
    "SFM 1\0"
    "SFM 4\0"
    "U44\0"
    "8 EX\0"
    "SFM7\0"
    "PAO\0"
    "Meadowlands\0"
    "Pascack Valley\0"
    "U46\0"
    "T5\0"
    "C-8\0"
    "Metropolitana\0"
    "Pink\0"
    "U47\0"
    "MRT Purple\0"
    "4S\0"
    "TRE\0"
    "S18\0"
    "M-LINE\0"
    "RS 3\0"
    "STY\0"
    "CBTU\0"
    "DPM\0"
    "95\0"
    "UP-N\0"
    "MD-N\0"
    "NCS\0"
    "UP-NW\0"
    "UP-W\0"
    "BNSF\0"
    "HC\0"
    "SWS\0"
    "ME\0"
    "RS 2\0"
    "FLY1\0"
    "FLY2\0"
    "LBN\0"
    "خط الضاحية الجنوبية لتونس\0"
    "S 5X\0"
    "MTM\0"
    "C-5\0"
    "PH\0"
    "LBS\0"
    "U BRA\0"
    "T3\0"
    "T3b\0"
    "Rhônexpress\0"
    "T4\0"
    "9 EX\0"
    "Line 3\0"
    "West Hempstead\0"
    "M1/M2\0"
    "KTL\0"
    "T8\0"
    "97\0"
    "BR\0"
    "SFM 6\0"
    "C11\0"
    "S19\0"
    "S21\0"
    "Gold\0"
    "Providence/Stoughton Line\0"
    "Franklin Line\0"
    "TRAB\0"
    "Z70\0"
    "PST\0"
    "S70\0"
    "S71\0"
    "Babylon\0"
    "VLT Cabo - Cajueiro Seco\0"
    "654\0"
    "S53\0"
    "S210\0"
    "Z50\0"
    "NS\0"
    "m2\0"
    "T6\0"
    "L10 Nord\0"
    "L11\0"
    "L9 Nord\0"
    "Tren Urbano\0"
    "A2\0"
    "Tide\0"
    "703\0"
    "Penn\0"
    "S150\0"
    "G30\0"
    "S820\0"
    "G10\0"
    "S30\0"
    "S220\0"
    "G71\0"
    "G70\0"
    "G60\0"
    "G43\0"
    "S80\0"
    "S35\0"
    "S34\0"
    "Z60\0"
    "U17\0"
    "U18\0"
    "WTR\0"
    "TDV\0"
    "C-3\0"
    "Π3\0"
    "A1\0"
    "E-W\0"
    "S-N\0"
    "R6\0"
    "R60\0"
    "R5\0"
    "R50\0"
    "U71\0"
    "U83\0"
    "U73\0"
    "R2Sud\0"
    "HVL\0"
    "47B\0"
    "R2\0"
    "R3\0"
    "R4\0"
    "R8\0"
    "UMRT1\0"
    "RT2\0"
    "RG1\0"
    "Expo Line\0"
    "Millennium Line\0"
    "Canada Line\0"
    "U42\0"
    "U45\0"
    "R12\0"
    "615P\0"
    "L9 Sud\0"
    "NL1\0"
    "R11\0"
    "R13\0"
    "R14\0"
    "R15\0"
    "704\0"
    "701\0"
    "Sul\0"
    "N2\0"
    "BLUE\0"
    "GREEN\0"
    "ORANGE\0"
    "620\0"
    "Manchester Airport - Manchester Victoria\0"
    "North Clyde\0"
    "North Berwick\0"
    "Maryhill\0"
    "TL 1\0"
    "Santa Cruz\0"
    "Japeri\0"
    "505\0"
    "507\0"
    "610\0"
    "615\0"
    "614\0"
    "751\0"
    "761P\0"
    "SN 5\0"
    "T-A\0"
    "T1 R\0"
    "18E\0"
    "706\0"
    "705\0"
    "25E\0"
    "C13\0"
    "MSC\0"
    "L12\0"
    "S14\0"
    "Тр8\0"
    "U74\0"
    "Τ6\0"
    "Τ7\0"
    "S43\0"
    "S81\0"
    "SIL\0"
    "TL-1\0"
    "TL-2\0"
    "T3a\0"
    "T7\0"
    "Orlyval\0"
    "CDGVAL\0"
    "Luas Green Line\0"
    "DART\0"
    "C-2\0"
    "C14\0"
    "C15\0"
    "Central\0"
    "S41\0"
    "L-17\0"
    "S62\0"
    "RL1\0"
    "3bis\0"
    "I2\0"
    "YL\0"
    "Silver\0"
    "510\0"
    "NWK–WTC\0"
    "Bakerloo\0"
    "Hammersmith & City\0"
    "Circle\0"
    "Waterloo & City\0"
    "Jubilee\0"
    "Metropolitan\0"
    "District\0"
    "CAT\0"
    "NSL\0"
    "Bury - Manchester Piccadilly\0"
    "Northern\0"
    "MM\0"
    "BGL\0"
    "THZ1\0"
    "仙台市南北線 (Sendai Namboku Line)\0"
    "仙台市東西線 (Sendai Tozai Line)\0"
    "L4A\0"
    "Verde\0"
    "Laranja\0"
    "Vermelha\0"
    "Amarela\0"
    "Azul\0"
    "Broadway Subway\0"
    "ODEA\0"
    "ADEO\0"
    "VOBA\0"
    "AVOL\0"
    "APOR\0"
    "B-L\0"
    "B-WA\0"
    "S-L\0"
    "TG-B\0"
    "SI-WA\0"
    "T2B\0"
    "U29\0"
    "U34\0"
    "S 9\0"
    "L10\0"
    "L9\0"
    "Z\0"
    "ML1\0"
    "ML2\0"
    "I1\0"
    "R2Nord\0"
    "R7\0"
    "B1\0"
    "B2\0"
    "C-10\0"
    "C-7\0"
    "4a\0"
    "WCE\0"
    "Conexão Metrô-Aeroporto\0"
    "RMGL\0"
    "RD\0"
    "SV\0"
    "BL\0"
    "GR\0"
    "L1B\0"
    "PATCO\0"
    "HOB–WTC\0"
    "HOB–33\0"
    "JSQ–33\0"
    "VLT Curado-Cajueiro Seco\0"
    "BSL\0"
    "MFL\0"
    "NHSL\0"
    "Μ1\0"
    "Μ2\0"
    "ML4\0"
    "Tranvía\0"
    "DTL\0"
    "NEL\0"
    "CCL\0"
    "EWL\0"
    "Pink Line\0"
    "BTS Silom\0"
    "U AVO\0"
    "AG\0"
    "SP\0"
    "941\0"
    "金山(Jinshan)\0"
    "G44\0"
    "S506\0"
    "G80\0"
    "G50\0"
    "Blue Line\0"
    "Violet Line\0"
    "Yellow Line\0"
    "AEx\0"
    "Magenta Line\0"
    "浦江\0"
    "311\0"
    "Red Line\0"
    "环\0"
    "西郊\0"
    "S 6\0"
    "S27\0"
    "S15\0"
    "JRL\0"
    "WES\0"
    "S26\0"
    "JL\0"
    "S17\0"
    "ExpressTram\0"
    "T11\0"
    "Π4\0"
    "Π1\0"
    "Π2\0"
    "25S\0"
    "201\0"
    "42X\0"
    "TGM\0"
    "43X\0"
    "GC\0"
    "L10 Sud\0"
    "G·J\0"
    "902\0"
    "750\0"
    "321\0"
    "1720\0"
    "GG\0"
    "56A\0"
    "59A\0"
    "59B\0"
    "MXP\0"
    "Circular\0"
    "MSC 621\0"
    "MNC\0"
    "C-4\0"
    "C-9\0"
    "СТ-2\0"
    "NT\0"
    "SA\0"
    "Aqua Line\0"
    "exo1\0"
    "exo4\0"
    "exo2\0"
    "SR\0"
    "SY\0"
    "MG\0"
    "OM\0"
    "DT\0"
    "exo5\0"
    "KD\0"
    "exo3\0"
    "U16\0"
    "捷運紅線 (新北投支線)\0"
    "Z72\0"
    "RN\0"
    "KS-AE\0"
    "F3\0"
    "SS\0"
    "JN\0"
    "Orange Line\0"
    "S44\0"
    "U GUS\0"
    "U MCS\0"
    "ACE\0"
    "SMART\0"
    "10AB\0"
    "9AB\0"
    "8AB\0"
    "2AB\0"
    "HN\0"
    "Local\0"
    "APM\0"
    "GF\0"
    "CRL\0"
    "TEL\0"
    "D11\0"
    "PURP\0"
    "YELL\0"
    "TT\0"
    "SIR\0"
    "GL(E)\0"
    "<7>\0"
    "<6>\0"
    "202\0"
    "22R\0"
    "21R\0"
    "TWL\0"
    "TKL\0"
    "Yangluo\0"
    "S23\0"
    "751P\0"
    "NEC\0"
    "NLR\0"
    "JFK\0"
    "Norte\0"
    "ARL\0"
    "1530\0"
    "520\0"
    "AREX\0"
    "SAR-VIN\0"
    "Belford Roxo\0"
    "Deodoro\0"
    "Saracuruna\0"
    "JRI-PBI\0"
    "SAR-GIM\0"
    "Parangaba-Mucuripe\0"
    "Oeste\0"
    "RE2\0"
    "TJ\0"
    "OT\0"
    "김포 골드라인\0"
    "1975\0"
    "1983\0"
    "1968\0"
    "1984\0"
    "910\0"
    "GL(D)\0"
    "Daxing Airport\0"
    "River Line\0"
    "CMET\0"
    "APT Blue\0"
    "BTS Sukhumvit\0"
    "D1\0"
    "D2\0"
    "Rochdale - East Didsbury\0"
    "Shaw and Crompton - East Didsbury\0"
    "JB\0"
    "Ashton-under-Lyne – MediaCityUK\0"
    "Arcobaleno\0"
    "Ashton-under-Lyne – Eccles\0"
    "Piccadilly - Altrincham\0"
    "Altrincham – Bury\0"
    "ESFECO\0"
    "MSC 821\0"
    "MSC 1708\0"
    "KS\0"
    "Airtrain\0"
    "Taipa\0"
    "305\0"
    "309\0"
    "316\0"
    "4М\0"
    "3М\0"
    "2М\0"
    "1М\0"
    "RB 32\0"
    "Fredericksburg\0"
    "CHW\0"
    "CHE\0"
    "AIR\0"
    "CYN\0"
    "NOR\0"
    "ELW\0"
    "NWK\0"
    "Sado\0"
    "TGM1\0"
    "91/Perris Valley\0"
    "Inland Empire-Orange County\0"
    "Riverside\0"
    "San Bernardino\0"
    "Ventura County\0"
    "Antelope Valley\0"
    "Turquoise Line\0"
    "Purple Line\0"
    "550\0"
    "TEX\0"
    "662\0"
    "636\0"
    "640\0"
    "630\0"
    "UP Express\0"
    "Stouffville\0"
    "Richmond Hill\0"
    "Milton\0"
    "Kitchener\0"
    "Barrie\0"
    "Lakeshore East\0"
    "Lakeshore West\0"
    "S22\0"
    "LRT\0"
    "102\0"
    "101\0"
    "SI\0"
    "1645\0"
    "The Trafford Centre – Cornbrook\0"
    "JSQ–33 via HOB\0"
    "<F>\0"
    "S76\0"
    "HBLR\0"
    "RL(M)\0"
    "GL(B)\0"
    "GL(C)\0"
    "Metro\0"
    "S82\0"
    "C-1a\0"
    "N6\0"
    "Thilawa\0"
    "Eastern University\0"
    "Ywar Thar Gyi\0"
    "Computer University\0"
    "Insein - Hlaw Karr\0"
    "Dagon University\0"
    "SN 4\0"
    "KK\0"
    "C-2 (CIVIS)\0"
    "CH\0"
    "E11\0"
    "272\0"
    "T1a\0"
    "T2a\0"
    "TL-3\0"
    "4–环–5\0"
    "BTS Gold Line\0"
    "E5\0"
    "TI\0"
    "TN\0"
    "T1A\0"
    "T1B\0"
    "FEX\0"
    "CK\0"
    "NH\0"
    "Limited\0"
    "TECO\0"
    "QLine\0"
    "MXP2\0"
    "APT Rose\0"
    "m1\0"
    "Π5\0"
    "OH\0"
    "T9\0"
    "Atlantic City\0"
    "Route 2020\0"
    "G40\0"
    "Z42\0"
    "HH\0"
    "Т1\0"
    "TNH1\0"
    "THP1\0"
    "Ouargla tram\0"
    "TRS\0"
    "1E\0"
    "TAD\0"
    "F1\0"
    "F2\0"
    "7а\0"
    "TPC\0"
    "1N\0"
    "S 47\0"
    "TER\0"
    "E7\0"
    "GAWC\0"
    "GWY\0"
    "Aqua\0"
    "R40\0"
    "LIL\0"
    "7AB\0"
    "T10\0"
    "T13\0"
    "Montauk\0"
    "Z40\0"
    "JT\0"
    "Jinyi\0"
    "S90\0"
    "Fremantle\0"
    "Midland\0"
    "Mandurah\0"
    "Thornlie\0"
    "Armadale\0"
    "Joondalup\0"
    "Arrow\0"
    "F4\0"
    "GR01\0"
    "6B\0"
    "S74\0"
    "S 10\0"
    "IR85\0"
    "58d\0"
    "M11\0"
    "M14\0"
    "L-9\0"
    "RE3\0"
    "M12\0"
    "M9\0"
    "M20\0"
    "S225\0"
};

static const char line_logo_stringtab[] = {
    "Berlin Tram M4.svg\0"
    "Tram-Logo.svg\0"
    "Berlin Tram M5.svg\0"
    "Berlin Tram 12.svg\0"
    "Berlin Tram M8.svg\0"
    "Berlin Tram 18.svg\0"
    "Berlin Tram 16.svg\0"
    "Berlin Tram M6.svg\0"
    "Tramway Budapest 2.svg\0"
    "Logo tramway-budapest.svg\0"
    "Berlin transit icons - S7.svg\0"
    "S-Bahn-Logo.svg\0"
    "Berlin transit icons - S75.svg\0"
    "Berlin transit icons - S5.svg\0"
    "Berlin transit icons - S8.svg\0"
    "Berlin Tram M10.svg\0"
    "Berlin Tram M13.svg\0"
    "Berlin Tram 21.svg\0"
    "Logo Stadtbahn Stuttgart.svg\0"
    "Berlin Tram 63.svg\0"
    "Berlin Tram 61.svg\0"
    "Berlin Tram 68.svg\0"
    "Berlin Tram 62.svg\0"
    "Berlin Tram 37.svg\0"
    "SRS Tram Logo.svg\0"
    "Zahnradbahn-Logo VVS.svg\0"
    "Wien U4.svg\0"
    "U-Bahn Wien.svg\0"
    "Wien U6.svg\0"
    "Stadtbahn.svg\0"
    "Berlin Tram 60.svg\0"
    "Berlin transit icons - S3.svg\0"
    "Berlin Tram 67.svg\0"
    "Berlin Tram 27.svg\0"
    "Berlin Tram M17.svg\0"
    "Berlin Tram 50.svg\0"
    "S1 S-Bahn Stuttgart Logo (2021).svg\0"
    "S2 S-Bahn Stuttgart Logo (2021).svg\0"
    "S3 S-Bahn Stuttgart Logo (2021).svg\0"
    "S6 S-Bahn Stuttgart Logo (2021).svg\0"
    "Símbolo del tranvía de Tenerife.svg\0"
    "Magdeburg Tram 6 (2021).png\0"
    "Magdeburg Tram 1 (2021).png\0"
    "Magdeburg Tram 4 (2021).png\0"
    "Magdeburg Tram 5 (2021).png\0"
    "S-train service B.svg\0"
    "S-tog.svg\0"
    "Berlin transit icons - U6.svg\0"
    "U-Bahn.svg\0"
    "Spårvagnslinje 1.svg\0"
    "Spårvagnslinje 5.svg\0"
    "Spårvagnslinje 7.svg\0"
    "München S8.svg\0"
    "München S4.svg\0"
    "Spårvagnslinje 6.svg\0"
    "Magdeburg Tram 9 (2021).png\0"
    "Magdeburg Tram 2 (2021).png\0"
    "Magdeburg Tram 8 (2021).png\0"
    "Magdeburg Tram 10 (2021).png\0"
    "Magdeburg Tram 3 (2021).png\0"
    "Berlin transit icons - U9.svg\0"
    "Berlin transit icons - U8.svg\0"
    "Berlin transit icons - U7.svg\0"
    "Berlin transit icons - U3.svg\0"
    "Berlin transit icons - U2.svg\0"
    "Berlin transit icons - U4.svg\0"
    "Berlin transit icons - U5.svg\0"
    "Berlin transit icons - U1.svg\0"
    "Nürnberg T5.png\0"
    "Tram Nürnberg Logo.png\0"
    "München Tram 17.svg\0"
    "München Tram 19.svg\0"
    "München Tram 18.svg\0"
    "Berlin transit icons - S2.svg\0"
    "Berlin transit icons - S25.svg\0"
    "Hamburg U3.svg\0"
    "J Church logo.svg\0"
    "F Market & Wharves logo.svg\0"
    "München S1.svg\0"
    "München S6.svg\0"
    "Berlin transit icons - S46alt.svg\0"
    "Berlin transit icons - S45.svg\0"
    "München Tram 25.svg\0"
    "München Tram 12.svg\0"
    "München Tram 16.svg\0"
    "München Tram 27.svg\0"
    "München Tram 20.svg\0"
    "München Tram 21 (2019).svg\0"
    "München Tram 23.svg\0"
    "Hamburg A3.svg\0"
    "S4 S-Bahn Stuttgart Logo (2021).svg\0"
    "S51 Steiermark.svg\0"
    "S-Bahn Austria.svg\0"
    "Berlin Tram M1.svg\0"
    "S5 S-Bahn Stuttgart Logo (2021).svg\0"
    "TriMet MAX logo.svg\0"
    "Nürnberg T4.png\0"
    "Nürnberg T8.png\0"
    "S11 Steiermark.svg\0"
    "Logo Strausberger Eisenbahn.svg\0"
    "TTC - Line 4 - Sheppard line.svg\0"
    "TTC.svg\0"
    "TTC - Line 3 - Scarborough RT line.svg\0"
    "London Overground logo.svg\0"
    "Overground roundel.svg\0"
    "Paris transit icons - RER C.svg\0"
    "Paris transit icons - RER.svg\0"
    "Eo circle orange letter-u.svg\0"
    "Línea P (SBASE) bullet.svg\0"
    "Subte-logo.svg\0"
    "Tramway Budapest 49.svg\0"
    "M2 icon.svg\0"
    "Copenhagen metro logo.svg\0"
    "GO Lakeshore West logo.svg\0"
    "Marseille métro M1.svg\0"
    "Panneau Métro de Marseille.svg\0"
    "Marseille métro M2.svg\0"
    "Tyne Wear Metro logo.svg\0"
    "Berlin transit icons - S85.svg\0"
    "Línia 6 de Metrovalència.svg\0"
    "Línia 5 de Metrovalència.svg\0"
    "Línia 3 de Metrovalència.svg\0"
    "Línia 1 de Metrovalència.svg\0"
    "TRAM - Alicante Logo-L4.svg\0"
    "TRAM - Metropolitano de Alicante -T-.svg\0"
    "TRAM - Alicante Logo-L1.svg\0"
    "S-train service C.svg\0"
    "S-train service H.svg\0"
    "SML2.svg\0"
    "Paris transit icons - Train U.svg\0"
    "Paris transit icons - Train.svg\0"
    "SML7.svg\0"
    "Stockholm Pendeltag Logo.svg\0"
    "Stockholm commuter rail symbol.svg\0"
    "Paris transit icons - Train K.svg\0"
    "Logo Saarbahn.svg\0"
    "Berlin transit icons - S9.svg\0"
    "M1-20px.svg\0"
    "Warsaw Metro logo.svg\0"
    "Helsingin lähiliikenteen logo.png\0"
    "Cercanías C1 (Rojo).svg\0"
    "München S3.svg\0"
    "NYCS-bull-trans-G-Std.svg\0"
    "NYCS-bull-trans-7-Std.svg\0"
    "NYCS-bull-trans-S-Std.svg\0"
    "NYCS-bull-trans-N-Std.svg\0"
    "NYCS-bull-trans-Q-Std.svg\0"
    "NYCS-bull-trans-A-Std.svg\0"
    "NYCS-bull-trans-6-Std.svg\0"
    "NYCS-bull-trans-R-Std.svg\0"
    "S-train service F.svg\0"
    "S-train service E.svg\0"
    "SML11.svg\0"
    "BJS Line 2 icon.svg\0"
    "Beijing Subway simplified logo.svg\0"
    "BJS Line 1 icon.svg\0"
    "BJS Line 13 icon.svg\0"
    "BKV m 1 jms.svg\0"
    "BKV metro.svg\0"
    "BJS Line 10 icon.svg\0"
    "BJS Line 5 icon.svg\0"
    "BJS Line 8 icon.svg\0"
    "BJS Line 4 icon.svg\0"
    "GZM Line 8 icon.svg\0"
    "Taipei Metro Line R.svg\0"
    "Berlin transit icons - S1.svg\0"
    "Frankfurt S7.svg\0"
    "Bybanen line 1 symbol.png\0"
    "Tramway Budapest 19.svg\0"
    "Tramway Budapest 47.svg\0"
    "Tramway Budapest 41.svg\0"
    "Tramway Budapest 61.svg\0"
    "Augsburg Tram 2.svg\0"
    "S60 S-Bahn Stuttgart Logo (2021).svg\0"
    "Tramway Budapest 60.svg\0"
    "Tramway Budapest 59.svg\0"
    "Budapest Tram 17.png\0"
    "Tramway Budapest 6.svg\0"
    "Tramway Budapest 4.svg\0"
    "BKV h5 jms.svg\0"
    "Budapest hev symbol.svg\0"
    "Frankfurt U2.svg\0"
    "BJS Yizhuang Line icon.svg\0"
    "BJS Changping Line icon.svg\0"
    "BJS Fangshan Line icon.svg\0"
    "BKV h7 jms.svg\0"
    "MARC train.svg\0"
    "Moskwa Metro Line 5.svg\0"
    "Логотип метро в системе бренда московского транспорта.svg\0"
    "Moskwa Metro Line 4.svg\0"
    "Moskwa Metro Line 3.svg\0"
    "Moskwa Metro Line 1.svg\0"
    "Línea A (Logo Metro de Medellín).svg\0"
    "Logo Metro de Medellín.svg\0"
    "Moskwa Metro Line 6.svg\0"
    "Moskwa Metro Line 7.svg\0"
    "Moskwa Metro Line 8.svg\0"
    "Moskwa Metro Line 10.svg\0"
    "Toulouse line B symbol.svg\0"
    "Toulouse \"M\" symbol.svg\0"
    "Toulouse line T1 symbol.svg\0"
    "Toulouse \"T\" symbol.svg\0"
    "Toulouse line A symbol.svg\0"
    "Moskwa Metro Line 9.svg\0"
    "Moskwa Metro Line 2.svg\0"
    "Moskwa Metro Line 12.svg\0"
    "Paris transit icons - Tram 2.svg\0"
    "Paris transit icons - Tram.svg\0"
    "Línea A (SBASE) bullet.svg\0"
    "BKV h8 jms.svg\0"
    "BKV h6 jms.svg\0"
    "Tramway Budapest 1.svg\0"
    "Tramway Budapest 24.svg\0"
    "Tramway Budapest 50.svg\0"
    "Tramway Budapest 62.svg\0"
    "Tramway Budapest 42.svg\0"
    "Tramway Budapest 3.svg\0"
    "Tramway Budapest 14.svg\0"
    "Tramway Budapest 69.svg\0"
    "Tramway Budapest 52.svg\0"
    "Tramway Budapest 62A.svg\0"
    "Tramway Budapest 37.svg\0"
    "Tramway Budapest 51A.svg\0"
    "Tramway Budapest 51.svg\0"
    "Budapest Tram 28A.png\0"
    "Tramway Budapest 28.svg\0"
    "Tramway Budapest 37A.svg\0"
    "Hamburg S1.svg\0"
    "Paris transit icons - RER D.svg\0"
    "Nürnberg U2.svg\0"
    "Hamburg U2.svg\0"
    "Hamburg U1.svg\0"
    "Hamburg S31.svg\0"
    "Kiev Metro Line 2.svg\0"
    "Kharkiv Metro logo.svg\0"
    "Kiev Metro Line 1.svg\0"
    "Kiev Metro Line 3.svg\0"
    "Kiev T logo.svg\0"
    "Logo Tramway Dijon Line 2.svg\0"
    "Logo Tramway Dijon.svg\0"
    "Logo Tramway Dijon Line 1.svg\0"
    "Nürnberg U3.svg\0"
    "Nürnberg U1.svg\0"
    "Frankfurt am Main Tram 21.svg\0"
    "Frankfurt am Main Tram 11.svg\0"
    "Frankfurt am Main Tram 12.svg\0"
    "Frankfurt am Main Tram 14.svg\0"
    "Frankfurt am Main Tram 15.svg\0"
    "Frankfurt am Main Tram 17.svg\0"
    "Frankfurt S6.svg\0"
    "Number prefix Randen Arashiyama mainline.png\0"
    "Nürnberg T6.png\0"
    "Tokyu SG line symbol.svg\0"
    "Berlin Tram M2.svg\0"
    "Szczecin Tram 1.svg\0"
    "Szczecin Tram 12.svg\0"
    "Szczecin Tram 5.svg\0"
    "Szczecin Tram 11.svg\0"
    "Szczecin Tram 6.svg\0"
    "Szczecin Tram 8.svg\0"
    "Szczecin Tram 7.svg\0"
    "Augsburg Tram 3.svg\0"
    "Ligne1bielefeld.svg\0"
    "Ligne3bielefeld.svg\0"
    "Ligne2bielefeld.svg\0"
    "Ligne4bielefeld.svg\0"
    "München S20.svg\0"
    "München S7.svg\0"
    "Logo du Tramway de Nantes.svg\0"
    "Cptm 8.svg\0"
    "Cptm 9.svg\0"
    "Metropolitana di Roma - logo linea A.svg\0"
    "Logo Metropolitane Italia.svg\0"
    "Metropolitana di Roma - logo linea B.svg\0"
    "Ferrovia Roma-Giardinetti.svg\0"
    "Ferrovia regionale laziale FL1.svg\0"
    "Ferrovia regionale laziale FL2.svg\0"
    "Ferrovia regionale laziale FL4.svg\0"
    "Ferrovia regionale laziale FL5.svg\0"
    "Ferrovia regionale laziale FL6.svg\0"
    "Ferrovia regionale laziale FL7.svg\0"
    "Ferrovia regionale laziale FL8.svg\0"
    "STIB-MIVB Line 8.svg\0"
    "Brussels tramway icon.svg\0"
    "Paris transit icons - RER A.svg\0"
    "Szczecin Tram 10.svg\0"
    "CDML1.svg\0"
    "RheinNeckar S51.svg\0"
    "Spårvagnslinje 10.svg\0"
    "Spårvagnslinje 8.svg\0"
    "Spårvagnslinje 13.svg\0"
    "Spårvagnslinje 2.svg\0"
    "Spårvagnslinje 4.svg\0"
    "Berlin transit icons - S47.svg\0"
    "Spårvagnslinje 3.svg\0"
    "Spårvagnslinje 9.svg\0"
    "Spårvagnslinje 11.svg\0"
    "NRW S1.svg\0"
    "NRW S11.svg\0"
    "NRW S12.svg\0"
    "NRW S13.svg\0"
    "NRW S2.svg\0"
    "NRW S28.svg\0"
    "NRW S3.svg\0"
    "NRW S4.svg\0"
    "NRW S5.svg\0"
    "NRW S6.svg\0"
    "NRW S68.svg\0"
    "NRW S8.svg\0"
    "NRW S9.svg\0"
    "RheinNeckar S1.svg\0"
    "Frankfurt S3.svg\0"
    "Spb metro line1.svg\0"
    "Spb metro logo.svg\0"
    "Spb metro line2.svg\0"
    "Spb metro line3.svg\0"
    "Spb metro line4.svg\0"
    "Spb metro line5.svg\0"
    "Marseille tram T2.svg\0"
    "Symbole AMP Tram.svg\0"
    "Marseille tram T1.svg\0"
    "Athens Metro Line 3.svg\0"
    "Logo of the Athens Metro Operating Company (AMEL).svg\0"
    "Hannover S3.svg\0"
    "Hannover S5.svg\0"
    "Tashkent Metro Line 2.svg\0"
    "Tashkent metro.svg\0"
    "Tashkent Metro Line 3.svg\0"
    "Tashkent Metro Line 1.svg\0"
    "Frankfurt S5.svg\0"
    "Frankfurt S4.svg\0"
    "NRW S7.svg\0"
    "Hannover S1.svg\0"
    "Paris transit icons - Métro 7bis.svg\0"
    "Paris transit icons - Métro.svg\0"
    "Hannover S6.svg\0"
    "Icon brownline CTA.png\0"
    "Chicago L fictional logo.svg\0"
    "Hannover S4.svg\0"
    "Metrorex logo.svg\0"
    "Paris transit icons - Tram 1.svg\0"
    "Icon orange line CTA.png\0"
    "NNMetro Line 1.svg\0"
    "NNMetro.svg\0"
    "Icon redline CTA.png\0"
    "RheinNeckar S6.svg\0"
    "Mitteldeutschland S8.svg\0"
    "Mitteldeutschland S4.svg\0"
    "Icon greenline CTA.png\0"
    "Icon yellowline CTA.png\0"
    "Oslo Metro 3 2016.svg\0"
    "Oslo T-bane Logo.svg\0"
    "München Tram 29 (2019).svg\0"
    "Oslo Metro 2 2016.svg\0"
    "Oslo Metro 5 2016.svg\0"
    "DSW21 U46.svg\0"
    "Lyon tcl tram-5.svg\0"
    "Lyon tcl logo-tram-full.svg\0"
    "Logo Tramway Bordeaux ligne A.svg\0"
    "Logo Tramway Bordeaux.svg\0"
    "Logo Tramway Bordeaux ligne B.svg\0"
    "KRT Line 6 icon.svg\0"
    "Logo Tramway Bordeaux ligne C.svg\0"
    "Icon pinkline CTA.png\0"
    "Icon blueline CTA.png\0"
    "BJS Line 9 icon.svg\0"
    "Icon purpleline CTA.png\0"
    "S1 Wien.svg\0"
    "S-Bahn Wien.svg\0"
    "S2 Wien.svg\0"
    "S3 Wien.svg\0"
    "Hannover S2.svg\0"
    "BJS Daxing Line icon.svg\0"
    "BJS Line 15 icon.svg\0"
    "Milano linea M5.svg\0"
    "Mitteldeutschland S3.svg\0"
    "Zurich tram route 10.PNG\0"
    "Zurich tram route 12.PNG\0"
    "Zurich tram route 7.PNG\0"
    "Zurich tram route 14.PNG\0"
    "Zurich tram route 11.PNG\0"
    "Zurich tram route 15.PNG\0"
    "Oslo Metro 4.svg\0"
    "Bart-logo.svg\0"
    "Nanchang Metro Line 1.png\0"
    "Dgrd pfm.noe.svg\0"
    "Dark orange.PNG\0"
    "Chs2 Greend40.png\0"
    "Solid blue.svg\0"
    "Hamburg U4.svg\0"
    "Cptm 11.svg\0"
    "Cptm 12.svg\0"
    "Cptm 7.svg\0"
    "Oslo Metro 1.svg\0"
    "Cptm 10.svg\0"
    "Línea B (Logo Metro de Medellín).svg\0"
    "Mitteldeutschland S1.svg\0"
    "Oslo Tramway new 19.svg\0"
    "Oslo Tramway 18.svg\0"
    "Línea C (SBASE) bullet.svg\0"
    "Línea B (SBASE) bullet.svg\0"
    "Línea E (SBASE) bullet.svg\0"
    "Línea D (SBASE) bullet.svg\0"
    "Línea H (SBASE) bullet.svg\0"
    "Istanbul T1 Line Symbol.svg\0"
    "Istanbul T4 Line Symbol.svg\0"
    "Paris transit icons - Métro 15.svg\0"
    "Mitteldeutschland S2.svg\0"
    "Hannover S7.svg\0"
    "Oslo Tramway new 13.svg\0"
    "Oslo Tramway new 11.svg\0"
    "Oslo Tramway new 12.svg\0"
    "MtlMetro4.svg\0"
    "Montreal Metro.svg\0"
    "MtlMetro2.svg\0"
    "MtlMetro5.svg\0"
    "MtlMetro1.svg\0"
    "GZM Line 2 icon.svg\0"
    "Wien U2.svg\0"
    "Spmetro 3.svg\0"
    "Oslo Tramway new 17.svg\0"
    "Wien U1.svg\0"
    "Paris transit icons - Métro 4.svg\0"
    "Paris transit icons - Métro 14.svg\0"
    "Paris transit icons - Métro 1.svg\0"
    "Paris transit icons - Métro 9.svg\0"
    "München U4.svg\0"
    "U-Bahnlogo München.svg\0"
    "Paris transit icons - Métro 10.svg\0"
    "Paris transit icons - Métro 6.svg\0"
    "Paris transit icons - Métro 7.svg\0"
    "Augsburg Tram 1.svg\0"
    "Bremen RS2.svg\0"
    "Bremen RS1.svg\0"
    "STIB-MIVB Line 44.svg\0"
    "STIB-MIVB Line 39.svg\0"
    "NJM Line 10 icon.svg\0"
    "Nanjing Metro Logo.svg\0"
    "NJM Line 1 icon.svg\0"
    "NJM Line 2 icon.svg\0"
    "Frankfurt S1.svg\0"
    "Frankfurt S2.svg\0"
    "Frankfurt S8.svg\0"
    "Frankfurt S9.svg\0"
    "C-5 yellow.svg\0"
    "DeLijn icon 12antw.svg\0"
    "DeLijn icon 9antw.svg\0"
    "DeLijn icon 24antw.svg\0"
    "DeLijn icon 3antw.svg\0"
    "DeLijn icon 4antw.svg\0"
    "DeLijn icon 5antw.svg\0"
    "DeLijn icon 6antw.svg\0"
    "DeLijn icon 7antw.svg\0"
    "DeLijn icon 8antw.svg\0"
    "DeLijn icon 15antw.svg\0"
    "K Ingleside logo.svg\0"
    "L Taraval logo.svg\0"
    "M Ocean View logo.svg\0"
    "N Judah logo.svg\0"
    "STIB-MIVB Line 19.svg\0"
    "München U5.svg\0"
    "München U6.svg\0"
    "München U3.svg\0"
    "Metro de Bilbao L2.svg\0"
    "Frankfurt U6.svg\0"
    "München U1.svg\0"
    "München U2.svg\0"
    "München U7.svg\0"
    "München U8.svg\0"
    "Spmetro 5.svg\0"
    "Spmetro 1.svg\0"
    "Spmetro 4.svg\0"
    "Spmetro 2.svg\0"
    "Paris transit icons - Tram 3b.svg\0"
    "Lyon tcl tram-1.svg\0"
    "Lyon tcl tram-2.svg\0"
    "Lyon tcl tram-3.svg\0"
    "Lyon tcl tram-4.svg\0"
    "Lyon tcl metro-b.svg\0"
    "Lyon tcl logo-metro-full.svg\0"
    "Lyon tcl metro-d.svg\0"
    "Lyon tcl metro-c.svg\0"
    "Lyon tcl metro-a.svg\0"
    "Wien U3.svg\0"
    "STIB-MIVB Line 62.svg\0"
    "Tramway Budapest 48.svg\0"
    "München Tram 28.svg\0"
    "Logo Metro Rennes ligne a.svg\0"
    "Logo Metro Rennes.svg\0"
    "M1 icon.svg\0"
    "GZM Line 1 icon.svg\0"
    "GZM Line 5 icon.svg\0"
    "S-Bahn Bern.svg\0"
    "Paris transit icons - Tram 8.svg\0"
    "Icon-blue-line-default.svg\0"
    "STIB-MIVB Line 97.svg\0"
    "TAM-4.svg\0"
    "BKV m 3 jms.svg\0"
    "BKV m 4 jms.svg\0"
    "BKV m 2 jms.svg\0"
    "Metropolitana di Roma - logo linea C.svg\0"
    "Erfurt Straßenbahn 1.svg\0"
    "Erfurt Straßenbahn 2.svg\0"
    "Erfurt Straßenbahn 3.svg\0"
    "Erfurt Straßenbahn 4.svg\0"
    "Erfurt Straßenbahn 5.svg\0"
    "Erfurt Straßenbahn 6.svg\0"
    "M2-20px.svg\0"
    "Taipei Metro Line O.svg\0"
    "Taipei Metro Line Xiaobitan Branch.svg\0"
    "Taipei Metro Line BR.svg\0"
    "Icon 2 (set f).png\0"
    "Hannover S51.svg\0"
    "Hannover S21.svg\0"
    "S-Bahn Salzburg.svg\0"
    "Hannover S8.svg\0"
    "Taichung Metro Green Line icon.svg\0"
    "Amsterdam unofficial metro icon line 50.svg\0"
    "Amsterdam metro logo.svg\0"
    "Amsterdam unofficial metro icon line 54.svg\0"
    "Amsterdam unofficial metro icon line 53.svg\0"
    "Logo du M2 de Lausanne.svg\0"
    "Logo Métro Lausanne.svg\0"
    "BJS Line 7 icon.svg\0"
    "BJS Line 14 icon.svg\0"
    "BJS Line 6 icon.svg\0"
    "Frankfurt U1.svg\0"
    "Frankfurt U3.svg\0"
    "Frankfurt U4.svg\0"
    "Frankfurt U5.svg\0"
    "Frankfurt U7.svg\0"
    "Frankfurt U8.svg\0"
    "Frankfurt U9.svg\0"
    "T4.svg\0"
    "Tramvia metropolita.svg\0"
    "T6.svg\0"
    "T5.svg\0"
    "Marseille tram T3.svg\0"
    "L2 barcelona.svg\0"
    "Barcelona Metro Logo.svg\0"
    "L4 barcelona.svg\0"
    "L5 barcelona.svg\0"
    "L10 barcelona.svg\0"
    "L3 barcelona.svg\0"
    "L8 barcelona.svg\0"
    "L7 barcelona.svg\0"
    "L1 barcelona.svg\0"
    "L11 barcelona.svg\0"
    "L6 barcelona.svg\0"
    "L9 barcelona.svg\0"
    "Hamburg S21.svg\0"
    "Poznań ikona linii tramwajowej 1.png\0"
    "Poznań ikona linii tramwajowej 2.png\0"
    "Hamburg A2.svg\0"
    "Antwerpen S-Trein S32.svg\0"
    "NMBS S-Trein logo.svg\0"
    "S60 Wien.svg\0"
    "S80 Wien.svg\0"
    "S40 Wien.svg\0"
    "Number prefix Toyo-Rapid.svg\0"
    "C-3 dark pink.svg\0"
    "New Taipei Metro Danhai LRT Line icon.svg\0"
    "Kaohsiung Rapid Transit Circular Line.svg\0"
    "Athens Suburban Railway Line 3.svg\0"
    "Hamburg S11.svg\0"
    "Hamburg S2.svg\0"
    "Hamburg S3.svg\0"
    "Hamburg A1.svg\0"
    "Línia 2 de Metrovalència.svg\0"
    "Línia 9 de Metrovalència.svg\0"
    "Línia 7 de Metrovalència.svg\0"
    "Toulouse line T2 symbol.svg\0"
    "Poznań ikona linii tramwajowej 15.png\0"
    "R2 barcelona.svg\0"
    "R3 barcelona.svg\0"
    "R4 barcelona.svg\0"
    "R8 barcelona.svg\0"
    "RT1 tarragona.svg\0"
    "RT2 tarragona.svg\0"
    "RG1 girona.svg\0"
    "DSW21 U45.svg\0"
    "R12 Rodalies de Catalunya.svg\0"
    "RET metro logo.svg\0"
    "Metro Rotterdam logo.svg\0"
    "RandstadRail logo.png\0"
    "R11 Rodalies de Catalunya.svg\0"
    "R13 Rodalies de Catalunya.svg\0"
    "R14 Rodalies de Catalunya.svg\0"
    "R15 Rodalies de Catalunya.svg\0"
    "Mitja distància Ca6.svg\0"
    "Metro do Porto linha D.svg\0"
    "Porto Metro logo.svg\0"
    "Metro do Porto linha E.svg\0"
    "Metro do Porto linha F.svg\0"
    "Metro do Porto linha A.svg\0"
    "Metro do Porto linha C.svg\0"
    "S Shuttle logo.svg\0"
    "MetroBH logo.svg\0"
    "S (South Line - Fortaleza Subway).png\0"
    "S4 Wien.svg\0"
    "Metro do Porto linha B.svg\0"
    "Dallas Area Rapid Transit logo.svg\0"
    "Blå linjen logo.svg\0"
    "Stockholm metro symbol.svg\0"
    "Gröna linjen logo.svg\0"
    "Röda linjen logo.svg\0"
    "Underground.svg\0"
    "MTR LR 505.svg\0"
    "18E CCFL.png\0"
    "LACMTA Circle E Line.svg\0"
    "LACMTA Circle A Line.svg\0"
    "25E CCFL.png\0"
    "Logo Metro Rennes ligne b.svg\0"
    "Logo VLT Carioca Linha 1.svg\0"
    "Vlt carioca logo.svg\0"
    "Poznań ikona linii tramwajowej 7.png\0"
    "L12 barcelona.svg\0"
    "GZM Line 14 icon.svg\0"
    "Athens Tram Line 6.svg\0"
    "Logo of the Athens Tram (icon only).svg\0"
    "Athens Tram Line 7.svg\0"
    "Liege S-Trein S43.svg\0"
    "SHM Line 1 icon.svg\0"
    "SHM Line 16 icon.svg\0"
    "SHM Line 5 icon.svg\0"
    "SML3.svg\0"
    "SML6.svg\0"
    "Logo de la Línea 1 del Tren Eléctrico Urbano de Guadalajara.svg\0"
    "Logo de la Línea 2 del Tren Eléctrico Urbano de Guadalajara.svg\0"
    "Línea 2 - Tren Concepción - Coronel, Biotren (2021).svg\0"
    "Línea 1 - Tren Mercado de Talcahuano - Hualqui, Biotren (2021).svg\0"
    "Paris transit icons - Train J.svg\0"
    "Paris transit icons - Tram 3a.svg\0"
    "Paris transit icons - Tram 4.svg\0"
    "Paris transit icons - Tram 5.svg\0"
    "Paris transit icons - Tram 6.svg\0"
    "Paris transit icons - Tram 7.svg\0"
    "Bremen RS3.svg\0"
    "Bremen RS4.svg\0"
    "Paris Orlyval icon.svg\0"
    "Taoyuan Metro Line Airport.svg\0"
    "NYCS-bull-trans-W-Std.svg\0"
    "Logo tram 1 Mulhouse.svg\0"
    "Logo tram Mulhouse.svg\0"
    "STIB-MIVB Line 5.svg\0"
    "Brussels Metro Logo.svg\0"
    "Logo tram 2 Mulhouse.svg\0"
    "STIB-MIVB Line 1.svg\0"
    "Logo tram 3 Mulhouse.svg\0"
    "Logo VLT Carioca Linha 2.svg\0"
    "München S2.svg\0"
    "Metro de Bilbao L1.svg\0"
    "STIB-MIVB Line 7.svg\0"
    "Metro de Bilbao L3.svg\0"
    "STIB-MIVB Line 92.svg\0"
    "L1 Metro de Granada.svg\0"
    "Cercanías C2.svg\0"
    "Paris transit icons - Métro 2.svg\0"
    "Central Line roundel.svg\0"
    "Paris transit icons - RER E.svg\0"
    "STIB-MIVB Line 2.svg\0"
    "GZM Line 6 icon.svg\0"
    "Moskwa Metro Line 14.svg\0"
    "Berlin transit icons - S41.svg\0"
    "STIB-MIVB Line 81.svg\0"
    "Brussel S-Trein S1.svg\0"
    "Liege S-Trein S41.svg\0"
    "Charleroi S-Trein S61.svg\0"
    "Charleroi S-Trein S62.svg\0"
    "Charleroi S-Trein S63.svg\0"
    "Charleroi S-Trein S64.svg\0"
    "الخط الأول لطرامواي اليضاء.png\0"
    "Paris transit icons - Métro 13.svg\0"
    "Paris transit icons - Métro 12.svg\0"
    "Paris transit icons - Métro 11.svg\0"
    "Paris transit icons - Métro 8.svg\0"
    "Paris transit icons - Métro 5.svg\0"
    "Paris transit icons - Métro 3bis.svg\0"
    "Paris transit icons - Train P.svg\0"
    "Paris transit icons - Train R.svg\0"
    "Paris transit icons - Train H.svg\0"
    "Paris transit icons - Train N.svg\0"
    "Paris transit icons - RER B.svg\0"
    "VR Group logo.svg\0"
    "SML4.svg\0"
    "SML8.svg\0"
    "SML9.svg\0"
    "SHM Line 12 icon.svg\0"
    "SML13.svg\0"
    "SML10.svg\0"
    "Incheon Metro Line 2.svg\0"
    "South Korea subway logo.svg\0"
    "Seoul Metro Line U Line.svg\0"
    "Seoul Metro Line Ui LRT Bilingual.svg\0"
    "Cleveland RTA logo.svg\0"
    "WMATA Yellow.svg\0"
    "WMATA Metro Logo.svg\0"
    "Seoul Metro Line 2.svg\0"
    "Seoul Metro Line 4.svg\0"
    "Logo ligne 1 métro d'Alger.svg\0"
    "STIB-MIVB Line 51.svg\0"
    "STIB-MIVB Line 93.svg\0"
    "Tabriz Metro Line 1.png\0"
    "NNMetro Line 2.svg\0"
    "Helsingin metro logo.svg\0"
    "District line roundel.svg\0"
    "Logo metropolitana di Catania.svg\0"
    "Maha Mumbai Metro.png\0"
    "Astram Logo.svg\0"
    "Subway FukuokaHakozaki.svg\0"
    "Fukuoka City Subway Logo.svg\0"
    "Piccadilly line roundel.svg\0"
    "Northern line roundel.svg\0"
    "Subway FukuokaKuko.svg\0"
    "Esfahan Metro Logo.png\0"
    "Tehran Metro Line 7.svg\0"
    "Tehran Metro Logo.svg\0"
    "Tehran Metro Line 4.svg\0"
    "Busan-Gimhae Line.svg\0"
    "Nagoya Subway Logo V2 (Kamiiida Line).svg\0"
    "Nagoya Municipal Subway Logo.svg\0"
    "Port Island Line logo.svg\0"
    "Subway KobeKaigan.svg\0"
    "Kobe Municipal Subway Logo.svg\0"
    "ShenzhenMetroLine4.svg\0"
    "Istanbul M2 Line Symbol.svg\0"
    "Istanbul Metro Logo.svg\0"
    "Istanbul M4 Line Symbol.svg\0"
    "Istanbul M1 Line Symbol.svg\0"
    "Istanbul M6 Line Symbol.svg\0"
    "Subway KobeSeishin.svg\0"
    "MRT Blue.svg\0"
    "MRT (Bangkok) logo.svg\0"
    "MRT Purple.svg\0"
    "Lima Metro Linea 1.svg\0"
    "Logotipo del Metro de Lima y Callao (ATU).svg\0"
    "Seoul Metro Line Shinbundang.svg\0"
    "Sendai City Subway Logo.svg\0"
    "Yokohama Municipal Subway Blue Line symbol.svg\0"
    "Yokohama Municipal Subway Logo.svg\0"
    "Yokohama Municipal Subway Green Line symbol.svg\0"
    "Santiago de Chile L1.svg\0"
    "Santiago de Chile L4A.svg\0"
    "Santiago de Chile L5.svg\0"
    "Santiago de Chile L6.svg\0"
    "Paris transit icons - Métro 3.svg\0"
    "Kazan-metro-Logo.svg\0"
    "Novosibirsk Metro logo.svg\0"
    "Ekb metro logo.svg\0"
    "Icon V (set f).png\0"
    "Icon L (set orange).png\0"
    "Icon 2 red.svg\0"
    "Icon 1 blue.svg\0"
    "Minsk Metro First Line logo.svg\0"
    "Minsk metro logo.svg\0"
    "Sofia-metro-lines-02.svg\0"
    "Sofia Metro Logo.svg\0"
    "Sofia-metro-lines-01.svg\0"
    "MetroLisboa-linha-vermelha.svg\0"
    "Metropolitano Lisboa logo.svg\0"
    "MetroLisboa-linha-amarela.svg\0"
    "MetroLisboa-linha-verde.svg\0"
    "Subway FukuokaNanakuma.svg\0"
    "Almaty metro logo v2.svg\0"
    "Almaty metro logo.svg\0"
    "Logo of the Pyongyang Metro.svg\0"
    "Tehran Metro Line 1.png\0"
    "Luxtram T1 2020.png\0"
    "Tehran Metro Line 3.png\0"
    "Línea 1 Metro de Sevilla.svg\0"
    "Símbolo del Metro de Sevilla.svg\0"
    "MetroMalaga L2.svg\0"
    "Símbolo del Metro de Málaga.svg\0"
    "MetroMalaga L1.svg\0"
    "Metro Palma M2.svg\0"
    "Metro Palma M1.svg\0"
    "Metro Tbilisi logo.svg\0"
    "Kyiv Urban Electric Train.svg\0"
    "Symbole Lille 2.svg\0"
    "Lille Metro Logo 2017.svg\0"
    "Symbole Lille 1.svg\0"
    "Daejeon Metro Line 1.svg\0"
    "Mitteldeutschland S9.svg\0"
    "RER Vaudois.png\0"
    "Madrid-MetroLinea4.svg\0"
    "MetroMadridLogo.svg\0"
    "Madrid-MetroLinea1.svg\0"
    "Tehran Metro Line 2.png\0"
    "Madrid-MetroLinea10.svg\0"
    "Kochi Metro logo.png\0"
    "Madrid-MetroLinea8.svg\0"
    "Madrid-MetroLinea9.svg\0"
    "NYCS-bull-trans-J-Std.svg\0"
    "Madrid-MetroLinea5.svg\0"
    "Adana Metro logo.svg\0"
    "Madrid-MetroLinea3.svg\0"
    "Madrid-MetroLinea2.svg\0"
    "Madrid-MetroLinea7.svg\0"
    "Madrid-MetroRamal.svg\0"
    "Madrid-MetroLinea12.svg\0"
    "WX Metro Line 1 icon.svg\0"
    "WX Metro Line 2 icon.svg\0"
    "Shijiazhuang Metro.svg\0"
    "Madrid-MetroLinea6.svg\0"
    "Madrid-MetroLinea11.svg\0"
    "Chennai Metro logo.svg\0"
    "SHM Line 17 icon.svg\0"
    "Daegu Metro Line 2.svg\0"
    "Daegu Metro Line 1.svg\0"
    "ZZMetro Line 2.svg\0"
    "Madrid MetroLigero1.svg\0"
    "Stadtbahn Madrid Logo.svg\0"
    "Madrid MetroLigero2.svg\0"
    "Madrid MetroLigero3.svg\0"
    "Incheon Metro Line 1.png\0"
    "STIB-MIVB Line 3.svg\0"
    "R7 barcelona.svg\0"
    "BursaRay logo.svg\0"
    "XAM Line 1 icon.svg\0"
    "XAM Line 3 icon.svg\0"
    "Sul blue.png\0"
    "ZZMetro Line 1.svg\0"
    "ZZMetro Line CJ.svg\0"
    "Cercanías C10.svg\0"
    "Cercanías C1.svg\0"
    "C-7 red.svg\0"
    "Icon-red-line-default.svg\0"
    "Icon-orange-line-default.svg\0"
    "长沙地铁2号线线标.svg\0"
    "长沙地铁1号线线标.svg\0"
    "CLRT Line 4 icon.svg\0"
    "CLRT Line 3 icon.svg\0"
    "Ankaray logo.svg\0"
    "Ankara Metro logo.svg\0"
    "Kaohsiung Rapid Transit Orange Line.svg\0"
    "Kaohsiung Rapid Transit Red Line.svg\0"
    "Seoul Metro Line 3.svg\0"
    "Seoul Metro Line 5.svg\0"
    "Seoul Metro Line 9.svg\0"
    "NBRT Line 2 icon.svg\0"
    "TTC - Line 1 - Yonge-University-Spadina line.svg\0"
    "Thessaloniki Metro Line 1.svg\0"
    "TTC - Line 2 - Bloor-Danforth line.svg\0"
    "SRT-1.png\0"
    "RMRG logo.svg\0"
    "Delhi Metro logo.svg\0"
    "Line1mtymetro.png\0"
    "Line2mtymetro.png\0"
    "DLM Line 2 icon.svg\0"
    "NYCS-bull-trans-SF-Std.svg\0"
    "SYM Line 1 icon.svg\0"
    "Shenyang Metro Line 2 Logo.svg\0"
    "Icon of FZM L1.svg\0"
    "GZM Line 13 icon.svg\0"
    "Thessaloniki Metro Line 2.svg\0"
    "DLM Line 3 icon.svg\0"
    "KRT Line 2 icon.svg\0"
    "KRT Line 1 icon.svg\0"
    "NJM Line S1 icon.svg\0"
    "NJM Line S3 icon.svg\0"
    "ShenzhenMetroLine1.svg\0"
    "Seoul Metro Line Arex.svg\0"
    "Seoul Metro Line 8.svg\0"
    "Seoul Metro Line 6.svg\0"
    "Baltimore Metro SubwayLink Logo for Signage (Blue).svg\0"
    "WMATA Orange.svg\0"
    "WMATA Red.svg\0"
    "WMATA Silver.svg\0"
    "WMATA Blue.svg\0"
    "WMATA Green.svg\0"
    "Seoul Metro Line 7.svg\0"
    "Logo of Miami-Dade County, Florida.svg\0"
    "STIB-MIVB Line 6.svg\0"
    "Línea 2 CAMETRO.png\0"
    "Metrodecaracas.svg\0"
    "Línea 3 CAMETRO.png\0"
    "MetroDF Línea 1.svg\0"
    "LACMTA Circle C Line.svg\0"
    "LACMTA Circle D Line.svg\0"
    "MetroDF Línea 4.svg\0"
    "MetroDF Línea 5.svg\0"
    "MetroDF Línea 12.svg\0"
    "MetroDF Línea 7.svg\0"
    "MetroDF Línea A.svg\0"
    "MetroDF Línea 8.svg\0"
    "MetroDF Línea B.svg\0"
    "MetroDF Línea 2.svg\0"
    "MetroDF Línea 9.svg\0"
    "MetroDF Línea 3.svg\0"
    "MetroDF Línea 6.svg\0"
    "PATH.svg\0"
    "PATH logo.svg\0"
    "Icon 1 (set orange).png\0"
    "Harbin Metro Line 1.svg\0"
    "Harbin Metro Line 3.svg\0"
    "CRRT line1 logo.svg\0"
    "DLM Line 12 icon.svg\0"
    "Athens Metro Line 1.svg\0"
    "Athens Metro Line 2.svg\0"
    "Rinkai Line symbol.svg\0"
    "Yerevan Metro.svg\0"
    "Madrid MetroLigero4.svg\0"
    "Metro İzmir logo.svg\0"
    "Jaipur Metro Logo.svg\0"
    "Jaipur Metro Logo.png\0"
    "BTS-Logo.svg\0"
    "STIB-MIVB Line 4.svg\0"
    "STIB-MIVB Line 25.svg\0"
    "STIB-MIVB Line 55.svg\0"
    "STIB-MIVB Line 82.svg\0"
    "Lrtalogo.svg\0"
    "KLRT Line 9 icon.svg\0"
    "KLRT Line 5 icon.svg\0"
    "Subway SapporoTozai.svg\0"
    "ST Logo.svg\0"
    "Subway SapporoNamboku.svg\0"
    "Logo of Tokyo Metro Marunouchi Line.svg\0"
    "Tokyo Metro logo (full).svg\0"
    "Toei Asakusa line symbol.svg\0"
    "Toei Shinjuku line symbol.svg\0"
    "Toei Oedo line symbol.svg\0"
    "Toei Mita line symbol.svg\0"
    "Logo of Tokyo Metro Chiyoda Line.svg\0"
    "Logo of Tokyo Metro Namboku Line.svg\0"
    "Logo of Tokyo Metro Ginza Line.svg\0"
    "Logo of Tokyo Metro Yūrakuchō Line.svg\0"
    "Logo of Tokyo Metro Tōzai Line.svg\0"
    "Logo of Tokyo Metro Hibiya Line.svg\0"
    "Osaka Metro Sennichimae line symbol.svg\0"
    "Osaka Metro Midosuji line symbol.svg\0"
    "Osaka Metro Imazatosuji line symbol.svg\0"
    "Osaka Metro Sakaisuji line symbol.svg\0"
    "Osaka Metro Nagahori Tsurumi-ryokuchi line symbol.svg\0"
    "Osaka Metro Yotsubashi line symbol.svg\0"
    "Osaka Metro Tanimachi line symbol.svg\0"
    "Subway KyotoKarasuma.svg\0"
    "Kyoto MTB Logo.svg\0"
    "Subway KyotoTozai.png\0"
    "Nagoya Subway Logo V2 (Sakura-dori Line).svg\0"
    "Nagoya Subway Logo V2 (Higashiyama Line).svg\0"
    "Nagoya Subway Logo V2 (Meiko Line).svg\0"
    "Nagoya Subway Logo V2 (Tsurumai Line).svg\0"
    "Nagoya Subway Logo V2 (Meijo Line).svg\0"
    "Kolkata Metro Logo.svg\0"
    "Kolkata Metro System Logo.svg\0"
    "Delhi Metro Line 3.svg\0"
    "Delhi Metro Line 5.svg\0"
    "Delhi Metro Line 6.svg\0"
    "Delhi Metro Line 2.svg\0"
    "Delhi Metro Line 8.svg\0"
    "Delhi Metro Line 9.svg\0"
    "Moskwa Metro Line 11.svg\0"
    "KLRT Line 7 icon.svg\0"
    "KLRT Line 6 icon.svg\0"
    "SHM Line PJ icon.svg\0"
    "LACMTA Circle B Line.svg\0"
    "Busan Metro Line 3.svg\0"
    "Busan Metro Line 1.svg\0"
    "Busan Metro Line 2.svg\0"
    "CDML7.svg\0"
    "CDML3.svg\0"
    "CDML2.svg\0"
    "CDML4.svg\0"
    "CDML10.svg\0"
    "KLRT Line 12 icon.svg\0"
    "Mitteldeutschland S6.svg\0"
    "济南轨道交通2号线logo.svg\0"
    "JinanMetro Logo.svg\0"
    "WHM Line 1 icon.svg\0"
    "HZM Line 2 icon.svg\0"
    "NBRT Line 1 icon.svg\0"
    "BJS Line 16 icon.svg\0"
    "Amoy Metro logo.svg\0"
    "JR JL line symbol.svg\0"
    "Nürnberg T7.png\0"
    "Delhi Metro Line 1.svg\0"
    "SZRT Line 4 icon.svg\0"
    "SRT-2.png\0"
    "Amsterdam unofficial metro icon line 52.svg\0"
    "Paris transit icons - Tram 11.svg\0"
    "Athens Suburban Railway Line 4.svg\0"
    "Athens Suburban Railway Line 1.svg\0"
    "Athens Suburban Railway Line 2.svg\0"
    "BJS Yanfang Line icon.svg\0"
    "TianjinMetro.svg\0"
    "Tianjin Metro Line 1 icon.svg\0"
    "Tunis Metro Ligne 4.svg\0"
    "Poznań ikona linii tramwajowej 11.png\0"
    "Tunis Metro Ligne 5.svg\0"
    "Tunis Metro Ligne 3.svg\0"
    "Tunis Metro Ligne 2.svg\0"
    "TJM TEDA Tram icon.svg\0"
    "STIB-MIVB Line 9.svg\0"
    "Gyeongchun Line.svg\0"
    "Milano S1.svg\0"
    "Linee S di Milano.svg\0"
    "Milano S2.svg\0"
    "Milano S3.svg\0"
    "Milano S4.svg\0"
    "Milano S5.svg\0"
    "Milano S6.svg\0"
    "Gyeongui-Jungang Line.svg\0"
    "24E CCFL.png\0"
    "Seoul Metro Line 1.svg\0"
    "Seoul Metro Line Seohae Bilingual.svg\0"
    "UTA S-Line logo.svg\0"
    "Gyeonggang Line.svg\0"
    "UM Logo1.png\0"
    "Euskotren TR.svg\0"
    "Tramway Budapest 12.svg\0"
    "Tramway Budapest 59A.svg\0"
    "T Third Street logo.svg\0"
    "Milano S8.svg\0"
    "Milano S13.svg\0"
    "Milano S9.svg\0"
    "Milano S11.svg\0"
    "C-4 dark blue.svg\0"
    "C-9 orange.svg\0"
    "C-2 green.svg\0"
    "Yurikamome line symbol.svg\0"
    "Logo trireno black.svg\0"
    "Nippori-Toneri Liner symbol.svg\0"
    "Tokyo Sakura Tram symbol.svg\0"
    "Tokyu TY line symbol.svg\0"
    "ShenzhenMetroLine11.svg\0"
    "Saitama Stadium Line symbol.svg\0"
    "SeibuYamaguchi.svg\0"
    "Tokyu MG line symbol.svg\0"
    "Tokyu OM line symbol.svg\0"
    "Tokyu DT line symbol.svg\0"
    "Tokyu IK line symbol.svg\0"
    "Tokyu TM line symbol.svg\0"
    "Tokyu KD line symbol.svg\0"
    "New Shuttle Line symbol.svg\0"
    "Taipei Metro Line Xinbeitou Branch.svg\0"
    "Taipei Metro Line BL.svg\0"
    "Berlin transit icons - S26.svg\0"
    "Logo VLT Carioca Linha 3.svg\0"
    "Tehran Metro Line 6.svg\0"
    "Number prefix SkyAccess.svg\0"
    "TfNSW M.svg\0"
    "Istanbul F3 Line Symbol.svg\0"
    "SeibuShinjuku.svg\0"
    "Tunis Metro Ligne 1.svg\0"
    "Tunis Metro Ligne 6.svg\0"
    "NJM Line S7 icon.svg\0"
    "NJM Line S9 icon.svg\0"
    "NJM Line S8 icon.svg\0"
    "WHM Line 2 icon.svg\0"
    "Number prefix Hankai Tramway line.png\0"
    "Nankai group logo.svg\0"
    "Osaka Metro Nanko Port Town line symbol.svg\0"
    "GZM Line 4 icon.svg\0"
    "GZM Line 21 icon.svg\0"
    "GZM Guangfo Line icon.svg\0"
    "WHM Line 7 icon.svg\0"
    "S5 Steiermark.svg\0"
    "ShenzhenMetroLine3.svg\0"
    "S1 Steiermark.svg\0"
    "CS Line 4 icon.svg\0"
    "WHM Line 4 icon.svg\0"
    "WH Line 11 icon.png\0"
    "S9 Steiermark.svg\0"
    "S8 Steiermark.svg\0"
    "ShenzhenMetroLine5.svg\0"
    "NYCS-bull-trans-1-Std.svg\0"
    "NYCS-bull-trans-2-Std.svg\0"
    "NYCS-bull-trans-3-Std.svg\0"
    "NYCS-bull-trans-4-Std.svg\0"
    "TfNSW L1.png\0"
    "TfNSW L.svg\0"
    "NYCS-bull-trans-5-Std.svg\0"
    "TfNSW T8.svg\0"
    "ShenzhenMetroLine9.svg\0"
    "Icon-green-line-default.svg\0"
    "NYCS-bull-trans-M-Std.svg\0"
    "NYCS-bull-trans-L-Std.svg\0"
    "Logo PT Kereta Api Indonesia (Persero) 2020.svg\0"
    "NYCS-bull-trans-B-Std.svg\0"
    "NYCS-bull-trans-F-Std.svg\0"
    "NYCS-bull-trans-C-Std.svg\0"
    "NYCS-bull-trans-D-Std.svg\0"
    "NYCS-bull-trans-E-Std.svg\0"
    "GZM Line 3 icon.svg\0"
    "Cptm 13.svg\0"
    "Shenyang Metro Line 9 Logo.svg\0"
    "VTA-Green-icon.svg\0"
    "VTA-Blue-icon.svg\0"
    "ARLbangkok.svg\0"
    "GZM Line 9 icon.svg\0"
    "Berlin transit icons - S42.svg\0"
    "O ( West Line - Fortaleza Subway).png\0"
    "S-train service A.svg\0"
    "KLRT Line 2 icon.svg\0"
    "KTM Komuter logo.svg\0"
    "KLRT Line 1 icon.svg\0"
    "KLRT Line 10 icon.svg\0"
    "Moskwa Metro Line 15.svg\0"
    "Szczecin Tram 9.svg\0"
    "Tobu Tojo Line (TJ) symbol.svg\0"
    "JRW kinki-O.svg\0"
    "ZZMetro Line 14.svg\0"
    "济南轨道交通1号线logo.svg\0"
    "Logo-tramway-orizo-avignon.png\0"
    "KT number-C.svg\0"
    "Ferrocarril Suburbano.svg\0"
    "Nice Tramway Logo.svg\0"
    "M3 icon.svg\0"
    "Moskwa Metro Line D1.svg\0"
    "MCD logo.svg\0"
    "Moskwa Metro Line D2.svg\0"
    "Samara Metro logo.svg\0"
    "JR JB line symbol.svg\0"
    "XuzhouMetro.svg\0"
    "NBRT Line 3 icon.svg\0"
    "HZM Line 5 icon.svg\0"
    "ZZMetro Line 5.svg\0"
    "DeLijn icon 1antw.svg\0"
    "Icon of FZM L2.svg\0"
    "济南轨道交通3号线logo.svg\0"
    "CDML5.svg\0"
    "SML14.svg\0"
    "Metrolink logo.svg\0"
    "TAM-2.svg\0"
    "TAM-3.svg\0"
    "TAM-1.svg\0"
    "GO Milton logo.svg\0"
    "GO Kitchener logo.svg\0"
    "GO Barrie logo.svg\0"
    "GO Lakeshore East logo.svg\0"
    "Taipei Metro Line Y.svg\0"
    "S3 Steiermark.svg\0"
    "S6 Steiermark.svg\0"
    "Milano linea M2.svg\0"
    "Milano linea M3.svg\0"
    "Milano linea M1.svg\0"
    "RER Fribourg Freiburg.svg\0"
    "M4 icon.svg\0"
    "SeibuIkebukuro.svg\0"
    "Tobu Skytree Line (TS) symbol.svg\0"
    "HZM Line 16 icon.svg\0"
    "Shenyang Metro Line 10 Logo.svg\0"
    "S7 Steiermark.svg\0"
    "S61 Steiermark.svg\0"
    "CS Line 5 icon.svg\0"
    "Sofia-metro-lines-03.svg\0"
    "St Louis MetroLink Logo.svg\0"
    "Milano S7.svg\0"
    "Bcr logo.svg\0"
    "Waterloo ION logo.svg\0"
    "Number prefix Keikyū.PNG\0"
    "ShenzhenMetroLine6.svg\0"
    "ShenzhenMetroLine10.svg\0"
    "R1 barcelona.svg\0"
    "Suin-Bundang Line.svg\0"
    "Kayseri public transport - T1 symbol.svg\0"
    "Kayseray logo.svg\0"
    "Kayseri public transport - T2 symbol.svg\0"
    "Logo de la Línea 3 del Tren Eléctrico Urbano de Guadalajara.svg\0"
    "CDML18.svg\0"
    "Kolkata Metro Rail Corporation Logo.svg\0"
    "S8 Tirol (2021).svg\0"
    "WX Metro Line 3 icon.svg\0"
    "Tobu Isesaki Line (TI) symbol.svg\0"
    "Tobu Nikko Line (TN) symbol.svg\0"
    "Antalya public transport - T3 symbol.svg\0"
    "Antalya public transport - T2 symbol.svg\0"
    "Antalya public transport - T1A symbol.svg\0"
    "Antalya public transport - T1B symbol.svg\0"
    "FEX VBB (2021).png\0"
    "NP-NH.png\0"
    "Hanoi Metro Line 3 Symbol.png\0"
    "HCMC Metro logo.svg\0"
    "CDML6.svg\0"
    "CDML8.svg\0"
    "CDML17.svg\0"
    "Paris transit icons - Train L.svg\0"
    "NBRT Line 4 icon.svg\0"
    "Istanbul T5 Line Symbol.svg\0"
    "SML15.svg\0"
    "Logo of Tokyo Metro Fukutoshin Line.svg\0"
    "Tramİzmir logo.svg\0"
    "Houston Metro icon.svg\0"
    "Logo du M1 de Lausanne.svg\0"
    "Line3mtymetro.png\0"
    "Athens Suburban Railway Line 5.svg\0"
    "Logo L2 Napoli.svg\0"
    "Paris transit icons - Tram 9.svg\0"
    "HZML8.png\0"
    "HZML9.png\0"
    "HZML6icon.png\0"
    "HZM Line 4 icon.svg\0"
    "CDML9.svg\0"
    "ShenzhenMetroLine2.svg\0"
    "ShenzhenMetroLine8.svg\0"
    "Harbin Metro Line 2.svg\0"
    "BJS Batong Line icon.svg\0"
    "Szczecin Tram 2.svg\0"
    "Istanbul F1 Line Symbol.svg\0"
    "Istanbul F2 Line Symbol.svg\0"
    "ZZMetro Line 4.svg\0"
    "ZZMetro Line 3.svg\0"
    "Línea 1 CAMETRO.png\0"
    "Línea 4 CAMETRO.png\0"
    "HZML7.png\0"
    "HZML10.png\0"
    "HZM Line 3 icon.svg\0"
    "Gwangju Metro Line 1.svg\0"
    "BJS Line 11 icon.svg\0"
    "BJS Line 17 icon.svg\0"
    "BJS Line 19 icon.svg\0"
    "NBRT Line 5 icon.svg\0"
    "DLM Line 13 icon.svg\0"
    "S31 Steiermark.svg\0"
    "S5 OÖ.svg\0"
    "S3 OÖ.svg\0"
    "S2 OÖ.svg\0"
    "S1 OÖ.svg\0"
    "S4 OÖ.svg\0"
    "Tashkent Metro Line 4.svg\0"
    "Icon of FZM L5.svg\0"
    "DeLijn icon 2antw.svg\0"
    "Paris transit icons - Tram 10.svg\0"
    "Paris transit icons - Tram 13.svg\0"
    "CS Line 6 icon.svg\0"
    "TAM-5.svg\0"
    "Paris transit icons - Métro 18.svg\0"
    "Icon of FZM L6.svg\0"
    "S90-Tilo.svg\0"
    "S20-Tilo.svg\0"
    "S10-Tilo.svg\0"
    "S30-Tilo.svg\0"
    "S60-Tilo.svg\0"
    "S40-Tilo.svg\0"
    "S50-Tilo.svg\0"
    "LACMTA Circle K Line.svg\0"
    "Istanbul F4 Line Symbol.svg\0"
    "Trambahía T1.svg\0"
    "ShenzhenMetroLine14.svg\0"
    "Istanbul M8 Line Symbol.svg\0"
    "Milano linea M4.svg\0"
    "ShenzhenMetroLine12.svg\0"
    "Gand S-Trein S53.svg\0"
    "ShenzhenMetroLine16.svg\0"
    "Istanbul M11 Line Symbol.svg\0"
    "Istanbul M14 Line Symbol.svg\0"
    "New Taipei Metro Line K.png\0"
    "Shiraz Metro Line 2.png\0"
    "Istanbul M12 Line Symbol.svg\0"
    "Karaj Metro Line 2-2.png\0"
    "لوگو قطار شهری کرج و حومه.svg\0"
    "Istanbul M5 Line Symbol.svg\0"
    "Istanbul M13 Line Symbol.svg\0"
    "Istanbul M7 Line Symbol.svg\0"
    "Istanbul M3 Line Symbol.svg\0"
    "Istanbul M9 Line Symbol.svg\0"
    "Istanbul M20 Line Symbol.svg\0"
    "Kayseri public transport - T3 symbol.svg\0"
    "Linka A (Praha).svg\0"
    "Prag Metro Logo.svg\0"
    "Linka B (Praha).svg\0"
    "Linka C (Praha).svg\0"
    "Kyiv Metro Line 3.svg\0"
    "Kyiv Metro logo.svg\0"
    "Kyiv Metro Line 1.svg\0"
    "Kyiv Metro Line 2.svg\0"
    "METROQ.svg\0"
    "Logo Tramway Bordeaux ligne D.svg\0"
};

static const constexpr uint16_t NoLogo = 18;

static const constexpr LineMetaDataContent line_data[] = {
    { 1, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf38bb9} }, // 70 OSM: 9056 WD: Q6811967 -37.84, 144.9 x -37.81, 145.1
    { 5, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009fda} }, // 75 OSM: 9057 WD: Q6811970 -37.86, 144.9 x -37.81, 145.2
    { 8, 0, 19, LineMetaDataContent::Tramway, Color{0xbb0000} }, // M4 OSM: 11134 WD: Q62512299 52.52, 13.4 x 52.57, 13.53
    { 11, 33, 19, LineMetaDataContent::Tramway, Color{0xcc9933} }, // M5 OSM: 11135 WD: Q62512324 52.52, 13.36 x 52.57, 13.52
    { 15, 52, 19, LineMetaDataContent::Tramway, Color{0x996699} }, // 12 OSM: 11140 WD: Q65954567 52.52, 13.38 x 52.56, 13.47
    { 18, 71, 19, LineMetaDataContent::Tramway, Color{0xff6633} }, // M8 OSM: 11141 WD: Q62512359 52.52, 13.36 x 52.57, 13.58
    { 22, 90, 19, LineMetaDataContent::Tramway, Color{0xff6633} }, // 18 OSM: 11142 WD: Q62554449 52.52, 13.44 x 52.55, 13.62
    { 26, 109, 19, LineMetaDataContent::Tramway, Color{0x006699} }, // 16 OSM: 11143 WD: Q62476614 52.51, 13.47 x 52.57, 13.58
    { 29, 128, 19, LineMetaDataContent::Tramway, Color{0x003388} }, // M6 OSM: 11145 WD: Q62511960 52.52, 13.4 x 52.55, 13.62
    { 16, 147, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 2 OSM: 12016 WD: Q950776 47.47, 19.05 x 47.51, 19.08
    { 32, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee2e27} }, // STH OSM: 14163 WD: Q7570091 -37.07, 174.8 x -36.84, 174.9
    { 36, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfdb913} }, // EAST OSM: 14165 WD: Q5330260 -37, 174.8 x -36.84, 174.9
    { 41, 196, 226, LineMetaDataContent::RapidTransit, Color{0x8070b7} }, // S7 OSM: 14809 WD: Q7388362 52.39, 13.07 x 52.57, 13.57
    { 4, 242, 226, LineMetaDataContent::RapidTransit, Color{0x8070b7} }, // S75 OSM: 14810 WD: Q3744483 52.5, 13.45 x 52.57, 13.54
    { 44, 273, 226, LineMetaDataContent::RapidTransit, Color{0xf25721} }, // S5 OSM: 14811 WD: Q3743008 52.5, 13.28 x 52.59, 13.91
    { 47, 303, 226, LineMetaDataContent::RapidTransit, Color{0x52b447} }, // S8 OSM: 14984 WD: Q4048678 52.35, 13.29 x 52.69, 13.63
    { 50, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9313ba} }, // S2 OSM: 16111 48.95, 8.283 x 49.11, 8.505
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb3ee3a} }, // 1 OSM: 17413 WD: Q318073 51.49, 10.79 x 51.52, 10.8
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x2e8b57} }, // 2 OSM: 17415 WD: Q318073 51.5, 10.78 x 51.51, 10.82
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x996633} }, // 3 OSM: 17839 48.99, 8.295 x 49.02, 8.444
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1 OSM: 17840 49, 8.347 x 49.04, 8.479
    { 53, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // S11 OSM: 17842 48.87, 8.373 x 49.13, 8.518
    { 61, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // S1 OSM: 17843 48.8, 8.373 x 49.13, 8.458
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x18a6d9} }, // 5 OSM: 17847 49, 8.347 x 49.02, 8.463
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc00} }, // 4 OSM: 17848 48.98, 8.347 x 49.05, 8.452
    { 47, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6d682a} }, // S8 OSM: 17849 48.44, 8.215 x 49.01, 8.83
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff9933} }, // 8 OSM: 17855 48.98, 8.452 x 49, 8.479
    { 64, 333, 19, LineMetaDataContent::Tramway, Color{0x108449} }, // M10 OSM: 17865 WD: Q62500489 52.5, 13.36 x 52.54, 13.45
    { 57, 353, 19, LineMetaDataContent::Tramway, Color{0x00cc00} }, // M13 OSM: 17884 WD: Q62512599 52.51, 13.34 x 52.56, 13.48
    { 72, 373, 19, LineMetaDataContent::Tramway, Color{0x996699} }, // 21 OSM: 17885 WD: Q62476959 52.45, 13.45 x 52.53, 13.52
    { 75, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xeda5b4} }, // U13 OSM: 19070 WD: Q70718526 48.76, 9.134 x 48.81, 9.254
    { 80, 421, 19, LineMetaDataContent::Tramway, Color{0x009999} }, // 63 OSM: 19115 WD: Q63996601 52.43, 13.53 x 52.5, 13.61
    { 84, 440, 19, LineMetaDataContent::Tramway, Color{0x669933} }, // 61 OSM: 19265 WD: Q62512736 52.43, 13.51 x 52.46, 13.69
    { 88, 459, 19, LineMetaDataContent::Tramway, Color{0x009933} }, // 68 OSM: 19271 WD: Q62470539 52.37, 13.57 x 52.46, 13.65
    { 95, 478, 19, LineMetaDataContent::Tramway, Color{0x006633} }, // 62 OSM: 19296 WD: Q62476843 52.42, 13.57 x 52.51, 13.61
    { 98, 497, 19, LineMetaDataContent::Tramway, Color{0x993333} }, // 37 OSM: 19451 WD: Q62499413 52.45, 13.5 x 52.53, 13.53
    { 102, NoLogo, 516, LineMetaDataContent::Tramway, Color{} }, // 88 OSM: 19597 WD: Q638246 52.46, 13.63 x 52.48, 13.81
    { 105, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xc7956c} }, // U1 OSM: 19916 WD: Q106879557 48.73, 9.111 x 48.81, 9.277
    { 108, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xf58220} }, // U2 OSM: 19917 WD: Q106879558 48.77, 9.122 x 48.83, 9.238
    { 111, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x935f39} }, // U3 OSM: 19918 WD: Q106879559 48.71, 9.112 x 48.73, 9.202
    { 114, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x7a68ae} }, // U4 OSM: 19919 WD: Q106879560 48.77, 9.158 x 48.79, 9.25
    { 117, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x00baf2} }, // U5 OSM: 19920 WD: Q106879561 48.7, 9.136 x 48.8, 9.187
    { 120, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xec008c} }, // U6 OSM: 19921 WD: Q106879562 48.69, 9.064 x 48.81, 9.192
    { 123, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x0eb48d} }, // U7 OSM: 19922 WD: Q106879563 48.71, 9.173 x 48.84, 9.296
    { 126, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xc3b47d} }, // U8 OSM: 19923 WD: Q106879564 48.71, 9.112 x 48.76, 9.296
    { 129, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xffd503} }, // U9 OSM: 19924 WD: Q106879565 48.75, 9.138 x 48.79, 9.254
    { 65, 534, 392, LineMetaDataContent::Tramway, Color{0xf8b710} }, // 10 OSM: 19925 WD: Q143861 48.75, 9.167 x 48.76, 9.174
    { 132, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xcccccc} }, // U11 OSM: 19926 WD: Q106879566 48.77, 9.168 x 48.8, 9.226
    { 14, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x93bbe9} }, // U12 OSM: 19927 WD: Q106879567 48.72, 9.118 x 48.87, 9.271
    { 136, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x69be51} }, // U14 OSM: 19928 WD: Q70723042 48.77, 9.168 x 48.84, 9.23
    { 140, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x005aab} }, // U15 OSM: 19929 WD: Q106879570 48.74, 9.156 x 48.85, 9.234
    { 144, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xcccccc} }, // U19 OSM: 19930 WD: Q106879572 48.79, 9.213 x 48.83, 9.238
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x312783} }, // 10 OSM: 19941 53.06, 8.752 x 53.12, 8.9
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x005ca9} }, // 2 OSM: 19942 53.06, 8.752 x 53.12, 8.9
    { 149, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9eb4a5} }, // 72 OSM: 20258 WD: Q6811968 -37.86, 145 x -37.8, 145.1
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf287b6} }, // 2 OSM: 22852 WD: Q56558793 54.09, 12.08 x 54.11, 12.17
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf8a500} }, // 6 OSM: 22871 WD: Q56558799 54.07, 12.09 x 54.09, 12.14
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x5d106a} }, // 1 OSM: 23389 WD: Q56558792 54.09, 12.05 x 54.16, 12.16
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x690713} }, // 3 OSM: 23742 WD: Q56558795 54.07, 12.09 x 54.11, 12.18
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc30175} }, // 4 OSM: 23743 WD: Q56558796 54.07, 12.1 x 54.11, 12.18
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe2001d} }, // 5 OSM: 23747 WD: Q56558797 54.06, 12.05 x 54.16, 12.14
    { 114, 559, 571, LineMetaDataContent::Subway, Color{0x029540} }, // U4 OSM: 27113 WD: Q877322 48.18, 16.26 x 48.25, 16.39
    { 120, 587, 571, LineMetaDataContent::Subway, Color{0x9c6830} }, // U6 OSM: 27115 WD: Q281409 48.13, 16.31 x 48.26, 16.4
    { 0, 599, NoLogo, LineMetaDataContent::Subway, Color{0x70b1d0} }, // U70 OSM: 27662 WD: Q661002 51.22, 6.566 x 51.33, 6.796
    { 152, 599, NoLogo, LineMetaDataContent::Subway, Color{0x0063af} }, // U76 OSM: 27663 WD: Q661002 51.22, 6.566 x 51.33, 6.806
    { 156, 599, NoLogo, LineMetaDataContent::Subway, Color{0x7197cf} }, // U77 OSM: 27667 WD: Q661002 51.17, 6.735 x 51.24, 6.834
    { 161, 613, 19, LineMetaDataContent::Tramway, Color{0x0b9ada} }, // 60 OSM: 28289 WD: Q62512766 52.44, 13.5 x 52.46, 13.64
    { 164, 632, 226, LineMetaDataContent::RapidTransit, Color{0x055a99} }, // S3 OSM: 28314 WD: Q7388282 52.43, 13.2 x 52.53, 13.75
    { 169, 662, 19, LineMetaDataContent::Tramway, Color{0x009933} }, // 67 OSM: 28352 WD: Q66459350 52.44, 13.51 x 52.46, 13.59
    { 173, 681, 19, LineMetaDataContent::Tramway, Color{0x993333} }, // 27 OSM: 28377 WD: Q66091843 52.44, 13.46 x 52.56, 13.59
    { 176, 700, 19, LineMetaDataContent::Tramway, Color{0xa6422a} }, // M17 OSM: 28391 WD: Q62512560 52.43, 13.51 x 52.57, 13.54
    { 181, 720, 19, LineMetaDataContent::Tramway, Color{0x36ab94} }, // 50 OSM: 28420 WD: Q62499869 52.54, 13.34 x 52.61, 13.43
    { 184, 599, NoLogo, LineMetaDataContent::Subway, Color{0x009a93} }, // U79 OSM: 28424 WD: Q661002 51.19, 6.739 x 51.47, 6.815
    { 72, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x945692} }, // 21 OSM: 29440 WD: Q4415661 51.91, 4.368 x 51.94, 4.525
    { 189, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x945692} }, // 24 OSM: 29446 WD: Q14500289 51.91, 4.341 x 51.94, 4.525
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 6 OSM: 30058 49.17, 16.55 x 49.23, 16.61
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd62631} }, // 11 OSM: 33897 51.28, 12.22 x 51.4, 12.4
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd62631} }, // 10 OSM: 33900 51.3, 12.32 x 51.37, 12.4
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000f} }, // 16 OSM: 34068 51.3, 12.38 x 51.4, 12.4
    { 192, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x005395} }, // WLB OSM: 34086 WD: Q875199 48, 16.23 x 48.2, 16.37
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0e4094} }, // 7 OSM: 34148 51.34, 12.27 x 51.36, 12.48
    { 88, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcea4cb} }, // 68 OSM: 34480 50.7, 6.985 x 50.76, 7.156
    { 61, 739, 226, LineMetaDataContent::RapidTransit, Color{0x5c8e3c} }, // S1 OSM: 35610 WD: Q18946157 48.59, 8.861 x 48.8, 9.444
    { 50, 775, 226, LineMetaDataContent::RapidTransit, Color{0xff2e1d} }, // S2 OSM: 35611 WD: Q66537943 48.68, 9.105 x 48.83, 9.527
    { 164, 811, 226, LineMetaDataContent::RapidTransit, Color{0xff7d24} }, // S3 OSM: 35612 WD: Q67504621 48.69, 9.105 x 48.94, 9.426
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe6877e} }, // 9 OSM: 36132 50.92, 6.907 x 50.94, 7.096
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8cc63f} }, // 12 OSM: 36133 50.9, 6.939 x 51.03, 6.96
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00accd} }, // 15 OSM: 36134 50.92, 6.898 x 51.02, 6.966
    { 196, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x83898f} }, // 58 OSM: 37338 WD: Q28428375 -37.84, 144.9 x -37.74, 145
    { 199, 847, 226, LineMetaDataContent::RapidTransit, Color{0x874a0a} }, // S6 OSM: 37419 WD: Q67501804 48.76, 8.872 x 48.83, 9.195
    { 206, NoLogo, 883, LineMetaDataContent::Tramway, Color{0xff0000} }, // T1 OSM: 38872 WD: Q5985908 28.45, -16.32 x 28.49, -16.25
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0e4094} }, // 15 OSM: 38883 51.29, 12.26 x 51.34, 12.44
    { 210, NoLogo, 599, LineMetaDataContent::Tramway, Color{0xc8d300} }, // 65 OSM: 39079 WD: Q20035842 50.72, 7.071 x 50.76, 7.156
    { 27, 921, NoLogo, LineMetaDataContent::Tramway, Color{0x9049a8} }, // 6 OSM: 48024 WD: Q62296933 52.13, 11.57 x 52.15, 11.68
    { 55, 949, NoLogo, LineMetaDataContent::Tramway, Color{0xb6005c} }, // 1 OSM: 48025 WD: Q62289804 52.11, 11.59 x 52.17, 11.64
    { 9, 977, NoLogo, LineMetaDataContent::Tramway, Color{0x73e700} }, // 4 OSM: 48453 WD: Q62295350 52.11, 11.58 x 52.16, 11.67
    { 6, 1005, NoLogo, LineMetaDataContent::Tramway, Color{0xb48654} }, // 5 OSM: 48459 WD: Q62296384 52.09, 11.58 x 52.16, 11.62
    { 194, 1033, 1055, LineMetaDataContent::RapidTransit, Color{0x32cd32} }, // B OSM: 51750 WD: Q1903862 55.65, 12.27 x 55.81, 12.59
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x62b32c} }, // 1 OSM: 51858 51.31, 12.26 x 51.38, 12.42
    { 120, 1065, 1095, LineMetaDataContent::Subway, Color{0x8070b7} }, // U6 OSM: 51942 WD: Q99720 52.44, 13.33 x 52.56, 13.39
    { 55, 1106, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 1 OSM: 52282 WD: Q106921117 57.64, 11.9 x 57.73, 12.05
    { 6, 1128, NoLogo, LineMetaDataContent::Tramway, Color{0xeb1923} }, // 5 OSM: 52617 WD: Q106921184 57.7, 11.89 x 57.74, 12.05
    { 42, 1150, NoLogo, LineMetaDataContent::Tramway, Color{0x7d4313} }, // 7 OSM: 53027 WD: Q10562726 57.64, 11.9 x 57.76, 12.07
    { 47, 1172, 226, LineMetaDataContent::RapidTransit, Color{0xffc734} }, // S8 OSM: 53231 WD: Q17148488 48, 11.17 x 48.35, 11.79
    { 213, 1188, 226, LineMetaDataContent::RapidTransit, Color{0xff2d1d} }, // S4 OSM: 53235 WD: Q7388308 48.04, 11.04 x 48.18, 11.97
    { 27, 1204, NoLogo, LineMetaDataContent::Tramway, Color{0xfa8719} }, // 6 OSM: 53254 WD: Q10562724 57.68, 11.89 x 57.76, 12.04
    { 130, 1226, NoLogo, LineMetaDataContent::Tramway, Color{0x1e8164} }, // 9 OSM: 53748 WD: Q62299846 52.08, 11.6 x 52.18, 11.64
    { 16, 1254, NoLogo, LineMetaDataContent::Tramway, Color{0x004799} }, // 2 OSM: 53752 WD: Q62291398 52.06, 11.63 x 52.15, 11.68
    { 19, 1282, NoLogo, LineMetaDataContent::Tramway, Color{0xf29400} }, // 8 OSM: 53770 WD: Q62299313 52.06, 11.63 x 52.18, 11.68
    { 199, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3d2d7c} }, // S6 OSM: 53844 48.75, 8.549 x 48.9, 8.705
    { 65, 1310, NoLogo, LineMetaDataContent::Tramway, Color{0xaac1e1} }, // 10 OSM: 54125 WD: Q62288523 52.11, 11.59 x 52.21, 11.67
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9acd32} }, // 10 OSM: 54452 WD: Q318073 51.49, 10.77 x 51.58, 10.8
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xda0873} }, // 1 OSM: 54602 53.59, 11.41 x 53.65, 11.47
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd9261c} }, // 2 OSM: 54603 53.59, 11.36 x 53.65, 11.47
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe87878} }, // 3 OSM: 54604 53.57, 11.38 x 53.6, 11.47
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdb214c} }, // 4 OSM: 54605 53.57, 11.38 x 53.65, 11.43
    { 59, 1339, NoLogo, LineMetaDataContent::Tramway, Color{0xffd600} }, // 3 OSM: 55097 WD: Q62292031 52.09, 11.58 x 52.16, 11.63
    { 217, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x408040} }, // S 1 OSM: 55107 WD: Q56378592 52, 11.62 x 53.01, 11.87
    { 129, 1367, 1095, LineMetaDataContent::Subway, Color{0xff7300} }, // U9 OSM: 58423 WD: Q99744 52.46, 13.32 x 52.56, 13.37
    { 126, 1397, 1095, LineMetaDataContent::Subway, Color{0x055a99} }, // U8 OSM: 58424 WD: Q99729 52.47, 13.33 x 52.6, 13.43
    { 123, 1427, 1095, LineMetaDataContent::Subway, Color{0x0b9ada} }, // U7 OSM: 58425 WD: Q99725 52.42, 13.2 x 52.54, 13.5
    { 111, 1457, 1095, LineMetaDataContent::Subway, Color{0x15ac99} }, // U3 OSM: 58426 WD: Q99702 52.44, 13.24 x 52.51, 13.45
    { 108, 1487, 1095, LineMetaDataContent::Subway, Color{0xff3300} }, // U2 OSM: 58428 WD: Q99697 52.5, 13.24 x 52.57, 13.41
    { 114, 1517, 1095, LineMetaDataContent::Subway, Color{0xffcd00} }, // U4 OSM: 58429 WD: Q99708 52.48, 13.34 x 52.5, 13.36
    { 117, 1547, 1095, LineMetaDataContent::Subway, Color{0x7d533d} }, // U5 OSM: 58430 WD: Q99711 52.49, 13.37 x 52.54, 13.63
    { 105, 1577, 1095, LineMetaDataContent::Subway, Color{0x52b447} }, // U1 OSM: 58767 WD: Q99691 52.5, 13.33 x 52.51, 13.45
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf2a100} }, // 12 OSM: 58815 51.32, 12.37 x 51.38, 12.4
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc00} }, // 8 OSM: 58819 51.32, 12.28 x 51.36, 12.47
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x62b32c} }, // 3 OSM: 58829 51.28, 12.31 x 51.38, 12.49
    { 6, 1607, 1624, LineMetaDataContent::Tramway, Color{} }, // 5 OSM: 61453 WD: Q104867893 49.41, 11.07 x 49.46, 11.14
    { 177, 1648, 19, LineMetaDataContent::Tramway, Color{0x865a46} }, // 17 OSM: 61454 WD: Q20438593 48.13, 11.49 x 48.17, 11.57
    { 145, 1669, 19, LineMetaDataContent::Tramway, Color{0xdc281e} }, // 19 OSM: 61456 WD: Q20438608 48.14, 11.46 x 48.15, 11.63
    { 22, 1690, 19, LineMetaDataContent::Tramway, Color{0x00a03c} }, // 18 OSM: 61458 WD: Q20438601 48.1, 11.49 x 48.14, 11.6
    { 221, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x865a46} }, // N17 OSM: 61459 48.13, 11.49 x 48.17, 11.61
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf78a21} }, // 1 OSM: 61460 50.85, 12.07 x 50.89, 12.09
    { 50, 1711, 226, LineMetaDataContent::RapidTransit, Color{0x018a47} }, // S2 OSM: 61466 WD: Q3743635 52.34, 13.36 x 52.68, 13.59
    { 225, 1741, 226, LineMetaDataContent::RapidTransit, Color{0x018a47} }, // S25 OSM: 61469 WD: Q7388229 52.4, 13.21 x 52.64, 13.4
    { 111, 1772, 1095, LineMetaDataContent::Subway, Color{0xfcdf00} }, // U3 OSM: 62839 WD: Q781351 53.54, 9.969 x 53.59, 10.08
    { 230, 1787, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfaa635} }, // J OSM: 63222 WD: Q6109356 37.72, -122.4 x 37.79, -122.4
    { 233, 1805, NoLogo, LineMetaDataContent::Tramway, Color{0xf0e68c} }, // F OSM: 63224 WD: Q1137818 37.76, -122.4 x 37.81, -122.4
    { 61, 1833, 226, LineMetaDataContent::RapidTransit, Color{0x36caec} }, // S1 OSM: 63809 WD: Q7388207 48.13, 11.48 x 48.4, 11.79
    { 199, 1849, 226, LineMetaDataContent::RapidTransit, Color{0x00ac6f} }, // S6 OSM: 63839 WD: Q7388348 47.91, 11.27 x 48.15, 11.97
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff7f00} }, // 3 OSM: 63875 51.82, 12.18 x 51.84, 12.24
    { 235, 1865, 226, LineMetaDataContent::RapidTransit, Color{0xba8a4d} }, // S46 OSM: 64094 WD: Q3737194 52.3, 13.28 x 52.52, 13.64
    { 239, 1899, 226, LineMetaDataContent::RapidTransit, Color{0xba8a4d} }, // S45 OSM: 64095 WD: Q2090939 52.36, 13.36 x 52.48, 13.57
    { 226, 1930, 19, LineMetaDataContent::Tramway, Color{0xe6828c} }, // 25 OSM: 66008 WD: Q20439051 48.04, 11.52 x 48.14, 11.6
    { 15, 1951, 19, LineMetaDataContent::Tramway, Color{0x903f98} }, // 12 OSM: 66043 WD: Q20438570 48.15, 11.51 x 48.17, 11.58
    { 26, 1972, 19, LineMetaDataContent::Tramway, Color{0x006cb2} }, // 16 OSM: 66044 WD: Q20438583 48.13, 11.51 x 48.18, 11.64
    { 173, 1993, 19, LineMetaDataContent::Tramway, Color{0xf0a014} }, // 27 OSM: 66053 WD: Q20439073 48.13, 11.56 x 48.18, 11.58
    { 244, 2014, 19, LineMetaDataContent::Tramway, Color{0x00aadc} }, // 20 OSM: 66079 WD: Q20438843 48.14, 11.51 x 48.18, 11.56
    { 72, 2035, 19, LineMetaDataContent::Tramway, Color{0x00aadc} }, // 21 OSM: 66080 WD: Q20439015 48.12, 11.53 x 48.17, 11.64
    { 249, 2063, 19, LineMetaDataContent::Tramway, Color{0x96c81e} }, // 23 OSM: 66100 WD: Q20439033 48.16, 11.59 x 48.19, 11.59
    { 252, 2084, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe67310} }, // A3 OSM: 66588 WD: Q19606155 53.75, 9.656 x 53.8, 9.983
    { 213, 2099, 226, LineMetaDataContent::RapidTransit, Color{0x0065b7} }, // S4 OSM: 66840 WD: Q67504669 48.77, 9.155 x 48.95, 9.426
    { 255, 2135, 2154, LineMetaDataContent::RapidTransit, Color{0x8d1d81} }, // S51 OSM: 67184 WD: Q116125186 46.7, 15.63 x 46.73, 15.99
    { 260, 2173, 19, LineMetaDataContent::Tramway, Color{0xee6600} }, // M1 OSM: 67233 WD: Q62512139 52.52, 13.37 x 52.6, 13.41
    { 44, 2192, 226, LineMetaDataContent::RapidTransit, Color{0x00b7e1} }, // S5 OSM: 67283 WD: Q18926034 48.77, 9.122 x 48.95, 9.195
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf59e00} }, // 3 OSM: 69178 47.97, 7.796 x 48, 7.85
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe8001b} }, // 1 OSM: 69191 47.98, 7.808 x 48.03, 7.895
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008bc5} }, // 5 OSM: 69199 47.99, 7.788 x 48, 7.852
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x13a538} }, // 2 OSM: 69202 47.96, 7.833 x 48.02, 7.858
    { 267, NoLogo, 2228, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Blue OSM: 71390 WD: Q6714611 45.49, -123 x 45.54, -122.4
    { 272, NoLogo, 2228, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // Yellow OSM: 71397 WD: Q6714624 45.51, -122.7 x 45.61, -122.7
    { 279, NoLogo, 2228, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // Red OSM: 71404 WD: Q6714623 45.49, -122.8 x 45.59, -122.6
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf6a6ab} }, // 1 OSM: 71785 WD: Q106996879 47.25, 11.39 x 47.28, 11.41
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd66775} }, // 3 OSM: 71787 WD: Q106996895 47.26, 11.39 x 47.27, 11.43
    { 9, 2248, 1624, LineMetaDataContent::Tramway, Color{} }, // 4 OSM: 72527 WD: Q104867838 49.43, 11.05 x 49.49, 11.07
    { 19, 2265, 1624, LineMetaDataContent::Tramway, Color{} }, // 8 OSM: 73226 WD: Q104868033 49.43, 11.08 x 49.47, 11.14
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfbba00} }, // 1 OSM: 73662 51.47, 11.96 x 51.51, 11.99
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff9900} }, // 2 OSM: 73667 WD: Q61889098 51.43, 11.89 x 51.49, 11.99
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0066cc} }, // 3 OSM: 73670 WD: Q61887067 51.43, 11.96 x 51.52, 11.99
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9b1006} }, // 4 OSM: 73671 WD: Q61889270 51.44, 11.93 x 51.51, 11.99
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0f3f93} }, // 5 OSM: 73672 WD: Q61889316 51.29, 11.93 x 51.51, 12.07
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff6699} }, // 7 OSM: 73929 WD: Q61889355 51.48, 11.93 x 51.51, 12.04
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x999933} }, // 9 OSM: 73932 WD: Q61889418 51.48, 11.89 x 51.48, 11.99
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x336633} }, // 10 OSM: 73933 WD: Q61889438 51.48, 11.9 x 51.49, 11.99
    { 53, 2282, 2154, LineMetaDataContent::RapidTransit, Color{0x00983a} }, // S11 OSM: 76229 WD: Q116125180 47.2, 15.24 x 47.23, 15.34
    { 283, NoLogo, 2301, LineMetaDataContent::Tramway, Color{} }, // 89 OSM: 77259 WD: Q534882 52.53, 13.84 x 52.58, 13.88
    { 61, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x800000} }, // S1 OSM: 77908 WD: Q7388209 49.44, 10.9 x 49.9, 11.56
    { 50, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x65b949} }, // S2 OSM: 77962 WD: Q7388248 49.24, 11.04 x 49.45, 11.35
    { 164, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xf05c3d} }, // S3 OSM: 77971 WD: Q7388284 49.27, 11.08 x 49.45, 11.46
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xef1c29} }, // 3 OSM: 78206 50.84, 12.05 x 50.91, 12.1
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4098de} }, // 3 OSM: 79325 WD: Q60318542 51.72, 14.3 x 51.76, 14.35
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa81a30} }, // 6 OSM: 89518 WD: Q1664234 47.23, 11.4 x 47.26, 11.44
    { 199, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x0066b3} }, // S6 OSM: 91626 WD: Q115646650 46.9, 7.778 x 47.22, 8.31
    { 41, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x78b6e4} }, // S7 OSM: 91629 WD: Q115646652 47.06, 7.778 x 47.22, 8.082
    { 9, 2333, 2366, LineMetaDataContent::Subway, Color{0x800080} }, // 4 OSM: 102389 WD: Q54373 43.76, -79.41 x 43.78, -79.35
    { 59, 2374, 2366, LineMetaDataContent::RapidTransit, Color{0x0093dd} }, // 3 OSM: 102390 WD: Q54372 43.73, -79.28 x 43.78, -79.25
    { 286, 2413, 2440, LineMetaDataContent::RapidTransit, Color{0xef7b10} }, // LO OSM: 112649 WD: Q1854601 51.46, -0.3961 x 51.66, 0.1233
    { 291, 2463, 2495, LineMetaDataContent::RapidTransit, Color{0xfcd946} }, // C OSM: 122886 WD: Q200906 48.43, 1.995 x 49.05, 2.427
    { 293, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // LS OSM: 129379 WD: Q15982573 -35.19, -59.43 x -34.58, -58.41
    { 296, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // LSM OSM: 129382 WD: Q3239199 -34.61, -59.08 x -34.45, -58.37
    { 300, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // LM OSM: 129383 WD: Q66759479 -34.59, -59.1 x -34.1, -58.37
    { 303, 2525, NoLogo, LineMetaDataContent::RapidTransit, Color{0xef3e33} }, // LU OSM: 129393 WD: Q7887242 -34.6, -58.7 x -34.53, -58.46
    { 309, 2555, 2583, LineMetaDataContent::Tramway, Color{0xf38733} }, // P OSM: 129505 WD: Q3409024 -34.69, -58.47 x -34.64, -58.44
    { 172, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf0a014} }, // N27 OSM: 129569 48.08, 11.55 x 48.18, 11.59
    { 311, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe33385} }, // 96 OSM: 132386 WD: Q12061652 -37.87, 145 x -37.77, 145
    { 314, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfeba10} }, // 86 OSM: 137969 WD: Q12061650 -37.82, 144.9 x -37.68, 145.1
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x88d1f0} }, // 3 OSM: 144407 WD: Q6811954 -37.89, 145 x -37.8, 145.1
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe04038} }, // 5 OSM: 145649 WD: Q6811959 -37.87, 145 x -37.8, 145.1
    { 318, 2598, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 49 OSM: 147322 WD: Q1491114 47.47, 19.02 x 47.5, 19.06
    { 322, 2622, 2634, LineMetaDataContent::Subway, Color{0xfdc110} }, // M2 OSM: 152340 WD: Q1880954 55.63, 12.49 x 55.69, 12.65
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009640} }, // 1 OSM: 153893 53.04, 8.741 x 53.16, 8.965
    { 44, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x23c4fc} }, // S5 OSM: 160986 WD: Q55632180 49.26, 11.08 x 49.45, 11.21
    { 327, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9085ba} }, // E OSM: 163591 WD: Q2903493 48.53, 7.733 x 48.61, 7.786
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xec008c} }, // 1 OSM: 163714 52.47, -2.125 x 52.58, -1.896
    { 15, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x98002e} }, // 12 OSM: 163759 WD: Q3239135 43.11, -79.89 x 43.65, -79.06
    { 260, 2687, 2711, LineMetaDataContent::Subway, Color{0x0075be} }, // M1 OSM: 165613 WD: Q3238660 43.29, 5.374 x 43.33, 5.43
    { 322, 2743, 2711, LineMetaDataContent::Subway, Color{0xe30513} }, // M2 OSM: 165618 WD: Q3238804 43.27, 5.367 x 43.33, 5.403
    { 329, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x49805b} }, // 59 OSM: 167658 WD: Q6811962 -37.82, 144.9 x -37.71, 145
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x003828} }, // 1 OSM: 170076 52.92, -1.263 x 53.04, -1.145
    { 332, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x42816b} }, // 181 (SN) OSM: 172834 51.28, -0.1728 x 51.49, -0.07193
    { 272, NoLogo, 2767, LineMetaDataContent::RapidTransit, Color{0xd39f06} }, // Yellow OSM: 172864 WD: Q19960799 54.95, -1.623 x 55.04, -1.429
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x78ccc9} }, // 3 OSM: 173596 50.42, 30.37 x 50.45, 30.49
    { 341, 2792, 226, LineMetaDataContent::RapidTransit, Color{0x52b447} }, // S85 OSM: 175267 WD: Q4048677 52.41, 13.4 x 52.57, 13.58
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x82cee6} }, // 8 OSM: 178504 39.46, -0.339 x 39.46, -0.3254
    { 27, 2823, NoLogo, LineMetaDataContent::Tramway, Color{0x9b70cb} }, // 6 OSM: 178505 WD: Q3832664 39.46, -0.3726 x 39.5, -0.3256
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x004a99} }, // 4 OSM: 178506 39.47, -0.4364 x 39.53, -0.3256
    { 6, 2854, NoLogo, LineMetaDataContent::Subway, Color{0x009870} }, // 5 OSM: 178522 WD: Q3238965 39.46, -0.4744 x 39.49, -0.3383
    { 59, 2885, NoLogo, LineMetaDataContent::Subway, Color{0xdd052b} }, // 3 OSM: 178523 WD: Q3238906 39.47, -0.4744 x 39.59, -0.33
    { 55, 2916, NoLogo, LineMetaDataContent::Subway, Color{0xfdc600} }, // 1 OSM: 178526 WD: Q2165952 39.08, -0.5268 x 39.59, -0.3815
    { 346, 2947, 2975, LineMetaDataContent::Tramway, Color{0xc19dc2} }, // L4 OSM: 190184 WD: Q5474600 38.35, -0.4907 x 38.38, -0.4118
    { 350, 3016, 2975, LineMetaDataContent::Tramway, Color{0xd72028} }, // L1 OSM: 190196 WD: Q594538 38.35, -0.4907 x 38.55, -0.1348
    { 354, NoLogo, 2975, LineMetaDataContent::Tramway, Color{0x00ff00} }, // L2 OSM: 190199 WD: Q9025903 38.35, -0.5172 x 38.39, -0.4678
    { 358, NoLogo, 2975, LineMetaDataContent::Tramway, Color{0xf9d114} }, // L3 OSM: 190203 WD: Q9025931 38.35, -0.4907 x 38.43, -0.3952
    { 361, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf58122} }, // 109 OSM: 190802 WD: Q6811947 -37.84, 144.9 x -37.81, 145.1
    { 291, 3044, 1055, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // C OSM: 191280 WD: Q4452746 55.66, 12.07 x 55.84, 12.59
    { 34, 3066, 1055, LineMetaDataContent::RapidTransit, Color{0xe64415} }, // H OSM: 191281 WD: Q1891933 55.66, 12.07 x 55.84, 12.59
    { 366, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x33bdca} }, // 57 OSM: 196209 WD: Q16926803 -37.82, 144.9 x -37.77, 145
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0e4094} }, // 4 OSM: 207342 51.32, 12.36 x 51.38, 12.43
    { 326, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0e4094} }, // 4E OSM: 207342 51.32, 12.36 x 51.38, 12.43
    { 369, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a5e3} }, // North Jersey Coast OSM: 207401 WD: Q7055732 40.07, -74.29 x 40.77, -73.99
    { 16, 3088, NoLogo, LineMetaDataContent::Subway, Color{0x97d700} }, // 2 OSM: 207417 WD: Q1325437 31.15, 121.3 x 31.24, 121.8
    { 388, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x434244} }, // 48 OSM: 207445 WD: Q16926797 -37.82, 144.9 x -37.79, 145.1
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 1 OSM: 207718 45.55, 18.62 x 45.57, 18.73
    { 304, 3097, 3131, LineMetaDataContent::RapidTransit, Color{0xb90845} }, // U OSM: 215565 WD: Q93559 48.76, 1.943 x 48.89, 2.237
    { 42, 3163, NoLogo, LineMetaDataContent::Subway, Color{0xff6900} }, // 7 OSM: 228608 WD: Q2707909 31.17, 121.3 x 31.41, 121.6
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffff00} }, // 8 OSM: 237270 49.17, 16.55 x 49.21, 16.69
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ff00} }, // 2 OSM: 237285 49.13, 16.59 x 49.2, 16.64
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1 OSM: 237306 49.19, 16.51 x 49.25, 16.61
    { 392, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd77d00} }, // 30 OSM: 241384 WD: Q1760190 59.29, 17.96 x 59.36, 18.12
    { 396, 3172, 3201, LineMetaDataContent::RapidTransit, Color{0xf166a7} }, // 43 OSM: 241411 WD: Q106806959 58.9, 17.53 x 59.57, 18.16
    { 400, 3172, 3201, LineMetaDataContent::RapidTransit, Color{0xf166a7} }, // 41 OSM: 241413 WD: Q106806951 59.17, 17.63 x 59.63, 18.07
    { 388, 3172, 3201, LineMetaDataContent::RapidTransit, Color{0xf166a7} }, // 48 OSM: 241414 WD: Q106808255 59.04, 17.31 x 59.19, 17.65
    { 404, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // TS OSM: 252385 WD: Q802144 -31.42, -64.49 x -31.12, -64.17
    { 408, 3236, 3131, LineMetaDataContent::RapidTransit, Color{0x9f9825} }, // K OSM: 253357 WD: Q93382 48.88, 2.352 x 49.23, 2.887
    { 410, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x007dc5} }, // ISL OSM: 269670 WD: Q989316 22.26, 114.1 x 22.29, 114.2
    { 414, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf7943e} }, // TCL OSM: 269671 WD: Q989358 22.28, 113.9 x 22.36, 114.2
    { 418, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00888a} }, // AEL OSM: 272078 WD: Q409036 22.29, 113.9 x 22.36, 114.2
    { 422, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x53b7e8} }, // EAL OSM: 272132 WD: Q989339 22.28, 114.1 x 22.53, 114.2
    { 426, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x923011} }, // TML OSM: 272133 WD: Q5329661 22.29, 114 x 22.45, 114.2
    { 217, 3270, NoLogo, LineMetaDataContent::Tramway, Color{0xef7c00} }, // S 1 OSM: 273002 WD: Q65643711 49.11, 6.891 x 49.41, 7.069
    { 430, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff7e00} }, // 28E OSM: 274460 WD: Q63034669 38.71, -9.17 x 38.72, -9.128
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 2 OSM: 300207 48.46, 34.61 x 48.52, 34.69
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff00ff} }, // 1 OSM: 300208 48.51, 34.57 x 48.52, 34.62
    { 434, 3288, 226, LineMetaDataContent::RapidTransit, Color{0x9a3052} }, // S9 OSM: 304163 WD: Q4048680 52.36, 13.2 x 52.53, 13.57
    { 437, NoLogo, 2228, LineMetaDataContent::RapidTransit, Color{0x008000} }, // Green OSM: 304623 WD: Q6714613 45.44, -122.7 x 45.54, -122.6
    { 260, 3318, 3330, LineMetaDataContent::Subway, Color{0x0000ff} }, // M1 OSM: 309619 WD: Q17462780 52.13, 20.93 x 52.29, 21.07
    { 434, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf49ac1} }, // S9 OSM: 349282 47.3, 9.039 x 47.46, 9.088
    { 309, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // P OSM: 357191 WD: Q118874962 60.17, 24.84 x 60.33, 25.06
    { 443, 3387, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // C-1 OSM: 357967 WD: Q3239078 43.25, -3.03 x 43.33, -2.928
    { 448, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x035eb9} }, // I OSM: 358139 WD: Q118874956 60.17, 24.84 x 60.33, 25.06
    { 450, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x630016} }, // STB OSM: 359908 WD: Q872840 47.16, 11.35 x 47.27, 11.4
    { 455, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x723b1f} }, // 35 OSM: 363305 WD: Q5123100 -37.82, 144.9 x -37.81, 145
    { 145, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8f4a78} }, // 19 OSM: 363891 WD: Q6811950 -37.82, 145 x -37.73, 145
    { 164, 3412, 226, LineMetaDataContent::RapidTransit, Color{0x862996} }, // S3 OSM: 364187 WD: Q56996474 47.88, 11.17 x 48.22, 11.7
    { 458, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // SIR1 OSM: 365296 WD: Q107133892 45.37, 11.87 x 45.44, 11.89
    { 464, 3428, NoLogo, LineMetaDataContent::Subway, Color{0x6cbe45} }, // G OSM: 366764 WD: Q126527 40.64, -74 x 40.75, -73.94
    { 42, 3454, NoLogo, LineMetaDataContent::Subway, Color{0xb933ad} }, // 7 OSM: 366765 WD: Q126203 40.74, -74 x 40.76, -73.83
    { 294, 3480, NoLogo, LineMetaDataContent::Subway, Color{0x808183} }, // S OSM: 366766 WD: Q126698 40.75, -73.99 x 40.76, -73.98
    { 468, 3506, NoLogo, LineMetaDataContent::Subway, Color{0xfccc0a} }, // N OSM: 366768 WD: Q126434 40.58, -74.02 x 40.78, -73.91
    { 470, 3532, NoLogo, LineMetaDataContent::Subway, Color{0xfccc0a} }, // Q OSM: 366769 WD: Q126448 40.58, -74 x 40.78, -73.95
    { 475, 3558, NoLogo, LineMetaDataContent::Subway, Color{0x0039a6} }, // A OSM: 366774 WD: Q126344 40.58, -74.01 x 40.87, -73.75
    { 27, 3584, NoLogo, LineMetaDataContent::Subway, Color{0x00933c} }, // 6 OSM: 366777 WD: Q126192 40.71, -74.01 x 40.85, -73.83
    { 480, 3610, NoLogo, LineMetaDataContent::Subway, Color{0xfccc0a} }, // R OSM: 366780 WD: Q126459 40.62, -74.03 x 40.77, -73.84
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 8 OSM: 367548 47.2, 38.88 x 47.22, 38.94
    { 482, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9acd32} }, // Bx OSM: 367751 55.65, 12.27 x 55.75, 12.59
    { 233, 3636, 1055, LineMetaDataContent::RapidTransit, Color{0xffc225} }, // F OSM: 381625 WD: Q2133631 55.65, 12.49 x 55.73, 12.57
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008030} }, // 7 OSM: 382533 WD: Q2590490 51.91, 4.471 x 51.93, 4.526
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdf60a4} }, // 8 OSM: 382535 WD: Q3277304 51.9, 4.432 x 51.95, 4.488
    { 226, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x6192c7} }, // 25 OSM: 382566 WD: Q2321951 51.84, 4.46 x 51.96, 4.514
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa05a2c} }, // 10 OSM: 383124 49.19, 16.51 x 49.23, 16.68
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ccff} }, // 12 OSM: 384321 49.18, 16.58 x 49.23, 16.62
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff00ff} }, // 5 OSM: 384539 49.16, 16.59 x 49.22, 16.63
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xafca28} }, // 11 OSM: 384541 49.21, 16.56 x 49.22, 16.57
    { 485, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe40000} }, // 155 OSM: 391346 46.38, 6.073 x 46.47, 6.235
    { 489, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa3429b} }, // TER T2 OSM: 394022 WD: Q3536981 47.09, -1.542 x 47.22, -1.286
    { 327, 3658, 1055, LineMetaDataContent::RapidTransit, Color{0x9370db} }, // E OSM: 394091 WD: Q4624816 55.46, 12.17 x 55.81, 12.59
    { 54, 3680, NoLogo, LineMetaDataContent::Subway, Color{0x76232f} }, // 11 OSM: 396879 WD: Q2636308 31.13, 121.1 x 31.4, 121.7
    { 16, 3690, 3710, LineMetaDataContent::Subway, Color{0x00529b} }, // 2 OSM: 414866 WD: Q680973 39.9, 116.3 x 39.95, 116.4
    { 55, 3745, 3710, LineMetaDataContent::Subway, Color{0xa12830} }, // 1 OSM: 415571 WD: Q748987 39.85, 116.1 x 39.95, 116.7
    { 58, 3765, 3710, LineMetaDataContent::Subway, Color{0xf9e700} }, // 13 OSM: 417951 WD: Q847744 39.94, 116.3 x 40.07, 116.5
    { 260, 3786, 3802, LineMetaDataContent::Subway, Color{0xffd800} }, // M1 OSM: 418343 WD: Q1078111 47.5, 19.05 x 47.52, 19.09
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006d78} }, // T2 OSM: 418631 WD: Q16011471 47.22, 5.951 x 47.25, 6.03
    { 65, 3816, 3710, LineMetaDataContent::Subway, Color{0x178abb} }, // 10 OSM: 420835 WD: Q847886 39.84, 116.3 x 39.98, 116.5
    { 6, 3837, 3710, LineMetaDataContent::Subway, Color{0xae005f} }, // 5 OSM: 420836 WD: Q647340 39.84, 116.4 x 40.08, 116.4
    { 19, 3857, 3710, LineMetaDataContent::Subway, Color{0x00997a} }, // 8 OSM: 420837 WD: Q847771 39.76, 116.3 x 40.1, 116.4
    { 9, 3877, 3710, LineMetaDataContent::Subway, Color{0x008994} }, // 4 OSM: 420838 WD: Q304264 39.67, 116.3 x 40.01, 116.4
    { 19, 3897, NoLogo, LineMetaDataContent::Subway, Color{0x008c95} }, // 8 OSM: 443998 WD: Q862965 23.09, 113.2 x 23.24, 113.4
    { 42, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xeb262b} }, // 7 OSM: 446001 WD: Q3743333 40.83, 14.27 x 40.88, 14.34
    { 480, 3917, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // R OSM: 447451 WD: Q697140 25.03, 121.4 x 25.17, 121.6
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0026ff} }, // 1 OSM: 453141 WD: Q104222652 36.23, 59.44 x 36.35, 59.64
    { 61, 3941, 226, LineMetaDataContent::RapidTransit, Color{0xd474ae} }, // S1 OSM: 454054 WD: Q2579762 52.42, 13.18 x 52.75, 13.4
    { 41, 3971, 226, LineMetaDataContent::RapidTransit, Color{0x20543f} }, // S7 OSM: 456933 WD: Q2588691 49.83, 8.488 x 50.11, 8.664
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe40716} }, // T1 OSM: 535990 WD: Q3239228 45.41, 4.364 x 45.48, 4.394
    { 472, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0363ff} }, // T1 A OSM: 548496 WD: Q1688502 36.72, 3.083 x 36.78, 3.263
    { 55, 3988, NoLogo, LineMetaDataContent::RapidTransit, Color{0xbf4525} }, // 1 OSM: 556308 WD: Q110248494 60.29, 5.232 x 60.39, 5.361
    { 497, NoLogo, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 56 OSM: 557061 WD: Q1491414 47.43, 18.96 x 47.54, 19.05
    { 145, 4014, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 19 OSM: 557063 WD: Q776651 47.47, 19.02 x 47.55, 19.05
    { 501, 4038, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 47 OSM: 557066 WD: Q1491058 47.43, 19.04 x 47.5, 19.06
    { 400, 4062, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 41 OSM: 557068 WD: Q1490823 47.44, 18.98 x 47.55, 19.05
    { 84, 4086, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 61 OSM: 557070 WD: Q1491592 47.48, 18.96 x 47.54, 19.05
    { 16, 4110, NoLogo, LineMetaDataContent::Tramway, Color{0x0068b3} }, // 2 OSM: 563459 WD: Q78198199 48.32, 10.84 x 48.38, 10.91
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xef7c00} }, // 8 OSM: 563484 48.33, 10.89 x 48.37, 10.9
    { 160, 4130, 226, LineMetaDataContent::RapidTransit, Color{0x928d1d} }, // S60 OSM: 570588 WD: Q63952011 48.69, 8.922 x 48.83, 9.195
    { 504, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6699cc} }, // 215 OSM: 571534 WD: Q105045768 46.95, 6.839 x 46.99, 6.928
    { 508, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, //  MSC 2008 OSM: 660480 14.2, 121 x 14.62, 121.2
    { 161, 4167, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 60 OSM: 899388 WD: Q851167 47.5, 18.98 x 47.51, 19.01
    { 329, 4191, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 59 OSM: 906131 WD: Q744461 47.48, 19 x 47.51, 19.02
    { 177, 4215, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 17 OSM: 911937 WD: Q1486400 47.44, 19.02 x 47.55, 19.05
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffda66} }, // 16 OSM: 916109 WD: Q16926791 -37.87, 145 x -37.8, 145
    { 518, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa21d} }, // MD-W OSM: 932986 WD: Q5250950 41.88, -88.33 x 42.06, -87.64
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x19633a} }, // 6 OSM: 962031 47.06, 15.41 x 47.08, 15.48
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x68ba45} }, // 3 OSM: 962059 47.07, 15.42 x 47.1, 15.46
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe42714} }, // 7 OSM: 962240 47.06, 15.39 x 47.08, 15.47
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00b8ea} }, // 1 OSM: 962920 47.07, 15.39 x 47.11, 15.49
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x95c11f} }, // 8 OSM: 963052 53.05, 8.741 x 53.1, 8.841
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc00} }, // 6 OSM: 963103 53.05, 8.783 x 53.11, 8.859
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x025191} }, // 5 OSM: 963685 47.03, 15.42 x 47.1, 15.45
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdeaa2e} }, // 4 OSM: 963737 47.04, 15.41 x 47.07, 15.46
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe30613} }, // 4 OSM: 964983 53.03, 8.799 x 53.16, 8.945
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009fe3} }, // 3 OSM: 966312 53.06, 8.752 x 53.12, 8.868
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x808080} }, // T1 OSM: 1059709 WD: Q107172293 42.84, -2.702 x 42.87, -2.649
    { 523, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0075bf} }, // N10 OSM: 1070763 53.06, 8.752 x 53.12, 8.9
    { 527, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe30613} }, // N4 OSM: 1070810 53.03, 8.799 x 53.16, 8.945
    { 530, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009640} }, // N1 OSM: 1070812 53.04, 8.741 x 53.09, 8.965
    { 27, 4236, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 6 OSM: 1102938 WD: Q1491542 47.48, 19.02 x 47.51, 19.07
    { 9, 4259, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 4 OSM: 1102941 WD: Q1490736 47.47, 19.02 x 47.51, 19.07
    { 533, 4282, 4297, LineMetaDataContent::RapidTransit, Color{0x8a236c} }, // H5 OSM: 1103027 WD: Q1031914 47.51, 19.03 x 47.66, 19.08
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffc734} }, // 1 OSM: 1105466 52.4, 12.47 x 52.43, 12.57
    { 537, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x1aaa6f} }, // 64 OSM: 1110830 WD: Q6811964 -37.91, 145 x -37.8, 145
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x004c6c} }, // 6 OSM: 1111658 WD: Q16926785 -37.86, 145 x -37.76, 145.1
    { 169, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xac7963} }, // 67 OSM: 1111659 WD: Q6811965 -37.89, 145 x -37.8, 145.1
    { 540, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfaa634} }, // Raritan Valley OSM: 1122386 WD: Q7294577 40.56, -74.9 x 40.74, -74.16
    { 555, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf173ac} }, // DRL OSM: 1139477 WD: Q989330 22.32, 114 x 22.33, 114
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed389c} }, // A OSM: 1142411 45.5, -122.7 x 45.53, -122.7
    { 559, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe41f25} }, // N82 OSM: 1147592 48.24, 14.28 x 48.33, 14.36
    { 181, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe41f25} }, // 50 OSM: 1149422 48.31, 14.26 x 48.32, 14.29
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe41f25} }, // 2 OSM: 1149423 48.24, 14.28 x 48.33, 14.36
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe41f25} }, // 3 OSM: 1149424 48.23, 14.23 x 48.31, 14.29
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe41f25} }, // 1 OSM: 1149425 48.25, 14.28 x 48.33, 14.32
    { 108, 4321, 1095, LineMetaDataContent::Subway, Color{0x00a54f} }, // U2 OSM: 1150977 WD: Q3040891 50.1, 8.64 x 50.22, 8.688
    { 563, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0039a6} }, // Harlem OSM: 1158719 WD: Q5658559 40.75, -73.98 x 41.82, -73.55
    { 68, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008be0} }, // TER 21 OSM: 1184795 45.67, 4.755 x 45.77, 4.827
    { 570, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009b3a} }, // Hudson OSM: 1186686 40.75, -73.99 x 41.71, -73.86
    { 577, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff7900} }, // Port Jervis OSM: 1190915 WD: Q7230730 41.11, -74.69 x 41.49, -74.09
    { 350, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe52422} }, // L1 OSM: 1190932 WD: Q28662810 41.62, -0.9378 x 41.69, -0.8708
    { 589, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0065ff} }, // SFMA OSM: 1204872 WD: Q3832760 45.09, 7.47 x 45.27, 7.677
    { 594, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0065ff} }, // SFM 2 OSM: 1210497 WD: Q3832754 44.89, 7.337 x 45.19, 7.89
    { 600, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x95aa53} }, // 308 OSM: 1228606 51.4, 7.16 x 51.52, 7.284
    { 604, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb14e7a} }, // 310 OSM: 1228607 51.44, 7.152 x 51.48, 7.337
    { 454, NoLogo, 599, LineMetaDataContent::Subway, Color{0x294488} }, // U35 OSM: 1228608 WD: Q2466100 51.45, 7.21 x 51.55, 7.273
    { 21, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x72a7a0} }, // 318 OSM: 1228609 51.42, 7.143 x 51.52, 7.284
    { 608, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xea504c} }, // 306 OSM: 1228610 51.48, 7.16 x 51.53, 7.223
    { 612, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x6ba5d9} }, // 302 OSM: 1228611 51.46, 7.056 x 51.58, 7.324
    { 616, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00b2f6} }, // 301 OSM: 1236118 51.5, 7.026 x 51.58, 7.11
    { 620, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf47a14} }, // S 5 OSM: 1241173 49.14, 8.674 x 49.42, 9.102
    { 624, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0039a6} }, // Port Jefferson OSM: 1255264 WD: Q7230720 40.7, -73.99 x 40.94, -73.05
    { 639, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe00034} }, // New Haven OSM: 1260624 40.75, -73.98 x 41.31, -72.92
    { 477, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x89728e} }, // VMLR OSM: 1266358 33.41, -112.1 x 33.57, -111.8
    { 493, NoLogo, 883, LineMetaDataContent::Tramway, Color{0x0000ff} }, // T2 OSM: 1286854 WD: Q5986172 28.44, -16.3 x 28.47, -16.29
    { 649, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00af3f} }, // Oyster Bay OSM: 1308975 WD: Q7116314 40.7, -73.99 x 40.88, -73.53
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 3 OSM: 1343415 55.64, 37.6 x 55.76, 37.65
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 1 OSM: 1343815 55.6, 37.59 x 55.66, 37.61
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 16 OSM: 1348910 55.6, 37.59 x 55.7, 37.63
    { 354, 4338, 3710, LineMetaDataContent::Subway, Color{0xd61572} }, // L2 OSM: 1350576 WD: Q5944471 39.77, 116.4 x 39.84, 116.6
    { 189, 4338, 3710, LineMetaDataContent::Subway, Color{0xd61572} }, // 24 OSM: 1350576 WD: Q5944471 39.77, 116.4 x 39.84, 116.6
    { 173, 4365, 3710, LineMetaDataContent::Subway, Color{0xd47daa} }, // 27 OSM: 1350622 WD: Q5066697 39.97, 116.2 x 40.24, 116.3
    { 466, 4393, 3710, LineMetaDataContent::Subway, Color{0xd85f26} }, // 25N OSM: 1350671 WD: Q5433860 39.72, 116.1 x 39.86, 116.3
    { 660, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Kingston/Plymouth Line OSM: 1353691 WD: Q7083739 41.98, -71.06 x 42.35, -70.69
    { 683, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Needham Line OSM: 1353692 WD: Q6986548 42.27, -71.24 x 42.35, -71.06
    { 696, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Fairmount Line OSM: 1353693 WD: Q5430648 42.24, -71.13 x 42.35, -71.05
    { 711, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Greenbush Line OSM: 1353695 WD: Q5603780 42.18, -71.06 x 42.35, -70.74
    { 726, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Middleborough/Lakeville Line OSM: 1353697 WD: Q7083739 41.88, -71.06 x 42.35, -70.92
    { 350, NoLogo, 3710, LineMetaDataContent::Subway, Color{0x9b91b1} }, // L1 OSM: 1354082 WD: Q847767 39.94, 116.4 x 40.08, 116.6
    { 755, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Framingham/Worcester OSM: 1354954 WD: Q801994 42.23, -71.8 x 42.36, -71.06
    { 776, 4420, 4297, LineMetaDataContent::RapidTransit, Color{0xee7101} }, // H7 OSM: 1358702 WD: Q1031921 47.42, 19.07 x 47.48, 19.07
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 3 OSM: 1361661 56.48, 84.95 x 56.48, 85.02
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 17 OSM: 1371410 55.82, 37.62 x 55.89, 37.67
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 11 OSM: 1371613 55.78, 37.62 x 55.83, 37.82
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcc9900} }, // 8 OSM: 1374424 WD: Q61887882 51.45, 11.95 x 51.52, 11.99
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x99cc00} }, // 12 OSM: 1375884 WD: Q61888162 51.48, 11.96 x 51.52, 11.99
    { 779, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfece08} }, // Main OSM: 1377995 WD: Q6736006 40.73, -74.17 x 41.11, -74.03
    { 784, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa1d4ae} }, // Gladstone OSM: 1377996 WD: Q5566325 40.67, -74.67 x 40.77, -73.99
    { 794, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xb9c9df} }, // Bergen County OSM: 1377997 WD: Q4891507 40.73, -74.15 x 41.11, -74.03
    { 808, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a94e} }, // Morristown OSM: 1377998 WD: Q1948559 40.71, -74.83 x 40.91, -73.99
    { 819, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe76b5b} }, // Montclair-Boonton OSM: 1377999 WD: Q6904583 40.73, -74.83 x 40.93, -73.99
    { 289, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff8942} }, // FXC OSM: 1388637 WD: Q8565193 39.95, -75.18 x 40.08, -75.08
    { 837, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7c5e4a} }, // DOY OSM: 1388640 WD: Q6487336 39.95, -75.28 x 40.31, -75.13
    { 841, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffd457} }, // WAR OSM: 1390135 WD: Q7969637 39.95, -75.18 x 40.26, -74.82
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 2 OSM: 1390151 34.31, 132.3 x 34.4, 132.5
    { 845, NoLogo, 4435, LineMetaDataContent::RapidTransit, Color{0xfaa93f} }, // Camden OSM: 1403279 WD: Q5025789 38.9, -77.01 x 39.28, -76.62
    { 852, NoLogo, 4435, LineMetaDataContent::RapidTransit, Color{0xfbcab6} }, // Brunswick OSM: 1405417 WD: Q4979520 38.9, -77.96 x 39.46, -76.99
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 2 OSM: 1405516 44.8, 20.45 x 44.83, 20.48
    { 862, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff7f00} }, // 12E OSM: 1411178 WD: Q1487139 38.71, -9.138 x 38.72, -9.13
    { 866, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff00ff} }, // 15E OSM: 1411205 WD: Q63229924 38.69, -9.233 x 38.71, -9.135
    { 233, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x97bf0d} }, // F OSM: 1416967 WD: Q2724954 48.58, 7.716 x 48.59, 7.778
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfdc434} }, // 4 OSM: 1443866 46.24, 20.12 x 46.28, 20.16
    { 6, 4450, 4474, LineMetaDataContent::Subway, Color{0x802f08} }, // 5 OSM: 1462012 WD: Q831673 55.73, 37.57 x 55.78, 37.66
    { 9, 4579, 4474, LineMetaDataContent::Subway, Color{0x33ccff} }, // 4 OSM: 1463287 WD: Q834540 55.73, 37.44 x 55.75, 37.61
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe5005a} }, // 3 OSM: 1469415 51.02, 13.7 x 51.1, 13.75
    { 59, 4603, 4474, LineMetaDataContent::Subway, Color{0x0000ff} }, // 3 OSM: 1472548 WD: Q626941 55.73, 37.35 x 55.86, 37.8
    { 55, 4627, 4474, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 1475758 WD: Q729631 55.56, 37.4 x 55.82, 37.75
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 4 OSM: 1476874 56.45, 84.98 x 56.48, 85.02
    { 434, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x73c82c} }, // S9 OSM: 1483885 48.99, 8.399 x 49.71, 8.58
    { 870, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0896dd} }, // 98 OSM: 1490387 52.36, 13.03 x 52.4, 13.1
    { 873, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 91 OSM: 1492311 52.36, 13.01 x 52.4, 13.1
    { 475, 4651, 4690, LineMetaDataContent::Subway, Color{0x0000ff} }, // A OSM: 1502599 WD: Q17621067 6.152, -75.63 x 6.339, -75.54
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 1 OSM: 1503481 56.47, 84.95 x 56.53, 85.02
    { 877, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x897cb9} }, // 78 OSM: 1504645 WD: Q6811971 -37.87, 145 x -37.81, 145
    { 882, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x19488e} }, // 92 OSM: 1505928 52.36, 13.03 x 52.42, 13.14
    { 885, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfe9800} }, // 93 OSM: 1509473 52.36, 13.06 x 52.41, 13.1
    { 888, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x838a8f} }, // 94 OSM: 1512265 52.37, 13.01 x 52.4, 13.11
    { 891, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x803c9f} }, // S33 OSM: 1513484 49.12, 8.364 x 49.24, 8.594
    { 27, 4718, 4474, LineMetaDataContent::Subway, Color{0xffa500} }, // 6 OSM: 1514439 WD: Q175271 55.6, 37.51 x 55.89, 37.67
    { 42, 4742, 4474, LineMetaDataContent::Subway, Color{0xff00ff} }, // 7 OSM: 1516383 WD: Q924028 55.67, 37.43 x 55.86, 37.86
    { 19, 4766, 4474, LineMetaDataContent::Subway, Color{0xffff00} }, // 8 OSM: 1526351 WD: Q585986 55.74, 37.63 x 55.76, 37.87
    { 65, 4790, 4474, LineMetaDataContent::Subway, Color{0xb4d445} }, // 10 OSM: 1532877 WD: Q582194 55.61, 37.55 x 55.87, 37.76
    { 895, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdc281e} }, // N19 OSM: 1536166 48.12, 11.46 x 48.15, 11.64
    { 899, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf6c046} }, // Zoo Tram OSM: 1536345 35.15, -90 x 35.15, -89.99
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 12 OSM: 1538177 55.71, 37.66 x 55.79, 37.82
    { 181, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 50 OSM: 1538180 55.75, 37.6 x 55.79, 37.72
    { 236, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 46 OSM: 1538181 55.75, 37.7 x 55.83, 37.78
    { 98, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 37 OSM: 1538182 55.75, 37.65 x 55.78, 37.82
    { 909, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 32 OSM: 1538183 55.75, 37.66 x 55.79, 37.75
    { 164, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x0097d8} }, // S3 OSM: 1549250 WD: Q7388286 47.32, 8.501 x 47.53, 8.806
    { 455, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1c24} }, // 35 OSM: 1555118 44.42, 25.98 x 44.45, 26.07
    { 194, 4815, 4842, LineMetaDataContent::Subway, Color{0xffd900} }, // B OSM: 1557177 WD: Q3239063 43.56, 1.43 x 43.64, 1.478
    { 206, 4866, 4894, LineMetaDataContent::Tramway, Color{0x004687} }, // T1 OSM: 1557178 WD: Q3239230 43.59, 1.36 x 43.67, 1.446
    { 475, 4918, 4842, LineMetaDataContent::Subway, Color{0xdb001b} }, // A OSM: 1557179 WD: Q3239050 43.57, 1.392 x 43.63, 1.483
    { 912, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf6c454} }, // S10 OSM: 1561016 WD: Q687279 47.35, 8.465 x 47.38, 8.54
    { 213, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe67d63} }, // S4 OSM: 1567629 WD: Q685807 47.27, 8.517 x 47.38, 8.558
    { 130, 4945, 4474, LineMetaDataContent::Subway, Color{0xa0a2a3} }, // 9 OSM: 1570146 WD: Q739170 55.57, 37.57 x 55.9, 37.63
    { 16, 4969, 4474, LineMetaDataContent::Subway, Color{0x006400} }, // 2 OSM: 1572626 WD: Q834482 55.61, 37.47 x 55.88, 37.77
    { 188, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x946644} }, // S24 OSM: 1574036 WD: Q7388228 47.17, 8.516 x 47.75, 9.106
    { 15, 4993, 4474, LineMetaDataContent::Subway, Color{0xacbfe3} }, // 12 OSM: 1580617 WD: Q678759 55.54, 37.52 x 55.6, 37.59
    { 311, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00a995} }, // 96 OSM: 1585204 52.36, 13.05 x 52.43, 13.14
    { 917, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x59c133} }, // 99 OSM: 1585259 52.37, 13.06 x 52.4, 13.11
    { 53, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xccaaff} }, // S11 OSM: 1588232 WD: Q56435440 47.37, 8.048 x 47.54, 8.771
    { 920, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // TMR OSM: 1603490 -27.46, -59.05 x -27.42, -58.98
    { 924, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x00c0f3} }, // S29 OSM: 1609488 WD: Q115646661 47.17, 7.903 x 47.49, 8.257
    { 61, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x00ab4e} }, // S1 OSM: 1609559 WD: Q115646641 47.04, 8.098 x 47.2, 8.524
    { 199, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x7751a1} }, // S6 OSM: 1609735 WD: Q7388350 47.26, 8.305 x 47.48, 8.683
    { 928, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xd8242b} }, // S12 OSM: 1614502 WD: Q7388182 47.37, 8.208 x 47.7, 9.042
    { 25, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x64b97a} }, // S16 OSM: 1618466 WD: Q7388193 47.28, 8.511 x 47.45, 8.621
    { 891, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x2da7df} }, // S33 OSM: 1619213 WD: Q7388269 47.5, 8.611 x 47.7, 8.726
    { 434, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x00a34f} }, // S9 OSM: 1620987 WD: Q7388394 47.35, 8.501 x 47.7, 8.721
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc32b3c} }, // 2 OSM: 1624727 WD: Q60282113 51.75, 14.31 x 51.76, 14.35
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x239537} }, // 4 OSM: 1628047 WD: Q60328960 51.72, 14.32 x 51.79, 14.35
    { 493, 5018, 5051, LineMetaDataContent::Tramway, Color{0xbb4a9b} }, // T2 OSM: 1635139 WD: Q1771110 48.82, 2.217 x 48.92, 2.288
    { 443, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // C-1 OSM: 1636998 WD: Q59928410 41.63, -1.023 x 41.72, -0.8658
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xece116} }, // 1 OSM: 1637446 WD: Q60213236 51.75, 14.33 x 51.78, 14.34
    { 475, 5082, 2583, LineMetaDataContent::Subway, Color{0x1ca4cb} }, // A OSM: 1637478 WD: Q1209679 -34.63, -58.47 x -34.61, -58.37
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x54ad4b} }, // 18 OSM: 1646141 50.73, 6.893 x 50.98, 7.096
    { 932, 5110, 4297, LineMetaDataContent::RapidTransit, Color{0xed6e86} }, // H9 OSM: 1647378 WD: Q947539 47.5, 19.14 x 47.55, 19.27
    { 935, 5110, 4297, LineMetaDataContent::RapidTransit, Color{0xed6e86} }, // H8 OSM: 1647379 WD: Q947539 47.5, 19.14 x 47.6, 19.36
    { 938, 5125, 4297, LineMetaDataContent::RapidTransit, Color{0x7b4400} }, // H6 OSM: 1647380 WD: Q1031918 47.18, 18.94 x 47.47, 19.12
    { 61, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // S1 OSM: 1647847 WD: Q2316170 41.39, 2.007 x 41.58, 2.169
    { 55, 5140, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 1 OSM: 1658046 WD: Q651686 47.46, 19.02 x 47.55, 19.11
    { 189, 5163, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 24 OSM: 1658053 WD: Q1489900 47.44, 19.07 x 47.5, 19.12
    { 181, 5187, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 50 OSM: 1658057 WD: Q643837 47.43, 19.13 x 47.47, 19.22
    { 95, 5211, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 62 OSM: 1658060 WD: Q1491622 47.48, 19.07 x 47.54, 19.14
    { 942, 5235, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 42 OSM: 1658062 WD: Q1490864 47.45, 19.13 x 47.47, 19.15
    { 59, 5259, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 3 OSM: 1658063 WD: Q1490196 47.44, 19.09 x 47.52, 19.14
    { 137, 5282, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 14 OSM: 1658066 WD: Q1485881 47.52, 19.06 x 47.59, 19.12
    { 945, 5306, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 69 OSM: 1658067 WD: Q1491929 47.52, 19.09 x 47.55, 19.15
    { 949, 5330, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 52 OSM: 1658071 WD: Q1491293 47.42, 19.1 x 47.47, 19.13
    { 952, 5354, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 62A OSM: 1658072 WD: Q743389 47.48, 19.1 x 47.54, 19.14
    { 98, 5379, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 37 OSM: 1658073 WD: Q1490525 47.47, 19.07 x 47.5, 19.18
    { 956, 5403, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 51A OSM: 1658076 WD: Q16516127 47.47, 19.07 x 47.48, 19.08
    { 256, 5428, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 51 OSM: 1658077 WD: Q1491245 47.44, 19.07 x 47.48, 19.12
    { 960, 5452, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 28A OSM: 1658080 WD: Q12813290 47.47, 19.07 x 47.5, 19.18
    { 965, 5474, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 28 OSM: 1658081 WD: Q1490084 47.47, 19.07 x 47.5, 19.18
    { 968, 5498, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 37A OSM: 1658082 WD: Q287376 47.49, 19.07 x 47.5, 19.14
    { 61, 5523, 226, LineMetaDataContent::RapidTransit, Color{0x33b540} }, // S1 OSM: 1660624 WD: Q19377130 53.55, 9.705 x 53.65, 10.09
    { 974, 5538, 2495, LineMetaDataContent::RapidTransit, Color{0x5e9620} }, // D OSM: 1673421 WD: Q1425351 48.29, 2.344 x 49.27, 2.657
    { 108, 5570, 1095, LineMetaDataContent::Subway, Color{0xff0000} }, // U2 OSM: 1676043 WD: Q3433227 49.42, 11.03 x 49.49, 11.11
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdc008f} }, // 1 OSM: 1679960 50.09, 14.34 x 50.13, 14.48
    { 108, 5587, 1095, LineMetaDataContent::Subway, Color{0xee1d23} }, // U2 OSM: 1686090 WD: Q275451 53.53, 9.943 x 53.64, 10.15
    { 105, 5602, 1095, LineMetaDataContent::Subway, Color{0x0066b3} }, // U1 OSM: 1687370 WD: Q248623 53.55, 9.985 x 53.71, 10.29
    { 977, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 26 OSM: 1689065 55.68, 37.54 x 55.73, 37.62
    { 981, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 39 OSM: 1689391 55.68, 37.54 x 55.76, 37.65
    { 985, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // А OSM: 1689398 WD: Q4461919 55.73, 37.63 x 55.76, 37.7
    { 501, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 47 OSM: 1689752 55.68, 37.61 x 55.73, 37.69
    { 988, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 38 OSM: 1690017 55.68, 37.59 x 55.73, 37.66
    { 991, 5617, 226, LineMetaDataContent::RapidTransit, Color{0x5d1d81} }, // S31 OSM: 1727359 WD: Q19368873 53.46, 9.851 x 53.56, 10.03
    { 232, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfdc434} }, // 3F OSM: 1733222 46.25, 20.11 x 46.28, 20.16
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfdc434} }, // 3 OSM: 1733225 46.25, 20.12 x 46.28, 20.16
    { 995, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // СТ OSM: 1759150 WD: Q107191041 48.7, 44.5 x 48.8, 44.6
    { 1000, 5633, 5655, LineMetaDataContent::Subway, Color{0x0000ff} }, // 2 Салтівська OSM: 1766294 WD: Q2332390 49.99, 36.23 x 50.03, 36.34
    { 1023, 5678, 5655, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 Холодногірсько-заводська OSM: 1766295 WD: Q2710248 49.95, 36.18 x 49.99, 36.4
    { 1073, 5700, 5655, LineMetaDataContent::Subway, Color{0x008000} }, // 3 Олексіївська OSM: 1766296 WD: Q2109890 49.98, 36.2 x 50.06, 36.27
    { 55, 5722, NoLogo, LineMetaDataContent::Tramway, Color{0x78ccc9} }, // 1 OSM: 1767386 WD: Q63890946 50.41, 30.38 x 50.45, 30.49
    { 137, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7a7dbc} }, // 14 OSM: 1770128 WD: Q3743657 40.63, 14.27 x 40.85, 14.49
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x78ccc9} }, // 2 OSM: 1773735 50.41, 30.37 x 50.43, 30.41
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff6600} }, // 1 OSM: 1783293 WD: Q25522217 59.44, 24.67 x 59.46, 24.79
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff6600} }, // 2 OSM: 1783294 WD: Q18624670 59.43, 24.67 x 59.46, 24.81
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff6600} }, // 3 OSM: 1783295 WD: Q25522221 59.41, 24.73 x 59.44, 24.79
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff6600} }, // 4 OSM: 1783296 WD: Q16409268 59.41, 24.73 x 59.44, 24.8
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 2 OSM: 1788097 55.67, 52.28 x 55.73, 52.47
    { 1100, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x1b522b} }, // 12а OSM: 1789317 55.67, 52.28 x 55.75, 52.47
    { 1105, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa82618} }, // SSL OSM: 1811654 41.59, -87.62 x 41.88, -86.29
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 6 OSM: 1821113 59.93, 30.23 x 59.97, 30.36
    { 1110, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 40 OSM: 1821265 59.93, 30.23 x 60.01, 30.37
    { 493, 5738, 5768, LineMetaDataContent::Tramway, Color{0x96bf0d} }, // T2 OSM: 1824544 WD: Q106915028 47.29, 5.006 x 47.37, 5.059
    { 206, 5791, 5768, LineMetaDataContent::Tramway, Color{0xcc0088} }, // T1 OSM: 1824550 WD: Q106915007 47.31, 5.028 x 47.33, 5.112
    { 392, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4f4a9f} }, // 30 OSM: 1830395 WD: Q6811953 -37.81, 144.9 x -37.81, 145
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 16 OSM: 1831075 59.9, 30.27 x 59.93, 30.37
    { 400, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 41 OSM: 1831189 59.88, 30.24 x 59.92, 30.29
    { 1113, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xc60c30} }, // Port Washington OSM: 1834644 WD: Q7231025 40.74, -73.99 x 40.83, -73.69
    { 1129, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008be0} }, // TER 22 OSM: 1849404 45.76, 4.601 x 45.85, 4.827
    { 111, 5821, 1095, LineMetaDataContent::Subway, Color{0x00868b} }, // U3 OSM: 1857497 WD: Q3433219 49.44, 11.02 x 49.47, 11.09
    { 105, 5838, 1095, LineMetaDataContent::Subway, Color{0x000066} }, // U1 OSM: 1857639 WD: Q3433210 49.4, 10.96 x 49.48, 11.14
    { 72, 5855, NoLogo, LineMetaDataContent::Tramway, Color{0xf89c0e} }, // 21 OSM: 1871117 WD: Q85093119 50.07, 8.567 x 50.11, 8.67
    { 1137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 36 OSM: 1871436 59.85, 30.06 x 59.89, 30.28
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe30613} }, // A OSM: 1874970 WD: Q2066292 339.5, 249.5 x 339.5, 249.5
    { 194, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009fe3} }, // B OSM: 1874971 WD: Q2085986 339.5, 249.5 x 339.5, 249.5
    { 54, 5885, NoLogo, LineMetaDataContent::Tramway, Color{0xfbbc09} }, // 11 OSM: 1875166 WD: Q85088920 50.1, 8.552 x 50.13, 8.774
    { 15, 5915, NoLogo, LineMetaDataContent::Tramway, Color{0xc73a17} }, // 12 OSM: 1875167 WD: Q85090131 50.08, 8.581 x 50.13, 8.756
    { 137, 5945, NoLogo, LineMetaDataContent::Tramway, Color{0xf1471d} }, // 14 OSM: 1875169 WD: Q85112445 50.1, 8.618 x 50.13, 8.716
    { 141, 5975, NoLogo, LineMetaDataContent::Tramway, Color{0xfbbc09} }, // 15 OSM: 1875170 WD: Q85112688 50.09, 8.636 x 50.1, 8.745
    { 177, 6005, NoLogo, LineMetaDataContent::Tramway, Color{0xf1471d} }, // 17 OSM: 1875171 WD: Q107028657 50.06, 8.619 x 50.12, 8.695
    { 199, 6035, 226, LineMetaDataContent::RapidTransit, Color{0xf57921} }, // S6 OSM: 1880910 WD: Q3238987 50.1, 8.633 x 50.34, 8.789
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8d1d2c} }, // 17 OSM: 1903836 WD: Q96578284 47.35, 8.482 x 47.4, 8.542
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9bd6f9} }, // 4 OSM: 1904829 50.03, 14.37 x 50.08, 14.48
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 10 OSM: 1905347 44.76, 20.45 x 44.83, 20.48
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 12 OSM: 1905348 44.77, 20.41 x 44.81, 20.49
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 5 OSM: 1905349 44.78, 20.45 x 44.83, 20.52
    { 240, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 45 OSM: 1926572 59.83, 30.32 x 59.88, 30.41
    { 925, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 29 OSM: 1926573 59.83, 30.32 x 59.9, 30.35
    { 396, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 43 OSM: 1927169 59.83, 30.32 x 59.89, 30.4
    { 226, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 25 OSM: 1933012 59.83, 30.35 x 59.93, 30.4
    { 318, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 49 OSM: 1933013 59.83, 30.35 x 59.93, 30.42
    { 72, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 21 OSM: 1938644 59.98, 30.24 x 60.06, 30.38
    { 388, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 48 OSM: 1938658 59.98, 30.19 x 59.99, 30.35
    { 244, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 20 OSM: 1938751 59.96, 30.32 x 60.05, 30.38
    { 196, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 58 OSM: 1939721 60.04, 30.3 x 60.07, 30.38
    { 475, 6052, NoLogo, LineMetaDataContent::Tramway, Color{0xa83939} }, // A OSM: 1940504 WD: Q10883225 35, 135.7 x 35.02, 135.7
    { 486, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 55 OSM: 1942053 59.99, 30.23 x 60.06, 30.37
    { 27, 6097, 1624, LineMetaDataContent::Tramway, Color{} }, // 6 OSM: 1942851 WD: Q104867938 49.43, 11.05 x 49.46, 11.12
    { 291, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x913108} }, // C OSM: 1958845 37.79, -122.4 x 37.79, -122.4
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 9 OSM: 1959399 59.98, 30.32 x 60.04, 30.44
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 10 OSM: 1965337 59.91, 30.41 x 59.95, 30.5
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 8 OSM: 1965401 59.93, 30.44 x 59.95, 30.49
    { 329, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 59 OSM: 1965402 59.93, 30.44 x 59.97, 30.49
    { 537, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 64 OSM: 1965403 59.93, 30.44 x 59.98, 30.51
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 14 OSM: 1968651 44.76, 20.47 x 44.81, 20.52
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 6 OSM: 1968652 44.78, 20.47 x 44.81, 20.52
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x003828} }, // 2 OSM: 1984325 52.9, -1.207 x 52.99, -1.145
    { 1140, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x82bf40} }, // SFM3 OSM: 1988841 WD: Q3832756 45.04, 6.71 x 45.14, 7.678
    { 463, 6114, NoLogo, LineMetaDataContent::Tramway, Color{0xfcc70d} }, // SG OSM: 1994315 WD: Q339069 35.64, 139.6 x 35.67, 139.7
    { 411, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x004ea2} }, // SL OSM: 1994316 WD: Q6360898 35.33, 139.6 x 35.39, 139.7
    { 322, 6139, 19, LineMetaDataContent::Tramway, Color{0x33ff33} }, // M2 OSM: 2001598 WD: Q62512253 52.52, 13.41 x 52.57, 13.44
    { 1145, 599, NoLogo, LineMetaDataContent::Subway, Color{0x008fc2} }, // U75 OSM: 2003447 WD: Q661002 51.2, 6.684 x 51.23, 6.847
    { 876, 599, NoLogo, LineMetaDataContent::Subway, Color{0x009adf} }, // U78 OSM: 2003448 WD: Q661002 51.22, 6.733 x 51.27, 6.795
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x967b68} }, // 13 OSM: 2003476 50.91, 6.908 x 50.97, 7.038
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x948fb8} }, // 5 OSM: 2003477 50.93, 6.888 x 50.98, 6.96
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfff500} }, // 5 OSM: 2024979 50.03, 14.36 x 50.09, 14.48
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe693b5} }, // 3 OSM: 2026288 50.93, 6.87 x 50.98, 7.086
    { 84, NoLogo, 599, LineMetaDataContent::Tramway, Color{0x98c000} }, // 61 OSM: 2026289 WD: Q20035840 50.7, 7.071 x 50.76, 7.112
    { 95, NoLogo, 599, LineMetaDataContent::Tramway, Color{0x61af20} }, // 62 OSM: 2026290 WD: Q20035841 50.7, 7.095 x 50.74, 7.176
    { 80, NoLogo, 599, LineMetaDataContent::Tramway, Color{0x60d6f7} }, // 63 OSM: 2026291 WD: Q20035835 50.68, 7.047 x 50.75, 7.159
    { 1149, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe5007d} }, // 66 OSM: 2026292 50.64, 7.092 x 50.79, 7.217
    { 169, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee99bf} }, // 67 OSM: 2026293 50.68, 7.092 x 50.79, 7.203
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf7d09b} }, // 6 OSM: 2032473 50.07, 14.42 x 50.11, 14.48
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ffff} }, // 7 OSM: 2061854 50.06, 14.39 x 50.08, 14.52
    { 55, 6158, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 1 OSM: 2067963 WD: Q12804359 53.41, 14.49 x 53.46, 14.56
    { 15, 6178, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 12 OSM: 2074000 WD: Q28792440 53.4, 14.53 x 53.43, 14.56
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3002b} }, // T1 OSM: 2074460 48.65, 6.145 x 48.7, 6.225
    { 6, 6199, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 5 OSM: 2077222 WD: Q25501513 53.43, 14.49 x 53.45, 14.58
    { 54, 6219, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 11 OSM: 2077355 WD: Q32946105 53.4, 14.53 x 53.45, 14.58
    { 27, 6240, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 6 OSM: 2077516 WD: Q26003028 53.42, 14.55 x 53.48, 14.61
    { 19, 6260, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 8 OSM: 2080359 WD: Q26160394 53.38, 14.49 x 53.43, 14.64
    { 42, 6280, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 7 OSM: 2080360 WD: Q26111009 53.38, 14.49 x 53.45, 14.64
    { 59, 6300, NoLogo, LineMetaDataContent::Tramway, Color{0xef7c00} }, // 3 OSM: 2083643 WD: Q99229508 48.27, 10.88 x 48.37, 10.9
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x94c11c} }, // 6 OSM: 2083654 48.35, 10.84 x 48.37, 10.96
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb5c426} }, // 1 OSM: 2100315 WD: Q6811945 -37.85, 144.9 x -37.74, 145
    { 243, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00aadc} }, // N20 OSM: 2101204 48.14, 11.51 x 48.18, 11.56
    { 55, 6320, 599, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 1 OSM: 2102327 WD: Q117468577 51.98, 8.502 x 52.06, 8.546
    { 59, 6340, 599, LineMetaDataContent::Tramway, Color{0xffff00} }, // 3 OSM: 2102329 WD: Q117468931 52.02, 8.518 x 52.06, 8.543
    { 16, 6360, 599, LineMetaDataContent::Tramway, Color{0x008000} }, // 2 OSM: 2102391 WD: Q117468882 52, 8.532 x 52.06, 8.628
    { 9, 6380, 599, LineMetaDataContent::Tramway, Color{0xff0000} }, // 4 OSM: 2102392 WD: Q117468952 52, 8.485 x 52.05, 8.589
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffeedd} }, // 1 OSM: 2104341 54.14, 19.39 x 54.19, 19.44
    { 1152, 6400, 226, LineMetaDataContent::RapidTransit, Color{0xe7526b} }, // S20 OSM: 2113865 WD: Q7388223 48.04, 11.04 x 48.18, 11.54
    { 41, 6417, 226, LineMetaDataContent::RapidTransit, Color{0x983224} }, // S7 OSM: 2113867 WD: Q7388364 47.91, 11.42 x 48.14, 11.78
    { 55, NoLogo, 6433, LineMetaDataContent::Tramway, Color{0x00a651} }, // 1 OSM: 2116454 WD: Q3238670 47.2, -1.639 x 47.26, -1.515
    { 1156, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4dbe63} }, // Тр3 OSM: 2161840 49.81, 24 x 49.84, 24.04
    { 16, NoLogo, 6433, LineMetaDataContent::Tramway, Color{0xee1c25} }, // 2 OSM: 2166523 WD: Q3238813 47.19, -1.593 x 47.26, -1.542
    { 59, NoLogo, 6433, LineMetaDataContent::Tramway, Color{0x006db1} }, // 3 OSM: 2166524 WD: Q3238913 47.18, -1.617 x 47.25, -1.542
    { 15, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf499b6} }, // 12 OSM: 2168260 WD: Q3743529 40.75, 14.27 x 40.85, 14.54
    { 130, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x771e1b} }, // 9 OSM: 2168283 WD: Q3743526 40.85, 14.27 x 40.97, 14.62
    { 58, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6f195c} }, // 13 OSM: 2168298 WD: Q3743527 40.8, 14.27 x 40.88, 14.62
    { 1162, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8e4b34} }, // Тр2 OSM: 2169223 49.82, 23.99 x 49.84, 24.07
    { 1168, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x35ccf5} }, // Тр4 OSM: 2171616 49.78, 23.99 x 49.84, 24.06
    { 19, 6463, NoLogo, LineMetaDataContent::RapidTransit, Color{0x808080} }, // 8 OSM: 2174536 WD: Q3296720 -23.55, -46.98 x -23.51, -46.64
    { 130, 6474, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a88e} }, // 9 OSM: 2183695 WD: Q5245848 -23.76, -46.78 x -23.53, -46.69
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x666666} }, // 2 OSM: 2189262 45.55, 18.68 x 45.56, 18.73
    { 213, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x000080} }, // S4 OSM: 2199152 WD: Q7388307 49.25, 10.3 x 49.44, 11.08
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0071bc} }, // 2 OSM: 2203208 48.98, 8.345 x 49.04, 8.479
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1c24} }, // 11 OSM: 2205114 WD: Q85980501 44.39, 26.02 x 44.47, 26.09
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x1c63b7} }, // 2 OSM: 2206997 WD: Q104521890 41.91, 12.46 x 41.93, 12.48
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1c24} }, // 5 OSM: 2206998 WD: Q104537333 41.88, 12.5 x 41.9, 12.57
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xbfdf14} }, // 8 OSM: 2206999 WD: Q104537360 41.87, 12.44 x 41.9, 12.52
    { 475, 6485, 6526, LineMetaDataContent::Subway, Color{0xf68b1f} }, // A OSM: 2207255 WD: Q572544 41.84, 12.42 x 41.91, 12.59
    { 194, 6556, 6526, LineMetaDataContent::Subway, Color{0x3783c6} }, // B OSM: 2208346 WD: Q2666571 41.83, 12.46 x 41.95, 12.57
    { 1174, 6597, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfbbc09} }, // FC1 OSM: 2208347 WD: Q3743595 41.87, 12.51 x 41.9, 12.56
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00adef} }, // 14 OSM: 2208350 WD: Q415821 41.89, 12.5 x 41.9, 12.57
    { 145, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf89c0e} }, // 19 OSM: 2208351 WD: Q104537271 41.88, 12.46 x 41.92, 12.57
    { 349, 6627, NoLogo, LineMetaDataContent::RapidTransit, Color{0x007663} }, // FL1 OSM: 2208499 WD: Q3737286 41.79, 12.25 x 42.44, 12.65
    { 353, 6662, NoLogo, LineMetaDataContent::RapidTransit, Color{0x004174} }, // FL2 OSM: 2208500 WD: Q3737287 41.9, 12.53 x 42.1, 13.43
    { 345, 6697, NoLogo, LineMetaDataContent::RapidTransit, Color{0x965b0e} }, // FL4 OSM: 2208502 WD: Q25064 41.67, 12.5 x 41.9, 12.78
    { 1178, 6732, NoLogo, LineMetaDataContent::RapidTransit, Color{0xdccc00} }, // FL5 OSM: 2208503 WD: Q3737292 41.86, 11.8 x 42.09, 12.53
    { 1182, 6767, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd880b4} }, // FL6 OSM: 2208504 WD: Q3737295 41.48, 12.5 x 41.9, 13.83
    { 1186, 6802, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9acc66} }, // FL7 OSM: 2208505 WD: Q661786 41.25, 12.5 x 41.9, 13.72
    { 1190, 6837, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6cbf68} }, // FL8 OSM: 2208506 WD: Q3737301 41.45, 12.5 x 41.9, 12.66
    { 1194, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xca0a23} }, // LEX OSM: 2208507 WD: Q1207539 41.79, 12.25 x 41.9, 12.53
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1c24} }, // 10 OSM: 2212352 44.39, 26.05 x 44.45, 26.14
    { 19, 6872, 6893, LineMetaDataContent::Tramway, Color{0x169fdb} }, // 8 OSM: 2262665 WD: Q431783 50.8, 4.353 x 50.85, 4.44
    { 365, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 657 OSM: 2271832 32.72, -117.4 x 33.19, -117.2
    { 1198, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 655 OSM: 2271832 32.72, -117.4 x 33.19, -117.2
    { 1202, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 631 OSM: 2271832 32.72, -117.4 x 33.19, -117.2
    { 1206, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 635 OSM: 2271832 32.72, -117.4 x 33.19, -117.2
    { 980, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 639 OSM: 2271832 32.72, -117.4 x 33.19, -117.2
    { 209, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 665 OSM: 2271832 32.72, -117.4 x 33.19, -117.2
    { 1210, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0092d8} }, // TER 01 OSM: 2272829 45.19, 4.823 x 45.76, 5.715
    { 91, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0092d8} }, // TER 62 OSM: 2272886 45.15, 5.417 x 45.57, 6.045
    { 1217, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0092d8} }, // TER 60 OSM: 2274103 45.15, 5.417 x 45.57, 6.045
    { 1226, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x669933} }, // 87 OSM: 2282096 WD: Q428288 52.44, 13.69 x 52.46, 13.76
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008f4d} }, // 1 OSM: 2309633 33.84, 132.8 x 33.85, 132.8
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9a51b} }, // 2 OSM: 2309634 33.84, 132.8 x 33.85, 132.8
    { 475, 6919, 2495, LineMetaDataContent::RapidTransit, Color{0xe3051c} }, // A OSM: 2333448 WD: Q741818 48.75, 2.012 x 49.05, 2.782
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x112233} }, // 9 OSM: 2336329 54.27, 48.29 x 54.34, 48.39
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe4002b} }, // 1 OSM: 2336458 WD: Q263572 29.53, 106.2 x 29.62, 106.6
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfbba00} }, // 2 OSM: 2344988 50.84, 12.05 x 50.85, 12.08
    { 949, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 52 OSM: 2345812 59.83, 30.14 x 59.88, 30.26
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd75128} }, // 4 OSM: 2368452 50.72, 12.43 x 50.75, 12.49
    { 65, 6951, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 10 OSM: 2372195 WD: Q26298715 53.42, 14.49 x 53.43, 14.56
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfdc434} }, // 2 OSM: 2380276 46.24, 20.13 x 46.27, 20.15
    { 55, 6972, NoLogo, LineMetaDataContent::Subway, Color{0x10069f} }, // 1 OSM: 2381769 WD: Q6118988 30.39, 104.1 x 30.72, 104.1
    { 213, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9f184c} }, // S4 OSM: 2395148 48.99, 8.349 x 49.48, 9.528
    { 47, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x04a5c8} }, // S8 OSM: 2396232 41.35, 1.919 x 41.48, 2.149
    { 255, 6982, 226, LineMetaDataContent::RapidTransit, Color{0xf8a20d} }, // S51 OSM: 2412316 WD: Q96388878 49.3, 8.674 x 49.42, 8.991
    { 65, 7002, NoLogo, LineMetaDataContent::Tramway, Color{0xb4e16e} }, // 10 OSM: 2413392 WD: Q106921203 57.68, 11.89 x 57.73, 11.98
    { 19, 7025, NoLogo, LineMetaDataContent::Tramway, Color{0x872387} }, // 8 OSM: 2413517 WD: Q10562727 57.65, 11.91 x 57.8, 12.05
    { 58, 7047, NoLogo, LineMetaDataContent::Tramway, Color{0xfee6c2} }, // 13 OSM: 2413518 WD: Q10562720 57.66, 11.85 x 57.72, 11.99
    { 16, 7070, NoLogo, LineMetaDataContent::Tramway, Color{0xfff014} }, // 2 OSM: 2413613 WD: Q106921120 57.65, 11.93 x 57.71, 12.02
    { 9, 7092, NoLogo, LineMetaDataContent::Tramway, Color{0x14823c} }, // 4 OSM: 2413615 WD: Q106921167 57.65, 11.97 x 57.8, 12.05
    { 500, 7114, 226, LineMetaDataContent::RapidTransit, Color{0xba8a4d} }, // S47 OSM: 2413847 WD: Q3742025 52.45, 13.43 x 52.47, 13.56
    { 59, 7145, NoLogo, LineMetaDataContent::Tramway, Color{0x004b85} }, // 3 OSM: 2418220 WD: Q106921163 57.67, 11.91 x 57.72, 12.03
    { 130, 7167, NoLogo, LineMetaDataContent::Tramway, Color{0x6ec8dc} }, // 9 OSM: 2418235 WD: Q106921200 57.68, 11.9 x 57.8, 12.05
    { 54, 7189, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 11 OSM: 2418236 WD: Q106921207 57.66, 11.85 x 57.76, 12.07
    { 1229, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 901 OSM: 2440421 WD: Q1617191 44.85, -93.28 x 44.98, -93.2
    { 247, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x61af20} }, // RB23 OSM: 2441590 WD: Q1699351 50.56, 6.761 x 50.74, 7.098
    { 101, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf0e130} }, // 888 OSM: 2442946 44.98, -93.73 x 45.33, -93.25
    { 61, 7212, 226, LineMetaDataContent::RapidTransit, Color{0x0b9a33} }, // S1 OSM: 2444997 WD: Q7388210 51.16, 6.772 x 51.52, 7.46
    { 53, 7223, 226, LineMetaDataContent::RapidTransit, Color{0xef7c00} }, // S11 OSM: 2445000 WD: Q7388174 50.94, 6.674 x 51.28, 7.125
    { 928, 7235, 226, LineMetaDataContent::RapidTransit, Color{0x61af20} }, // S12 OSM: 2445001 WD: Q7388180 50.76, 6.713 x 50.95, 7.66
    { 1233, 7247, 226, LineMetaDataContent::RapidTransit, Color{0x00a6eb} }, // S13 OSM: 2445007 WD: Q7388184 50.81, 6.482 x 50.95, 7.151
    { 50, 7259, 226, LineMetaDataContent::RapidTransit, Color{0x006db6} }, // S2 OSM: 2445008 WD: Q7388251 51.45, 7.015 x 51.62, 7.46
    { 964, 7270, 226, LineMetaDataContent::RapidTransit, Color{0x717676} }, // S28 OSM: 2445009 WD: Q7388234 51.2, 6.594 x 51.25, 7.153
    { 164, 7282, 226, LineMetaDataContent::RapidTransit, Color{0x999999} }, // S3 OSM: 2445010 WD: Q7388285 51.4, 6.835 x 51.48, 7.181
    { 213, 7293, 226, LineMetaDataContent::RapidTransit, Color{0xef7c00} }, // S4 OSM: 2445011 WD: Q7388319 51.5, 7.334 x 51.55, 7.692
    { 44, 7304, 226, LineMetaDataContent::RapidTransit, Color{0x98c60f} }, // S5 OSM: 2445012 WD: Q7388333 51.36, 7.325 x 51.52, 7.46
    { 199, 7315, 226, LineMetaDataContent::RapidTransit, Color{0xdc052d} }, // S6 OSM: 2445013 WD: Q7388349 50.94, 6.79 x 51.45, 7.023
    { 87, 7326, 226, LineMetaDataContent::RapidTransit, Color{0x14bae6} }, // S68 OSM: 2445014 WD: Q7388346 51.1, 6.79 x 51.23, 7.074
    { 47, 7338, 226, LineMetaDataContent::RapidTransit, Color{0xb03303} }, // S8 OSM: 2445015 WD: Q7388383 51.19, 6.445 x 51.36, 7.46
    { 434, 7349, 226, LineMetaDataContent::RapidTransit, Color{0xc7007f} }, // S9 OSM: 2445016 WD: Q7388395 51.23, 6.921 x 51.74, 7.46
    { 61, 7360, 226, LineMetaDataContent::RapidTransit, Color{0xec192e} }, // S1 OSM: 2445551 WD: Q67858837 49.33, 7.334 x 49.48, 9.424
    { 50, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x2960b5} }, // S2 OSM: 2445552 49.34, 7.768 x 49.48, 9.144
    { 164, 7379, 226, LineMetaDataContent::RapidTransit, Color{0x00a896} }, // S3 OSM: 2445553 WD: Q2781002 49.87, 8.504 x 50.16, 8.699
    { 164, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfcd804} }, // S3 OSM: 2445554 48.99, 8.349 x 49.48, 8.685
    { 55, 7396, 7416, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 2446076 WD: Q519861 59.84, 30.25 x 60.05, 30.44
    { 16, 7435, 7416, LineMetaDataContent::Subway, Color{0x0000ff} }, // 2 OSM: 2446077 WD: Q1459627 59.83, 30.3 x 60.07, 30.38
    { 59, 7455, 7416, LineMetaDataContent::Subway, Color{0x008000} }, // 3 OSM: 2446078 WD: Q1509576 59.83, 30.2 x 59.99, 30.5
    { 9, 7475, 7416, LineMetaDataContent::Subway, Color{0xffa500} }, // 4 OSM: 2446079 WD: Q1784097 59.91, 30.32 x 59.93, 30.48
    { 6, 7495, 7416, LineMetaDataContent::Subway, Color{0x800080} }, // 5 OSM: 2446080 WD: Q1579583 59.82, 30.25 x 60.01, 30.43
    { 493, 7515, 7537, LineMetaDataContent::Tramway, Color{0xf5e615} }, // T2 OSM: 2449769 WD: Q3238811 43.3, 5.367 x 43.32, 5.406
    { 206, 7558, 7537, LineMetaDataContent::Tramway, Color{0xf18e00} }, // T1 OSM: 2452278 WD: Q3238668 43.29, 5.381 x 43.3, 5.444
    { 1237, 7580, 7604, LineMetaDataContent::Subway, Color{0x10069f} }, // Μ3 OSM: 2473158 WD: Q6553119 37.91, 23.64 x 38.02, 23.95
    { 164, 7658, 226, LineMetaDataContent::RapidTransit, Color{0xdb6eab} }, // S3 OSM: 2474189 WD: Q63433452 52.16, 9.739 x 52.38, 10.02
    { 44, 7674, 226, LineMetaDataContent::RapidTransit, Color{0xf78a18} }, // S5 OSM: 2474199 WD: Q63433456 51.71, 8.737 x 52.46, 9.773
    { 16, 7690, 7716, LineMetaDataContent::Subway, Color{0x0000ff} }, // 2 OSM: 2507796 WD: Q2001449 41.29, 69.2 x 41.35, 69.32
    { 59, 7735, 7716, LineMetaDataContent::Subway, Color{0x008000} }, // 3 OSM: 2507797 WD: Q4534678 41.3, 69.27 x 41.38, 69.3
    { 55, 7761, 7716, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 2507927 WD: Q4515924 41.21, 69.19 x 41.33, 69.33
    { 44, 7787, 226, LineMetaDataContent::RapidTransit, Color{0xa52a2a} }, // S5 OSM: 2515355 WD: Q2515085 50.1, 8.583 x 50.25, 8.699
    { 213, 7804, 226, LineMetaDataContent::RapidTransit, Color{0xfecb09} }, // S4 OSM: 2515408 WD: Q2204443 49.99, 8.516 x 50.18, 8.699
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 13 OSM: 2529840 55.77, 37.65 x 55.83, 37.77
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff2e17} }, // 1 OSM: 2531659 50.93, 10.67 x 50.95, 10.71
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xaf2a21} }, // 2 OSM: 2531812 50.94, 10.71 x 50.96, 10.72
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff9929} }, // 3 OSM: 2531813 50.94, 10.68 x 50.96, 10.72
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffb530} }, // 4 OSM: 2531864 WD: Q2430929 50.86, 10.52 x 50.95, 10.71
    { 41, 7821, 226, LineMetaDataContent::RapidTransit, Color{0x14bae6} }, // S7 OSM: 2544304 WD: Q1195962 51.16, 7.004 x 51.28, 7.253
    { 1241, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff3818} }, // Тр1 OSM: 2548724 49.83, 24 x 49.84, 24.06
    { 1247, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x1b5620} }, // Тр9 OSM: 2548725 49.83, 23.99 x 49.86, 24.04
    { 1253, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8144a3} }, // Тр6 OSM: 2548730 49.84, 24 x 49.87, 24.04
    { 61, 7832, 226, LineMetaDataContent::RapidTransit, Color{0x7760b0} }, // S1 OSM: 2548861 WD: Q63433445 52.27, 8.934 x 52.42, 9.773
    { 1259, 7848, 7886, LineMetaDataContent::Subway, Color{0x71cc98} }, // 7bis OSM: 2554103 WD: Q50749 48.88, 2.366 x 48.88, 2.4
    { 199, 7919, 226, LineMetaDataContent::RapidTransit, Color{0x005aab} }, // S6 OSM: 2557420 WD: Q63433460 52.37, 9.739 x 52.62, 10.06
    { 1264, 7935, 7958, LineMetaDataContent::Subway, Color{0x62361b} }, // Brown OSM: 2562976 WD: Q3112936 41.88, -87.71 x 41.97, -87.63
    { 213, 7987, 226, LineMetaDataContent::RapidTransit, Color{0x972f50} }, // S4 OSM: 2567719 WD: Q63433455 52.16, 9.687 x 52.58, 9.956
    { 8, NoLogo, 8003, LineMetaDataContent::Subway, Color{0x228b22} }, // M4 OSM: 2568424 WD: Q2552821 44.45, 26.03 x 44.5, 26.07
    { 354, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9ecd58} }, // L2 OSM: 2568862 WD: Q115328482 59.72, 10.61 x 59.92, 10.84
    { 206, 8021, 5051, LineMetaDataContent::Tramway, Color{0x216eb4} }, // T1 OSM: 2572573 WD: Q369969 48.9, 2.274 x 48.94, 2.47
    { 350, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9ecd58} }, // L1 OSM: 2575540 WD: Q115217962 59.74, 10.34 x 59.96, 11.05
    { 1270, 8054, 7958, LineMetaDataContent::Subway, Color{0xf9461c} }, // Orange OSM: 2578312 WD: Q3180068 41.79, -87.74 x 41.89, -87.63
    { 1277, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 100 OSM: 2579608 60, 30.34 x 60.06, 30.44
    { 55, 8079, 8098, LineMetaDataContent::Subway, Color{0xe50b00} }, // 1 OSM: 2580502 WD: Q1771534 56.24, 43.86 x 56.32, 43.99
    { 1281, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xa52a2a} }, // Scala mobile OSM: 2581270 41.84, 12.89 x 41.84, 12.89
    { 279, 8110, 7958, LineMetaDataContent::Subway, Color{0xc60c30} }, // Red OSM: 2584583 WD: Q642623 41.72, -87.67 x 42.02, -87.62
    { 199, 8131, 226, LineMetaDataContent::RapidTransit, Color{0xec192e} }, // S6 OSM: 2587144 WD: Q96388302 49.44, 8.256 x 50, 8.667
    { 9, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x78ccc9} }, // 4 OSM: 2588070 50.48, 30.57 x 50.53, 30.61
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x228b22} }, // T2 OSM: 2597272 WD: Q113671831 45.46, 12.21 x 45.49, 12.25
    { 1294, 8150, 226, LineMetaDataContent::RapidTransit, Color{0x6b2c94} }, // S 8 OSM: 2605126 WD: Q63213955 51.47, 11.98 x 51.87, 12.66
    { 620, 273, 226, LineMetaDataContent::RapidTransit, Color{0xf17f1a} }, // S 5 OSM: 2606971 WD: Q63216051 50.7, 11.99 x 51.48, 12.48
    { 1299, 8175, 226, LineMetaDataContent::RapidTransit, Color{0x00a650} }, // S 4 OSM: 2607472 WD: Q63215993 51.25, 12.37 x 51.59, 13.25
    { 61, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x66cdaa} }, // S1 OSM: 2609006 WD: Q50331474 54.08, 12.06 x 54.18, 12.13
    { 164, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xa66540} }, // S3 OSM: 2609009 WD: Q50331483 53.79, 12.06 x 54.18, 12.35
    { 50, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x9400d3} }, // S2 OSM: 2609011 WD: Q50331479 53.8, 12.06 x 54.18, 12.17
    { 1303, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff9700} }, // SFM 1 OSM: 2610264 WD: Q3832755 44.97, 7.603 x 45.42, 7.824
    { 1309, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // SFM 4 OSM: 2610270 WD: Q3832758 44.69, 7.655 x 45.12, 8.031
    { 437, 8200, 7958, LineMetaDataContent::Subway, Color{0x009b3a} }, // Green OSM: 2613599 WD: Q3176204 41.78, -87.81 x 41.89, -87.61
    { 1315, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x7fd2e6} }, // U44 OSM: 2615764 51.51, 7.385 x 51.53, 7.484
    { 72, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe2000a} }, // 21 OSM: 2617691 49.4, 8.675 x 49.43, 8.693
    { 1133, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfcc200} }, // 22 OSM: 2617692 49.4, 8.627 x 49.41, 8.693
    { 249, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe48e00} }, // 23 OSM: 2617693 49.34, 8.685 x 49.41, 8.693
    { 189, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8b1c75} }, // 24 OSM: 2617694 49.37, 8.66 x 49.47, 8.691
    { 977, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf39a9a} }, // 26 OSM: 2617695 49.38, 8.658 x 49.43, 8.693
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000b} }, // 4 OSM: 2619046 49.46, 8.17 x 49.54, 8.509
    { 6, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00965e} }, // 5 OSM: 2619047 49.4, 8.463 x 49.55, 8.693
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd5ad00} }, // 3 OSM: 2621587 49.45, 8.449 x 49.54, 8.482
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x956b25} }, // 6 OSM: 2621588 49.44, 8.419 x 49.49, 8.525
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc00} }, // 7 OSM: 2621590 49.48, 8.407 x 49.52, 8.545
    { 1319, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe17500} }, // 8 EX OSM: 2621591 49.42, 8.407 x 49.52, 8.536
    { 1324, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfcdc12} }, // SFM7 OSM: 2622309 WD: Q15077685 44.55, 7.655 x 45.12, 7.753
    { 272, 8223, 7958, LineMetaDataContent::Subway, Color{0xf9e300} }, // Yellow OSM: 2622574 WD: Q595450 42.02, -87.75 x 42.04, -87.67
    { 298, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x004595} }, // M OSM: 2629655 49.39, 1.042 x 49.45, 1.106
    { 1329, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x20825c} }, // PAO OSM: 2629939 WD: Q7132125 39.95, -75.76 x 40.05, -75.15
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf171ab} }, // 9 OSM: 2629996 WD: Q56302775 46.93, 7.431 x 46.97, 7.468
    { 59, 8247, 8269, LineMetaDataContent::Subway, Color{0xa066aa} }, // 3 OSM: 2635252 WD: Q15731044 59.85, 10.5 x 59.94, 10.85
    { 925, 8290, 19, LineMetaDataContent::Tramway, Color{0xdc281e} }, // 29 OSM: 2635531 WD: Q63435524 48.14, 11.49 x 48.16, 11.56
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x028dd2} }, // 6 OSM: 2635960 55.67, 52.28 x 55.77, 52.45
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3adf00} }, // 8 OSM: 2635970 55.67, 52.28 x 55.77, 52.45
    { 16, 8318, 8269, LineMetaDataContent::Subway, Color{0xf26522} }, // 2 OSM: 2636245 WD: Q15731043 59.91, 10.61 x 59.95, 10.92
    { 6, 8340, 8269, LineMetaDataContent::Subway, Color{0x50b848} }, // 5 OSM: 2640907 WD: Q15731051 59.91, 10.71 x 59.97, 10.93
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 7 OSM: 2641075 59.88, 30.38 x 59.93, 30.5
    { 1333, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffffff} }, // Meadowlands OSM: 2641818 WD: Q6803384 40.73, -74.1 x 40.83, -74.03
    { 1345, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa0218c} }, // Pascack Valley OSM: 2641819 WD: Q11328810 40.73, -74.1 x 41.11, -74.01
    { 1360, 8362, 599, LineMetaDataContent::Tramway, Color{0x8874c7} }, // U46 OSM: 2642232 WD: Q107740407 51.5, 7.459 x 51.53, 7.471
    { 1364, 8376, 8396, LineMetaDataContent::Tramway, Color{0x873f98} }, // T5 OSM: 2643507 WD: Q3238967 45.73, 4.879 x 45.74, 4.948
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 3 OSM: 2644926 55.72, 52.41 x 55.77, 52.5
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa82582} }, // 4 OSM: 2646469 55.69, 52.41 x 55.77, 52.53
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe6087f} }, // 5 OSM: 2646596 55.72, 52.41 x 55.76, 52.5
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x393186} }, // 7 OSM: 2646626 55.69, 52.41 x 55.77, 52.53
    { 1367, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa0a0a0} }, // C-8 OSM: 2647592 40.38, -4.067 x 40.74, -3.181
    { 475, 8424, 8458, LineMetaDataContent::Tramway, Color{0x802990} }, // A OSM: 2648050 WD: Q2658981 44.83, -0.6686 x 44.89, -0.5081
    { 194, 8484, 8458, LineMetaDataContent::Tramway, Color{0xed164b} }, // B OSM: 2648235 WD: Q2420027 44.79, -0.6632 x 44.89, -0.5415
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 18 OSM: 2651053 59.99, 30.23 x 60.02, 30.25
    { 249, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 23 OSM: 2651263 59.9, 30.35 x 59.97, 30.5
    { 189, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 24 OSM: 2651264 59.83, 30.38 x 59.93, 30.51
    { 145, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 19 OSM: 2651265 59.98, 30.19 x 59.99, 30.26
    { 985, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // А OSM: 2651266 59.9, 30.44 x 59.92, 30.5
    { 173, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 27 OSM: 2651267 59.83, 30.44 x 59.92, 30.51
    { 501, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 47 OSM: 2652192 60, 30.23 x 60.02, 30.31
    { 210, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 65 OSM: 2652193 59.91, 30.39 x 59.93, 30.5
    { 988, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 38 OSM: 2652196 59.98, 30.35 x 60.05, 30.44
    { 95, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 62 OSM: 2652197 59.83, 30.38 x 59.84, 30.42
    { 161, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 60 OSM: 2652198 59.85, 30.12 x 59.88, 30.26
    { 84, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 61 OSM: 2652199 59.97, 30.34 x 60.05, 30.41
    { 1371, 6526, 6526, LineMetaDataContent::Subway, Color{0xff0000} }, // Metropolitana OSM: 2653212 WD: Q1163754 44.4, 8.894 x 44.43, 8.949
    { 27, 8518, NoLogo, LineMetaDataContent::Subway, Color{0x2c8195} }, // 6 OSM: 2653338 WD: Q6553143 25.03, 102.7 x 25.1, 102.9
    { 291, 8538, 8458, LineMetaDataContent::Tramway, Color{0xcf56a0} }, // C OSM: 2654042 WD: Q2331392 44.77, -0.6237 x 44.92, -0.5499
    { 1385, 8572, 7958, LineMetaDataContent::Subway, Color{0xe27ea6} }, // Pink OSM: 2656070 WD: Q3112661 41.85, -87.76 x 41.89, -87.63
    { 267, 8594, 7958, LineMetaDataContent::Subway, Color{0x00a1de} }, // Blue OSM: 2672370 WD: Q2534873 41.87, -87.9 x 41.98, -87.63
    { 1390, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa3d20b} }, // U47 OSM: 2673747 51.49, 7.382 x 51.55, 7.556
    { 130, 8616, 3710, LineMetaDataContent::Subway, Color{0x87d300} }, // 9 OSM: 2674584 WD: Q5929508 39.81, 116.3 x 39.94, 116.3
    { 399, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfcdc00} }, // U41 OSM: 2674820 51.48, 7.44 x 51.59, 7.502
    { 395, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00a991} }, // U43 OSM: 2675103 51.51, 7.419 x 51.53, 7.625
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9e0234} }, // 7 OSM: 2675693 51.04, 13.63 x 51.14, 13.8
    { 1398, 8636, 7958, LineMetaDataContent::Subway, Color{0x522398} }, // Purple OSM: 2675822 WD: Q3112074 41.88, -87.69 x 42.07, -87.63
    { 61, 8660, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S1 OSM: 2679058 WD: Q17101540 48.17, 16.33 x 48.34, 16.92
    { 50, 8688, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S2 OSM: 2679059 WD: Q96484152 48.08, 16.28 x 48.72, 16.57
    { 164, 8700, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S3 OSM: 2679060 WD: Q96484012 47.81, 16.06 x 48.56, 16.41
    { 50, 8712, 226, LineMetaDataContent::RapidTransit, Color{0x118349} }, // S2 OSM: 2682237 WD: Q63433449 52.28, 9.217 x 52.65, 9.773
    { 1405, 8728, 3710, LineMetaDataContent::Subway, Color{0x007e84} }, // 4S OSM: 2684711 WD: Q5242742 39.67, 116.3 x 39.81, 116.4
    { 141, 8753, 3710, LineMetaDataContent::Subway, Color{0x6a1d44} }, // 15 OSM: 2688949 WD: Q734917 39.99, 116.3 x 40.13, 116.7
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006b42} }, // 12 OSM: 2690192 51.04, 13.67 x 51.06, 13.81
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x223344} }, // 2 OSM: 2694563 54.26, 48.28 x 54.34, 48.41
    { 977, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aaad} }, // 26 OSM: 2705952 59.27, 18.27 x 59.29, 18.3
    { 226, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aaad} }, // 25 OSM: 2705957 59.28, 18.11 x 59.31, 18.31
    { 1408, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x003e7e} }, // TRE OSM: 2716975 WD: Q2453601 32.75, -97.33 x 32.82, -96.81
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdc008f} }, // 10 OSM: 2728288 50.06, 14.3 x 50.13, 14.48
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdc008f} }, // 11 OSM: 2728371 50.05, 14.43 x 50.09, 14.5
    { 1412, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xeb3c2e} }, // S18 OSM: 2729450 WD: Q686782 47.29, 8.547 x 47.37, 8.71
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa28a6a} }, // 12 OSM: 2729904 50.03, 14.37 x 50.11, 14.45
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // 1 OSM: 2746761 WD: Q12406939 31.77, 35.18 x 31.83, 35.24
    { 11, 8774, 6526, LineMetaDataContent::Subway, Color{0xb395d0} }, // M5 OSM: 2753306 WD: Q3238963 45.48, 9.117 x 45.53, 9.212
    { 27, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf67599} }, // 6 OSM: 2768662 WD: Q5931449 29.49, 106.4 x 29.85, 106.7
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffff00} }, // 1 OSM: 2773668 47.52, 21.62 x 47.56, 21.63
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000b} }, // 1 OSM: 2777016 52.2, 10.51 x 52.33, 10.54
    { 1416, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x7b2f3d} }, // M-LINE OSM: 2788830 32.78, -96.8 x 32.81, -96.79
    { 1424, 8794, 226, LineMetaDataContent::RapidTransit, Color{0xd7171f} }, // S 3 OSM: 2793231 WD: Q62749908 51.31, 11.91 x 51.49, 13.11
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x687362} }, // 3 OSM: 2797182 52.5, 103.8 x 52.58, 103.9
    { 1428, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x149943} }, // STY OSM: 2797718 WD: Q7619599 -38.37, 145.1 x -38.14, 145.2
    { 1371, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0078ad} }, // Metropolitana OSM: 2797904 WD: Q1725884 45.51, 10.21 x 45.58, 10.28
    { 65, 8819, NoLogo, LineMetaDataContent::Tramway, Color{0xce1f75} }, // 10 OSM: 2799185 WD: Q70711877 47.38, 8.536 x 47.45, 8.573
    { 15, 8844, NoLogo, LineMetaDataContent::Tramway, Color{0x92d6e3} }, // 12 OSM: 2799201 WD: Q70711314 47.4, 8.556 x 47.45, 8.608
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4c677a} }, // 1 OSM: 2801578 52.52, 103.9 x 52.56, 103.9
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe5e6ea} }, // 7 OSM: 2802264 52.5, 103.8 x 52.53, 103.9
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 3 OSM: 2804939 59.92, 30.28 x 59.97, 30.36
    { 497, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 56 OSM: 2804944 59.86, 30.23 x 59.88, 30.26
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x70492c} }, // 5 OSM: 2807017 WD: Q96483196 47.36, 8.516 x 47.38, 8.572
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xbe8543} }, // 6 OSM: 2807025 WD: Q96483372 47.36, 8.531 x 47.38, 8.572
    { 42, 8869, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 7 OSM: 2807030 WD: Q70712535 47.34, 8.53 x 47.41, 8.597
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x322e71} }, // 9 OSM: 2807033 WD: Q70710278 47.37, 8.495 x 47.41, 8.592
    { 137, 8893, NoLogo, LineMetaDataContent::Tramway, Color{0x0093d0} }, // 14 OSM: 2807051 WD: Q70714895 47.37, 8.495 x 47.42, 8.55
    { 54, 8918, NoLogo, LineMetaDataContent::Tramway, Color{0x00923c} }, // 11 OSM: 2807068 WD: Q70714560 47.35, 8.533 x 47.42, 8.583
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00923c} }, // 3 OSM: 2807070 WD: Q96483170 47.36, 8.485 x 47.38, 8.567
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x322e71} }, // 4 OSM: 2807089 WD: Q96483185 47.35, 8.49 x 47.39, 8.561
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcb0a25} }, // 2 OSM: 2807095 WD: Q73249054 47.35, 8.444 x 47.4, 8.561
    { 141, 8943, NoLogo, LineMetaDataContent::Tramway, Color{0xcb0a25} }, // 15 OSM: 2807117 WD: Q70707977 47.37, 8.533 x 47.4, 8.548
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8bc036} }, // 8 OSM: 2807118 WD: Q96483377 47.36, 8.504 x 47.39, 8.567
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf39100} }, // 5 OSM: 2810470 52.23, 10.48 x 52.26, 10.54
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa9c1d1} }, // 16 OSM: 2820891 50.07, 14.36 x 50.08, 14.53
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0b0080} }, // 1 OSM: 2826218 WD: Q5017774 29.85, 31.23 x 30.16, 31.34
    { 9, 8968, 8269, LineMetaDataContent::Subway, Color{0x0054a6} }, // 4 OSM: 2827680 WD: Q15731046 59.87, 10.71 x 59.97, 10.93
    { 272, NoLogo, 8985, LineMetaDataContent::Subway, Color{0xffe800} }, // Yellow OSM: 2827687 WD: Q54874971 37.6, -122.5 x 38.02, -121.9
    { 1110, 3172, 3201, LineMetaDataContent::RapidTransit, Color{0xf166a7} }, // 40 OSM: 2836163 WD: Q106806725 59.17, 17.63 x 59.86, 18.07
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006531} }, // 3 OSM: 2837394 52.24, 10.47 x 52.29, 10.58
    { 55, 8999, NoLogo, LineMetaDataContent::Subway, Color{0xe60039} }, // 1 OSM: 2843401 WD: Q6850056 28.68, 115.8 x 28.75, 116
    { 560, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xbed639} }, // 82 OSM: 2844184 WD: Q6811974 -37.8, 144.9 x -37.77, 144.9
    { 279, 9025, 8985, LineMetaDataContent::Subway, Color{0xed1c24} }, // Red OSM: 2851513 WD: Q3809179 37.6, -122.5 x 37.94, -122.3
    { 1270, 9042, 8985, LineMetaDataContent::Subway, Color{0xfaa61a} }, // Orange OSM: 2851514 WD: Q3866809 37.37, -122.4 x 37.94, -121.9
    { 437, 9058, 8985, LineMetaDataContent::Subway, Color{0x4db848} }, // Green OSM: 2851729 WD: Q3720557 37.37, -122.5 x 37.81, -121.9
    { 267, 9076, 8985, LineMetaDataContent::Subway, Color{0x00aeef} }, // Blue OSM: 2851730 WD: Q3720569 37.69, -122.5 x 37.81, -121.9
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x86c5a2} }, // 11 OSM: 2858845 WD: Q18165625 -37.82, 144.9 x -37.73, 145
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x878a83} }, // 7 OSM: 2860817 59.32, 18.06 x 59.33, 18.11
    { 991, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00907a} }, // S31 OSM: 2872363 48.99, 8.399 x 49.18, 8.747
    { 908, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00907a} }, // S32 OSM: 2872364 48.99, 8.399 x 49.16, 8.775
    { 114, 9091, 1095, LineMetaDataContent::Subway, Color{0x2ec6ff} }, // U4 OSM: 2872790 WD: Q209739 53.53, 9.983 x 53.56, 10.04
    { 54, 9106, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff7f50} }, // 11 OSM: 2875658 WD: Q5245830 -23.56, -46.64 x -23.52, -46.19
    { 15, 9118, NoLogo, LineMetaDataContent::RapidTransit, Color{0x1c146b} }, // 12 OSM: 2877633 WD: Q5245789 -23.55, -46.62 x -23.48, -46.33
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8c6e66} }, // 6 OSM: 2877971 52.5, 103.8 x 52.56, 103.9
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xec7394} }, // 4 OSM: 2877979 52.5, 103.8 x 52.53, 103.9
    { 42, 9130, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa8034f} }, // 7 OSM: 2885794 WD: Q3296728 -23.55, -46.87 x -23.19, -46.62
    { 55, 9141, 8269, LineMetaDataContent::Subway, Color{0x00b6f1} }, // 1 OSM: 2890637 WD: Q15731038 59.87, 10.65 x 59.98, 10.82
    { 65, 9158, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ced1} }, // 10 OSM: 2893113 WD: Q5245819 -23.74, -46.62 x -23.54, -46.39
    { 194, 9170, 4690, LineMetaDataContent::Subway, Color{0xffa500} }, // B OSM: 2896644 WD: Q18420098 6.247, -75.61 x 6.259, -75.57
    { 1434, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x211e1e} }, // TU OSM: 2897278 WD: Q16438501 -34.93, -57.95 x -34.9, -57.92
    { 1437, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x546684} }, // DPM OSM: 2914673 WD: Q1201543 42.32, -83.05 x 42.34, -83.04
    { 217, 9209, 226, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // S 1 OSM: 2920398 WD: Q56600177 51.31, 12.27 x 51.37, 12.41
    { 145, 9234, NoLogo, LineMetaDataContent::Tramway, Color{0xf7942a} }, // 19 OSM: 2921482 WD: Q109462009 59.85, 10.72 x 59.93, 10.8
    { 22, 9258, NoLogo, LineMetaDataContent::Tramway, Color{0xfdb927} }, // 18 OSM: 2921905 WD: Q56850451 59.91, 10.71 x 59.95, 10.78
    { 291, 9278, 2583, LineMetaDataContent::Subway, Color{0x003ea1} }, // C OSM: 2931139 WD: Q1157050 -34.63, -58.38 x -34.59, -58.37
    { 194, 9306, 2583, LineMetaDataContent::Subway, Color{0xc20924} }, // B OSM: 2933167 WD: Q1157061 -34.6, -58.49 x -34.57, -58.37
    { 327, 9334, 2583, LineMetaDataContent::Subway, Color{0x6b297e} }, // E OSM: 2933872 WD: Q1044919 -34.64, -58.46 x -34.59, -58.37
    { 974, 9362, 2583, LineMetaDataContent::Subway, Color{0x217861} }, // D OSM: 2934099 WD: Q1157052 -34.61, -58.46 x -34.56, -58.37
    { 34, 9390, 2583, LineMetaDataContent::Subway, Color{0xf4cc21} }, // H OSM: 2934107 WD: Q1132660 -34.64, -58.41 x -34.58, -58.39
    { 322, NoLogo, 8003, LineMetaDataContent::Subway, Color{0x4b5799} }, // M2 OSM: 2947130 WD: Q1884455 44.36, 26.09 x 44.48, 26.15
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9b000} }, // 4 OSM: 2951397 WD: Q63350784 52.37, 9.596 x 52.42, 9.819
    { 206, 9418, 9446, LineMetaDataContent::Tramway, Color{0x281570} }, // T1 OSM: 2962731 WD: Q6043955 41, 28.86 x 41.03, 28.99
    { 888, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x6f1b14} }, // 94 OSM: 2982672 51.48, 11.93 x 51.51, 11.97
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9b000} }, // 6 OSM: 2991603 WD: Q63350805 52.32, 9.69 x 52.42, 9.837
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9b000} }, // 11 OSM: 2991649 WD: Q63350814 52.37, 9.713 x 52.39, 9.775
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9b000} }, // 5 OSM: 2991701 WD: Q63350794 52.36, 9.659 x 52.41, 9.859
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe4003a} }, // 1 OSM: 2995652 WD: Q63344401 52.24, 9.731 x 52.44, 9.86
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe4003a} }, // 2 OSM: 2998555 WD: Q63345326 52.29, 9.734 x 52.42, 9.818
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe4003a} }, // 8 OSM: 2998722 WD: Q63345432 52.33, 9.734 x 52.4, 9.805
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x76b82a} }, // 17 OSM: 2998733 WD: Q63348315 52.34, 9.718 x 52.38, 9.743
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x76b82a} }, // 10 OSM: 3004809 WD: Q63348270 52.37, 9.664 x 52.39, 9.756
    { 1441, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x051541} }, // 95 OSM: 3006197 51.42, 11.96 x 51.52, 11.99
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1943} }, // 12 OSM: 3009639 WD: Q2189640 51.88, 4.471 x 51.92, 4.568
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0069b4} }, // 3 OSM: 3016071 WD: Q63348707 52.33, 9.69 x 52.44, 9.848
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0069b4} }, // 7 OSM: 3038575 WD: Q63348805 52.33, 9.69 x 52.41, 9.854
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0069b4} }, // 9 OSM: 3038600 WD: Q63349759 52.34, 9.667 x 52.43, 9.802
    { 141, 9474, 7886, LineMetaDataContent::Subway, Color{0xb90845} }, // 15 OSM: 3094380 WD: Q3240151 48.78, 2.197 x 48.92, 2.583
    { 1444, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x236214} }, // UP-N OSM: 3117549 WD: Q7885883 41.88, -87.85 x 42.59, -87.64
    { 1449, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff821d} }, // MD-N OSM: 3117594 WD: Q16982046 41.88, -88.18 x 42.4, -87.64
    { 1454, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7c53af} }, // NCS OSM: 3117600 WD: Q7054760 41.88, -88.09 x 42.48, -87.64
    { 1458, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfae218} }, // UP-NW OSM: 3117607 WD: Q16985937 41.88, -88.62 x 42.42, -87.64
    { 1464, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfeb8fa} }, // UP-W OSM: 3117615 WD: Q7885886 41.86, -88.47 x 41.9, -87.64
    { 1469, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x77b337} }, // BNSF OSM: 3117619 WD: Q4836140 41.76, -88.31 x 41.88, -87.64
    { 1474, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee4848} }, // HC OSM: 3117625 WD: Q5738778 41.52, -88.08 x 41.88, -87.64
    { 447, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa81818} }, // RI OSM: 3117651 41.51, -88.08 x 41.88, -87.63
    { 1477, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x117bac} }, // SWS OSM: 3117664 WD: Q7565331 41.42, -87.99 x 41.88, -87.64
    { 1481, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf67b7b} }, // ME OSM: 3117670 WD: Q4501968 41.46, -87.72 x 41.89, -87.55
    { 1485, 9510, 226, LineMetaDataContent::RapidTransit, Color{0x00ffff} }, // S 2 OSM: 3119892 WD: Q56809294 51.31, 12.23 x 51.87, 12.66
    { 1489, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf89948} }, // FLY1 OSM: 3124690 WD: Q115256256 59.74, 10.2 x 60.19, 11.16
    { 1494, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf89948} }, // FLY2 OSM: 3124691 WD: Q115256257 59.91, 10.61 x 60.19, 11.16
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xafe0ee} }, // 8 OSM: 3144745 WD: Q56302773 46.94, 7.374 x 46.95, 7.487
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x088742} }, // 2 OSM: 3152801 51.13, 14.94 x 51.17, 14.99
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff2e17} }, // 1 OSM: 3152809 51.12, 14.97 x 51.17, 14.99
    { 1499, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // LBN OSM: 3155062 WD: Q46654325 -34.59, -58.87 x -34.42, -58.37
    { 259, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // FM1 OSM: 3158700 41.12, 16.78 x 41.14, 16.87
    { 321, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffc100} }, // FM2 OSM: 3158701 41.11, 16.68 x 41.14, 16.87
    { 41, 9535, 226, LineMetaDataContent::RapidTransit, Color{0xa5ce43} }, // S7 OSM: 3168072 WD: Q63433461 52.37, 9.739 x 52.62, 10.06
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 15 OSM: 3184018 55.8, 37.39 x 55.81, 37.51
    { 249, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 23 OSM: 3184019 55.81, 37.49 x 55.84, 37.53
    { 392, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 30 OSM: 3184021 55.8, 37.39 x 55.84, 37.53
    { 965, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 28 OSM: 3184024 55.78, 37.45 x 55.81, 37.51
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 10 OSM: 3184063 55.8, 37.39 x 55.81, 37.46
    { 72, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 21 OSM: 3184064 55.8, 37.39 x 55.81, 37.46
    { 173, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 27 OSM: 3184107 55.81, 37.5 x 55.84, 37.58
    { 226, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 25 OSM: 3186266 55.79, 37.62 x 55.83, 37.69
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xca305b} }, // A OSM: 3190626 WD: Q3537211 47.34, 0.6578 x 47.42, 0.7119
    { 58, 9551, NoLogo, LineMetaDataContent::Tramway, Color{0x00b26b} }, // 13 OSM: 3201250 WD: Q109462007 59.85, 10.59 x 59.93, 10.8
    { 54, 9575, NoLogo, LineMetaDataContent::Tramway, Color{0x82c341} }, // 11 OSM: 3218724 WD: Q109462005 59.91, 10.72 x 59.96, 10.79
    { 15, 9599, NoLogo, LineMetaDataContent::Tramway, Color{0xa166aa} }, // 12 OSM: 3221100 WD: Q109462006 59.91, 10.7 x 59.96, 10.79
    { 9, 9623, 9637, LineMetaDataContent::Subway, Color{0xf1ce00} }, // 4 OSM: 3228501 WD: Q1597847 45.51, -73.56 x 45.52, -73.52
    { 16, 9656, 9637, LineMetaDataContent::Subway, Color{0xd06d07} }, // 2 OSM: 3228502 WD: Q967397 45.47, -73.73 x 45.56, -73.55
    { 6, 9670, 9637, LineMetaDataContent::Subway, Color{0x3465b4} }, // 5 OSM: 3228503 WD: Q1726049 45.49, -73.63 x 45.56, -73.6
    { 55, 9684, 9637, LineMetaDataContent::Subway, Color{0x5f8c55} }, // 1 OSM: 3228504 WD: Q1925762 45.44, -73.61 x 45.6, -73.53
    { 16, 9698, NoLogo, LineMetaDataContent::Subway, Color{0x00629b} }, // 2 OSM: 3244073 WD: Q1047377 22.99, 113.3 x 23.24, 113.3
    { 108, 9718, 571, LineMetaDataContent::Subway, Color{0xa762a4} }, // U2 OSM: 3245522 WD: Q873397 48.21, 16.36 x 48.23, 16.51
    { 59, 9730, NoLogo, LineMetaDataContent::Subway, Color{0xd9001c} }, // 3 OSM: 3252762 WD: Q3294315 -23.55, -46.67 x -23.53, -46.47
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 3 OSM: 3258552 47.2, 38.9 x 47.23, 38.94
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 4 OSM: 3258575 47.2, 38.88 x 47.26, 38.92
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 5 OSM: 3258583 47.2, 38.89 x 47.24, 38.94
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 6 OSM: 3258591 47.2, 38.88 x 47.24, 38.91
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 7 OSM: 3258600 47.22, 38.89 x 47.26, 38.92
    { 177, 9744, NoLogo, LineMetaDataContent::Tramway, Color{0xef4123} }, // 17 OSM: 3259480 WD: Q109462008 59.91, 10.71 x 59.95, 10.78
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1 OSM: 3272067 47.2, 38.88 x 47.23, 38.92
    { 105, 9768, 571, LineMetaDataContent::Subway, Color{0xe20613} }, // U1 OSM: 3278144 WD: Q663755 48.14, 16.37 x 48.28, 16.45
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 2 OSM: 3285146 47.2, 38.92 x 47.26, 38.94
    { 164, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf5821f} }, // S3 OSM: 3298634 46.54, 14.24 x 46.62, 14.32
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 7 OSM: 3299881 55.77, 37.58 x 55.82, 37.73
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xef3f30} }, // A OSM: 3309751 WD: Q3239051 47.44, -0.5972 x 47.51, -0.5454
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xaf1867} }, // 16 OSM: 3315633 51.43, 11.9 x 51.48, 11.99
    { 1503, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0e58c4} }, // خط الضاحية الجنوبية لتونس OSM: 3316983 WD: Q3240068 36.7, 10.18 x 36.79, 10.42
    { 9, 9780, 7886, LineMetaDataContent::Subway, Color{0xc800a1} }, // 4 OSM: 3326845 WD: Q50743 48.8, 2.316 x 48.9, 2.359
    { 137, 9815, 7886, LineMetaDataContent::Subway, Color{0x5f259f} }, // 14 OSM: 3328694 WD: Q50761 48.73, 2.31 x 48.92, 2.387
    { 55, 9851, 7886, LineMetaDataContent::Subway, Color{0xffcd00} }, // 1 OSM: 3328695 WD: Q13224 48.84, 2.23 x 48.89, 2.441
    { 130, 9886, 7886, LineMetaDataContent::Subway, Color{0xb5bd00} }, // 9 OSM: 3328717 WD: Q50753 48.83, 2.231 x 48.87, 2.442
    { 114, 9921, 9937, LineMetaDataContent::Subway, Color{0x00a082} }, // U4 OSM: 3328726 WD: Q20439761 48.13, 11.52 x 48.15, 11.62
    { 65, 9961, 7886, LineMetaDataContent::Subway, Color{0xc69214} }, // 10 OSM: 3328741 WD: Q50754 48.84, 2.228 x 48.85, 2.365
    { 27, 9997, 7886, LineMetaDataContent::Subway, Color{0x71cc98} }, // 6 OSM: 3328765 WD: Q50746 48.83, 2.285 x 48.87, 2.402
    { 42, 10032, 7886, LineMetaDataContent::Subway, Color{0xf59bbb} }, // 7 OSM: 3328805 WD: Q50748 48.79, 2.332 x 48.92, 2.411
    { 2, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xbb0022} }, // 0 OSM: 3348003 WD: Q118899944 51.08, 2.581 x 51.34, 3.285
    { 55, 10067, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000f} }, // 1 OSM: 3367545 WD: Q78199222 48.34, 10.87 x 48.38, 10.94
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x951881} }, // 4 OSM: 3367554 48.37, 10.88 x 48.4, 10.89
    { 941, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0097ba} }, // S42 OSM: 3368507 49.14, 8.875 x 49.25, 9.229
    { 1484, 10087, 226, LineMetaDataContent::RapidTransit, Color{0xff9e00} }, // RS 2 OSM: 3372285 WD: Q84703704 52.79, 8.597 x 53.57, 8.895
    { 216, 10102, 226, LineMetaDataContent::RapidTransit, Color{0x0000ee} }, // RS 1 OSM: 3372313 WD: Q84703702 52.92, 8.516 x 53.21, 9.238
    { 992, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 31 OSM: 3375725 55.78, 37.45 x 55.82, 37.5
    { 213, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xec008c} }, // S4 OSM: 3379960 47.04, 8.978 x 47.48, 9.651
    { 1551, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xfdd456} }, // S 5X OSM: 3382470 WD: Q63216058 50.7, 11.99 x 51.48, 12.48
    { 1316, 10117, 6893, LineMetaDataContent::Tramway, Color{0xf3c300} }, // 44 OSM: 3394367 WD: Q1931983 50.82, 4.409 x 50.84, 4.514
    { 981, 10139, 6893, LineMetaDataContent::Tramway, Color{0xe43c2e} }, // 39 OSM: 3394368 WD: Q2719066 50.83, 4.409 x 50.85, 4.504
    { 65, 10161, 10182, LineMetaDataContent::Subway, Color{0xeac384} }, // 10 OSM: 3400216 WD: Q6553053 31.98, 118.6 x 32.07, 118.8
    { 55, 10205, 10182, LineMetaDataContent::Subway, Color{0x00a2df} }, // 1 OSM: 3400217 WD: Q6127241 31.9, 118.8 x 32.15, 118.9
    { 16, 10225, 10182, LineMetaDataContent::Subway, Color{0xc7003f} }, // 2 OSM: 3413089 WD: Q5960302 31.96, 118.7 x 32.12, 119
    { 1556, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // MTM OSM: 3413332 WD: Q1337838 -32.96, -68.85 x -32.84, -68.78
    { 61, 10245, 226, LineMetaDataContent::RapidTransit, Color{0x0095da} }, // S1 OSM: 3413905 WD: Q600891 49.97, 8.244 x 50.11, 8.885
    { 50, 10262, 226, LineMetaDataContent::RapidTransit, Color{0xee1c23} }, // S2 OSM: 3414422 WD: Q1985592 50.01, 8.31 x 50.16, 8.813
    { 47, 10279, 226, LineMetaDataContent::RapidTransit, Color{0xd7df23} }, // S8 OSM: 3415070 WD: Q2005458 49.98, 8.242 x 50.13, 8.931
    { 434, 10296, 226, LineMetaDataContent::RapidTransit, Color{0x91268f} }, // S9 OSM: 3415113 WD: Q508402 49.98, 8.244 x 50.13, 8.931
    { 1560, 10313, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfab700} }, // C-5 OSM: 3418151 WD: Q3832677 40.25, -3.883 x 40.41, -3.677
    { 15, 10328, NoLogo, LineMetaDataContent::Tramway, Color{0xbb0022} }, // 12 OSM: 3419132 WD: Q2200976 51.22, 4.42 x 51.23, 4.44
    { 130, 10351, NoLogo, LineMetaDataContent::Tramway, Color{0xee8822} }, // 9 OSM: 3419133 WD: Q1891687 51.2, 4.344 x 51.22, 4.464
    { 189, 10373, NoLogo, LineMetaDataContent::Tramway, Color{0xff88aa} }, // 24 OSM: 3419134 WD: Q2483765 51.2, 4.408 x 51.24, 4.484
    { 59, 10396, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc11} }, // 3 OSM: 3419435 WD: Q3238908 51.22, 4.305 x 51.26, 4.464
    { 9, 10418, NoLogo, LineMetaDataContent::Tramway, Color{0x1199dd} }, // 4 OSM: 3419473 WD: Q2344285 51.17, 4.35 x 51.22, 4.484
    { 6, 10440, NoLogo, LineMetaDataContent::Tramway, Color{0x771133} }, // 5 OSM: 3419525 WD: Q2147524 51.22, 4.344 x 51.23, 4.512
    { 27, 10462, NoLogo, LineMetaDataContent::Tramway, Color{0xdd0077} }, // 6 OSM: 3419912 WD: Q2128494 51.18, 4.391 x 51.26, 4.443
    { 42, 10484, NoLogo, LineMetaDataContent::Tramway, Color{0x0044bb} }, // 7 OSM: 3420306 WD: Q2413292 51.17, 4.4 x 51.23, 4.449
    { 65, 10506, NoLogo, LineMetaDataContent::Tramway, Color{0xbbdd00} }, // 10 OSM: 3420544 WD: Q1962342 51.17, 4.362 x 51.23, 4.512
    { 141, 10528, NoLogo, LineMetaDataContent::Tramway, Color{0xffffff} }, // 15 OSM: 3420997 WD: Q959739 51.17, 4.361 x 51.22, 4.494
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf5d200} }, // 1 OSM: 3430333 49.72, 13.37 x 49.78, 13.4
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf5d200} }, // 2 OSM: 3430559 49.73, 13.32 x 49.75, 13.41
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf5d200} }, // 4 OSM: 3430578 49.73, 13.36 x 49.78, 13.38
    { 1438, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x913108} }, // PM OSM: 3433159 37.78, -122.4 x 37.81, -122.4
    { 1564, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x913108} }, // PH OSM: 3433160 37.78, -122.4 x 37.81, -122.4
    { 408, 10551, NoLogo, LineMetaDataContent::RapidTransit, Color{0x539cbe} }, // K OSM: 3433320 WD: Q6342899 37.72, -122.5 x 37.79, -122.4
    { 412, 10572, NoLogo, LineMetaDataContent::RapidTransit, Color{0x92278f} }, // L OSM: 3435879 WD: Q16981005 37.74, -122.5 x 37.79, -122.4
    { 298, 10591, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008752} }, // M OSM: 3435882 WD: Q6720518 37.71, -122.5 x 37.79, -122.4
    { 468, 10613, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00539b} }, // N OSM: 3435884 WD: Q6956302 37.76, -122.5 x 37.79, -122.4
    { 145, 10630, 6893, LineMetaDataContent::Tramway, Color{0xe43c2e} }, // 19 OSM: 3437796 WD: Q2702907 50.86, 4.275 x 50.9, 4.357
    { 1567, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // LBS OSM: 3443504 WD: Q67311453 -34.83, -58.94 x -34.65, -58.42
    { 117, 10652, 9937, LineMetaDataContent::Subway, Color{0xa06e1e} }, // U5 OSM: 3475206 WD: Q3832790 48.09, 11.5 x 48.14, 11.65
    { 120, 10668, 9937, LineMetaDataContent::Subway, Color{0x005a96} }, // U6 OSM: 3477966 WD: Q751039 48.11, 11.47 x 48.27, 11.67
    { 111, 10684, 9937, LineMetaDataContent::Subway, Color{0xe66432} }, // U3 OSM: 3484056 WD: Q20439760 48.09, 11.48 x 48.19, 11.59
    { 39, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf38b00} }, // T OSM: 3494094 WD: Q1999971 47.24, -122.4 x 47.26, -122.4
    { 354, 10700, NoLogo, LineMetaDataContent::Subway, Color{0x000000} }, // L2 OSM: 3517295 WD: Q3011583 43.24, -3.042 x 43.33, -2.881
    { 120, 10723, 1095, LineMetaDataContent::Subway, Color{0x007ec6} }, // U6 OSM: 3524791 WD: Q19863008 50.11, 8.624 x 50.14, 8.708
    { 199, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x66c18c} }, // S6 OSM: 3529247 46.92, 8.814 x 47.23, 9.084
    { 105, 10740, 9937, LineMetaDataContent::Subway, Color{0x46b450} }, // U1 OSM: 3531712 WD: Q20439756 48.1, 11.53 x 48.18, 11.58
    { 108, 10756, 9937, LineMetaDataContent::Subway, Color{0xb4283c} }, // U2 OSM: 3531713 WD: Q830301 48.11, 11.54 x 48.21, 11.7
    { 123, 10772, 9937, LineMetaDataContent::Subway, Color{0x46b450} }, // U7 OSM: 3531714 WD: Q20439774 48.1, 11.53 x 48.18, 11.65
    { 126, 10788, 9937, LineMetaDataContent::Subway, Color{0xb4283c} }, // U8 OSM: 3531715 WD: Q20439777 48.1, 11.56 x 48.18, 11.65
    { 61, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x006536} }, // S1 OSM: 3533698 WD: Q106453739 47.4, 8.632 x 47.7, 9.4
    { 6, 10804, NoLogo, LineMetaDataContent::Subway, Color{0x9200c3} }, // 5 OSM: 3539820 WD: Q3308465 -23.66, -46.77 x -23.59, -46.63
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000b} }, // A OSM: 3555528 WD: Q107044417 49.49, 0.09576 x 49.53, 0.137
    { 194, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00963e} }, // B OSM: 3555531 WD: Q107044421 49.49, 0.09576 x 49.52, 0.1801
    { 1571, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x50b948} }, // U BRA OSM: 3579399 41.14, -8.61 x 41.55, -8.434
    { 981, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 39 OSM: 3587361 59.86, 30.38 x 59.93, 30.47
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffdd00} }, // T2 OSM: 3589646 WD: Q3239232 45.44, 4.384 x 45.45, 4.403
    { 1577, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xafcb07} }, // T3 OSM: 3589647 WD: Q3239231 45.42, 4.378 x 45.47, 4.405
    { 55, 10818, NoLogo, LineMetaDataContent::Subway, Color{0x1a5ba3} }, // 1 OSM: 3596996 WD: Q3362568 -23.65, -46.64 x -23.48, -46.6
    { 9, 10832, NoLogo, LineMetaDataContent::Subway, Color{0xffd700} }, // 4 OSM: 3613482 WD: Q3308457 -23.59, -46.73 x -23.54, -46.63
    { 279, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcd5c5c} }, // Red OSM: 3616739 WD: Q2472181 53.28, -6.438 x 53.35, -6.229
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00bb00} }, // 3 OSM: 3618379 WD: Q107187377 58.58, 16.13 x 58.61, 16.19
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcc0000} }, // 2 OSM: 3618409 WD: Q107187376 58.55, 16.13 x 58.61, 16.23
    { 16, 10846, NoLogo, LineMetaDataContent::Subway, Color{0x008162} }, // 2 OSM: 3619672 WD: Q588499 -23.6, -46.69 x -23.55, -46.58
    { 1580, 10860, 5051, LineMetaDataContent::Tramway, Color{0x009641} }, // T3b OSM: 3662457 WD: Q3136247 48.85, 2.301 x 48.9, 2.411
    { 206, 10894, 8396, LineMetaDataContent::Tramway, Color{0x873f98} }, // T1 OSM: 3667340 WD: Q2903 45.73, 4.817 x 45.79, 4.884
    { 1584, NoLogo, 8396, LineMetaDataContent::Tramway, Color{0xb80e28} }, // Rhônexpress OSM: 3667553 WD: Q1559 45.72, 4.862 x 45.78, 5.077
    { 493, 10914, 8396, LineMetaDataContent::Tramway, Color{0x873f98} }, // T2 OSM: 3667554 WD: Q2906 45.69, 4.819 x 45.75, 4.956
    { 1577, 10934, 8396, LineMetaDataContent::Tramway, Color{0x873f98} }, // T3 OSM: 3667555 WD: Q2911 45.75, 4.862 x 45.78, 5.035
    { 1597, 10954, 8396, LineMetaDataContent::Tramway, Color{0x873f98} }, // T4 OSM: 3667556 WD: Q2918 45.69, 4.858 x 45.78, 4.888
    { 194, 10974, 10995, LineMetaDataContent::Subway, Color{0x007dc5} }, // B OSM: 3687323 WD: Q2965 45.72, 4.81 x 45.77, 4.864
    { 974, 11024, 10995, LineMetaDataContent::Subway, Color{0x00ac4d} }, // D OSM: 3687324 WD: Q2976 45.7, 4.803 x 45.78, 4.89
    { 291, 11045, 10995, LineMetaDataContent::Subway, Color{0xf99d1d} }, // C OSM: 3687325 WD: Q2969 45.77, 4.827 x 45.79, 4.836
    { 475, 11066, 10995, LineMetaDataContent::Subway, Color{0xee3898} }, // A OSM: 3687326 WD: Q2944 45.75, 4.826 x 45.77, 4.922
    { 111, 11087, 571, LineMetaDataContent::Subway, Color{0xef7c00} }, // U3 OSM: 3752340 WD: Q876472 48.17, 16.31 x 48.21, 16.42
    { 1600, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x93c13b} }, // 9 EX OSM: 3757041 49.46, 8.17 x 49.49, 8.523
    { 95, 11099, 6893, LineMetaDataContent::Tramway, Color{0xf29dc3} }, // 62 OSM: 3775501 WD: Q2544169 50.86, 4.334 x 50.88, 4.435
    { 1605, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // Line 3 OSM: 3788350 WD: Q341464 29.25, 47.97 x 29.26, 47.97
    { 388, 11121, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 48 OSM: 3820771 WD: Q15982247 47.44, 19.03 x 47.5, 19.06
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 3 OSM: 3822945 55.16, 30.21 x 55.2, 30.24
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 7 OSM: 3823035 55.16, 30.12 x 55.2, 30.27
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1 OSM: 3823370 55.16, 30.12 x 55.2, 30.23
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 2 OSM: 3823520 55.16, 30.12 x 55.19, 30.24
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 6 OSM: 3824263 55.16, 30.12 x 55.2, 30.19
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 9 OSM: 3824285 55.16, 30.12 x 55.2, 30.2
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 8 OSM: 3824316 55.16, 30.14 x 55.2, 30.24
    { 479, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // LR OSM: 3846824 WD: Q3239186 -36.02, -60.02 x -34.63, -57.95
    { 965, 11145, 19, LineMetaDataContent::Tramway, Color{0x00a082} }, // 28 OSM: 3858971 WD: Q20439076 48.13, 11.56 x 48.17, 11.58
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xbbee00} }, // 3 OSM: 3862190 WD: Q100159791 51.27, 9.441 x 51.34, 9.518
    { 1383, 11166, 11196, LineMetaDataContent::Subway, Color{0xed1c24} }, // a OSM: 3889841 WD: Q24641190 48.09, -1.711 x 48.12, -1.644
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008995} }, // 12 OSM: 3903646 WD: Q18165631 -37.86, 145 x -37.81, 145
    { 1612, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a1de} }, // West Hempstead OSM: 3917588 WD: Q7985342 40.66, -73.97 x 40.71, -73.64
    { 291, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe4007c} }, // C OSM: 3921484 WD: Q3239086 45.17, 5.69 x 45.19, 5.776
    { 327, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x58318a} }, // E OSM: 3921488 WD: Q3239103 45.17, 5.661 x 45.26, 5.72
    { 194, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009b3a} }, // B OSM: 3921491 WD: Q3239068 45.18, 5.698 x 45.21, 5.787
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0076bd} }, // A OSM: 3921492 WD: Q3239056 45.14, 5.671 x 45.2, 5.734
    { 974, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf39a00} }, // D OSM: 3921494 WD: Q3239096 45.17, 5.754 x 45.19, 5.759
    { 260, 11218, 2634, LineMetaDataContent::Subway, Color{0x007d58} }, // M1 OSM: 3931373 WD: Q1880894 55.62, 12.49 x 55.69, 12.59
    { 55, 11230, NoLogo, LineMetaDataContent::Subway, Color{0xf3d03e} }, // 1 OSM: 3936877 WD: Q1047385 23.07, 113.2 x 23.15, 113.3
    { 199, 2154, 226, LineMetaDataContent::RapidTransit, Color{} }, // S6 OSM: 3937942 WD: Q680235 47.25, 11.1 x 47.49, 11.4
    { 1627, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x489224} }, // M1/M2 OSM: 3939086 WD: Q2094433 50.4, 4.271 x 50.42, 4.452
    { 1634, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x233e81} }, // TL OSM: 3939642 WD: Q2576140 19.26, -99.15 x 19.34, -99.11
    { 6, 11250, NoLogo, LineMetaDataContent::Subway, Color{0xc5003e} }, // 5 OSM: 3967180 WD: Q862888 23.1, 113.2 x 23.15, 113.5
    { 41, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0xf07f3a} }, // S7 OSM: 4006931 WD: Q115689937 46.93, 7.438 x 46.98, 7.563
    { 1637, 11286, 5051, LineMetaDataContent::Tramway, Color{0xb1a245} }, // T8 OSM: 4007734 WD: Q3239029 48.93, 2.294 x 48.96, 2.358
    { 249, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x66ba86} }, // 23 OSM: 4016993 WD: Q2914455 51.88, 4.432 x 51.92, 4.574
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00bb00} }, // 1 OSM: 4037940 WD: Q105476776 51.31, 9.423 x 51.37, 9.502
    { 202, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa3429b} }, // TER T1 OSM: 4042689 WD: Q3239738 47.22, -1.549 x 47.72, -1.371
    { 267, 11319, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // Blue OSM: 4086917 WD: Q152015 42.36, -71.06 x 42.41, -70.99
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x99b3be} }, // 3 OSM: 4089342 WD: Q56302770 46.94, 7.431 x 46.95, 7.441
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0089cf} }, // 6 OSM: 4089819 WD: Q56302772 46.93, 7.419 x 46.95, 7.563
    { 1640, 11346, 6893, LineMetaDataContent::Tramway, Color{0xa12944} }, // 97 OSM: 4092822 WD: Q1865502 50.8, 4.313 x 50.84, 4.357
    { 9, 11368, NoLogo, LineMetaDataContent::Tramway, Color{0x4a2a15} }, // 4 OSM: 4107687 WD: Q3238942 43.59, 3.872 x 43.62, 3.897
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee1d23} }, // 11 OSM: 4108299 WD: Q3239102 47.47, 7.573 x 47.58, 7.612
    { 1277, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 100 OSM: 4117854 WD: Q3537097 39.1, -84.52 x 39.12, -84.51
    { 1142, 11378, 3802, LineMetaDataContent::Subway, Color{0x005ca5} }, // M3 OSM: 4121437 WD: Q692916 47.46, 19.05 x 47.56, 19.15
    { 8, 11394, 3802, LineMetaDataContent::Subway, Color{0x4ca22f} }, // M4 OSM: 4121438 WD: Q832651 47.46, 19.02 x 47.5, 19.08
    { 322, 11410, 3802, LineMetaDataContent::Subway, Color{0xe41f18} }, // M2 OSM: 4121439 WD: Q1071156 47.49, 19.02 x 47.51, 19.14
    { 6, 5722, NoLogo, LineMetaDataContent::Tramway, Color{0x78ccc9} }, // 5 OSM: 4152662 WD: Q63890965 50.48, 30.57 x 50.53, 30.63
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee1d23} }, // 7 OSM: 4152763 WD: Q56302771 46.94, 7.38 x 46.95, 7.472
    { 240, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 45 OSM: 4161955 55.73, 37.66 x 55.76, 37.7
    { 291, 11426, 6526, LineMetaDataContent::Subway, Color{0x008751} }, // C OSM: 4173958 WD: Q2261550 41.86, 12.51 x 41.89, 12.71
    { 396, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 43 OSM: 4179202 55.71, 37.66 x 55.79, 37.72
    { 55, 11467, NoLogo, LineMetaDataContent::Tramway, Color{0xf18700} }, // 1 OSM: 4222397 WD: Q108215311 50.96, 10.99 x 51.01, 11.04
    { 16, 11493, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000b} }, // 2 OSM: 4222399 WD: Q108215316 50.95, 10.98 x 50.98, 11.07
    { 59, 11519, NoLogo, LineMetaDataContent::Tramway, Color{0x67095f} }, // 3 OSM: 4222400 WD: Q108215641 50.94, 10.99 x 51.01, 11.09
    { 9, 11545, NoLogo, LineMetaDataContent::Tramway, Color{0x007ac3} }, // 4 OSM: 4222401 WD: Q108215690 50.97, 10.96 x 51, 11.07
    { 6, 11571, NoLogo, LineMetaDataContent::Tramway, Color{0x00883c} }, // 5 OSM: 4222402 WD: Q108215699 50.97, 11.02 x 51.02, 11.04
    { 27, 11597, NoLogo, LineMetaDataContent::Tramway, Color{0x78ac28} }, // 6 OSM: 4222403 WD: Q108215015 50.96, 11 x 51.01, 11.04
    { 322, 11623, 3330, LineMetaDataContent::Subway, Color{0xff0000} }, // M2 OSM: 4232535 WD: Q3832673 52.23, 20.91 x 52.29, 21.06
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff7f00} }, // 1 OSM: 4234654 51.8, 12.24 x 51.84, 12.24
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x18683c} }, // 6 OSM: 4236150 52.4, 12.52 x 52.44, 12.57
    { 287, 11635, NoLogo, LineMetaDataContent::Subway, Color{0xffa500} }, // O OSM: 4250359 WD: Q6141590 24.99, 121.4 x 25.1, 121.5
    { 464, 11659, NoLogo, LineMetaDataContent::Subway, Color{0xcedc00} }, // G OSM: 4250382 WD: Q8044250 24.96, 121.5 x 25.05, 121.6
    { 1643, 11698, NoLogo, LineMetaDataContent::Subway, Color{0xa74c00} }, // BR OSM: 4264893 WD: Q707644 25, 121.5 x 25.09, 121.6
    { 1646, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8b231d} }, // SFM 6 OSM: 4277114 WD: Q15077697 44.88, 7.654 x 45.12, 8.209
    { 1652, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // C11 OSM: 4287063 50.71, 12.77 x 50.84, 12.93
    { 44, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf49694} }, // S5 OSM: 4292646 48.89, 8.243 x 49.06, 8.705
    { 16, 11723, NoLogo, LineMetaDataContent::Subway, Color{0x028f34} }, // 2 OSM: 4292976 WD: Q2333639 -22.95, -43.37 x -22.81, -43.17
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xbb0022} }, // 1 OSM: 4307991 WD: Q972127 51.02, 3.692 x 51.11, 3.75
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x229922} }, // 4 OSM: 4307994 WD: Q1984797 51.02, 3.71 x 51.07, 3.742
    { 1656, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x00a6eb} }, // S19 OSM: 4434302 WD: Q30597732 50.76, 6.482 x 50.95, 7.66
    { 255, 11742, 226, LineMetaDataContent::RapidTransit, Color{0xf78a18} }, // S51 OSM: 4435864 WD: Q63433457 52.1, 9.374 x 52.4, 9.773
    { 1660, 11759, 226, LineMetaDataContent::RapidTransit, Color{0x118349} }, // S21 OSM: 4435868 WD: Q63433451 52.28, 9.466 x 52.38, 9.773
    { 279, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xcc0000} }, // Red OSM: 4439533 WD: Q7304502 33.64, -84.45 x 33.95, -84.34
    { 1664, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf67705} }, // Gold OSM: 4439534 WD: Q5578774 33.64, -84.45 x 33.9, -84.28
    { 437, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x009544} }, // Green OSM: 4439535 WD: Q5602819 33.75, -84.43 x 33.78, -84.28
    { 267, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0274ba} }, // Blue OSM: 4439536 WD: Q4929368 33.75, -84.47 x 33.78, -84.23
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x114283} }, // 10 OSM: 4443860 54.27, 48.29 x 54.32, 48.39
    { 213, 11776, 226, LineMetaDataContent::RapidTransit, Color{0x903f98} }, // S4 OSM: 4452991 WD: Q459508 47.62, 12.87 x 47.84, 13
    { 47, 11796, 226, LineMetaDataContent::RapidTransit, Color{0x8ec7e8} }, // S8 OSM: 4470844 WD: Q63433462 52.32, 9.687 x 52.46, 9.792
    { 1669, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Providence/Stoughton Line OSM: 4473913 WD: Q7252371 41.58, -71.49 x 42.35, -71.06
    { 1695, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7b388c} }, // Franklin Line OSM: 4476404 WD: Q5491659 42.08, -71.44 x 42.35, -71.05
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x5a1e82} }, // 14 OSM: 4489019 WD: Q3238565 46.17, 6.06 x 46.24, 6.144
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb82f89} }, // 18 OSM: 4489020 WD: Q3238636 46.17, 6.055 x 46.23, 6.144
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x84471c} }, // 15 OSM: 4489138 WD: Q3238583 46.18, 6.12 x 46.22, 6.149
    { 55, 11812, NoLogo, LineMetaDataContent::Subway, Color{0x008000} }, // 1 OSM: 4494027 WD: Q10914047 24.11, 120.6 x 24.19, 120.7
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 4 OSM: 4494871 WD: Q2105648 52.34, 4.889 x 52.38, 4.905
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xab10d2} }, // 12 OSM: 4495366 WD: Q14500288 52.35, 4.879 x 52.38, 4.919
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffbf00} }, // 1 OSM: 4497227 WD: Q2663350 52.35, 4.775 x 52.36, 4.934
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffbf00} }, // 2 OSM: 4497722 WD: Q2033321 52.34, 4.804 x 52.38, 4.899
    { 1709, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x87ceeb} }, // TRAB OSM: 4497962 WD: Q2829306 33.37, -7.672 x 33.61, -7.554
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xab10d2} }, // 3 OSM: 4498754 WD: Q2051638 52.35, 4.87 x 52.38, 4.952
    { 1714, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd28} }, // Z70 OSM: 4498934 WD: Q109333261 47.51, 18.86 x 47.83, 19.16
    { 1718, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb0c4de} }, // PST OSM: 4499555 33.43, -112 x 33.45, -112
    { 1722, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S70 OSM: 4500998 WD: Q109333249 47.51, 18.86 x 47.83, 19.16
    { 1726, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S71 OSM: 4500999 WD: Q109333250 47.51, 19.06 x 47.78, 19.3
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffbf00} }, // 5 OSM: 4501532 WD: Q2343376 52.3, 4.867 x 52.38, 4.884
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff7f00} }, // 7 OSM: 4502267 WD: Q4405692 52.36, 4.818 x 52.38, 4.94
    { 145, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 19 OSM: 4507967 WD: Q2402279 52.34, 4.838 x 52.39, 4.971
    { 180, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S50 OSM: 4508158 WD: Q104161828 47.17, 19.06 x 47.52, 20.18
    { 1730, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00985f} }, // Babylon OSM: 4509487 WD: Q4838506 40.66, -73.99 x 40.75, -73.33
    { 1738, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // VLT Cabo - Cajueiro Seco OSM: 4510254 WD: Q18473915 -8.287, -35.04 x -8.168, -34.93
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xab10d2} }, // 13 OSM: 4512711 WD: Q2157983 52.37, 4.803 x 52.38, 4.899
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ff00} }, // 14 OSM: 4513498 WD: Q2108285 52.36, 4.892 x 52.38, 4.952
    { 189, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf49ac1} }, // 24 OSM: 4513900 WD: Q2651682 52.34, 4.857 x 52.38, 4.902
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x007fff} }, // 17 OSM: 4514442 WD: Q2400889 52.36, 4.786 x 52.38, 4.899
    { 977, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd59758} }, // 26 OSM: 4514564 WD: Q2503173 52.35, 4.898 x 52.38, 5.005
    { 181, 11847, 11891, LineMetaDataContent::Subway, Color{0x29ab4d} }, // 50 OSM: 4515358 WD: Q2466111 52.29, 4.834 x 52.4, 4.99
    { 256, NoLogo, 11891, LineMetaDataContent::Subway, Color{0xf69931} }, // 51 OSM: 4515359 WD: Q606629 52.33, 4.834 x 52.4, 4.924
    { 1764, 11916, 11891, LineMetaDataContent::Subway, Color{0xfcfb05} }, // 54 OSM: 4515360 WD: Q2183200 52.29, 4.9 x 52.38, 4.99
    { 1768, 11960, 11891, LineMetaDataContent::Subway, Color{0xff0000} }, // 53 OSM: 4515361 WD: Q2163442 52.31, 4.9 x 52.38, 4.985
    { 1660, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S21 OSM: 4517111 WD: Q101148856 46.89, 19.06 x 47.52, 19.71
    { 1771, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S210 OSM: 4522098 WD: Q109333255 46.89, 19.48 x 47.1, 19.71
    { 1776, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd28} }, // Z50 OSM: 4537671 WD: Q104170252 47.17, 19.06 x 47.52, 20.18
    { 912, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S10 OSM: 4543849 WD: Q103726127 47.45, 17.64 x 47.75, 19.03
    { 391, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd28} }, // Z30 OSM: 4546118 WD: Q109333259 47.17, 18.42 x 47.5, 19.04
    { 1780, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // NS OSM: 4566683 45.49, -122.7 x 45.53, -122.7
    { 1783, 12004, 12031, LineMetaDataContent::Subway, Color{0x1e59ae} }, // m2 OSM: 4621397 WD: Q3239144 46.51, 6.626 x 46.54, 6.662
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x94c11a} }, // 2 OSM: 4622863 52.23, 10.52 x 52.29, 10.54
    { 42, 12056, 3710, LineMetaDataContent::Subway, Color{0xffc66e} }, // 7 OSM: 4624900 WD: Q6553149 39.85, 116.3 x 39.89, 116.7
    { 137, 12076, 3710, LineMetaDataContent::Subway, Color{0xd4a7a1} }, // 14 OSM: 4624915 WD: Q6553070 39.86, 116.2 x 40.03, 116.5
    { 27, 12097, 3710, LineMetaDataContent::Subway, Color{0xbb8900} }, // 6 OSM: 4625142 WD: Q6553138 39.9, 116.2 x 39.93, 116.7
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xec008c} }, // 1 OSM: 4628650 47.15, 27.56 x 47.19, 27.63
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00a650} }, // 3 OSM: 4629075 47.15, 27.57 x 47.17, 27.66
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9c0c1} }, // 6 OSM: 4631231 47.16, 27.54 x 47.17, 27.59
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x2e3092} }, // 7 OSM: 4631274 47.14, 27.54 x 47.17, 27.64
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd2e288} }, // 8 OSM: 4631290 47.14, 27.56 x 47.19, 27.64
    { 105, 12117, 1095, LineMetaDataContent::Subway, Color{0xb8282e} }, // U1 OSM: 4656730 WD: Q198432 50.1, 8.634 x 50.17, 8.688
    { 111, 12134, 1095, LineMetaDataContent::Subway, Color{0x4a5eaa} }, // U3 OSM: 4656731 WD: Q19862991 50.1, 8.537 x 50.22, 8.688
    { 114, 12151, 1095, LineMetaDataContent::Subway, Color{0xf172ac} }, // U4 OSM: 4656732 WD: Q19862998 50.11, 8.652 x 50.14, 8.755
    { 117, 12168, 1095, LineMetaDataContent::Subway, Color{0x007942} }, // U5 OSM: 4656733 WD: Q3040872 50.11, 8.662 x 50.16, 8.692
    { 123, 12185, 1095, LineMetaDataContent::Subway, Color{0xe4a023} }, // U7 OSM: 4656734 WD: Q3040904 50.11, 8.608 x 50.14, 8.755
    { 126, 12202, 1095, LineMetaDataContent::Subway, Color{0xc77db5} }, // U8 OSM: 4656735 WD: Q3063407 50.1, 8.621 x 50.18, 8.688
    { 129, 12219, 1095, LineMetaDataContent::Subway, Color{0xeed700} }, // U9 OSM: 4656736 WD: Q19862984 50.14, 8.621 x 50.2, 8.674
    { 1597, 12236, 12243, LineMetaDataContent::Tramway, Color{0x008176} }, // T4 OSM: 4665787 WD: Q49368235 41.39, 2.187 x 41.42, 2.231
    { 1786, 12267, 12243, LineMetaDataContent::Tramway, Color{0x008176} }, // T6 OSM: 4665788 WD: Q49375135 41.4, 2.187 x 41.42, 2.231
    { 1364, 12274, 12243, LineMetaDataContent::Tramway, Color{0x008176} }, // T5 OSM: 4665789 WD: Q49394264 41.4, 2.187 x 41.44, 2.233
    { 1577, 12296, 12243, LineMetaDataContent::Tramway, Color{0x008176} }, // T3 OSM: 4667001 WD: Q49770929 41.37, 2.053 x 41.39, 2.143
    { 206, 7573, 12243, LineMetaDataContent::Tramway, Color{0x008176} }, // T1 OSM: 4667002 WD: Q49770336 41.36, 2.058 x 41.39, 2.143
    { 493, 7530, 12243, LineMetaDataContent::Tramway, Color{0x008176} }, // T2 OSM: 4667003 WD: Q49770664 41.36, 2.058 x 41.39, 2.143
    { 354, 12303, 12320, LineMetaDataContent::Subway, Color{0x992f9c} }, // L2 OSM: 4671269 WD: Q1348921 41.38, 2.163 x 41.45, 2.244
    { 346, 12345, 12320, LineMetaDataContent::Subway, Color{0xfab70a} }, // L4 OSM: 4671321 WD: Q961384 41.38, 2.163 x 41.45, 2.218
    { 1179, 12362, 12320, LineMetaDataContent::Subway, Color{0x317bc8} }, // L5 OSM: 4673514 WD: Q1348939 41.36, 2.07 x 41.43, 2.187
    { 1789, 12379, 12320, LineMetaDataContent::Subway, Color{0x00adef} }, // L10 Nord OSM: 4673515 WD: Q1785338 41.42, 2.186 x 41.44, 2.234
    { 358, 12397, 12320, LineMetaDataContent::Subway, Color{0x39af57} }, // L3 OSM: 4673516 WD: Q385168 41.37, 2.11 x 41.45, 2.188
    { 1191, 12414, 12320, LineMetaDataContent::Subway, Color{0xd5578f} }, // L8 OSM: 4673517 WD: Q763319 41.35, 2.035 x 41.37, 2.149
    { 1187, 12431, 12320, LineMetaDataContent::Subway, Color{0xac5414} }, // L7 OSM: 4673518 WD: Q678390 41.39, 2.137 x 41.41, 2.169
    { 350, 12448, 12320, LineMetaDataContent::Subway, Color{0xe33638} }, // L1 OSM: 4673519 WD: Q1348946 41.34, 2.099 x 41.45, 2.218
    { 1798, 12465, 12320, LineMetaDataContent::Subway, Color{0x9ed74c} }, // L11 OSM: 4673520 WD: Q1419762 41.45, 2.173 x 41.46, 2.186
    { 1183, 12483, 12320, LineMetaDataContent::Subway, Color{0x7280c0} }, // L6 OSM: 4673521 WD: Q1577019 41.39, 2.125 x 41.4, 2.169
    { 1802, 12500, 12320, LineMetaDataContent::Subway, Color{0xf6842a} }, // L9 Nord OSM: 4673522 WD: Q1577033 41.42, 2.186 x 41.46, 2.22
    { 1660, 12517, 226, LineMetaDataContent::RapidTransit, Color{0xa70f47} }, // S21 OSM: 4708731 WD: Q19368759 53.49, 9.893 x 53.6, 10.32
    { 55, 12533, NoLogo, LineMetaDataContent::Tramway, Color{0xe30e68} }, // 1 OSM: 4748602 WD: Q117280796 52.38, 16.83 x 52.4, 17
    { 16, 12571, NoLogo, LineMetaDataContent::Tramway, Color{0x70c9e8} }, // 2 OSM: 4750038 WD: Q108006450 52.37, 16.88 x 52.42, 16.92
    { 1810, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x800080} }, // Tren Urbano OSM: 4751620 WD: Q1577126 18.39, -66.15 x 18.44, -66.05
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x84254b} }, // 3 OSM: 4756145 52.39, 16.85 x 52.46, 16.95
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x7dc833} }, // 5 OSM: 4763766 52.37, 16.88 x 52.4, 16.96
    { 1822, 12609, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe67310} }, // A2 OSM: 4785912 WD: Q19582807 53.71, 9.966 x 53.83, 9.993
    { 1825, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x004d9f} }, // Tide OSM: 4788761 WD: Q646388 36.84, -76.3 x 36.86, -76.19
    { 1830, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xec1c24} }, // 703 OSM: 4789075 WD: Q7304509 40.54, -112 x 40.77, -111.8
    { 1834, NoLogo, 4435, LineMetaDataContent::RapidTransit, Color{0xbdbadc} }, // Penn OSM: 4799477 WD: Q7163197 38.9, -77.01 x 39.56, -76.07
    { 19, 10506, NoLogo, LineMetaDataContent::Tramway, Color{0xff80c0} }, // 8 OSM: 4828592 WD: Q1962342 51.21, 4.42 x 51.22, 4.492
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008080} }, // 3 OSM: 5143295 49.2, 16.52 x 49.23, 16.64
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 4 OSM: 5151976 49.19, 16.58 x 49.23, 16.65
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00a5c1} }, // T1 OSM: 5157502 WD: Q16011470 47.22, 5.951 x 47.26, 6.061
    { 2, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0d7b49} }, // 0 OSM: 5175545 52.39, 16.89 x 52.41, 16.92
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe4002c} }, // 1 OSM: 5185991 51, 13.67 x 51.06, 13.82
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xeb5b2d} }, // 2 OSM: 5186008 51.01, 13.65 x 51.06, 13.85
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc9061a} }, // 4 OSM: 5186035 51.02, 13.56 x 51.16, 13.84
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffdd00} }, // 6 OSM: 5186067 51, 13.68 x 51.06, 13.84
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x229133} }, // 8 OSM: 5186073 51.03, 13.72 x 51.12, 13.77
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x93c355} }, // 9 OSM: 5186435 51, 13.69 x 51.08, 13.8
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9b000} }, // 10 OSM: 5186677 51.04, 13.71 x 51.07, 13.81
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc2ddaf} }, // 11 OSM: 5186681 51.02, 13.73 x 51.07, 13.86
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfdc300} }, // 13 OSM: 5186751 51, 13.69 x 51.08, 13.8
    { 928, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S12 OSM: 5189449 WD: Q103770328 47.45, 18.31 x 47.59, 19.03
    { 1839, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S150 OSM: 5189451 WD: Q101110277 47.18, 18.01 x 47.75, 18.42
    { 1844, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G30 OSM: 5189583 WD: Q104161605 47.17, 18.43 x 47.5, 19.04
    { 1848, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S820 OSM: 5189587 WD: Q109333257 47.17, 19.67 x 47.66, 20.18
    { 941, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S42 OSM: 5189590 WD: Q112963134 46.96, 18.76 x 47.5, 19.04
    { 1853, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G10 OSM: 5189591 WD: Q103834888 47.45, 17.64 x 47.75, 19.12
    { 160, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S60 OSM: 5189593 WD: Q109333246 47.17, 19.08 x 47.5, 20.18
    { 1857, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S30 OSM: 5189595 WD: Q101095853 46.75, 17.56 x 47.5, 19.04
    { 1861, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S220 OSM: 5189596 WD: Q112963797 46.85, 19.7 x 47.18, 20.18
    { 1866, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G71 OSM: 5189597 WD: Q109333268 47.51, 19.06 x 47.78, 19.3
    { 1870, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G70 OSM: 5189600 WD: Q109333266 47.51, 18.86 x 47.83, 19.16
    { 1874, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G60 OSM: 5189601 WD: Q101147966 47.17, 19.08 x 47.5, 20.18
    { 1878, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G43 OSM: 5189602 WD: Q109333264 47.17, 18.42 x 47.48, 19.35
    { 1882, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S80 OSM: 5189603 WD: Q101142569 47.49, 19.08 x 47.75, 20.42
    { 1152, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S20 OSM: 5189604 WD: Q103835740 46.23, 19.06 x 47.52, 20.14
    { 1109, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S40 OSM: 5189605 WD: Q112963108 46.37, 18.15 x 47.5, 19.04
    { 1136, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S36 OSM: 5189606 WD: Q109333242 47.25, 18.69 x 47.48, 19.35
    { 1886, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S35 OSM: 5189607 WD: Q109333241 46.44, 16.99 x 47.5, 19.04
    { 1890, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S34 OSM: 5189609 WD: Q104433012 46.69, 17.24 x 47.5, 19.04
    { 1894, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd28} }, // Z60 OSM: 5189611 WD: Q101147976 47.17, 19.08 x 47.5, 20.18
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd52330} }, // 1 OSM: 5209167 50.93, 6.816 x 50.96, 7.162
    { 908, 12624, 12650, LineMetaDataContent::RapidTransit, Color{0xf26021} }, // S32 OSM: 5219521 WD: Q87069535 51.08, 4.283 x 51.54, 4.467
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe6855c} }, // 7 OSM: 5231292 50.87, 6.797 x 50.94, 7.06
    { 41, NoLogo, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S7 OSM: 5248498 WD: Q17101554 48.1, 16.38 x 48.57, 17.01
    { 160, 12672, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S60 OSM: 5248503 WD: Q96483899 47.81, 16.23 x 48.19, 16.78
    { 180, 8672, 226, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S50 OSM: 5248504 WD: Q695595 48.17, 15.89 x 48.21, 16.34
    { 1882, 12685, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S80 OSM: 5248538 WD: Q96483911 48.17, 16.26 x 48.23, 16.51
    { 239, NoLogo, 8672, LineMetaDataContent::RapidTransit, Color{0xbdd542} }, // S45 OSM: 5248540 WD: Q17101545 48.19, 16.26 x 48.26, 16.39
    { 1109, 12698, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S40 OSM: 5248548 WD: Q96483953 48.21, 15.62 x 48.35, 16.37
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 1 OSM: 5252357 WD: Q1548435 39.22, 9.125 x 39.27, 9.143
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xeb4690} }, // 1 OSM: 5293755 33.98, -6.865 x 34.05, -6.794
    { 1577, 12281, 7537, LineMetaDataContent::Tramway, Color{0x96be0d} }, // T3 OSM: 5296539 WD: Q3238910 43.29, 5.367 x 43.32, 5.384
    { 132, 599, NoLogo, LineMetaDataContent::Subway, Color{0x152a92} }, // U11 OSM: 5311905 WD: Q203252 51.42, 6.992 x 51.54, 7.026
    { 1898, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x59bee6} }, // U17 OSM: 5312041 51.43, 6.973 x 51.5, 7.013
    { 1902, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x008fd3} }, // U18 OSM: 5312153 51.43, 6.886 x 51.46, 7.013
    { 1907, 12711, NoLogo, LineMetaDataContent::Subway, Color{0x02ac39} }, // TR OSM: 5326658 WD: Q843148 35.7, 140 x 35.73, 140.1
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8a2be2} }, // 9 OSM: 5329880 49.19, 16.61 x 49.23, 16.65
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x221815} }, // 6 OSM: 5335066 WD: Q957721 33.84, 132.8 x 33.85, 132.8
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x036eb8} }, // 5 OSM: 5335067 33.84, 132.8 x 33.85, 132.8
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe60012} }, // 3 OSM: 5335068 33.84, 132.8 x 33.85, 132.8
    { 1910, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // TDV OSM: 5371521 WD: Q23951292 -38.96, -68.23 x -38.96, -68.06
    { 1914, 12740, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8b039b} }, // C-3 OSM: 5382815 WD: Q8879464 40.03, -4.271 x 40.63, -3.608
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x662584} }, // 2 OSM: 5391128 33.99, -6.872 x 34.04, -6.752
    { 50, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7e971e} }, // S2 OSM: 5405975 WD: Q2316170 41.39, 2.068 x 41.57, 2.169
    { 244, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9b000} }, // 20 OSM: 5421483 51.04, 13.71 x 51.07, 13.74
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x000080} }, // 1 OSM: 5465576 WD: Q10318641 -30.03, -51.23 x -29.69, -51.13
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1 OSM: 5490398 41.66, 123.4 x 41.74, 123.5
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 3 OSM: 5490400 41.65, 123.4 x 41.72, 123.5
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // T1 OSM: 5510640 WD: Q113671848 45.44, 12.25 x 45.51, 12.32
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3dae2b} }, // 1 OSM: 5517061 WD: Q1067251 47.42, -122.3 x 47.7, -122.3
    { 1270, NoLogo, 2228, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // Orange OSM: 5543450 WD: Q6714620 45.43, -122.7 x 45.53, -122.6
    { 194, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0088ab} }, // B OSM: 5575252 45.5, -122.7 x 45.54, -122.7
    { 1912, 12758, 12758, LineMetaDataContent::RapidTransit, Color{0xe5554f} }, // V OSM: 5576487 WD: Q11152362 25.15, 121.4 x 25.2, 121.5
    { 291, 12800, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7cbd52} }, // C OSM: 5593997 WD: Q4121246 22.59, 120.3 x 22.66, 120.3
    { 1918, 12842, NoLogo, LineMetaDataContent::RapidTransit, Color{0x78be20} }, // Π3 OSM: 5596928 WD: Q47477355 37.99, 23.57 x 38.46, 23.87
    { 53, 12877, 226, LineMetaDataContent::RapidTransit, Color{0x44a325} }, // S11 OSM: 5607596 WD: Q19368865 53.55, 9.814 x 53.65, 10.09
    { 50, 12893, 226, LineMetaDataContent::RapidTransit, Color{0xa70f47} }, // S2 OSM: 5607597 WD: Q19390036 53.49, 9.934 x 53.56, 10.21
    { 164, 12908, 226, LineMetaDataContent::RapidTransit, Color{0x5d1d81} }, // S3 OSM: 5607598 WD: Q19368685 53.46, 9.477 x 53.66, 10.03
    { 1922, 12923, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe79500} }, // A1 OSM: 5610369 WD: Q19368804 53.55, 9.889 x 54.08, 10.02
    { 16, 12938, NoLogo, LineMetaDataContent::Subway, Color{0xe70095} }, // 2 OSM: 5616937 WD: Q3832658 39.43, -0.5963 x 39.62, -0.3815
    { 130, 12969, NoLogo, LineMetaDataContent::Subway, Color{0xb7814f} }, // 9 OSM: 5622181 WD: Q18613779 39.47, -0.5603 x 39.54, -0.3521
    { 42, 13000, NoLogo, LineMetaDataContent::Subway, Color{0xf28c00} }, // 7 OSM: 5626070 WD: Q11690011 39.43, -0.4726 x 39.47, -0.3383
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd75128} }, // 3 OSM: 5646916 50.69, 12.46 x 50.74, 12.53
    { 72, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 21 OSM: 5664427 WD: Q1632888 52.01, 5.028 x 52.09, 5.184
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf05b72} }, // 11 OSM: 5668462 47.15, 27.54 x 47.17, 27.63
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00adef} }, // 13 OSM: 5668463 47.15, 27.56 x 47.19, 27.63
    { 1925, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // E-W OSM: 5697658 WD: Q53778901 9.01, 38.72 x 9.022, 38.87
    { 1929, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // S-N OSM: 5697659 WD: Q53779001 8.936, 38.73 x 9.039, 38.77
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x66cc00} }, // 2 OSM: 5711071 WD: Q56911095 36.28, 59.55 x 36.33, 59.68
    { 493, 13031, 4894, LineMetaDataContent::Tramway, Color{0x0098d4} }, // T2 OSM: 5720061 WD: Q16655787 43.59, 1.374 x 43.63, 1.446
    { 164, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x36a390} }, // S3 OSM: 5721287 41.35, 2.005 x 41.4, 2.149
    { 213, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa25e23} }, // S4 OSM: 5721688 41.35, 1.888 x 41.54, 2.149
    { 1933, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xb8b6b7} }, // R6 OSM: 5724702 41.35, 1.63 x 41.58, 2.149
    { 1936, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x707072} }, // R60 OSM: 5724705 41.35, 1.63 x 41.58, 2.149
    { 1940, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x38b0b1} }, // R5 OSM: 5724850 41.35, 1.828 x 41.73, 2.149
    { 1943, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3592a3} }, // R50 OSM: 5724851 41.35, 1.828 x 41.73, 2.149
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x6dcff6} }, // 17 OSM: 5740169 50.86, 6.957 x 50.93, 7.004
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x21bfc1} }, // 16 OSM: 5742444 50.68, 6.943 x 50.99, 7.159
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe06e9f} }, // 4 OSM: 5742445 50.93, 6.873 x 51.02, 7.044
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x286290} }, // 17 OSM: 5742856 52.41, 16.88 x 52.42, 16.96
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc88922} }, // 13 OSM: 5744834 52.37, 16.93 x 52.41, 16.95
    { 141, 13059, NoLogo, LineMetaDataContent::Tramway, Color{0x8d98a2} }, // 15 OSM: 5745673 WD: Q110074597 52.39, 16.85 x 52.46, 16.92
    { 1947, 599, NoLogo, LineMetaDataContent::Subway, Color{0x59c6f2} }, // U71 OSM: 5747258 WD: Q661002 51.16, 6.775 x 51.26, 6.886
    { 1951, 599, NoLogo, LineMetaDataContent::Subway, Color{0x1d3a8f} }, // U83 OSM: 5748738 WD: Q661002 51.16, 6.775 x 51.25, 6.886
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf2b023} }, // 10 OSM: 5752352 WD: Q108006469 52.37, 16.9 x 52.46, 16.95
    { 1955, 599, NoLogo, LineMetaDataContent::Subway, Color{0x4465ad} }, // U73 OSM: 5756097 WD: Q661002 51.19, 6.775 x 51.24, 6.867
    { 148, 599, NoLogo, LineMetaDataContent::Subway, Color{0x25b8c5} }, // U72 OSM: 5756147 WD: Q661002 51.19, 6.763 x 51.3, 6.847
    { 1959, 13098, NoLogo, LineMetaDataContent::RapidTransit, Color{0x006434} }, // R2Sud OSM: 5758580 WD: Q1880046 41.19, 1.523 x 41.4, 2.194
    { 1965, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, // HVL OSM: 5793083 -41.28, 174.8 x -41.13, 175.1
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa4107f} }, // 4 OSM: 5804724 WD: Q3476269 51.91, 4.432 x 51.96, 4.504
    { 350, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x800080} }, // L1 OSM: 5812905 WD: Q95982832 38.09, 13.37 x 38.11, 13.41
    { 354, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // L2 OSM: 5812931 WD: Q95983858 38.13, 13.29 x 38.13, 13.34
    { 346, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // L4 OSM: 5813038 WD: Q95983909 38.1, 13.33 x 38.13, 13.34
    { 358, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // L3 OSM: 5813039 WD: Q95983869 38.13, 13.3 x 38.14, 13.34
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4b371b} }, // 10 OSM: 5821632 WD: Q117011248 54.35, 18.57 x 54.4, 18.67
    { 1969, NoLogo, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 47B OSM: 5830635 WD: Q22696462 47.44, 18.98 x 47.5, 19.06
    { 1973, 13098, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a85a} }, // R2 OSM: 5838299 WD: Q1880046 41.28, 1.978 x 41.6, 2.292
    { 1976, 13115, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff131a} }, // R3 OSM: 5844031 WD: Q2113761 41.36, 1.896 x 42.46, 2.297
    { 317, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffbacd} }, // U49 OSM: 5847183 51.48, 7.442 x 51.52, 7.476
    { 1979, 13132, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff8c00} }, // R4 OSM: 5849061 WD: Q2226508 41.19, 1.524 x 41.72, 2.189
    { 1982, 13149, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9b1987} }, // R8 OSM: 5866129 WD: Q3817638 41.45, 1.926 x 41.6, 2.292
    { 1987, 13166, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00bdac} }, // RT1 OSM: 5866193 WD: Q5985874 41.11, 1.098 x 41.16, 1.255
    { 1991, 13184, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe579cb} }, // RT2 OSM: 5867875 WD: Q9025898 41, 0.9109 x 41.27, 1.6
    { 1995, 13202, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0073ce} }, // RG1 OSM: 5867923 WD: Q5985872 41.36, 2.099 x 42.42, 3.161
    { 1999, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0060a9} }, // Expo Line OSM: 5881298 WD: Q736619 49.18, -123.1 x 49.29, -122.8
    { 2009, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffd520} }, // Millennium Line OSM: 5881419 WD: Q1534900 49.25, -123.1 x 49.29, -122.8
    { 2025, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x009ac8} }, // Canada Line OSM: 5881439 WD: Q1031997 49.17, -123.2 x 49.29, -123.1
    { 2037, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfbba00} }, // U42 OSM: 5890483 51.47, 7.433 x 51.56, 7.547
    { 2041, 13217, 599, LineMetaDataContent::Tramway, Color{0xdc2a1b} }, // U45 OSM: 5892934 WD: Q107740406 51.49, 7.455 x 51.54, 7.475
    { 2045, 13231, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffdd00} }, // R12 OSM: 5927786 WD: Q9026146 41.36, 0.6331 x 41.75, 2.189
    { 327, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x1e9999} }, // E OSM: 5953002 WD: Q5324790 37.78, -122.4 x 37.81, -122.4
    { 306, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf4858d} }, // 614P OSM: 5955260 WD: Q15903043 22.37, 114 x 22.41, 114
    { 2049, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x006684} }, // 615P OSM: 5955261 WD: Q15903207 22.37, 114 x 22.41, 114
    { 475, 13261, 13280, LineMetaDataContent::Subway, Color{0x00aa50} }, // A OSM: 5955845 WD: Q2310450 51.9, 4.314 x 51.96, 4.566
    { 194, NoLogo, 13280, LineMetaDataContent::Subway, Color{0xffd301} }, // B OSM: 5955846 WD: Q2960661 51.9, 4.105 x 51.99, 4.587
    { 291, NoLogo, 13280, LineMetaDataContent::Subway, Color{0xef1f1f} }, // C OSM: 5955847 WD: Q2058778 51.83, 4.319 x 51.94, 4.601
    { 974, NoLogo, 13280, LineMetaDataContent::Subway, Color{0x1bc5e9} }, // D OSM: 5955848 WD: Q2034685 51.83, 4.319 x 51.92, 4.497
    { 327, NoLogo, 13305, LineMetaDataContent::Subway, Color{0x1a389a} }, // E OSM: 5955849 WD: Q2687418 51.87, 4.325 x 52.08, 4.497
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x90130c} }, // 2 OSM: 5955850 WD: Q1982139 51.88, 4.464 x 51.9, 4.554
    { 244, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfbb316} }, // 20 OSM: 5966563 WD: Q3118970 51.88, 4.471 x 51.92, 4.539
    { 42, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x97d700} }, // 7 OSM: 5971692 WD: Q6553152 22.93, 113.2 x 23.05, 113.4
    { 2054, 12500, 12320, LineMetaDataContent::Subway, Color{0xf6842a} }, // L9 Sud OSM: 5972747 WD: Q1577033 41.29, 2.055 x 41.38, 2.134
    { 2061, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // NL1 OSM: 5976635 48.98, 8.362 x 49.05, 8.479
    { 2065, 13327, NoLogo, LineMetaDataContent::RapidTransit, Color{0x002369} }, // R11 OSM: 6021945 WD: Q11050690 41.38, 2.139 x 42.43, 3.161
    { 2069, 13357, NoLogo, LineMetaDataContent::RapidTransit, Color{0xed3896} }, // R13 OSM: 6025765 WD: Q6018166 41.18, 0.6331 x 41.62, 2.194
    { 2073, 13387, NoLogo, LineMetaDataContent::RapidTransit, Color{0x4e53ab} }, // R14 OSM: 6028425 WD: Q2880157 41.11, 0.6331 x 41.62, 2.194
    { 2077, 13417, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9a836c} }, // R15 OSM: 6028724 WD: Q5845244 41.09, 0.4797 x 41.4, 2.194
    { 1891, 13447, NoLogo, LineMetaDataContent::RapidTransit, Color{0x94288e} }, // 34 OSM: 6028756 WD: Q9025916 41.09, -0.9102 x 41.66, 2.194
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 5 OSM: 6059624 41.74, 123.5 x 41.81, 123.7
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4d3d00} }, // 17 OSM: 6061801 49.01, 8.359 x 49.05, 8.452
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffaaaa} }, // 16 OSM: 6061802 48.99, 8.378 x 49.05, 8.452
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00805a} }, // 18 OSM: 6061803 49, 8.431 x 49.05, 8.479
    { 327, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // E OSM: 6062533 48.95, 8.283 x 49.11, 8.505
    { 974, 13472, 13499, LineMetaDataContent::RapidTransit, Color{0xf9c212} }, // D OSM: 6063097 WD: Q10318679 41.11, -8.611 x 41.18, -8.598
    { 327, 13520, 13499, LineMetaDataContent::RapidTransit, Color{0x937bb8} }, // E OSM: 6063237 WD: Q10318682 41.15, -8.67 x 41.24, -8.582
    { 233, 13547, 13499, LineMetaDataContent::RapidTransit, Color{0xf68b1f} }, // F OSM: 6064751 WD: Q10318684 41.15, -8.655 x 41.19, -8.542
    { 475, 13574, 13499, LineMetaDataContent::RapidTransit, Color{0x3caeef} }, // A OSM: 6064925 WD: Q18473912 41.15, -8.694 x 41.19, -8.582
    { 291, 13601, 13499, LineMetaDataContent::RapidTransit, Color{0x8bc63e} }, // C OSM: 6065645 WD: Q10318673 41.15, -8.656 x 41.27, -8.586
    { 294, 13628, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // S OSM: 6071918 WD: Q7395342 37.74, -122.5 x 37.79, -122.4
    { 2081, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a076} }, // 704 OSM: 6073252 WD: Q5602824 40.69, -112 x 40.78, -111.9
    { 2085, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0055a4} }, // 701 OSM: 6073253 WD: Q4929373 40.53, -111.9 x 40.77, -111.9
    { 55, NoLogo, 13647, LineMetaDataContent::Subway, Color{0x000080} }, // 1 OSM: 6087653 WD: Q10318642 -19.95, -44.03 x -19.82, -43.91
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xea5297} }, // 4 OSM: 6092716 47.99, 7.829 x 48.04, 7.863
    { 2089, 13664, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // Sul OSM: 6113028 WD: Q10318728 -3.895, -38.63 x -3.72, -38.53
    { 217, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xf36421} }, // S 1 OSM: 6116272 WD: Q56378877 50.88, 13.46 x 51.16, 14.24
    { 1485, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xb8282e} }, // S 2 OSM: 6116280 WD: Q56378880 50.96, 13.72 x 51.13, 13.93
    { 1424, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xed0172} }, // S 3 OSM: 6116305 WD: Q56378881 50.9, 13.34 x 51.04, 13.73
    { 213, 13702, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // S4 OSM: 6157906 WD: Q96484000 47.81, 15.98 x 48.4, 16.41
    { 194, 13714, 13499, LineMetaDataContent::RapidTransit, Color{0xe62621} }, // B OSM: 6161229 WD: Q10318669 41.15, -8.758 x 41.38, -8.582
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc01115} }, // 1 OSM: 6182760 WD: Q2085324 51.98, 4.277 x 52.12, 4.359
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006600} }, // 2 OSM: 6182761 WD: Q3926989 52.05, 4.236 x 52.09, 4.383
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0093de} }, // 6 OSM: 6182762 WD: Q2205103 52.06, 4.264 x 52.1, 4.4
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcd853f} }, // 11 OSM: 6192619 WD: Q2084217 52.06, 4.27 x 52.11, 4.324
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff66ff} }, // 12 OSM: 6192620 WD: Q2541548 52.06, 4.252 x 52.09, 4.324
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa6c116} }, // 9 OSM: 6192621 WD: Q2293268 52.03, 4.257 x 52.12, 4.324
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe63a6b} }, // 15 OSM: 6197181 WD: Q2202159 52.04, 4.31 x 52.08, 4.393
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfa7222} }, // 16 OSM: 6197182 WD: Q2746551 52.02, 4.274 x 52.08, 4.327
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006b8b} }, // 17 OSM: 6197183 WD: Q2417431 52.02, 4.28 x 52.09, 4.339
    { 145, NoLogo, 13305, LineMetaDataContent::Tramway, Color{0xc01115} }, // 19 OSM: 6197184 WD: Q2886326 52.01, 4.35 x 52.09, 4.406
    { 2093, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff9c2a} }, // N2 OSM: 6227258 47.47, 19.05 x 47.51, 19.08
    { 2096, NoLogo, 13741, LineMetaDataContent::RapidTransit, Color{0x0275a4} }, // BLUE OSM: 6265609 WD: Q4929367 32.65, -96.81 x 32.92, -96.56
    { 972, NoLogo, 13741, LineMetaDataContent::RapidTransit, Color{0xcc0000} }, // RED OSM: 6265610 WD: Q16984038 32.72, -96.87 x 33.03, -96.7
    { 2101, NoLogo, 13741, LineMetaDataContent::RapidTransit, Color{0x00873f} }, // GREEN OSM: 6265672 WD: Q5602816 32.72, -96.94 x 32.99, -96.68
    { 2107, NoLogo, 13741, LineMetaDataContent::RapidTransit, Color{0xcc6600} }, // ORANGE OSM: 6265702 WD: Q7099665 32.78, -97.04 x 33.03, -96.7
    { 2114, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000066} }, // 620 OSM: 6265792 WD: Q19878111 32.75, -96.82 x 32.78, -96.81
    { 65, 13776, 13797, LineMetaDataContent::Subway, Color{0x0000ff} }, // 10 OSM: 6286483 WD: Q3239219 59.33, 17.88 x 59.4, 18.07
    { 54, 13776, 13797, LineMetaDataContent::Subway, Color{0x0000ff} }, // 11 OSM: 6286484 WD: Q3239220 59.33, 17.91 x 59.42, 18.07
    { 177, 13824, 13797, LineMetaDataContent::Subway, Color{0x008000} }, // 17 OSM: 6286485 WD: Q3239225 59.27, 17.92 x 59.34, 18.13
    { 22, 13824, 13797, LineMetaDataContent::Subway, Color{0x008000} }, // 18 OSM: 6286486 WD: Q3239226 59.23, 17.98 x 59.34, 18.1
    { 145, 13824, 13797, LineMetaDataContent::Subway, Color{0x008000} }, // 19 OSM: 6286487 WD: Q3239227 59.26, 17.83 x 59.37, 18.08
    { 58, 13847, 13797, LineMetaDataContent::Subway, Color{0xff0000} }, // 13 OSM: 6286488 WD: Q3239222 59.24, 17.81 x 59.36, 18.1
    { 137, 13847, 13797, LineMetaDataContent::Subway, Color{0xff0000} }, // 14 OSM: 6286489 WD: Q3239223 59.29, 17.96 x 59.4, 18.08
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe51919} }, // 1 OSM: 6336724 47.1, 37.54 x 47.15, 37.62
    { 2150, NoLogo, 13869, LineMetaDataContent::Subway, Color{0x0a9cda} }, // Victoria OSM: 6354922 WD: Q203030 51.46, -0.1441 x 51.59, -0.01927
    { 2159, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3a75c4} }, // North Clyde OSM: 6399061 55.85, -4.733 x 56, -3.19
    { 2171, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x2e8b57} }, // North Berwick OSM: 6399368 55.93, -3.187 x 56.06, -2.513
    { 2185, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xcc5500} }, // Maryhill OSM: 6403662 55.86, -4.321 x 55.9, -4.239
    { 2194, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0b4ea2} }, // TL 1 OSM: 6421836 50.83, -0.5143 x 52.14, -0.03743
    { 2199, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x629f3f} }, // Santa Cruz OSM: 6432131 WD: Q10318722 -22.92, -43.69 x -22.85, -43.19
    { 2210, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0691f6} }, // Japeri OSM: 6432248 WD: Q10318695 -22.91, -43.66 x -22.64, -43.19
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffcc29} }, // 4 OSM: 6432702 WD: Q6553130 -23.01, -43.31 x -22.98, -43.2
    { 1633, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00ab4e} }, // KTL OSM: 6452936 WD: Q736412 22.29, 114.2 x 22.34, 114.3
    { 2217, 13885, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe6180a} }, // 505 OSM: 6481283 WD: Q13645607 22.38, 114 x 22.41, 114
    { 2221, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x1a8539} }, // 507 OSM: 6481317 WD: Q15917019 22.37, 114 x 22.41, 114
    { 2225, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8d3219} }, // 610 OSM: 6481421 WD: Q15908713 22.37, 114 x 22.45, 114
    { 2229, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf4e619} }, // 615 OSM: 6481435 WD: Q15903207 22.37, 114 x 22.45, 114
    { 2233, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x44adc3} }, // 614 OSM: 6485195 WD: Q15903043 22.37, 114 x 22.45, 114
    { 2237, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf58c14} }, // 751 OSM: 6485220 WD: Q15903000 22.39, 114 x 22.47, 114
    { 2241, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x70147b} }, // 761P OSM: 6485222 WD: Q15909914 22.44, 114 x 22.47, 114
    { 2246, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf7931d} }, // SN 5 OSM: 6489645 51.07, -0.3187 x 51.5, 0.2699
    { 2251, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009933} }, // T-A OSM: 6491413 6.233, -75.57 x 6.248, -75.54
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1c24} }, // T1 OSM: 6497386 43.28, 5.547 x 43.3, 5.566
    { 2255, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x6633ff} }, // T1 R OSM: 6545828 WD: Q118592004 36.72, 3.083 x 36.78, 3.263
    { 2260, 13900, NoLogo, LineMetaDataContent::Tramway, Color{0xff00ff} }, // 18E OSM: 6547489 WD: Q63230200 38.7, -9.203 x 38.71, -9.145
    { 2264, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xba85bb} }, // 706 OSM: 6558996 WD: Q6718531 22.45, 114 x 22.47, 114
    { 2268, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8cc022} }, // 705 OSM: 6558997 WD: Q16057726 22.45, 114 x 22.47, 114
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe41f25} }, // 4 OSM: 6576221 48.22, 14.23 x 48.31, 14.29
    { 327, 13913, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf7b618} }, // E OSM: 6584634 WD: Q4993859 34.01, -118.5 x 34.05, -118.2
    { 475, 13938, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0072bc} }, // A OSM: 6585129 WD: Q3267759 33.77, -118.3 x 34.15, -117.9
    { 2272, 13963, NoLogo, LineMetaDataContent::Tramway, Color{0xff7f00} }, // 25E OSM: 6595981 WD: Q63230206 38.71, -9.17 x 38.72, -9.135
    { 2276, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // C13 OSM: 6641930 50.59, 12.69 x 50.92, 12.98
    { 925, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 29 OSM: 6653146 55.81, 37.52 x 55.84, 37.58
    { 1582, 13976, 11196, LineMetaDataContent::Subway, Color{0x00893e} }, // b OSM: 6659014 WD: Q24641690 48.09, -1.707 x 48.13, -1.62
    { 55, 14006, 14035, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 1 OSM: 6667548 WD: Q30926891 -22.91, -43.21 x -22.89, -43.17
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // T2 OSM: 6679929 WD: Q107172304 42.84, -2.685 x 42.88, -2.664
    { 42, 14056, NoLogo, LineMetaDataContent::Tramway, Color{0x2948a3} }, // 7 OSM: 6679981 WD: Q117302440 52.38, 16.88 x 52.44, 16.96
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfad50e} }, // 18 OSM: 6680332 52.38, 16.88 x 52.42, 17
    { 2280, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // MSC OSM: 6686325 14.2, 121 x 14.62, 121.2
    { 2284, 14094, 12320, LineMetaDataContent::Subway, Color{0xb2aed3} }, // L12 OSM: 6699916 WD: Q20107064 41.4, 2.119 x 41.4, 2.126
    { 137, 14112, NoLogo, LineMetaDataContent::Subway, Color{0x81312f} }, // 14 OSM: 6728233 WD: Q6553073 23.24, 113.3 x 23.57, 113.6
    { 2288, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x6c421b} }, // S14 OSM: 6731045 WD: Q7388188 47.27, 8.429 x 47.41, 8.84
    { 2292, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9a9b9f} }, // Тр8 OSM: 6749431 49.78, 24.03 x 49.84, 24.06
    { 2298, 599, NoLogo, LineMetaDataContent::Subway, Color{0x2c2276} }, // U74 OSM: 6760736 WD: Q661002 51.16, 6.615 x 51.28, 6.854
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x791714} }, // 1 OSM: 6774704 WD: Q10318644 -12.99, -38.52 x -12.92, -38.47
    { 2302, 14133, 14156, LineMetaDataContent::Tramway, Color{0x83b81a} }, // Τ6 OSM: 6792080 WD: Q25535312 37.92, 23.7 x 37.97, 23.74
    { 2306, 14196, 14156, LineMetaDataContent::Tramway, Color{0x83b81a} }, // Τ7 OSM: 6792082 WD: Q25535308 37.85, 23.64 x 37.95, 23.75
    { 2310, 14219, 12650, LineMetaDataContent::RapidTransit, Color{0x202776} }, // S43 OSM: 6794665 WD: Q86674587 50.62, 5.327 x 50.93, 5.718
    { 41, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfff90a} }, // S7 OSM: 6796259 48.63, 8.065 x 49.01, 8.432
    { 1726, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfff90a} }, // S71 OSM: 6796260 48.63, 8.065 x 48.99, 8.405
    { 2314, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6d682a} }, // S81 OSM: 6796368 48.44, 8.215 x 48.99, 8.83
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 7 OSM: 6799066 39.75, 30.49 x 39.76, 30.54
    { 55, 14241, NoLogo, LineMetaDataContent::Subway, Color{0xe4002b} }, // 1 OSM: 6800211 WD: Q1326478 31.11, 121.4 x 31.4, 121.5
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00bfff} }, // 4 OSM: 6800376 39.75, 30.5 x 39.78, 30.56
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffff00} }, // 6 OSM: 6800649 39.74, 30.52 x 39.78, 30.59
    { 26, 14261, NoLogo, LineMetaDataContent::Subway, Color{0x2cd5c4} }, // 16 OSM: 6803864 WD: Q5954911 30.91, 121.6 x 31.2, 121.9
    { 6, 14282, NoLogo, LineMetaDataContent::Subway, Color{0xac4fc6} }, // 5 OSM: 6806165 WD: Q1331322 30.91, 121.4 x 31.12, 121.5
    { 59, 14302, NoLogo, LineMetaDataContent::Subway, Color{0xffd100} }, // 3 OSM: 6817204 WD: Q1326495 31.15, 121.4 x 31.41, 121.5
    { 2318, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xb6bd00} }, // SIL OSM: 6827213 WD: Q2041013 22.24, 114.1 x 22.28, 114.2
    { 27, 14311, NoLogo, LineMetaDataContent::Subway, Color{0xd9017a} }, // 6 OSM: 6840940 WD: Q631135 31.15, 121.5 x 31.36, 121.6
    { 2322, 14320, NoLogo, LineMetaDataContent::RapidTransit, Color{0x692832} }, // TL-1 OSM: 6849311 WD: Q5985920 20.61, -103.4 x 20.74, -103.4
    { 2327, 14386, NoLogo, LineMetaDataContent::RapidTransit, Color{0x407058} }, // TL-2 OSM: 6851904 WD: Q5986178 20.66, -103.4 x 20.68, -103.3
    { 984, 4766, 4474, LineMetaDataContent::Subway, Color{0xffff00} }, // 8А OSM: 6855054 WD: Q585986 55.63, 37.33 x 55.75, 37.54
    { 354, 14452, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, // L2 OSM: 6857222 WD: Q5986175 -37.03, -73.16 x -36.82, -73.06
    { 350, 14510, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, // L1 OSM: 6857223 WD: Q5985914 -36.98, -73.12 x -36.71, -72.94
    { 230, 14578, 3131, LineMetaDataContent::RapidTransit, Color{0xc6cc00} }, // J OSM: 6904183 WD: Q93388 48.88, 1.478 x 49.29, 2.326
    { 2332, 14612, 5051, LineMetaDataContent::Tramway, Color{0xf68c59} }, // T3a OSM: 6907402 WD: Q2420695 48.82, 2.27 x 48.85, 2.411
    { 1597, 14646, 5051, LineMetaDataContent::Tramway, Color{0xf2af00} }, // T4 OSM: 6910344 WD: Q1826681 48.89, 2.476 x 48.93, 2.571
    { 1364, 14679, 5051, LineMetaDataContent::Tramway, Color{0xb156a1} }, // T5 OSM: 6910410 WD: Q3238968 48.94, 2.356 x 48.98, 2.391
    { 1786, 14712, 5051, LineMetaDataContent::Tramway, Color{0xe85426} }, // T6 OSM: 6910437 WD: Q3238993 48.78, 2.169 x 48.81, 2.301
    { 2336, 14745, 5051, LineMetaDataContent::Tramway, Color{0xb98b59} }, // T7 OSM: 6910465 WD: Q3239019 48.71, 2.352 x 48.79, 2.373
    { 1423, 14778, 226, LineMetaDataContent::RapidTransit, Color{0x5cda21} }, // RS 3 OSM: 6925925 WD: Q84703705 53.05, 8.002 x 53.18, 8.815
    { 1298, 14793, 226, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // RS 4 OSM: 6925927 WD: Q84703708 53.05, 8.452 x 53.49, 8.815
    { 2339, 14808, 14808, LineMetaDataContent::Subway, Color{0xffcf00} }, // Orlyval OSM: 6928902 WD: Q432593 48.73, 2.3 x 48.76, 2.37
    { 2347, 14808, 14808, LineMetaDataContent::Subway, Color{0x142b4a} }, // CDGVAL OSM: 6928933 WD: Q1023114 49, 2.542 x 49.01, 2.572
    { 475, 14831, NoLogo, LineMetaDataContent::Subway, Color{0x800080} }, // A OSM: 6937084 WD: Q4268353 24.97, 121.2 x 25.09, 121.5
    { 521, 14862, NoLogo, LineMetaDataContent::Subway, Color{0xfccc0a} }, // W OSM: 6942556 WD: Q126567 40.7, -74.01 x 40.78, -73.91
    { 2354, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008531} }, // Luas Green Line OSM: 6975500 WD: Q2086105 53.24, -6.298 x 53.37, -6.143
    { 2370, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x68c56b} }, // DART OSM: 6979159 53.14, -6.255 x 53.45, -6.06
    { 55, 14888, 14913, LineMetaDataContent::Tramway, Color{0xc00027} }, // 1 OSM: 6981890 WD: Q2211906 47.74, 7.321 x 47.78, 7.343
    { 6, 14936, 14957, LineMetaDataContent::Subway, Color{0xf6a90b} }, // 5 OSM: 6996917 WD: Q957143 50.81, 4.266 x 50.86, 4.432
    { 16, 14981, 14913, LineMetaDataContent::Tramway, Color{0xffd80e} }, // 2 OSM: 7006051 WD: Q2024859 47.73, 7.297 x 47.76, 7.352
    { 55, 15006, 14957, LineMetaDataContent::Subway, Color{0xb5378c} }, // 1 OSM: 7006076 WD: Q1345228 50.84, 4.319 x 50.86, 4.464
    { 59, 15027, 14913, LineMetaDataContent::Tramway, Color{0x00a651} }, // 3 OSM: 7006942 WD: Q3238912 47.74, 7.275 x 47.76, 7.344
    { 16, NoLogo, 14808, LineMetaDataContent::RapidTransit, Color{0x142b4a} }, // 2 OSM: 7011253 WD: Q52773923 49, 2.578 x 49, 2.591
    { 16, 15052, 14035, LineMetaDataContent::Tramway, Color{0x008000} }, // 2 OSM: 7064054 WD: Q30926895 -22.91, -43.21 x -22.9, -43.17
    { 1137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 36 OSM: 7080875 55.75, 37.71 x 55.83, 37.82
    { 50, 15081, 226, LineMetaDataContent::RapidTransit, Color{0x6cc247} }, // S2 OSM: 7091572 WD: Q7388247 48.13, 11.25 x 48.41, 11.91
    { 1133, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x223344} }, // 22 OSM: 7095091 54.26, 48.28 x 54.36, 48.41
    { 350, 15097, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // L1 OSM: 7106760 WD: Q3011576 43.24, -3.013 x 43.4, -2.897
    { 213, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xed1c24} }, // S4 OSM: 7113761 WD: Q116210481 46.55, 13.37 x 46.63, 13.85
    { 50, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x3c8475} }, // S2 OSM: 7113763 WD: Q116210398 46.62, 13.85 x 46.77, 14.37
    { 61, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x17489e} }, // S1 OSM: 7113764 WD: Q116209766 46.6, 12.77 x 46.95, 14.48
    { 42, 15120, 6893, LineMetaDataContent::Tramway, Color{0xefe048} }, // 7 OSM: 7135778 WD: Q3239018 50.81, 4.336 x 50.9, 4.408
    { 358, 15141, NoLogo, LineMetaDataContent::Subway, Color{0xe3007d} }, // L3 OSM: 7141757 WD: Q2992379 43.25, -2.926 x 43.27, -2.889
    { 882, 15164, 6893, LineMetaDataContent::Tramway, Color{0xe43c2e} }, // 92 OSM: 7152034 WD: Q2661521 50.79, 4.34 x 50.88, 4.381
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x37b355} }, // 2 OSM: 7157243 WD: Q60031554 48.38, 9.936 x 48.43, 9.987
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1b24} }, // 1 OSM: 7157244 WD: Q60031375 48.39, 9.955 x 48.43, 10.03
    { 350, 15186, NoLogo, LineMetaDataContent::RapidTransit, Color{0xc00b31} }, // L1 OSM: 7183555 WD: Q29634861 37.14, -3.654 x 37.23, -3.592
    { 2375, 15210, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // C-2 OSM: 7193330 WD: Q4802702 43.25, -3.112 x 43.32, -2.928
    { 2379, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // C14 OSM: 7204222 50.7, 12.85 x 50.99, 12.98
    { 2383, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // C15 OSM: 7211723 50.81, 12.92 x 50.97, 13.12
    { 16, 15228, 7886, LineMetaDataContent::Subway, Color{0x003da5} }, // 2 OSM: 7227705 WD: Q50718 48.85, 2.278 x 48.88, 2.399
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x93c21c} }, // 1 OSM: 7252644 WD: Q60669571 -23.97, -46.41 x -23.96, -46.31
    { 2387, 15263, 13869, LineMetaDataContent::Subway, Color{0xe42313} }, // Central OSM: 7254206 WD: Q205355 51.5, -0.4377 x 51.69, 0.1146
    { 327, 15288, 2495, LineMetaDataContent::RapidTransit, Color{0xc04191} }, // E OSM: 7271953 WD: Q668655 48.74, 2.329 x 48.9, 2.759
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf6c828} }, // 13 OSM: 7295272 WD: Q96483392 47.35, 8.481 x 47.41, 8.542
    { 16, 15320, 14957, LineMetaDataContent::Subway, Color{0xed6c23} }, // 2 OSM: 7305855 WD: Q1826676 50.83, 4.321 x 50.87, 4.37
    { 27, 15341, NoLogo, LineMetaDataContent::Subway, Color{0x80225f} }, // 6 OSM: 7322006 WD: Q6553140 23.11, 113.2 x 23.2, 113.5
    { 137, 15361, 4474, LineMetaDataContent::Tramway, Color{0x000000} }, // 14 OSM: 7339185 WD: Q26856861 55.68, 37.49 x 55.85, 37.75
    { 2395, 15386, 226, LineMetaDataContent::RapidTransit, Color{0x9f4c37} }, // S41 OSM: 7369771 WD: Q12374455 52.46, 13.28 x 52.55, 13.48
    { 2315, 15417, 6893, LineMetaDataContent::Tramway, Color{0x4c8b33} }, // 81 OSM: 7375224 WD: Q2133516 50.82, 4.28 x 50.84, 4.408
    { 61, 15439, 12650, LineMetaDataContent::RapidTransit, Color{0x005f33} }, // S1 OSM: 7382640 WD: Q24929119 50.6, 4.32 x 51.22, 4.497
    { 50, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0xf16122} }, // S2 OSM: 7383577 WD: Q56309162 50.61, 4.139 x 50.9, 4.716
    { 1152, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0x009696} }, // S20 OSM: 7386794 WD: Q56309254 50.67, 4.565 x 50.88, 4.719
    { 44, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0xffcc06} }, // S5 OSM: 7387151 WD: Q56309389 50.69, 3.87 x 51.02, 4.484
    { 164, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0x222975} }, // S3 OSM: 7388964 WD: Q56309590 50.82, 3.814 x 51.02, 4.366
    { 213, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0xcb2127} }, // S4 OSM: 7389117 WD: Q56309251 50.82, 4.039 x 51.02, 4.523
    { 199, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0x965f26} }, // S6 OSM: 7391007 WD: Q56309855 50.69, 3.87 x 50.89, 4.378
    { 41, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0x571759} }, // S7 OSM: 7391045 WD: Q56309167 50.73, 4.241 x 50.92, 4.434
    { 47, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0x0096cb} }, // S8 OSM: 7391071 WD: Q56309403 50.65, 3.814 x 50.91, 4.617
    { 434, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0x67bc45} }, // S9 OSM: 7391314 WD: Q56309779 50.6, 4.335 x 50.9, 5.08
    { 912, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0x000000} }, // S10 OSM: 7391375 WD: Q56309273 50.83, 4.039 x 51.02, 4.366
    { 2399, 15462, 12650, LineMetaDataContent::RapidTransit, Color{0x005d30} }, // L-17 OSM: 7392801 WD: Q86358695 50.56, 5.559 x 50.66, 5.854
    { 83, 15484, NoLogo, LineMetaDataContent::RapidTransit, Color{0x005d30} }, // S61 OSM: 7394292 WD: Q84951112 50.39, 4.432 x 50.67, 4.881
    { 2404, 15510, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf26021} }, // S62 OSM: 7395296 WD: Q86070870 50.4, 4.17 x 50.51, 4.439
    { 79, 15536, NoLogo, LineMetaDataContent::RapidTransit, Color{0x202776} }, // S63 OSM: 7396143 WD: Q85178055 50.27, 3.967 x 50.41, 4.439
    { 2408, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x4a611c} }, // RL1 OSM: 7399137 WD: Q3781389 41.62, 0.631 x 41.79, 0.8166
    { 536, 15562, NoLogo, LineMetaDataContent::RapidTransit, Color{0xcc2027} }, // S64 OSM: 7403404 WD: Q85944484 50.06, 4.387 x 50.41, 4.538
    { 226, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffff00} }, // 25 OSM: 7409703 31.2, 29.9 x 31.22, 29.93
    { 55, 15588, NoLogo, LineMetaDataContent::Tramway, Color{0xf38230} }, // 1 OSM: 7418079 WD: Q59134535 33.53, -7.67 x 33.6, -7.5
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffdb2f} }, // 2 OSM: 7418090 WD: Q59159905 33.56, -7.682 x 33.61, -7.507
    { 1597, 9446, 9418, LineMetaDataContent::Tramway, Color{0xffa500} }, // T4 OSM: 7420266 WD: Q15507510 41.02, 28.85 x 41.12, 28.93
    { 58, 15642, 7886, LineMetaDataContent::Subway, Color{0x71c5e8} }, // 13 OSM: 7420641 WD: Q50759 48.81, 2.284 x 48.95, 2.369
    { 15, 15678, 7886, LineMetaDataContent::Subway, Color{0x007a53} }, // 12 OSM: 7420642 WD: Q50757 48.82, 2.273 x 48.91, 2.381
    { 54, 15714, 7886, LineMetaDataContent::Subway, Color{0x6e4c1e} }, // 11 OSM: 7420643 WD: Q50756 48.86, 2.348 x 48.88, 2.466
    { 19, 15750, 7886, LineMetaDataContent::Subway, Color{0xdd9cdf} }, // 8 OSM: 7420644 WD: Q50751 48.77, 2.278 x 48.87, 2.465
    { 6, 15785, 7886, LineMetaDataContent::Subway, Color{0xff7f32} }, // 5 OSM: 7420645 WD: Q50745 48.83, 2.354 x 48.91, 2.449
    { 2412, 15820, 7886, LineMetaDataContent::Subway, Color{0x71c5e8} }, // 3bis OSM: 7420646 WD: Q50742 48.87, 2.399 x 48.88, 2.407
    { 309, 15858, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf28e42} }, // P OSM: 7420696 WD: Q93874 48.51, 2.359 x 49.18, 3.409
    { 480, 15892, 3131, LineMetaDataContent::RapidTransit, Color{0xf3a4ba} }, // R OSM: 7420697 WD: Q93383 48.01, 2.374 x 48.84, 2.943
    { 34, 15926, 3131, LineMetaDataContent::RapidTransit, Color{0x7b4339} }, // H OSM: 7420698 WD: Q93386 48.88, 2.093 x 49.26, 2.469
    { 468, 15960, 3131, LineMetaDataContent::RapidTransit, Color{0x00a88f} }, // N OSM: 7420700 WD: Q93376 48.64, 1.37 x 48.99, 2.319
    { 194, 15994, 2495, LineMetaDataContent::RapidTransit, Color{0x5291ce} }, // B OSM: 7420701 WD: Q1347825 48.69, 2.071 x 49.01, 2.642
    { 294, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfd8fb4} }, // S OSM: 7424196 WD: Q2329867 48.17, 16.33 x 48.26, 16.4
    { 464, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x035eb9} }, // G OSM: 7435094 WD: Q118923662 60.74, 24.78 x 60.98, 25.66
    { 408, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x035eb9} }, // K OSM: 7435653 WD: Q118874957 60.17, 24.93 x 60.41, 25.11
    { 480, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x357219} }, // R OSM: 7439055 WD: Q118874959 60.17, 23.74 x 61.5, 25.11
    { 475, 16026, 3352, LineMetaDataContent::RapidTransit, Color{0x8c4799} }, // A OSM: 7440364 WD: Q118874158 60.17, 24.81 x 60.22, 24.94
    { 327, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x008000} }, // E OSM: 7442189 WD: Q118869683 60.17, 24.6 x 60.22, 24.94
    { 304, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x008000} }, // U OSM: 7442496 WD: Q118869424 60.12, 24.43 x 60.22, 24.94
    { 412, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x008000} }, // L OSM: 7442589 WD: Q118869556 60.12, 24.44 x 60.22, 24.94
    { 839, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x357219} }, // Y OSM: 7442716 WD: Q118868930 60.11, 24.22 x 60.22, 24.94
    { 9, 16044, NoLogo, LineMetaDataContent::Subway, Color{0x5f259f} }, // 4 OSM: 7448424 WD: Q1326504 31.18, 121.4 x 31.26, 121.5
    { 19, 16053, NoLogo, LineMetaDataContent::Subway, Color{0x009fdf} }, // 8 OSM: 7451833 WD: Q1152341 31.06, 121.5 x 31.32, 121.5
    { 130, 16062, NoLogo, LineMetaDataContent::Subway, Color{0x71c5e8} }, // 9 OSM: 7451835 WD: Q1152370 30.99, 121.2 x 31.27, 121.7
    { 15, 16071, NoLogo, LineMetaDataContent::Subway, Color{0x007b5f} }, // 12 OSM: 7451887 WD: Q877180 31.13, 121.3 x 31.28, 121.6
    { 58, 16092, NoLogo, LineMetaDataContent::Subway, Color{0xef95cf} }, // 13 OSM: 7451890 WD: Q607539 31.17, 121.3 x 31.25, 121.6
    { 65, 16102, NoLogo, LineMetaDataContent::Subway, Color{0xc1a7e2} }, // 10 OSM: 7452119 WD: Q528209 31.17, 121.3 x 31.36, 121.6
    { 2417, 16112, 16137, LineMetaDataContent::RapidTransit, Color{0xed8000} }, // I2 OSM: 7527498 WD: Q484739 37.44, 126.6 x 37.6, 126.8
    { 304, 16165, 16137, LineMetaDataContent::RapidTransit, Color{0xfda600} }, // U OSM: 7530882 WD: Q491655 37.72, 127 x 37.75, 127.1
    { 327, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x509f22} }, // E OSM: 7531174 37.24, 127.1 x 37.29, 127.2
    { 521, 16193, 16137, LineMetaDataContent::RapidTransit, Color{0xb0ce18} }, // W OSM: 7533584 WD: Q3832795 37.58, 127 x 37.66, 127
    { 267, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Blue OSM: 7548642 41.47, -81.71 x 41.51, -81.54
    { 437, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // Green OSM: 7548643 41.48, -81.71 x 41.51, -81.52
    { 279, NoLogo, 16231, LineMetaDataContent::Subway, Color{0xff0000} }, // Red OSM: 7551457 WD: Q2136023 41.41, -81.84 x 41.53, -81.58
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ff00} }, // 3 OSM: 7560907 51.34, -0.1055 x 51.38, -0.01745
    { 2420, 16254, 16271, LineMetaDataContent::Subway, Color{0xffff00} }, // YL OSM: 7572167 WD: Q4710841 38.79, -77.08 x 38.91, -77.02
    { 2423, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xbcbdc0} }, // Silver OSM: 7572385 40.29, -80.03 x 40.45, -79.99
    { 2430, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // 510 OSM: 7572438 32.54, -117.2 x 32.88, -117
    { 279, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xec1b24} }, // Red OSM: 7574880 40.34, -80.05 x 40.45, -79.99
    { 267, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x77b6e4} }, // Blue OSM: 7575525 40.34, -80.05 x 40.45, -79.99
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe40046} }, // T1 OSM: 7580424 WD: Q3239057 50.32, 3.385 x 50.37, 3.523
    { 2441, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // TC OSM: 7597545 WD: Q3538439 -34.51, -58.58 x -34.42, -58.48
    { 16, 16292, 16137, LineMetaDataContent::Subway, Color{0x33a23d} }, // 2 OSM: 7625892 WD: Q17501 37.48, 126.8 x 37.57, 127.1
    { 9, 16315, 16137, LineMetaDataContent::Subway, Color{0x32a1c8} }, // 4 OSM: 7625893 WD: Q489253 37.3, 126.7 x 37.72, 127.2
    { 350, 16338, NoLogo, LineMetaDataContent::Subway, Color{0x659acd} }, // L1 OSM: 7627370 WD: Q20685853 36.71, 3.054 x 36.79, 3.138
    { 256, 16370, 6893, LineMetaDataContent::Tramway, Color{0xf3c300} }, // 51 OSM: 7632520 WD: Q751385 50.78, 4.326 x 50.89, 4.349
    { 885, 16392, 6893, LineMetaDataContent::Tramway, Color{0xed7807} }, // 93 OSM: 7632524 WD: Q2845878 50.82, 4.33 x 50.89, 4.372
    { 55, 16414, NoLogo, LineMetaDataContent::Subway, Color{0x147049} }, // 1 OSM: 7643008 WD: Q21034316 38.02, 46.23 x 38.08, 46.36
    { 318, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 49 OSM: 7657682 55.68, 37.62 x 55.7, 37.69
    { 16, 16438, 8098, LineMetaDataContent::Subway, Color{0x006abc} }, // 2 OSM: 7660420 WD: Q1771527 56.32, 43.89 x 56.34, 43.97
    { 260, 16457, 16457, LineMetaDataContent::Subway, Color{0xf25e24} }, // M1 OSM: 7664663 WD: Q207287 60.14, 24.64 x 60.21, 25.15
    { 322, 16457, 16457, LineMetaDataContent::Subway, Color{0xf25e24} }, // M2 OSM: 7664664 WD: Q207287 60.16, 24.8 x 60.24, 25.11
    { 2444, NoLogo, 13869, LineMetaDataContent::Subway, Color{0xae6017} }, // Bakerloo OSM: 7666698 WD: Q19892 51.5, -0.3355 x 51.59, -0.1007
    { 2453, NoLogo, 13869, LineMetaDataContent::Subway, Color{0xf4a9be} }, // Hammersmith & City OSM: 7666927 WD: Q211270 51.49, -0.2269 x 51.54, 0.08088
    { 2472, NoLogo, 13869, LineMetaDataContent::Subway, Color{0xffd329} }, // Circle OSM: 7671007 WD: Q210321 51.49, -0.2269 x 51.53, -0.07523
    { 2479, NoLogo, 13869, LineMetaDataContent::Subway, Color{0x93ceba} }, // Waterloo & City OSM: 7672075 WD: Q207699 51.5, -0.1142 x 51.51, -0.09074
    { 2495, NoLogo, 13869, LineMetaDataContent::Subway, Color{0x949699} }, // Jubilee OSM: 7673326 WD: Q961290 51.5, -0.303 x 51.62, 0.01165
    { 2503, NoLogo, 13869, LineMetaDataContent::Subway, Color{0x91005a} }, // Metropolitan OSM: 7673626 WD: Q19891 51.51, -0.6366 x 51.71, -0.0757
    { 2516, 16482, 13869, LineMetaDataContent::Subway, Color{0x00a166} }, // District OSM: 7677096 WD: Q211265 51.42, -0.3016 x 51.56, 0.2526
    { 55, 16508, 16508, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7683834 WD: Q239927 37.51, 15.05 x 37.52, 15.1
    { 55, 16542, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // 1 OSM: 7684062 WD: Q6553099 19.09, 72.82 x 19.13, 72.91
    { 2525, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008f75} }, // CAT OSM: 7685186 10.48, -66.81 x 10.49, -66.8
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00af23} }, // 3 OSM: 7686574 WD: Q5017776 30.05, 31.21 x 30.15, 31.43
    { 2529, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xdc241f} }, // NSL OSM: 7695961 WD: Q759229 1.27, 103.7 x 1.45, 103.9
    { 55, 16564, 16564, LineMetaDataContent::Subway, Color{0xffa500} }, // 1 OSM: 7702663 WD: Q389415 34.39, 132.4 x 34.48, 132.5
    { 34, 16580, 16607, LineMetaDataContent::Subway, Color{0x0077cc} }, // H OSM: 7702769 WD: Q1073881 33.59, 130.4 x 33.63, 130.4
    { 2551, 16636, 13869, LineMetaDataContent::Subway, Color{0x094fa3} }, // Piccadilly OSM: 7702940 WD: Q207689 51.46, -0.4877 x 51.65, -0.09515
    { 2562, 16664, 13869, LineMetaDataContent::Subway, Color{0x000000} }, // Northern OSM: 7702944 WD: Q214793 51.4, -0.2756 x 51.65, -0.08677
    { 408, 16690, 16607, LineMetaDataContent::Subway, Color{0xff4500} }, // K OSM: 7703353 WD: Q908188 33.58, 130.3 x 33.6, 130.4
    { 2571, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc61094} }, // MM OSM: 7703640 WD: Q852314 35.44, 139.6 x 35.47, 139.7
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x313495} }, // 16 OSM: 7704225 52.41, 16.91 x 52.46, 16.93
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x38ab43} }, // 6 OSM: 7705201 52.38, 16.83 x 52.41, 17
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe7212a} }, // 8 OSM: 7705202 52.38, 16.88 x 52.41, 17
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xee3c3c} }, // 1 OSM: 7705626 WD: Q66782266 29.55, 52.45 x 29.69, 52.6
    { 55, NoLogo, 16713, LineMetaDataContent::Subway, Color{0x1a988c} }, // 1 OSM: 7705633 WD: Q104230289 32.49, 51.53 x 32.84, 51.75
    { 42, 16736, 16760, LineMetaDataContent::Subway, Color{0x6a00ff} }, // 7 OSM: 7705644 WD: Q20110124 35.67, 51.35 x 35.79, 51.49
    { 9, 16782, 16760, LineMetaDataContent::Subway, Color{0xffff00} }, // 4 OSM: 7705669 WD: Q20110121 35.69, 51.3 x 35.75, 51.5
    { 2574, 16806, 16137, LineMetaDataContent::RapidTransit, Color{0x8652a1} }, // BGL OSM: 7705740 WD: Q87056 35.16, 128.9 x 35.27, 129
    { 2578, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x43b02a} }, // THZ1 OSM: 7708095 23.1, 113.3 x 23.11, 113.4
    { 55, 12448, NoLogo, LineMetaDataContent::Subway, Color{0xdf2937} }, // 1 OSM: 7712343 WD: Q25420888 8.962, -79.55 x 9.065, -79.51
    { 408, 16828, 16870, LineMetaDataContent::Subway, Color{0xec78b4} }, // K OSM: 7712576 WD: Q1078347 35.2, 136.9 x 35.2, 136.9
    { 480, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3e754e} }, // R OSM: 7712694 WD: Q7360056 34.68, 135.3 x 34.72, 135.3
    { 309, 16903, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3573bd} }, // P OSM: 7712875 WD: Q7230715 34.64, 135.2 x 34.7, 135.2
    { 408, 16929, 16951, LineMetaDataContent::Subway, Color{0x267dce} }, // K OSM: 7712969 WD: Q844019 34.65, 135.1 x 34.69, 135.2
    { 9, 16982, NoLogo, LineMetaDataContent::Subway, Color{0xdc241f} }, // 4 OSM: 7713538 WD: Q1004293 22.52, 114 x 22.73, 114.1
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf04723} }, // 9 OSM: 7715858 52.37, 16.9 x 52.41, 16.94
    { 322, 17005, 17033, LineMetaDataContent::Subway, Color{0x009a4c} }, // M2 OSM: 7719078 WD: Q1880934 41.01, 28.95 x 41.14, 29.03
    { 8, 17057, 17033, LineMetaDataContent::Subway, Color{0xe91e76} }, // M4 OSM: 7719080 WD: Q1880989 40.88, 29.02 x 41, 29.31
    { 260, 17085, 17033, LineMetaDataContent::Subway, Color{0xe32726} }, // M1 OSM: 7719081 WD: Q6048705 40.98, 28.82 x 41.05, 28.95
    { 29, 17113, 17033, LineMetaDataContent::Subway, Color{0xcaaa79} }, // M6 OSM: 7719783 WD: Q16949744 41.08, 29.01 x 41.09, 29.05
    { 294, 17141, 16951, LineMetaDataContent::Subway, Color{0x00ae8e} }, // S OSM: 7720729 WD: Q1066548 34.66, 135 x 34.76, 135.2
    { 263, 17164, 17177, LineMetaDataContent::Subway, Color{0x1964b7} }, // MRT Blue OSM: 7725030 WD: Q2486364 13.71, 100.4 x 13.81, 100.6
    { 1394, 17200, 17177, LineMetaDataContent::Subway, Color{0x660066} }, // MRT Purple OSM: 7725058 WD: Q6584549 13.81, 100.4 x 13.89, 100.5
    { 350, 17215, 17238, LineMetaDataContent::Subway, Color{0x228b22} }, // L1 OSM: 7727216 WD: Q5985884 -12.21, -77.01 x -11.96, -76.93
    { 976, 17284, 16137, LineMetaDataContent::Subway, Color{0xc82127} }, // 326 OSM: 7728256 WD: Q20388 37.29, 127 x 37.52, 127.1
    { 2583, 17317, 17317, LineMetaDataContent::Subway, Color{0x2e8b57} }, // 仙台市南北線 (Sendai Namboku Line) OSM: 7732249 WD: Q908156 38.21, 140.9 x 38.32, 140.9
    { 2624, 17317, 17317, LineMetaDataContent::Subway, Color{0x00bfff} }, // 仙台市東西線 (Sendai Tozai Line) OSM: 7732250 WD: Q7450186 38.24, 140.8 x 38.26, 140.9
    { 194, 17345, 17392, LineMetaDataContent::Subway, Color{0x005ba5} }, // B OSM: 7732280 WD: Q841360 35.4, 139.5 x 35.57, 139.6
    { 464, 17427, 17392, LineMetaDataContent::Subway, Color{0x048d58} }, // G OSM: 7732283 WD: Q910329 35.51, 139.5 x 35.56, 139.6
    { 350, 17475, NoLogo, LineMetaDataContent::Subway, Color{0xcc0000} }, // L1 OSM: 7732970 WD: Q4215382 -33.46, -70.72 x -33.41, -70.55
    { 354, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffbe2e} }, // L2 OSM: 7732971 WD: Q11690005 -33.54, -70.66 x -33.38, -70.64
    { 346, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x292d91} }, // L4 OSM: 7732972 WD: Q9025952 -33.61, -70.6 x -33.42, -70.57
    { 2663, 17500, NoLogo, LineMetaDataContent::Subway, Color{0x0099ff} }, // L4A OSM: 7732973 WD: Q11690009 -33.54, -70.67 x -33.52, -70.6
    { 1179, 17526, NoLogo, LineMetaDataContent::Subway, Color{0x006633} }, // L5 OSM: 7732974 WD: Q9025969 -33.53, -70.76 x -33.44, -70.6
    { 27, 17551, NoLogo, LineMetaDataContent::Subway, Color{0x8e16a1} }, // 6 OSM: 7732978 WD: Q5986809 -33.48, -70.7 x -33.42, -70.6
    { 59, 17576, 7886, LineMetaDataContent::Subway, Color{0x827a04} }, // 3 OSM: 7733214 WD: Q50741 48.86, 2.28 x 48.9, 2.418
    { 55, 17611, 17611, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7733917 WD: Q2047989 55.74, 49.08 x 55.86, 49.22
    { 55, 4627, 17632, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7733918 WD: Q594532 54.98, 82.89 x 55.06, 82.94
    { 16, 4969, 17632, LineMetaDataContent::Subway, Color{0x008000} }, // 2 OSM: 7733919 WD: Q2711371 55.03, 82.9 x 55.04, 82.98
    { 55, 17659, 17659, LineMetaDataContent::Subway, Color{0x1c8c3a} }, // 1 OSM: 7733920 WD: Q750441 56.8, 60.6 x 56.9, 60.63
    { 2667, 17678, NoLogo, LineMetaDataContent::Subway, Color{0x076c57} }, // Verde OSM: 7733971 WD: Q10318743 -15.84, -48.12 x -15.79, -47.88
    { 2673, 17697, NoLogo, LineMetaDataContent::Subway, Color{0xeb9710} }, // Laranja OSM: 7733972 WD: Q10318700 -15.87, -48.09 x -15.79, -47.88
    { 16, 17721, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 2 OSM: 7734060 WD: Q25421356 18.48, -69.97 x 18.51, -69.86
    { 55, 17736, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // 1 OSM: 7734061 WD: Q25421357 18.45, -69.93 x 18.55, -69.9
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // 1 OSM: 7734069 10.62, -71.67 x 10.64, -71.62
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xcc0000} }, // 1 OSM: 7734070 10.15, -68.01 x 10.2, -68
    { 55, 17752, 17784, LineMetaDataContent::Subway, Color{0x0000ff} }, // 1 OSM: 7734077 WD: Q28604 53.85, 27.47 x 53.95, 27.69
    { 16, NoLogo, 17784, LineMetaDataContent::Subway, Color{0xff0000} }, // 2 OSM: 7734078 WD: Q2638932 53.86, 27.43 x 53.91, 27.67
    { 322, 17805, 17830, LineMetaDataContent::Subway, Color{0x0000ff} }, // M2 OSM: 7734092 WD: Q12295702 42.66, 23.28 x 42.74, 23.32
    { 260, 17851, 17830, LineMetaDataContent::Subway, Color{0xff0000} }, // M1 OSM: 7734093 WD: Q20020737 42.63, 23.26 x 42.73, 23.38
    { 2681, 17876, 17907, LineMetaDataContent::Subway, Color{0xdf096f} }, // Vermelha OSM: 7734163 WD: Q163215 38.73, -9.153 x 38.78, -9.1
    { 2690, 17937, 17907, LineMetaDataContent::Subway, Color{0xf4bc18} }, // Amarela OSM: 7734164 WD: Q1826607 38.72, -9.173 x 38.79, -9.145
    { 2698, NoLogo, 17907, LineMetaDataContent::Subway, Color{0x4e84c4} }, // Azul OSM: 7734165 WD: Q1826609 38.71, -9.224 x 38.76, -9.122
    { 2667, 17967, 17907, LineMetaDataContent::Subway, Color{0x00aaa6} }, // Verde OSM: 7734166 WD: Q1826613 38.71, -9.167 x 38.76, -9.133
    { 2712, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff6600} }, // Subway OSM: 7734173 55.85, -4.312 x 55.88, -4.253
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7734180 WD: Q4504162 48.48, 34.93 x 48.48, 35.02
    { 468, 17995, 16607, LineMetaDataContent::Subway, Color{0x008000} }, // N OSM: 7734239 WD: Q1039166 33.55, 130.3 x 33.59, 130.4
    { 279, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xcc0000} }, // Red OSM: 7734262 WD: Q1369034 24.98, 55.09 x 25.27, 55.39
    { 437, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00cc00} }, // Green OSM: 7734263 WD: Q1544621 25.22, 55.29 x 25.28, 55.4
    { 294, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffc0cb} }, // S OSM: 7734268 WD: Q16240707 21.33, 39.87 x 21.42, 39.98
    { 55, 18022, 18047, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7734272 WD: Q1473986 43.22, 76.84 x 43.27, 76.95
    { 16, 18069, 18069, LineMetaDataContent::Subway, Color{0x008000} }, // 2 OSM: 7734279 WD: Q712790 39.03, 125.7 x 39.07, 125.8
    { 55, 18069, 18069, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7734280 WD: Q711112 39.01, 125.7 x 39.07, 125.8
    { 55, 18101, 16760, LineMetaDataContent::Subway, Color{0xff0f04} }, // 1 OSM: 7735256 WD: Q20110118 35.4, 51.15 x 35.8, 51.44
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x259b24} }, // 1 OSM: 7740660 WD: Q19856263 26.5, 106.6 x 26.66, 106.7
    { 2719, 15926, 3131, LineMetaDataContent::RapidTransit, Color{0x7b4339} }, // ODEA OSM: 7747967 WD: Q93386 48.88, 2.345 x 48.94, 2.358
    { 2724, 15926, 3131, LineMetaDataContent::RapidTransit, Color{0x7b4339} }, // ADEO OSM: 7747968 WD: Q93386 48.88, 2.345 x 48.94, 2.358
    { 2729, 15926, 3131, LineMetaDataContent::RapidTransit, Color{0x7b4339} }, // VOBA OSM: 7747969 WD: Q93386 48.88, 2.345 x 48.94, 2.358
    { 2734, 15926, 3131, LineMetaDataContent::RapidTransit, Color{0x7b4339} }, // AVOL OSM: 7747970 WD: Q93386 48.88, 2.345 x 48.94, 2.358
    { 2739, 15926, 3131, LineMetaDataContent::RapidTransit, Color{0x7b4339} }, // APOR OSM: 7747972 WD: Q93386 48.88, 2.345 x 48.94, 2.358
    { 206, 18125, NoLogo, LineMetaDataContent::Tramway, Color{0x64318f} }, // T1 OSM: 7758458 WD: Q50319281 49.59, 6.119 x 49.64, 6.176
    { 59, 18145, 16760, LineMetaDataContent::Subway, Color{0x00aad4} }, // 3 OSM: 7770934 WD: Q20110120 35.63, 51.34 x 35.8, 51.52
    { 2744, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00afad} }, // B-L OSM: 7772561 51.46, -0.08835 x 51.51, -0.009527
    { 2748, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00afad} }, // B-WA OSM: 7772562 51.49, -0.08835 x 51.51, 0.07755
    { 2753, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00afad} }, // S-L OSM: 7772563 51.46, -0.02287 x 51.54, -0.004134
    { 2757, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00afad} }, // TG-B OSM: 7772565 51.51, -0.07453 x 51.51, 0.07189
    { 2762, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00afad} }, // SI-WA OSM: 7772566 51.49, -0.01336 x 51.55, 0.07755
    { 1142, NoLogo, 8003, LineMetaDataContent::Subway, Color{0xbc1725} }, // M3 OSM: 7772846 WD: Q2735258 44.41, 25.98 x 44.44, 26.21
    { 260, NoLogo, 8003, LineMetaDataContent::Subway, Color{0xffff00} }, // M1 OSM: 7772847 WD: Q2056949 44.41, 26.04 x 44.45, 26.2
    { 72, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb56631} }, // 21 OSM: 7779520 59.34, 18.1 x 59.36, 18.23
    { 350, 18169, 18199, LineMetaDataContent::Subway, Color{0x008000} }, // L1 OSM: 7781389 WD: Q2668472 37.33, -6.052 x 37.38, -5.934
    { 354, 18233, 18252, LineMetaDataContent::RapidTransit, Color{0x173ba0} }, // L2 OSM: 7781442 WD: Q5986162 36.68, -4.458 x 36.72, -4.43
    { 350, 18286, 18252, LineMetaDataContent::RapidTransit, Color{0xe60000} }, // L1 OSM: 7781445 WD: Q5392889 36.71, -4.496 x 36.72, -4.423
    { 322, 18305, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe93324} }, // M2 OSM: 7781535 WD: Q11180785 39.58, 2.654 x 39.63, 2.725
    { 260, 18324, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf1b03e} }, // M1 OSM: 7781536 WD: Q5985887 39.58, 2.648 x 39.63, 2.673
    { 16, 18343, 18343, LineMetaDataContent::Subway, Color{0x008000} }, // 2 OSM: 7786077 WD: Q2210273 41.72, 44.72 x 41.73, 44.8
    { 55, NoLogo, 18343, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7786078 WD: Q340562 41.68, 44.78 x 41.79, 44.87
    { 327, 18366, 18366, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // E OSM: 7786518 WD: Q1714062 50.4, 30.39 x 50.5, 30.64
    { 16, 18396, 18416, LineMetaDataContent::Subway, Color{0xed1d24} }, // 2 OSM: 7786752 WD: Q3238802 50.62, 2.974 x 50.74, 3.181
    { 55, 18442, 18416, LineMetaDataContent::Subway, Color{0xffd400} }, // 1 OSM: 7786754 WD: Q3238658 50.61, 3.036 x 50.64, 3.143
    { 2769, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x90ee90} }, // 2B OSM: 7792472 WD: Q3832656 40.38, 49.85 x 40.38, 49.87
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7792473 WD: Q3832654 40.37, 49.83 x 40.42, 49.95
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x008000} }, // 2 OSM: 7792474 WD: Q3832656 40.37, 49.8 x 40.43, 49.95
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x800080} }, // 3 OSM: 7792475 WD: Q25547220 40.4, 49.78 x 40.43, 49.82
    { 55, 18462, 16137, LineMetaDataContent::Subway, Color{0x007448} }, // 1 OSM: 7792528 WD: Q200310 36.32, 127.3 x 36.39, 127.5
    { 1656, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xf58220} }, // S19 OSM: 7800298 WD: Q25352054 47.37, 8.227 x 47.6, 8.787
    { 2772, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xffd503} }, // U29 OSM: 7801954 WD: Q106879574 48.77, 9.122 x 48.78, 9.182
    { 2776, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0x69be51} }, // U34 OSM: 7801962 WD: Q106879575 48.76, 9.143 x 48.78, 9.178
    { 2780, 18487, 226, LineMetaDataContent::RapidTransit, Color{0xf17f1a} }, // S 9 OSM: 7805411 WD: Q63217750 51.45, 11.98 x 51.52, 12.64
    { 61, NoLogo, 18512, LineMetaDataContent::RapidTransit, Color{0xf39100} }, // S1 OSM: 7819263 WD: Q110265543 46.52, 6.517 x 46.81, 6.654
    { 346, 18528, 18551, LineMetaDataContent::Subway, Color{0x824100} }, // L4 OSM: 7827780 WD: Q1826677 40.42, -3.716 x 40.48, -3.635
    { 350, 18571, 18551, LineMetaDataContent::Subway, Color{0x67c0dd} }, // L1 OSM: 7831481 WD: Q1826675 40.36, -3.706 x 40.48, -3.591
    { 16, 18594, 16760, LineMetaDataContent::Subway, Color{0x003380} }, // 2 OSM: 7832325 WD: Q20110119 35.69, 51.33 x 35.74, 51.55
    { 2784, 18618, 18551, LineMetaDataContent::Subway, Color{0x015396} }, // L10 OSM: 7834660 WD: Q1760090 40.34, -3.813 x 40.56, -3.611
    { 448, NoLogo, 18642, LineMetaDataContent::Subway, Color{0x7fffd4} }, // I OSM: 7834960 WD: Q106775989 9.95, 76.28 x 10.11, 76.35
    { 1191, 18663, 18551, LineMetaDataContent::Subway, Color{0xff0080} }, // L8 OSM: 7837169 WD: Q1475527 40.44, -3.692 x 40.49, -3.572
    { 2788, 18686, 18551, LineMetaDataContent::Subway, Color{0x9c3293} }, // L9 OSM: 7837206 WD: Q1759707 40.3, -3.721 x 40.5, -3.447
    { 2791, 18709, NoLogo, LineMetaDataContent::Subway, Color{0x996633} }, // Z OSM: 7837591 WD: Q126484 40.68, -74.01 x 40.72, -73.8
    { 1179, 18735, 18551, LineMetaDataContent::Subway, Color{0x96bf0d} }, // L5 OSM: 7838614 WD: Q1568028 40.38, -3.769 x 40.46, -3.588
    { 260, 18758, 18758, LineMetaDataContent::Subway, Color{0xffa500} }, // M1 OSM: 7838818 WD: Q1577356 36.98, 35.26 x 37.05, 35.34
    { 358, 18779, 18551, LineMetaDataContent::Subway, Color{0xffdf00} }, // L3 OSM: 7838838 WD: Q1826673 40.34, -3.72 x 40.44, -3.692
    { 354, 18802, 18551, LineMetaDataContent::Subway, Color{0xfb0f0c} }, // L2 OSM: 7838963 WD: Q1826679 40.42, -3.71 x 40.45, -3.602
    { 1187, 18825, 18551, LineMetaDataContent::Subway, Color{0xed7b24} }, // L7 OSM: 7840623 WD: Q1826683 40.42, -3.727 x 40.5, -3.524
    { 480, 18848, 18551, LineMetaDataContent::Subway, Color{0xffffff} }, // R OSM: 7840747 WD: Q1496137 40.42, -3.72 x 40.42, -3.71
    { 1398, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe542de} }, // Purple OSM: 7841332 WD: Q7261433 12.91, 77.47 x 13, 77.76
    { 2284, 18870, 18551, LineMetaDataContent::Subway, Color{0xa49a00} }, // L12 OSM: 7841412 WD: Q1558864 40.28, -3.876 x 40.35, -3.71
    { 55, 18894, NoLogo, LineMetaDataContent::Subway, Color{0xf03b3f} }, // 1 OSM: 7841834 WD: Q11085985 31.44, 120.3 x 31.68, 120.3
    { 16, 18919, NoLogo, LineMetaDataContent::Subway, Color{0x00a43c} }, // 2 OSM: 7841837 WD: Q11085986 31.55, 120.2 x 31.61, 120.5
    { 55, NoLogo, 18944, LineMetaDataContent::Subway, Color{0xe53e30} }, // 1 OSM: 7841839 WD: Q30326155 38.04, 114.4 x 38.16, 114.6
    { 59, NoLogo, 18944, LineMetaDataContent::Subway, Color{0x00a1e0} }, // 3 OSM: 7841854 WD: Q30326157 38, 114.4 x 38.08, 114.7
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00b04f} }, // 1 OSM: 7841881 WD: Q17498765 22.82, 108.2 x 22.84, 108.4
    { 1183, 18967, 18551, LineMetaDataContent::Subway, Color{0x939393} }, // L6 OSM: 7842094 WD: Q514227 40.39, -3.746 x 40.45, -3.668
    { 1798, 18990, 18551, LineMetaDataContent::Subway, Color{0x006400} }, // L11 OSM: 7842127 WD: Q608251 40.36, -3.778 x 40.39, -3.718
    { 437, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x009933} }, // Green OSM: 7842288 WD: Q17054000 12.86, 77.5 x 13.05, 77.58
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc32a05} }, // 2 OSM: 7844345 WD: Q11149384 36.06, 120.3 x 36.17, 120.5
    { 16, NoLogo, 19014, LineMetaDataContent::Subway, Color{0x53b848} }, // 2 OSM: 7845614 WD: Q20647027 12.99, 80.19 x 13.09, 80.27
    { 177, 19037, NoLogo, LineMetaDataContent::Subway, Color{0xc09c83} }, // 17 OSM: 7845847 WD: Q6553108 31.1, 121 x 31.2, 121.3
    { 16, 19058, 16137, LineMetaDataContent::Subway, Color{0x18be00} }, // 2 OSM: 7845969 WD: Q200332 35.83, 128.4 x 35.87, 128.8
    { 55, 19081, 16137, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7845971 WD: Q200331 35.8, 128.5 x 35.89, 128.7
    { 16, 19104, NoLogo, LineMetaDataContent::Subway, Color{0xfff100} }, // 2 OSM: 7846276 WD: Q15908164 34.66, 113.6 x 34.87, 113.7
    { 2793, 19123, 19147, LineMetaDataContent::RapidTransit, Color{0x4682b4} }, // ML1 OSM: 7849381 WD: Q2058921 40.48, -3.669 x 40.51, -3.651
    { 2797, 19173, 19147, LineMetaDataContent::RapidTransit, Color{0x660066} }, // ML2 OSM: 7853073 WD: Q3832710 40.4, -3.812 x 40.45, -3.775
    { 357, 19197, 19147, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // ML3 OSM: 7853483 WD: Q3832709 40.39, -3.905 x 40.41, -3.775
    { 2801, 19221, 16137, LineMetaDataContent::Subway, Color{0x6fa0ce} }, // I1 OSM: 7854149 WD: Q487733 37.38, 126.6 x 37.57, 126.7
    { 59, 19246, NoLogo, LineMetaDataContent::Tramway, Color{0xb5ba05} }, // 3 OSM: 7857250 WD: Q1888831 50.81, 4.336 x 50.9, 4.377
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x02406f} }, // 2 OSM: 7857258 WD: Q10318650 -12.98, -38.48 x -12.9, -38.34
    { 2804, 13098, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa6c82b} }, // R2Nord OSM: 7867878 WD: Q1880046 41.3, 2.052 x 41.77, 2.673
    { 2811, 19267, NoLogo, LineMetaDataContent::RapidTransit, Color{0xba55d3} }, // R7 OSM: 7867903 WD: Q1647981 41.43, 2.115 x 41.51, 2.189
    { 2814, NoLogo, 19284, LineMetaDataContent::Subway, Color{0xff0000} }, // B1 OSM: 7868621 WD: Q56067295 40.19, 28.95 x 40.26, 29.12
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf30215} }, // 2 OSM: 7869228 WD: Q5934457 34.14, 108.9 x 34.38, 108.9
    { 55, 19302, NoLogo, LineMetaDataContent::Subway, Color{0x01abf7} }, // 1 OSM: 7869253 WD: Q14917524 34.27, 108.7 x 34.32, 109.1
    { 59, 19322, NoLogo, LineMetaDataContent::Subway, Color{0xb688a9} }, // 3 OSM: 7869255 WD: Q15927288 34.22, 108.8 x 34.41, 109.1
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xd9001c} }, // 2 OSM: 7869334 WD: Q104231524 -8.111, -35.02 x -8.069, -34.89
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe77405} }, // 1 OSM: 7869352 WD: Q104231463 -8.092, -35 x -8.024, -34.89
    { 2089, 19342, NoLogo, LineMetaDataContent::Subway, Color{0x1a5ba3} }, // Sul OSM: 7869374 WD: Q10329288 -8.168, -34.93 x -8.069, -34.88
    { 2817, NoLogo, 19284, LineMetaDataContent::Subway, Color{0x000000} }, // B2 OSM: 7869622 WD: Q61074931 40.19, 28.87 x 40.22, 29.21
    { 55, 19355, NoLogo, LineMetaDataContent::Subway, Color{0xe60012} }, // 1 OSM: 7871046 WD: Q15303225 34.75, 113.5 x 34.83, 113.8
    { 130, 19374, NoLogo, LineMetaDataContent::Subway, Color{0xa2ae73} }, // 9 OSM: 7871541 WD: Q28441548 34.53, 113.7 x 34.66, 113.9
    { 2820, 19394, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8fbe00} }, // C-10 OSM: 7871793 WD: Q583732 40.4, -4.009 x 40.63, -3.594
    { 443, 19413, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009ad5} }, // C-1 OSM: 7871905 WD: Q3832674 40.4, -3.722 x 40.49, -3.593
    { 2825, 19431, NoLogo, LineMetaDataContent::RapidTransit, Color{0xde0118} }, // C-7 OSM: 7872150 WD: Q8879938 40.38, -3.874 x 40.51, -3.365
    { 279, 19443, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // Red OSM: 7874288 WD: Q152039 42.21, -71.14 x 42.4, -71
    { 1270, 19469, NoLogo, LineMetaDataContent::Subway, Color{0xff8000} }, // Orange OSM: 7874312 WD: Q152029 42.3, -71.12 x 42.44, -71.06
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1 OSM: 7874579 52.26, 104.3 x 52.29, 104.3
    { 16, 19498, NoLogo, LineMetaDataContent::Subway, Color{0x00afec} }, // 2 OSM: 7875250 WD: Q15919822 28.15, 112.9 x 28.21, 113.1
    { 55, 19528, NoLogo, LineMetaDataContent::Subway, Color{0xe60012} }, // 1 OSM: 7875257 WD: Q15911087 28.06, 113 x 28.27, 113
    { 2829, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 4a OSM: 7875272 52.28, 104.3 x 52.29, 104.4
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 4 OSM: 7875275 52.28, 104.3 x 52.29, 104.4
    { 9, 19558, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7d4697} }, // 4 OSM: 7875301 WD: Q6553125 43.75, 125.3 x 43.91, 125.4
    { 59, 19579, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009943} }, // 3 OSM: 7875360 WD: Q6123656 43.77, 125.3 x 43.91, 125.4
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4bc7df} }, // 2 OSM: 7875922 52.27, 104.3 x 52.29, 104.3
    { 475, 19600, 19617, LineMetaDataContent::Subway, Color{0x056d2e} }, // A OSM: 7877753 WD: Q770771 39.92, 32.81 x 39.93, 32.88
    { 260, NoLogo, 19617, LineMetaDataContent::Subway, Color{0xbf0e1c} }, // M1 OSM: 7877773 WD: Q21526526 39.92, 32.73 x 39.97, 32.86
    { 322, NoLogo, 19617, LineMetaDataContent::Subway, Color{0xbf0e1c} }, // M2 OSM: 7877891 WD: Q21526527 39.88, 32.68 x 39.92, 32.86
    { 287, 19639, NoLogo, LineMetaDataContent::Subway, Color{0xffa500} }, // O OSM: 7879290 WD: Q7099668 22.62, 120.3 x 22.63, 120.4
    { 480, 19679, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // R OSM: 7879291 WD: Q7304504 22.56, 120.3 x 22.78, 120.4
    { 59, 19716, 16137, LineMetaDataContent::Subway, Color{0xfe5b10} }, // 3 OSM: 7879839 WD: Q20393 37.48, 126.7 x 37.68, 127.1
    { 6, 19739, 16137, LineMetaDataContent::Subway, Color{0x996cac} }, // 5 OSM: 7879871 WD: Q92530 37.49, 126.8 x 37.58, 127.2
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x006dbb} }, // 3 OSM: 7883242 WD: Q15907883 36.05, 120.3 x 36.17, 120.4
    { 130, 19762, 16137, LineMetaDataContent::Subway, Color{0xaa9872} }, // 9 OSM: 7883317 WD: Q17503 37.5, 126.8 x 37.58, 127.1
    { 16, 19785, NoLogo, LineMetaDataContent::Subway, Color{0xd60e19} }, // 2 OSM: 7883944 WD: Q10946021 29.81, 121.5 x 29.95, 121.7
    { 55, 19806, 2366, LineMetaDataContent::Subway, Color{0xffff00} }, // 1 OSM: 7884489 WD: Q54369 43.65, -79.53 x 43.79, -79.38
    { 55, 19855, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7885089 WD: Q56277837 40.59, 22.93 x 40.65, 22.97
    { 16, 19885, 2366, LineMetaDataContent::Subway, Color{0x008000} }, // 2 OSM: 7885287 WD: Q54371 43.64, -79.54 x 43.73, -79.26
    { 59, NoLogo, 10182, LineMetaDataContent::Subway, Color{0x009651} }, // 3 OSM: 7885547 WD: Q10906683 31.87, 118.7 x 32.17, 118.8
    { 2832, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x77278b} }, // WCE OSM: 7887557 49.13, -123.1 x 49.29, -122.3
    { 2836, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x000000} }, // Conexão Metrô-Aeroporto OSM: 7889062 WD: Q23891467 -29.99, -51.18 x -29.99, -51.18
    { 55, 19924, NoLogo, LineMetaDataContent::Subway, Color{0x5cb439} }, // 1 OSM: 7889178 WD: Q45668 31.28, 120.5 x 31.33, 120.8
    { 2862, 19934, 19948, LineMetaDataContent::Subway, Color{0x808080} }, // RMGL OSM: 7890003 WD: Q7294170 28.42, 77.09 x 28.5, 77.11
    { 55, 19969, NoLogo, LineMetaDataContent::Subway, Color{0xfec04f} }, // 1 OSM: 7890223 WD: Q5985916 25.68, -100.4 x 25.76, -100.2
    { 16, 19987, NoLogo, LineMetaDataContent::Subway, Color{0x6bc069} }, // 2 OSM: 7890224 WD: Q2842186 25.67, -100.3 x 25.77, -100.3
    { 16, 20005, NoLogo, LineMetaDataContent::Subway, Color{0x0066a1} }, // 2 OSM: 7890240 WD: Q6379343 38.9, 121.5 x 39.02, 121.7
    { 294, 3480, NoLogo, LineMetaDataContent::Subway, Color{0x808183} }, // S OSM: 7893704 WD: Q126772 40.58, -73.84 x 40.61, -73.81
    { 294, 20025, NoLogo, LineMetaDataContent::Subway, Color{0x808183} }, // S OSM: 7894362 WD: Q126725 40.66, -73.96 x 40.68, -73.96
    { 55, 20052, NoLogo, LineMetaDataContent::Subway, Color{0xb63f1f} }, // 1 OSM: 7894481 WD: Q5934658 41.76, 123.2 x 41.81, 123.5
    { 16, 20072, NoLogo, LineMetaDataContent::Subway, Color{0xe5703a} }, // 2 OSM: 7894597 WD: Q5933526 41.63, 123.4 x 41.96, 123.5
    { 55, 20103, NoLogo, LineMetaDataContent::Subway, Color{0xeb212f} }, // 1 OSM: 7895188 WD: Q15941872 25.98, 119.3 x 26.15, 119.4
    { 58, 20122, NoLogo, LineMetaDataContent::Subway, Color{0x8e8c13} }, // 13 OSM: 7895357 WD: Q6553065 23.08, 113.4 x 23.14, 113.6
    { 16, 20143, NoLogo, LineMetaDataContent::Subway, Color{0x0070ff} }, // 2 OSM: 7898299 WD: Q56277844 40.57, 22.93 x 40.65, 22.97
    { 59, 20173, NoLogo, LineMetaDataContent::Subway, Color{0xdd00bb} }, // 3 OSM: 7908058 WD: Q5976456 38.92, 121.6 x 39.15, 122
    { 16, 20193, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // 2 OSM: 7909740 WD: Q11087464 25.03, 102.7 x 25.12, 102.8
    { 55, 20213, NoLogo, LineMetaDataContent::Subway, Color{0xdb372b} }, // 1 OSM: 7909748 WD: Q11087462 24.83, 102.7 x 25.03, 102.9
    { 61, 20233, 10182, LineMetaDataContent::Subway, Color{0x4bbbb4} }, // S1 OSM: 7913272 WD: Q10946118 31.72, 118.8 x 31.97, 118.9
    { 164, 20254, 10182, LineMetaDataContent::Subway, Color{0xda60cd} }, // S3 OSM: 7913273 WD: Q10945835 31.91, 118.5 x 31.99, 118.8
    { 55, 20275, NoLogo, LineMetaDataContent::Subway, Color{0x00ab39} }, // 1 OSM: 7913936 WD: Q842103 22.53, 113.8 x 22.65, 114.1
    { 475, 20298, 16137, LineMetaDataContent::Subway, Color{0x3681b7} }, // A OSM: 7919001 WD: Q487643 37.44, 126.4 x 37.6, 127
    { 19, 20324, 16137, LineMetaDataContent::Subway, Color{0xea545d} }, // 8 OSM: 7919019 WD: Q45086 37.43, 127.1 x 37.55, 127.2
    { 27, 20347, 16137, LineMetaDataContent::Subway, Color{0x9e4510} }, // 6 OSM: 7919154 WD: Q92549 37.53, 126.9 x 37.62, 127.1
    { 298, NoLogo, 20370, LineMetaDataContent::Subway, Color{0x00a651} }, // M OSM: 7919553 WD: Q106336770 39.29, -76.78 x 39.41, -76.59
    { 2741, 20425, 16271, LineMetaDataContent::Subway, Color{0xe89038} }, // OR OSM: 7919601 WD: Q4715683 38.88, -77.28 x 38.95, -76.87
    { 2867, 20442, 16271, LineMetaDataContent::Subway, Color{0xe94333} }, // RD OSM: 7919630 WD: Q2193330 38.89, -77.17 x 39.12, -76.99
    { 2870, 20456, 16271, LineMetaDataContent::Subway, Color{0xc0c0c0} }, // SV OSM: 7919737 WD: Q4711838 38.88, -77.49 x 39.01, -76.84
    { 2873, 20473, 16271, LineMetaDataContent::Subway, Color{0x0000ff} }, // BL OSM: 7919758 WD: Q2602185 38.77, -77.17 x 38.9, -76.84
    { 2876, 20488, 16271, LineMetaDataContent::Subway, Color{0x008000} }, // GR OSM: 7919786 WD: Q4715207 38.83, -77.03 x 39.01, -76.91
    { 42, 20504, 16137, LineMetaDataContent::Subway, Color{0x54640d} }, // 7 OSM: 7922930 WD: Q22910 37.48, 126.7 x 37.7, 127.1
    { 437, NoLogo, 20527, LineMetaDataContent::Subway, Color{0x62bb46} }, // Green OSM: 7924527 WD: Q55734262 25.68, -80.32 x 25.85, -80.2
    { 1270, NoLogo, 20527, LineMetaDataContent::Subway, Color{0xf78f1e} }, // Orange OSM: 7924528 WD: Q55734269 25.68, -80.31 x 25.81, -80.2
    { 974, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009832} }, // D OSM: 7925628 WD: Q3239098 48.57, 7.691 x 48.59, 7.816
    { 291, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf29400} }, // C OSM: 7925656 WD: Q2321331 48.55, 7.735 x 48.59, 7.773
    { 27, 20566, 14957, LineMetaDataContent::Subway, Color{0x0066a3} }, // 6 OSM: 7927182 WD: Q668977 50.83, 4.321 x 50.9, 4.37
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff7000} }, // 2 OSM: 7927236 WD: Q5017773 29.98, 31.2 x 30.12, 31.25
    { 354, 20587, 20608, LineMetaDataContent::Subway, Color{0x00dc3c} }, // L2 OSM: 7927568 WD: Q5986160 10.43, -67.01 x 10.51, -66.92
    { 358, 20627, 20608, LineMetaDataContent::Subway, Color{0x0887ff} }, // L3 OSM: 7927573 WD: Q21346332 10.43, -66.94 x 10.5, -66.88
    { 2879, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // L1B OSM: 7928119 WD: Q107191177 37.99, -1.187 x 38.01, -1.161
    { 55, 20648, NoLogo, LineMetaDataContent::Subway, Color{0xf04e98} }, // 1 OSM: 7935038 WD: Q2295084 19.4, -99.2 x 19.43, -99.07
    { 291, 20669, NoLogo, LineMetaDataContent::RapidTransit, Color{0x58a738} }, // C OSM: 7935053 WD: Q2482571 33.89, -118.4 x 33.93, -118.1
    { 974, 20694, NoLogo, LineMetaDataContent::Subway, Color{0xa05da5} }, // D OSM: 7935318 WD: Q3916689 34.05, -118.3 x 34.06, -118.2
    { 9, 20719, NoLogo, LineMetaDataContent::Subway, Color{0x80ffff} }, // 4 OSM: 7935352 WD: Q2837181 19.4, -99.12 x 19.49, -99.1
    { 6, 20740, NoLogo, LineMetaDataContent::Subway, Color{0xffff11} }, // 5 OSM: 7935366 WD: Q1152238 19.41, -99.15 x 19.5, -99.07
    { 15, 20761, NoLogo, LineMetaDataContent::Subway, Color{0xb69764} }, // 12 OSM: 7935368 WD: Q5985548 19.28, -99.2 x 19.38, -99.01
    { 42, 20783, NoLogo, LineMetaDataContent::Subway, Color{0xff8000} }, // 7 OSM: 7935375 WD: Q929645 19.36, -99.2 x 19.51, -99.19
    { 475, 20804, NoLogo, LineMetaDataContent::Subway, Color{0xa3277d} }, // A OSM: 7935382 WD: Q3239049 19.35, -99.07 x 19.42, -98.96
    { 19, 20825, NoLogo, LineMetaDataContent::Subway, Color{0x30c090} }, // 8 OSM: 7935426 WD: Q1149545 19.35, -99.14 x 19.45, -99.06
    { 194, 20846, NoLogo, LineMetaDataContent::Subway, Color{0x408080} }, // B OSM: 7935433 WD: Q3239062 19.43, -99.16 x 19.53, -99.03
    { 16, 20867, NoLogo, LineMetaDataContent::Subway, Color{0x0080ff} }, // 2 OSM: 7935439 WD: Q1152993 19.34, -99.22 x 19.46, -99.13
    { 130, 20888, NoLogo, LineMetaDataContent::Subway, Color{0x804000} }, // 9 OSM: 7935444 WD: Q3239046 19.4, -99.19 x 19.42, -99.06
    { 59, 20909, NoLogo, LineMetaDataContent::Subway, Color{0xae9d27} }, // 3 OSM: 7935449 WD: Q945935 19.32, -99.18 x 19.5, -99.12
    { 27, 20930, NoLogo, LineMetaDataContent::Subway, Color{0xe00050} }, // 6 OSM: 7935454 WD: Q3238990 19.48, -99.2 x 19.51, -99.1
    { 2883, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xdb5450} }, // PATCO OSM: 7939445 39.83, -75.17 x 39.96, -75
    { 1906, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x233e99} }, // WTR OSM: 7940934 WD: Q7986701 39.95, -75.18 x 40.26, -74.82
    { 2434, NoLogo, 20951, LineMetaDataContent::Subway, Color{0xef3941} }, // NWK–WTC OSM: 7943869 WD: Q2673356 40.71, -74.16 x 40.74, -74.01
    { 2889, 20960, 20951, LineMetaDataContent::Subway, Color{0x009e58} }, // HOB–WTC OSM: 7943874 WD: Q2789573 40.71, -74.04 x 40.74, -74.01
    { 2899, NoLogo, 20951, LineMetaDataContent::Subway, Color{0x0082c6} }, // HOB–33 OSM: 7943885 WD: Q2319374 40.73, -74.03 x 40.75, -73.99
    { 2908, NoLogo, 20951, LineMetaDataContent::Subway, Color{0xfdb827} }, // JSQ–33 OSM: 7943962 WD: Q4993433 40.72, -74.06 x 40.75, -73.99
    { 55, 20974, NoLogo, LineMetaDataContent::Subway, Color{0xe77405} }, // 1 OSM: 7944061 WD: Q2333617 -22.98, -43.24 x -22.9, -43.17
    { 2917, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x999e9e} }, // VLT Curado-Cajueiro Seco OSM: 7945216 WD: Q18473919 -8.177, -34.99 x -8.075, -34.93
    { 55, 20998, NoLogo, LineMetaDataContent::Subway, Color{0xc8102e} }, // 1 OSM: 7948593 WD: Q10921992 45.6, 126.6 x 45.79, 126.7
    { 59, 21022, NoLogo, LineMetaDataContent::Subway, Color{0xffc72c} }, // 3 OSM: 7949019 WD: Q10921994 45.69, 126.5 x 45.78, 126.7
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf50000} }, // 1 OSM: 7949047 WD: Q10916959 31.69, 117.3 x 31.89, 117.3
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x006bfa} }, // 2 OSM: 7949335 WD: Q10916960 31.85, 117.1 x 31.87, 117.4
    { 55, 21046, NoLogo, LineMetaDataContent::Subway, Color{0xe50011} }, // 1 OSM: 7949339 WD: Q15913092 43.79, 125.3 x 43.95, 125.3
    { 2942, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf58220} }, // BSL OSM: 7950670 WD: Q837022 39.91, -75.17 x 40.04, -75.14
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x42b227} }, // 1 OSM: 7951024 WD: Q6379309 38.84, 121.5 x 39.02, 121.6
    { 2946, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0066ff} }, // MFL OSM: 7953598 WD: Q823251 39.95, -75.26 x 40.02, -75.08
    { 2950, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x84388a} }, // NHSL OSM: 7953621 WD: Q2205806 39.96, -75.35 x 40.11, -75.26
    { 15, 21066, NoLogo, LineMetaDataContent::Subway, Color{0x523e98} }, // 12 OSM: 7957874 WD: Q10938157 38.8, 121.1 x 38.86, 121.5
    { 2955, 21087, 7604, LineMetaDataContent::Subway, Color{0x007a33} }, // Μ1 OSM: 7963514 WD: Q6553095 37.94, 23.64 x 38.07, 23.81
    { 2959, 21111, 7604, LineMetaDataContent::Subway, Color{0xda291c} }, // Μ2 OSM: 7963569 WD: Q9295813 37.89, 23.69 x 38.02, 23.75
    { 480, 21135, NoLogo, LineMetaDataContent::Subway, Color{0x2d3087} }, // R OSM: 7963671 WD: Q225095 35.61, 139.7 x 35.65, 139.8
    { 55, NoLogo, 21158, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 7963913 WD: Q30750331 40.14, 44.47 x 40.2, 44.52
    { 19, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x9dabaa} }, // 8 OSM: 7964884 WD: Q11124525 30.43, 114.3 x 30.68, 114.4
    { 2963, 21176, 19147, LineMetaDataContent::Tramway, Color{0x98cd37} }, // ML4 OSM: 7968999 WD: Q1637556 40.22, -3.773 x 40.25, -3.749
    { 2967, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006400} }, // Tranvía OSM: 7981323 37.77, -3.79 x 37.81, -3.778
    { 2976, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0354a6} }, // DTL OSM: 7981644 WD: Q1663943 1.278, 103.7 x 1.413, 104
    { 2980, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x9016b2} }, // NEL OSM: 7981649 WD: Q1725116 1.265, 103.8 x 1.415, 103.9
    { 2984, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff9a00} }, // CCL OSM: 7981685 WD: Q2154003 1.265, 103.8 x 1.353, 103.9
    { 2988, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x009530} }, // EWL OSM: 7981689 WD: Q1895425 1.276, 103.6 x 1.376, 104
    { 1142, NoLogo, 19617, LineMetaDataContent::Subway, Color{0xbf0e1c} }, // M3 OSM: 7981707 WD: Q21526528 39.97, 32.55 x 39.99, 32.73
    { 8, NoLogo, 19617, LineMetaDataContent::Subway, Color{0xedaf2e} }, // M4 OSM: 7981756 WD: Q31193144 39.92, 32.84 x 40, 32.88
    { 260, NoLogo, 21200, LineMetaDataContent::Subway, Color{0x0000ff} }, // M1 OSM: 7981873 WD: Q3238655 38.39, 27.07 x 38.47, 27.23
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xed1c24} }, // 2 OSM: 7986215 WD: Q11103955 22.86, 113.7 x 23.09, 113.9
    { 2992, 21222, 21244, LineMetaDataContent::Subway, Color{0xff748c} }, // Pink Line OSM: 7989308 WD: Q17053988 26.88, 75.75 x 26.93, 75.83
    { 3002, 21266, NoLogo, LineMetaDataContent::Subway, Color{0x246b5b} }, // BTS Silom OSM: 7989387 WD: Q2634702 13.71, 100.5 x 13.75, 100.5
    { 3012, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf9c212} }, // U AVO OSM: 7993108 40.64, -8.654 x 41.15, -8.564
    { 9, 21279, NoLogo, LineMetaDataContent::Tramway, Color{0xf25482} }, // 4 OSM: 7999217 WD: Q2527775 50.79, 4.318 x 50.86, 4.363
    { 226, 21300, 6893, LineMetaDataContent::Tramway, Color{0xa12944} }, // 25 OSM: 7999338 WD: Q3238750 50.8, 4.358 x 50.87, 4.408
    { 486, 21322, 6893, LineMetaDataContent::Tramway, Color{0xf3c300} }, // 55 OSM: 7999374 WD: Q2236365 50.86, 4.358 x 50.88, 4.416
    { 560, 21344, 6893, LineMetaDataContent::Tramway, Color{0x91bee7} }, // 82 OSM: 7999733 WD: Q2534011 50.78, 4.29 x 50.87, 4.341
    { 59, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcc00} }, // 3 OSM: 8000255 WD: Q13422345 14.54, 121 x 14.65, 121.1
    { 55, 21366, 21366, LineMetaDataContent::RapidTransit, Color{0x008000} }, // 1 OSM: 8000262 WD: Q4165607 14.53, 121 x 14.66, 121
    { 16, NoLogo, 21366, LineMetaDataContent::Subway, Color{0x800080} }, // 2 OSM: 8000265 WD: Q4165317 14.6, 121 x 14.63, 121.1
    { 3018, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfe8e10} }, // AG OSM: 8000298 WD: Q474391 3.12, 101.7 x 3.189, 101.8
    { 130, 21379, NoLogo, LineMetaDataContent::Subway, Color{0x008000} }, // 9 OSM: 8000326 WD: Q6717618 2.983, 101.6 x 3.177, 101.8
    { 3021, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x721422} }, // SP OSM: 8000405 WD: Q474391 2.994, 101.6 x 3.189, 101.7
    { 229, 21400, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe0115f} }, // KJ OSM: 8000461 WD: Q248445 2.996, 101.6 x 3.231, 101.7
    { 39, 21421, 21445, LineMetaDataContent::Subway, Color{0xff8c00} }, // T OSM: 8000572 WD: Q981826 43.03, 141.3 x 43.09, 141.5
    { 468, 21457, 21445, LineMetaDataContent::Subway, Color{0x008800} }, // N OSM: 8000575 WD: Q843793 42.99, 141.3 x 43.11, 141.4
    { 1933, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // R6 OSM: 8005936 48.62, 21.19 x 48.71, 21.24
    { 3024, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x3a88bf} }, // 941 OSM: 8009538 WD: Q115756382 46.7, 9.386 x 46.98, 9.689
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x55bace} }, // 3 OSM: 8013591 48.68, 21.26 x 48.72, 21.3
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x5cbf14} }, // 7 OSM: 8013592 48.68, 21.24 x 48.73, 21.3
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x7477b0} }, // 4 OSM: 8013593 48.68, 21.24 x 48.74, 21.27
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf5d907} }, // 9 OSM: 8013594 48.68, 21.23 x 48.74, 21.3
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd2005c} }, // 2 OSM: 8013595 48.72, 21.24 x 48.74, 21.27
    { 298, 21483, 21523, LineMetaDataContent::Subway, Color{0xf62e36} }, // M OSM: 8015940 WD: Q1147028 35.67, 139.6 x 35.73, 139.8
    { 3028, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x11385b} }, // 金山(Jinshan) OSM: 8019734 WD: Q3338133 30.73, 121.3 x 31.16, 121.4
    { 475, 21551, NoLogo, LineMetaDataContent::Subway, Color{0xe85298} }, // A OSM: 8019854 WD: Q720653 35.58, 139.7 x 35.71, 139.8
    { 294, 21580, NoLogo, LineMetaDataContent::Subway, Color{0x6cbb5a} }, // S OSM: 8019866 WD: Q1374502 35.65, 139.4 x 35.8, 139.9
    { 327, 21610, NoLogo, LineMetaDataContent::Subway, Color{0xb6007a} }, // E OSM: 8019893 WD: Q384862 35.65, 139.6 x 35.76, 139.8
    { 448, 21636, NoLogo, LineMetaDataContent::Subway, Color{0x0079c2} }, // I OSM: 8019914 WD: Q1374506 35.63, 139.6 x 35.79, 139.8
    { 3044, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G44 OSM: 8021111 WD: Q101110571 47.37, 18.87 x 47.5, 19.04
    { 3048, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S506 OSM: 8021112 WD: Q111752752 47.19, 21.58 x 47.52, 21.82
    { 3053, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G80 OSM: 8021113 WD: Q101147264 47.49, 19.08 x 47.54, 19.39
    { 3057, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G50 OSM: 8021114 WD: Q109333265 47.17, 19.06 x 47.52, 20.18
    { 291, 21662, 21523, LineMetaDataContent::Subway, Color{0x00bb85} }, // C OSM: 8026069 WD: Q1075089 35.66, 139.7 x 35.78, 139.8
    { 468, 21699, 21523, LineMetaDataContent::Subway, Color{0x00ac9b} }, // N OSM: 8026071 WD: Q520772 35.63, 139.7 x 35.78, 139.8
    { 464, 21736, 21523, LineMetaDataContent::Subway, Color{0xff9500} }, // G OSM: 8026077 WD: Q1073046 35.66, 139.7 x 35.71, 139.8
    { 839, 21771, 21523, LineMetaDataContent::Subway, Color{0xc1a470} }, // Y OSM: 8026115 WD: Q787305 35.64, 139.6 x 35.79, 139.8
    { 39, 21812, 21523, LineMetaDataContent::Subway, Color{0x009bbf} }, // T OSM: 8026124 WD: Q1147054 35.66, 139.7 x 35.71, 140
    { 34, 21848, 21523, LineMetaDataContent::Subway, Color{0xb5b5ac} }, // H OSM: 8026149 WD: Q1196223 35.64, 139.7 x 35.75, 139.8
    { 294, 21884, NoLogo, LineMetaDataContent::Subway, Color{0xffaadd} }, // S OSM: 8028801 WD: Q1073354 34.64, 135.5 x 34.69, 135.6
    { 298, 21924, NoLogo, LineMetaDataContent::Subway, Color{0xdd0000} }, // M OSM: 8028805 WD: Q1192413 34.56, 135.5 x 34.81, 135.5
    { 448, 21961, NoLogo, LineMetaDataContent::Subway, Color{0xff9900} }, // I OSM: 8028826 WD: Q1066118 34.67, 135.5 x 34.76, 135.6
    { 408, 22001, NoLogo, LineMetaDataContent::Subway, Color{0x662211} }, // K OSM: 8028828 WD: Q1143250 34.64, 135.5 x 34.71, 135.5
    { 468, 22039, NoLogo, LineMetaDataContent::Subway, Color{0xaadd55} }, // N OSM: 8028846 WD: Q284828 34.67, 135.5 x 34.72, 135.6
    { 839, 22093, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // Y OSM: 8028853 WD: Q1067748 34.61, 135.5 x 34.7, 135.5
    { 39, 22132, NoLogo, LineMetaDataContent::Subway, Color{0x540a56} }, // T OSM: 8028879 WD: Q1142773 34.6, 135.5 x 34.75, 135.6
    { 408, 22170, 22195, LineMetaDataContent::Subway, Color{0x3cb371} }, // K OSM: 8030551 WD: Q762347 34.96, 135.8 x 35.06, 135.8
    { 39, 22214, 22195, LineMetaDataContent::Subway, Color{0xff4500} }, // T OSM: 8030553 WD: Q1143898 34.93, 135.7 x 35.01, 135.8
    { 294, 22236, 16870, LineMetaDataContent::Subway, Color{0xff0000} }, // S OSM: 8030762 WD: Q1132780 35.09, 136.9 x 35.17, 137
    { 34, 22281, 16870, LineMetaDataContent::Subway, Color{0xffffcc} }, // H OSM: 8030765 WD: Q1132799 35.14, 136.9 x 35.18, 137
    { 327, 22326, 16870, LineMetaDataContent::Subway, Color{0x8f76d6} }, // E OSM: 8030779 WD: Q1045061 35.09, 136.9 x 35.14, 136.9
    { 39, 22365, 16870, LineMetaDataContent::Subway, Color{0xadd8e6} }, // T OSM: 8030785 WD: Q1043806 35.12, 136.9 x 35.22, 137
    { 298, 22407, 16870, LineMetaDataContent::Subway, Color{0x8f76d6} }, // M OSM: 8031607 WD: Q906775 35.12, 136.9 x 35.2, 137
    { 434, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe9527d} }, // S9 OSM: 8033205 41.35, 2.001 x 41.41, 2.149
    { 55, 22446, 22469, LineMetaDataContent::Subway, Color{0x0000ff} }, // 1 OSM: 8034179 WD: Q6427301 22.46, 88.34 x 22.65, 88.4
    { 55, NoLogo, 19014, LineMetaDataContent::Subway, Color{0x3281c4} }, // 1 OSM: 8037596 WD: Q19891160 12.98, 80.16 x 13.18, 80.31
    { 3061, 22499, 19948, LineMetaDataContent::Subway, Color{0x4169e1} }, // Blue Line OSM: 8037671 WD: Q1029921 28.55, 77.02 x 28.66, 77.38
    { 2359, 22522, 19948, LineMetaDataContent::Subway, Color{0x008000} }, // Green Line OSM: 8037672 WD: Q5602820 28.65, 76.91 x 28.7, 77.17
    { 3071, 22545, 19948, LineMetaDataContent::Subway, Color{0x553592} }, // Violet Line OSM: 8037706 WD: Q3634451 28.34, 77.21 x 28.67, 77.32
    { 3083, 22568, 19948, LineMetaDataContent::Subway, Color{0xffdf00} }, // Yellow Line OSM: 8037713 WD: Q795156 28.46, 77.07 x 28.75, 77.23
    { 3095, NoLogo, 19948, LineMetaDataContent::Subway, Color{0xff8c00} }, // AEx OSM: 8037716 WD: Q5253735 28.55, 77.06 x 28.64, 77.22
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xeb3d1a} }, // 2 OSM: 8040132 WD: Q21245979 22.72, 108.3 x 22.89, 108.4
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xfe4998} }, // 3 OSM: 8040148 WD: Q11087465 24.99, 102.6 x 25.05, 102.8
    { 3099, 22591, 19948, LineMetaDataContent::Subway, Color{0xcc338b} }, // Magenta Line OSM: 8051576 WD: Q19893471 28.54, 77.08 x 28.63, 77.34
    { 130, 22614, 19948, LineMetaDataContent::Subway, Color{0x838996} }, // 9 OSM: 8051593 WD: Q47100305 28.61, 76.98 x 28.62, 77.02
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xabd02c} }, // 18 OSM: 8054951 50.05, 14.39 x 50.11, 14.44
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa7c9ae} }, // 17 OSM: 8055113 50, 14.4 x 50.13, 14.46
    { 917, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdc008f} }, // 99 OSM: 8060661 50.06, 14.3 x 50.08, 14.51
    { 870, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdc008f} }, // 98 OSM: 8060662 50.06, 14.3 x 50.09, 14.5
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf36f42} }, // 3 OSM: 8101318 WD: Q109558673 52.29, 14.47 x 52.34, 14.56
    { 54, 22637, 4474, LineMetaDataContent::Subway, Color{0x82c0c0} }, // 11 OSM: 8119161 WD: Q617574 55.65, 37.44 x 55.8, 37.74
    { 42, 22662, NoLogo, LineMetaDataContent::RapidTransit, Color{0x139593} }, // 7 OSM: 8119877 WD: Q6151888 2.743, 101.7 x 3.134, 101.7
    { 27, 22683, NoLogo, LineMetaDataContent::RapidTransit, Color{0x800080} }, // 6 OSM: 8119880 WD: Q1431592 2.743, 101.7 x 3.134, 101.7
    { 206, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // T1 OSM: 8120923 10.34, -67.04 x 10.43, -67.01
    { 53, 11776, 226, LineMetaDataContent::RapidTransit, Color{0xb72841} }, // S11 OSM: 8149205 WD: Q459508 47.98, 12.85 x 48.04, 12.93
    { 164, 11776, 226, LineMetaDataContent::RapidTransit, Color{0x22b24c} }, // S3 OSM: 8149206 WD: Q459508 47.28, 12.79 x 47.84, 13.23
    { 50, NoLogo, 11776, LineMetaDataContent::RapidTransit, Color{0x0072bc} }, // S2 OSM: 8149207 WD: Q106368749 47.81, 12.97 x 47.97, 13.27
    { 61, NoLogo, 11776, LineMetaDataContent::RapidTransit, Color{0xb72841} }, // S1 OSM: 8149208 WD: Q106368744 47.81, 12.92 x 47.99, 13.05
    { 3112, 22704, NoLogo, LineMetaDataContent::RapidTransit, Color{0x999999} }, // 浦江 OSM: 8167022 WD: Q29704153 31.03, 121.5 x 31.06, 121.5
    { 1979, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // R4 OSM: 8196259 48.62, 21.19 x 48.73, 21.25
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xea7b08} }, // 6 OSM: 8196338 48.7, 21.23 x 48.73, 21.27
    { 1976, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // R3 OSM: 8197830 48.62, 21.19 x 48.74, 21.25
    { 2811, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // R7 OSM: 8197872 48.62, 21.19 x 48.73, 21.24
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // T2 OSM: 8209896 WD: Q16655789 47.99, 0.1929 x 48.02, 0.2359
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xeb001b} }, // T1 OSM: 8209897 WD: Q3239229 47.96, 0.152 x 48.02, 0.2304
    { 437, NoLogo, 2767, LineMetaDataContent::RapidTransit, Color{0x009933} }, // Green OSM: 8212097 WD: Q19960507 54.9, -1.711 x 55.04, -1.382
    { 194, 22725, NoLogo, LineMetaDataContent::Subway, Color{0xe3131b} }, // B OSM: 8219357 WD: Q2778331 34.05, -118.4 x 34.17, -118.2
    { 272, NoLogo, 8985, LineMetaDataContent::RapidTransit, Color{0xffe800} }, // Yellow OSM: 8237627 WD: Q54874971 38, -121.9 x 38.02, -121.8
    { 2992, NoLogo, 19948, LineMetaDataContent::Subway, Color{0xfc8eac} }, // Pink Line OSM: 8242438 WD: Q19891094 28.57, 77.12 x 28.72, 77.32
    { 59, 22750, 16137, LineMetaDataContent::Subway, Color{0xbb8c00} }, // 3 OSM: 8247017 WD: Q86468 35.17, 129 x 35.21, 129.1
    { 9, NoLogo, 13305, LineMetaDataContent::Tramway, Color{0xfc751c} }, // 4 OSM: 8255319 WD: Q2735863 52.04, 4.245 x 52.08, 4.543
    { 59, NoLogo, 13305, LineMetaDataContent::Tramway, Color{0x703276} }, // 3 OSM: 8255320 WD: Q3056105 52.05, 4.228 x 52.08, 4.518
    { 55, 22773, 16137, LineMetaDataContent::Subway, Color{0xf06a00} }, // 1 OSM: 8255698 WD: Q86356 35.05, 129 x 35.28, 129.1
    { 16, 22796, 16137, LineMetaDataContent::Subway, Color{0x81bf48} }, // 2 OSM: 8258658 WD: Q86467 35.13, 129 x 35.34, 129.2
    { 3119, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00a2c9} }, // 311 OSM: 8272972 WD: Q85977451 35.16, 129.1 x 35.54, 129.4
    { 47, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x5e2d91} }, // S8 OSM: 8294822 WD: Q7388382 47.2, 8.519 x 47.5, 8.782
    { 41, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xfebe10} }, // S7 OSM: 8294823 WD: Q7388366 47.22, 8.511 x 47.5, 8.824
    { 42, 22819, NoLogo, LineMetaDataContent::Subway, Color{0x6ad1e3} }, // 7 OSM: 8297146 WD: Q11074646 30.61, 104 x 30.7, 104.1
    { 59, 22829, NoLogo, LineMetaDataContent::Subway, Color{0xd40f7d} }, // 3 OSM: 8297273 WD: Q8985154 30.54, 103.9 x 30.82, 104.2
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x008000} }, // 2 OSM: 8297697 WD: Q84767109 17.37, 78.48 x 17.45, 78.5
    { 3123, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // Red Line OSM: 8297698 WD: Q646209 17.35, 78.37 x 17.5, 78.55
    { 16, 22839, NoLogo, LineMetaDataContent::Subway, Color{0xff5c39} }, // 2 OSM: 8298113 WD: Q4391357 30.56, 104 x 30.76, 104.3
    { 9, 22849, NoLogo, LineMetaDataContent::Subway, Color{0x44af52} }, // 4 OSM: 8298132 WD: Q11074645 30.64, 103.8 x 30.69, 104.2
    { 65, 22859, NoLogo, LineMetaDataContent::Subway, Color{0x003da5} }, // 10 OSM: 8298254 WD: Q11074644 30.41, 103.8 x 30.63, 104
    { 15, 22870, NoLogo, LineMetaDataContent::Subway, Color{0xffcc00} }, // 12 OSM: 8298259 WD: Q17053935 2.928, 101.6 x 3.215, 101.7
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 8299497 WD: Q18128813 26.77, 80.88 x 26.89, 81
    { 3132, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf2a900} }, // 环 OSM: 8300611 WD: Q15915083 29.5, 106.4 x 29.61, 106.6
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00a3e0} }, // 5 OSM: 8300867 WD: Q15912187 29.41, 106.4 x 29.76, 106.6
    { 65, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x5a2a8d} }, // 10 OSM: 8300873 WD: Q15914281 29.51, 106.5 x 29.75, 106.7
    { 3136, NoLogo, 3710, LineMetaDataContent::Tramway, Color{0xe1261c} }, // 西郊 OSM: 8303696 WD: Q3400451 39.97, 116.2 x 39.99, 116.3
    { 3143, 22892, 226, LineMetaDataContent::RapidTransit, Color{0x56033a} }, // S 6 OSM: 8303864 WD: Q63217185 51.06, 12.37 x 51.4, 12.7
    { 1660, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x799ccd} }, // S21 OSM: 8303997 WD: Q7388225 47.38, 8.47 x 47.44, 8.55
    { 16, 22917, 22951, LineMetaDataContent::Subway, Color{0xfdb935} }, // 2 OSM: 8306848 WD: Q28412021 36.62, 116.9 x 36.71, 117.2
    { 2395, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xf9aa8f} }, // S41 OSM: 8306928 WD: Q15088595 47.49, 8.535 x 47.53, 8.724
    { 3147, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x75593b} }, // S27 OSM: 8308820 WD: Q106451356 47.47, 8.22 x 47.62, 8.308
    { 55, 22971, NoLogo, LineMetaDataContent::Subway, Color{0x0067a1} }, // 1 OSM: 8309087 WD: Q5963161 30.57, 114.1 x 30.71, 114.3
    { 3151, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xbda07c} }, // S15 OSM: 8309090 WD: Q7388191 47.22, 8.368 x 47.51, 8.864
    { 44, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x48b4ca} }, // S5 OSM: 8311264 WD: Q7388335 47.17, 8.429 x 47.41, 8.864
    { 3155, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0099aa} }, // JRL OSM: 8312419 WD: Q3391052 1.312, 103.7 x 1.386, 103.7
    { 3159, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x000000} }, // WES OSM: 8313440 45.31, -122.8 x 45.49, -122.8
    { 16, 22991, NoLogo, LineMetaDataContent::Subway, Color{0xff7300} }, // 2 OSM: 8323745 WD: Q2657097 30.12, 120 x 30.36, 120.3
    { 55, 23011, NoLogo, LineMetaDataContent::Subway, Color{0x1590ca} }, // 1 OSM: 8324096 WD: Q10946020 29.84, 121.4 x 29.92, 121.9
    { 26, 23032, 3710, LineMetaDataContent::Subway, Color{0x6ba53a} }, // 16 OSM: 8324250 WD: Q6553080 39.83, 116.1 x 40.07, 116.3
    { 1857, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x0588cc} }, // S30 OSM: 8327718 WD: Q7388265 47.5, 8.722 x 47.59, 9.106
    { 3163, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x007e94} }, // S26 OSM: 8327719 WD: Q2321332 47.26, 8.724 x 47.51, 8.934
    { 1233, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x7a4c29} }, // S13 OSM: 8327720 WD: Q7388186 47.13, 8.675 x 47.23, 8.75
    { 55, NoLogo, 23053, LineMetaDataContent::Subway, Color{0xec7000} }, // 1 OSM: 8337169 WD: Q15953685 24.45, 118 x 24.66, 118.1
    { 225, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xb41e8e} }, // S25 OSM: 8355962 WD: Q18391643 46.92, 8.519 x 47.38, 9.084
    { 3167, 23073, NoLogo, LineMetaDataContent::Subway, Color{0x939598} }, // JL OSM: 8391469 WD: Q5365768 35.75, 139.8 x 35.9, 140.1
    { 42, 23095, 1624, LineMetaDataContent::Tramway, Color{} }, // 7 OSM: 8426298 WD: Q104867986 49.43, 11.08 x 49.45, 11.09
    { 55, 23112, 19948, LineMetaDataContent::Subway, Color{0xff4040} }, // 1 OSM: 8429148 WD: Q3278367 28.67, 77.1 x 28.72, 77.42
    { 1886, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x73b3d7} }, // S35 OSM: 8437405 WD: Q7388272 47.46, 8.724 x 47.51, 9.042
    { 924, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x32a384} }, // S29 OSM: 8437511 WD: Q7388235 47.5, 8.714 x 47.66, 8.856
    { 1109, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xad99c9} }, // S40 OSM: 8437648 WD: Q7388295 47.13, 8.682 x 47.22, 8.817
    { 3170, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x198ea3} }, // S17 OSM: 8437734 WD: Q225086 47.34, 8.27 x 47.41, 8.406
    { 3174, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // ExpressTram OSM: 8438647 WD: Q5421647 42.2, -83.36 x 42.21, -83.35
    { 403, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfc0200} }, // ATS OSM: 8438739 WD: Q2828747 41.97, -87.91 x 41.99, -87.88
    { 9, 23135, NoLogo, LineMetaDataContent::Subway, Color{0x0072ce} }, // 4 OSM: 8439223 WD: Q6112249 31.13, 120.6 x 31.41, 120.7
    { 16, 23156, NoLogo, LineMetaDataContent::Subway, Color{0xe60000} }, // 2 OSM: 8439253 WD: Q1054280 31.25, 120.6 x 31.44, 120.8
    { 272, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // Yellow OSM: 8464133 WD: Q55683262 9.006, 7.272 x 9.057, 7.472
    { 949, 23166, 11891, LineMetaDataContent::Subway, Color{0x00adef} }, // 52 OSM: 8466672 WD: Q2466115 52.34, 4.874 x 52.4, 4.933
    { 3186, 23210, 3131, LineMetaDataContent::Tramway, Color{0xe65e37} }, // T11 OSM: 8467024 WD: Q1083349 48.93, 2.302 x 48.96, 2.424
    { 3190, 23244, NoLogo, LineMetaDataContent::RapidTransit, Color{0x666666} }, // Π4 OSM: 8467447 WD: Q17853551 37.91, 23.71 x 38.07, 23.95
    { 3194, 23279, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd00} }, // Π1 OSM: 8467448 WD: Q47477364 37.91, 23.64 x 38.07, 23.95
    { 3198, 23314, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a3e0} }, // Π2 OSM: 8467516 WD: Q20552930 37.91, 22.73 x 38.09, 23.74
    { 3202, 23349, 3710, LineMetaDataContent::Subway, Color{0xd85f26} }, // 25S OSM: 8469061 WD: Q8048350 39.7, 116 x 39.73, 116.1
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x254395} }, // T1 OSM: 8475071 WD: Q55693065 43.75, 11.17 x 43.8, 11.25
    { 130, NoLogo, 23375, LineMetaDataContent::Subway, Color{0x063a91} }, // 9 OSM: 8478970 WD: Q3125123 39.01, 117.2 x 39.14, 117.7
    { 59, NoLogo, 23375, LineMetaDataContent::Subway, Color{0x128bbe} }, // 3 OSM: 8489969 WD: Q6553117 39.06, 117.1 x 39.24, 117.3
    { 16, NoLogo, 23375, LineMetaDataContent::Subway, Color{0xece114} }, // 2 OSM: 8489970 WD: Q6553104 39.13, 117.1 x 39.16, 117.4
    { 55, 23392, 23375, LineMetaDataContent::Subway, Color{0xbd0016} }, // 1 OSM: 8489971 WD: Q6126171 39.01, 117.1 x 39.21, 117.4
    { 27, NoLogo, 23375, LineMetaDataContent::Subway, Color{0x9f216f} }, // 6 OSM: 8490135 WD: Q10940001 39.04, 117.1 x 39.21, 117.3
    { 9, 23422, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009049} }, // 4 OSM: 8499866 WD: Q109046034 36.8, 10.06 x 36.82, 10.19
    { 3206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 201 OSM: 8505446 52.41, 16.91 x 52.46, 16.96
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xaa6133} }, // 14 OSM: 8505950 52.38, 16.88 x 52.46, 16.92
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc597cd} }, // 12 OSM: 8505951 52.37, 16.91 x 52.46, 16.95
    { 54, 23446, NoLogo, LineMetaDataContent::Tramway, Color{0x5ec79f} }, // 11 OSM: 8505952 WD: Q108000659 52.37, 16.89 x 52.44, 16.96
    { 3210, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf166a7} }, // 42X OSM: 8506177 58.9, 17.86 x 59.63, 18.16
    { 3214, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // TGM OSM: 8510421 WD: Q1306749 36.8, 10.19 x 36.88, 10.34
    { 6, 23485, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009049} }, // 5 OSM: 8510688 WD: Q109046037 36.8, 10.12 x 36.84, 10.18
    { 59, 23509, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009049} }, // 3 OSM: 8510789 WD: Q109046031 36.8, 10.13 x 36.83, 10.18
    { 16, 23533, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009049} }, // 2 OSM: 8511768 WD: Q109046023 36.81, 10.18 x 36.86, 10.2
    { 1316, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf166a7} }, // 44 OSM: 8518402 59.2, 17.81 x 59.45, 18.07
    { 3218, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf166a7} }, // 43X OSM: 8518405 58.9, 17.81 x 59.45, 18.16
    { 55, 23557, 23375, LineMetaDataContent::Tramway, Color{0x8fc31f} }, // 1 OSM: 8548848 WD: Q1659593 39.02, 117.7 x 39.09, 117.7
    { 130, 23580, 6893, LineMetaDataContent::Tramway, Color{0xc44f97} }, // 9 OSM: 8624098 WD: Q28609936 50.86, 4.309 x 50.9, 4.332
    { 3222, 23601, 16137, LineMetaDataContent::Subway, Color{0x0c8e72} }, // GC OSM: 8656365 WD: Q20192 37.58, 127 x 37.88, 127.7
    { 61, 23621, 23635, LineMetaDataContent::RapidTransit, Color{0xfd0000} }, // S1 OSM: 8661616 WD: Q46365 45.31, 9.032 x 45.62, 9.498
    { 50, 23657, 23635, LineMetaDataContent::RapidTransit, Color{0x00ad8d} }, // S2 OSM: 8661617 WD: Q1160540 45.43, 9.14 x 45.65, 9.238
    { 164, 23671, 23635, LineMetaDataContent::RapidTransit, Color{0xb90042} }, // S3 OSM: 8662821 WD: Q600028 45.47, 9.032 x 45.62, 9.176
    { 213, 23685, 23635, LineMetaDataContent::RapidTransit, Color{0x00d133} }, // S4 OSM: 8662822 WD: Q1160571 45.47, 9.133 x 45.67, 9.175
    { 44, 23699, 23635, LineMetaDataContent::RapidTransit, Color{0xff980d} }, // S5 OSM: 8662846 WD: Q1159300 45.46, 8.789 x 45.82, 9.591
    { 199, 23713, 23635, LineMetaDataContent::RapidTransit, Color{0xf0df00} }, // S6 OSM: 8662847 WD: Q1160580 45.43, 8.625 x 45.53, 9.591
    { 3225, 12500, 12320, LineMetaDataContent::Subway, Color{0x009fe3} }, // L10 Sud OSM: 8663605 WD: Q1577033 41.32, 2.113 x 41.38, 2.148
    { 3233, 23727, 16137, LineMetaDataContent::Subway, Color{0x73c7a6} }, // G·J OSM: 8667957 WD: Q18233162 37.47, 126.7 x 37.9, 127.6
    { 412, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // L OSM: 8668342 WD: Q48770897 39.74, -105 x 39.76, -105
    { 325, 23753, NoLogo, LineMetaDataContent::Tramway, Color{0xff7f00} }, // 24E OSM: 8682141 WD: Q63230204 38.71, -9.162 x 38.73, -9.143
    { 55, 23766, 16137, LineMetaDataContent::Subway, Color{0x005daa} }, // 1 OSM: 8691899 WD: Q20280 36.77, 126.6 x 37.95, 127.2
    { 3238, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008144} }, // 902 OSM: 8708438 WD: Q5060656 44.95, -93.28 x 44.98, -93.09
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf9b000} }, // 16 OSM: 8712352 52.32, 9.722 x 52.38, 9.837
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe4003a} }, // 18 OSM: 8712368 52.33, 9.734 x 52.39, 9.804
    { 3242, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa4228e} }, // 750 OSM: 8718106 40.23, -112 x 41.23, -111.7
    { 3246, 23789, 16137, LineMetaDataContent::Subway, Color{0x8fc31e} }, // 321 OSM: 8725316 WD: Q12601528 37.3, 126.8 x 37.48, 126.8
    { 3251, 23827, NoLogo, LineMetaDataContent::Tramway, Color{0x808080} }, // 720 OSM: 8725393 WD: Q7634842 40.72, -111.9 x 40.72, -111.9
    { 2525, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xb1d355} }, // CAT OSM: 8726880 WD: Q694029 48.12, 16.38 x 48.21, 16.57
    { 404, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9bb14f} }, // TS OSM: 8729960 33.41, -111.9 x 33.43, -111.9
    { 3255, 23847, 16137, LineMetaDataContent::Subway, Color{0x0054a6} }, // GG OSM: 8735483 WD: Q23933857 37.26, 127.1 x 37.41, 127.6
    { 55, NoLogo, 23867, LineMetaDataContent::Subway, Color{0x10069f} }, // 1 OSM: 8742572 WD: Q17498490 43.76, 87.47 x 43.92, 87.62
    { 206, 23880, 23880, LineMetaDataContent::Tramway, Color{0x008000} }, // T1 OSM: 8753522 WD: Q2661356 43.24, -2.952 x 43.27, -2.905
    { 15, 23897, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 12 OSM: 8823281 WD: Q1485440 47.55, 19.09 x 47.57, 19.13
    { 3258, NoLogo, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 56A OSM: 8823482 WD: Q21996124 47.48, 18.96 x 47.54, 19.05
    { 3262, 23921, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 59A OSM: 8823524 WD: Q1491496 47.48, 19 x 47.51, 19.02
    { 3266, NoLogo, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 59B OSM: 8823525 WD: Q22810651 47.48, 18.96 x 47.54, 19.02
    { 39, 23946, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd31245} }, // T OSM: 8826111 WD: Q1755582 37.71, -122.4 x 37.8, -122.4
    { 47, 23970, 23635, LineMetaDataContent::RapidTransit, Color{0xffa5ac} }, // S8 OSM: 8840314 WD: Q1160824 45.48, 9.183 x 45.86, 9.435
    { 1233, 23984, 23635, LineMetaDataContent::RapidTransit, Color{0x966524} }, // S13 OSM: 8840315 WD: Q1160881 45.19, 9.143 x 45.5, 9.245
    { 434, 23999, 23635, LineMetaDataContent::RapidTransit, Color{0xb30095} }, // S9 OSM: 8840324 WD: Q56920 45.4, 8.956 x 45.65, 9.274
    { 53, 24013, 23635, LineMetaDataContent::RapidTransit, Color{0xa08fc8} }, // S11 OSM: 8840325 WD: Q1160879 45.48, 9.028 x 45.83, 9.274
    { 3270, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x961a54} }, // MXP OSM: 8840353 WD: Q1858023 45.47, 8.704 x 45.65, 9.175
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // 1 OSM: 8857089 24.54, 46.61 x 24.84, 46.78
    { 27, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x800080} }, // 6 OSM: 8857388 24.7, 46.64 x 24.81, 46.83
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf5a300} }, // 12 OSM: 8871002 WD: Q16655708 46.17, 6.129 x 46.2, 6.207
    { 2281, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // SC OSM: 8888446 43.03, 141.3 x 43.06, 141.4
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe40053} }, // T2 OSM: 8973403 WD: Q3239070 50.32, 3.511 x 50.46, 3.596
    { 3274, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // Circular OSM: 9084313 WD: Q8048613 16.78, 96.09 x 16.94, 96.18
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa68351} }, // 2 OSM: 9112026 WD: Q16854978 47.54, 7.571 x 47.59, 7.651
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x324ea1} }, // 3 OSM: 9118502 WD: Q16854981 47.55, 7.553 x 47.59, 7.631
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x835237} }, // 1 OSM: 9118510 WD: Q16854970 47.55, 7.573 x 47.57, 7.608
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0072bc} }, // 6 OSM: 9128621 WD: Q16854982 47.55, 7.537 x 47.59, 7.656
    { 42, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x8b0000} }, // 7 OSM: 9140122 14.65, 121 x 14.77, 121.1
    { 3283, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, // MSC 621 OSM: 9165725 14.2, 121 x 14.62, 121.2
    { 3291, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // MNC OSM: 9165728 14.61, 121 x 14.67, 121
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf171ab} }, // 8 OSM: 9173651 WD: Q16854983 47.55, 7.557 x 47.59, 7.608
    { 3295, 24028, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00289c} }, // C-4 OSM: 9174513 WD: Q1919488 40.24, -3.778 x 40.65, -3.635
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfeca0a} }, // 10 OSM: 9177454 WD: Q7885420 47.48, 7.459 x 47.55, 7.62
    { 3299, 24046, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // C-9 OSM: 9181540 WD: Q8880294 40.74, -4.066 x 40.82, -3.963
    { 2375, 24061, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008a29} }, // C-2 OSM: 9187669 WD: Q2287356 40.38, -3.694 x 40.64, -3.181
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf58220} }, // 14 OSM: 9190891 WD: Q16854972 47.52, 7.587 x 47.57, 7.694
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00a54f} }, // 15 OSM: 9193744 WD: Q89415715 47.53, 7.587 x 47.56, 7.6
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa6ce39} }, // 16 OSM: 9196819 WD: Q16854975 47.53, 7.584 x 47.56, 7.605
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00aeef} }, // 17 OSM: 9201222 WD: Q16854977 47.48, 7.545 x 47.58, 7.593
    { 304, 24075, NoLogo, LineMetaDataContent::RapidTransit, Color{0x1662b8} }, // U OSM: 9221982 WD: Q1191079 35.62, 139.8 x 35.67, 139.8
    { 145, NoLogo, 24102, LineMetaDataContent::RapidTransit, Color{0xff1493} }, // 19 OSM: 9234808 WD: Q154730 47.39, 7.729 x 47.49, 7.773
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd64560} }, // 2 OSM: 9235815 WD: Q106996888 47.26, 11.35 x 47.28, 11.44
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x8b445b} }, // 5 OSM: 9235816 WD: Q106996949 47.26, 11.34 x 47.28, 11.46
    { 3303, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // СТ-2 OSM: 9244973 WD: Q107191059 48.68, 44.47 x 48.8, 44.6
    { 267, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000c0} }, // Blue OSM: 9248096 38.45, -121.5 x 38.65, -121.4
    { 437, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00c000} }, // Green OSM: 9248097 38.57, -121.5 x 38.6, -121.5
    { 1664, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xc0ba00} }, // Gold OSM: 9248098 38.55, -121.5 x 38.68, -121.2
    { 3310, 24125, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff69b4} }, // NT OSM: 9253571 WD: Q910032 35.73, 139.8 x 35.81, 139.8
    { 3313, 24157, NoLogo, LineMetaDataContent::Tramway, Color{0xd85b81} }, // SA OSM: 9254426 WD: Q1064795 35.71, 139.7 x 35.75, 139.8
    { 3316, NoLogo, 19948, LineMetaDataContent::Subway, Color{0x00ffff} }, // Aqua Line OSM: 9256785 WD: Q41668068 28.44, 77.37 x 28.59, 77.55
    { 1973, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // R2 OSM: 9266121 48.62, 21.19 x 48.71, 21.3
    { 1982, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // R8 OSM: 9266263 48.62, 21.19 x 48.71, 21.27
    { 460, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // R1 OSM: 9273350 48.62, 21.19 x 48.72, 21.27
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0377ae} }, // 5 OSM: 9274837 48.7, 21.24 x 48.72, 21.27
    { 3326, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xcc3333} }, // exo1 OSM: 9288759 WD: Q3239247 45.39, -74.14 x 45.5, -73.57
    { 1429, 24186, NoLogo, LineMetaDataContent::RapidTransit, Color{0xda0442} }, // TY OSM: 9288983 WD: Q1192468 35.47, 139.6 x 35.66, 139.7
    { 3331, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x808080} }, // exo4 OSM: 9298215 WD: Q3239087 45.36, -73.66 x 45.5, -73.51
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x5d3988} }, // T2 OSM: 9298542 WD: Q61670436 43.77, 11.2 x 43.8, 11.25
    { 54, 24211, NoLogo, LineMetaDataContent::Subway, Color{0x6a1d44} }, // 11 OSM: 9318442 WD: Q4698920 22.52, 113.8 x 22.79, 114.1
    { 3336, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009900} }, // exo2 OSM: 9326028 WD: Q3239074 45.45, -74 x 45.77, -73.57
    { 3341, 24235, NoLogo, LineMetaDataContent::Subway, Color{0x3564af} }, // SR OSM: 9336150 WD: Q1065949 35.78, 139.7 x 35.89, 139.8
    { 3344, 24267, 24267, LineMetaDataContent::RapidTransit, Color{0xef473d} }, // SY OSM: 9338171 WD: Q842520 35.77, 139.4 x 35.77, 139.4
    { 3347, 24286, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009cd2} }, // MG OSM: 9340970 WD: Q283861 35.55, 139.6 x 35.63, 139.7
    { 3350, 24311, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf18c43} }, // OM OSM: 9341650 WD: Q384995 35.6, 139.6 x 35.61, 139.7
    { 3353, 24336, NoLogo, LineMetaDataContent::RapidTransit, Color{0x20a288} }, // DT OSM: 9341816 WD: Q1190086 35.51, 139.4 x 35.66, 139.7
    { 407, 24361, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee86a7} }, // IK OSM: 9342009 WD: Q1192388 35.56, 139.7 x 35.63, 139.7
    { 1557, 24386, NoLogo, LineMetaDataContent::RapidTransit, Color{0xae0378} }, // TM OSM: 9343887 WD: Q379292 35.56, 139.7 x 35.59, 139.7
    { 3356, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff00ff} }, // exo5 OSM: 9344059 WD: Q3239152 45.52, -73.67 x 45.74, -73.49
    { 3361, 24411, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0068b7} }, // KD OSM: 9344153 WD: Q842701 35.53, 139.5 x 35.56, 139.5
    { 1780, 24436, NoLogo, LineMetaDataContent::RapidTransit, Color{0x10a899} }, // NS OSM: 9346454 WD: Q846381 35.91, 139.6 x 36.01, 139.6
    { 3364, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6600cc} }, // exo3 OSM: 9348176 WD: Q3239159 45.49, -73.57 x 45.58, -73.18
    { 3369, NoLogo, 392, LineMetaDataContent::RapidTransit, Color{0xbac219} }, // U16 OSM: 9354869 WD: Q106879571 48.8, 9.087 x 48.81, 9.277
    { 249, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf8b710} }, // 23 OSM: 9396890 48.75, 9.179 x 48.81, 9.221
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xc01903} }, // A OSM: 9413576 WD: Q1419423 45.76, 3.082 x 45.81, 3.134
    { 72, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ae9d} }, // 21 OSM: 9414064 WD: Q16854979 47.56, 7.573 x 47.57, 7.608
    { 44, NoLogo, 24102, LineMetaDataContent::RapidTransit, Color{0x79d4f0} }, // S5 OSM: 9414242 WD: Q63705361 47.59, 7.608 x 47.64, 7.744
    { 1136, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xcb7eb5} }, // S36 OSM: 9414253 WD: Q15088595 47.52, 8.22 x 47.62, 8.538
    { 3373, 24464, NoLogo, LineMetaDataContent::Subway, Color{0xf890a5} }, // 捷運紅線 (新北投支線) OSM: 9437207 WD: Q8044505 25.13, 121.5 x 25.14, 121.5
    { 2873, 24503, NoLogo, LineMetaDataContent::Subway, Color{0x398afc} }, // BL OSM: 9437778 WD: Q708378 24.96, 121.4 x 25.05, 121.6
    { 1409, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x2ab04f} }, // RE OSM: 9441941 46.95, 7.438 x 47.2, 7.559
    { 434, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0xea1a2a} }, // S9 OSM: 9441942 WD: Q115689939 46.95, 7.438 x 46.99, 7.458
    { 47, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0x201f20} }, // S8 OSM: 9441943 WD: Q115689938 46.95, 7.438 x 47.2, 7.544
    { 3163, 24528, 226, LineMetaDataContent::RapidTransit, Color{0x018a47} }, // S26 OSM: 9445376 WD: Q7388232 52.4, 13.28 x 52.61, 13.4
    { 260, NoLogo, 6526, LineMetaDataContent::Subway, Color{0xff0000} }, // M1 OSM: 9449959 WD: Q3238662 45.02, 7.591 x 45.08, 7.68
    { 59, 24559, 14035, LineMetaDataContent::Tramway, Color{0xffff00} }, // 3 OSM: 9453120 WD: Q61000373 -22.91, -43.19 x -22.9, -43.17
    { 2769, NoLogo, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 2B OSM: 9453936 WD: Q113118555 47.42, 19.05 x 47.51, 19.12
    { 27, 24588, 16760, LineMetaDataContent::Subway, Color{0xff5599} }, // 6 OSM: 9468298 WD: Q20110123 35.62, 51.32 x 35.74, 51.46
    { 3404, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd28} }, // Z72 OSM: 9470080 WD: Q101321651 47.51, 18.71 x 47.78, 19.1
    { 3408, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, // RN OSM: 9477810 WD: Q1055870 35.81, 139.9 x 35.86, 139.9
    { 3411, 24612, NoLogo, LineMetaDataContent::Subway, Color{0xffff00} }, // KS-AE OSM: 9480386 WD: Q1045305 35.54, 139.7 x 35.81, 140.4
    { 298, NoLogo, 24640, LineMetaDataContent::Subway, Color{0x3e9397} }, // M OSM: 9487066 WD: Q7057341 -33.8, 150.9 x -33.69, 151.2
    { 3417, 24652, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7a745a} }, // F3 OSM: 9488738 WD: Q31193173 41.1, 28.99 x 41.11, 28.99
    { 2104, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x006400} }, // EN OSM: 9499957 WD: Q250760 35.3, 139.5 x 35.34, 139.6
    { 3420, 24680, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a6bf} }, // SS OSM: 9507192 WD: Q195685 35.7, 139.3 x 35.91, 139.7
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // 1 OSM: 9522022 WD: Q61990549 23, 72.52 x 23.05, 72.67
    { 55, 24698, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa6dfe6} }, // 1 OSM: 9525005 WD: Q109046020 36.75, 10.18 x 36.8, 10.22
    { 27, 24722, NoLogo, LineMetaDataContent::RapidTransit, Color{0x652c90} }, // 6 OSM: 9530554 WD: Q109046039 36.72, 10.18 x 36.8, 10.22
    { 354, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x48a23e} }, // L2 OSM: 9536631 WD: Q25420937 9.029, -79.51 x 9.104, -79.35
    { 267, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Blue OSM: 9542499 9.046, 7.285 x 9.155, 7.344
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009999} }, // 5 OSM: 9544852 53.08, 8.78 x 53.09, 8.818
    { 3423, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // JN OSM: 9555851 35.51, 139.4 x 35.7, 139.7
    { 895, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff9c2a} }, // N19 OSM: 9570043 47.48, 19.04 x 47.53, 19.06
    { 3426, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffa500} }, // Orange Line OSM: 9571557 WD: Q61996404 21.04, 79.04 x 21.19, 79.12
    { 279, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe2251c} }, // Red OSM: 9573815 WD: Q25343681 25.19, 51.49 x 25.42, 51.62
    { 61, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0x4cb848} }, // S1 OSM: 9577262 WD: Q115689931 46.75, 7.15 x 46.97, 7.631
    { 50, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0x00abe5} }, // S2 OSM: 9577399 WD: Q115689932 46.88, 7.241 x 46.97, 7.784
    { 213, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0x45bfad} }, // S4 OSM: 9579475 WD: Q115689934 46.75, 7.407 x 47.07, 7.784
    { 3438, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0x5d5910} }, // S44 OSM: 9582296 WD: Q115689941 46.75, 7.407 x 47.2, 7.737
    { 44, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0x7f0041} }, // S5 OSM: 9582947 WD: Q115689935 46.82, 6.933 x 47.01, 7.44
    { 199, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0xea595b} }, // S6 OSM: 9584378 WD: Q115689936 46.82, 7.34 x 46.95, 7.439
    { 41, 24746, 10182, LineMetaDataContent::Subway, Color{0xca8687} }, // S7 OSM: 9584586 WD: Q10946062 31.61, 118.9 x 31.76, 119
    { 434, 24767, 10182, LineMetaDataContent::Subway, Color{0xf1bc1a} }, // S9 OSM: 9584587 WD: Q47471478 31.34, 118.8 x 31.76, 118.9
    { 948, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0xe9ce0e} }, // S52 OSM: 9584652 WD: Q115689943 46.93, 7.098 x 47, 7.439
    { 164, NoLogo, 11270, LineMetaDataContent::RapidTransit, Color{0x8a6aae} }, // S3 OSM: 9585454 WD: Q115689933 46.89, 7.24 x 47.13, 7.499
    { 3442, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee1e23} }, // U GUS OSM: 9586670 41.14, -8.61 x 41.44, -8.294
    { 47, 24788, 10182, LineMetaDataContent::Subway, Color{0xeca153} }, // S8 OSM: 9588181 WD: Q10945880 32.13, 118.7 x 32.47, 119
    { 9, NoLogo, 10182, LineMetaDataContent::Subway, Color{0xa513c0} }, // 4 OSM: 9588283 WD: Q10906684 32.06, 118.7 x 32.13, 119
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xd3b466} }, // 3 OSM: 9588292 WD: Q11124519 30.49, 114.2 x 30.68, 114.3
    { 16, 24809, NoLogo, LineMetaDataContent::Subway, Color{0xec9cbb} }, // 2 OSM: 9592190 WD: Q5952205 30.44, 114.2 x 30.79, 114.4
    { 3448, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3caeef} }, // U MCS OSM: 9599441 41.14, -8.61 x 41.26, -8.136
    { 3454, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x800080} }, // ACE OSM: 9599550 37.33, -122 x 37.96, -121.3
    { 3458, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x006400} }, // SMART OSM: 9599558 37.95, -122.8 x 38.51, -122.5
    { 240, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006400} }, // 45 OSM: 9600350 51.78, 19.41 x 51.85, 19.51
    { 400, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x006400} }, // 41 OSM: 9600352 51.66, 19.32 x 51.74, 19.46
    { 22, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 18 OSM: 9600353 51.74, 19.38 x 51.78, 19.51
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffc0cb} }, // 17 OSM: 9600354 51.7, 19.41 x 51.78, 19.53
    { 26, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffc0cb} }, // 16 OSM: 9600355 51.72, 19.37 x 51.8, 19.49
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffc0cb} }, // 15 OSM: 9600356 51.72, 19.45 x 51.78, 19.53
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 14 OSM: 9600357 51.74, 19.38 x 51.76, 19.49
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 13 OSM: 9600358 51.73, 19.37 x 51.8, 19.49
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 12 OSM: 9600359 51.74, 19.38 x 51.78, 19.53
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 11 OSM: 9600360 51.7, 19.41 x 51.83, 19.46
    { 3464, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 10AB OSM: 9600361 51.73, 19.38 x 51.76, 19.58
    { 3469, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 9AB OSM: 9600362 51.73, 19.41 x 51.77, 19.58
    { 3473, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 8AB OSM: 9600363 51.75, 19.36 x 51.8, 19.54
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 6 OSM: 9600365 51.72, 19.41 x 51.85, 19.55
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x800080} }, // 5 OSM: 9600366 51.72, 19.41 x 51.79, 19.49
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 4 OSM: 9600367 51.74, 19.43 x 51.83, 19.51
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 3 OSM: 9600368 51.72, 19.45 x 51.81, 19.55
    { 3477, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 2AB OSM: 9600370 51.74, 19.36 x 51.8, 19.51
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x800080} }, // 1 OSM: 9600371 51.73, 19.46 x 51.8, 19.49
    { 3481, 24829, 24867, LineMetaDataContent::Tramway, Color{0x32cd32} }, // HN OSM: 9603867 WD: Q5648522 34.54, 135.4 x 34.65, 135.5
    { 309, 24889, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7777ff} }, // P OSM: 9603949 WD: Q1073366 34.61, 135.4 x 34.64, 135.5
    { 3484, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffffff} }, // Local OSM: 9604092 37.31, -122.4 x 37.78, -121.9
    { 6, NoLogo, 23375, LineMetaDataContent::Subway, Color{0xfb6f14} }, // 5 OSM: 9604983 WD: Q10940000 39.03, 117.1 x 39.27, 117.2
    { 9, 24933, NoLogo, LineMetaDataContent::Subway, Color{0x00843d} }, // 4 OSM: 9607978 WD: Q863422 22.75, 113.4 x 23.13, 113.6
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xdc8633} }, // 4 OSM: 9609521 WD: Q15900365 29.6, 106.5 x 29.78, 106.8
    { 3490, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00b5e2} }, // APM OSM: 9611409 WD: Q862929 23.11, 113.3 x 23.14, 113.3
    { 72, 24953, NoLogo, LineMetaDataContent::Subway, Color{0x201747} }, // 21 OSM: 9611531 WD: Q6553110 23.12, 113.4 x 23.29, 113.8
    { 3494, 24974, NoLogo, LineMetaDataContent::Subway, Color{0xc4d600} }, // GF OSM: 9612493 WD: Q3272527 22.96, 113.1 x 23.09, 113.3
    { 27, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x007128} }, // 6 OSM: 9617440 WD: Q15899990 30.49, 114.1 x 30.65, 114.3
    { 42, 25000, NoLogo, LineMetaDataContent::Subway, Color{0xeb7c16} }, // 7 OSM: 9617441 WD: Q11124507 30.32, 114.2 x 30.81, 114.3
    { 44, 25020, 2154, LineMetaDataContent::RapidTransit, Color{0x8d1d81} }, // S5 OSM: 9626749 WD: Q116125185 46.71, 15.42 x 47.07, 15.63
    { 3497, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x97c616} }, // CRL OSM: 9627859 1.311, 103.7 x 1.406, 104
    { 3501, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x734538} }, // TEL OSM: 9627860 WD: Q7795883 1.272, 103.8 x 1.452, 104
    { 42, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0035ad} }, // 7 OSM: 9629866 WD: Q5938409 22.52, 113.9 x 22.6, 114.1
    { 59, 25038, NoLogo, LineMetaDataContent::Subway, Color{0x00a2e1} }, // 3 OSM: 9629887 WD: Q1065551 22.51, 114 x 22.73, 114.3
    { 61, 25061, 2154, LineMetaDataContent::RapidTransit, Color{0x00983a} }, // S1 OSM: 9631352 WD: Q116125178 47.07, 15.28 x 47.41, 15.42
    { 9, 25079, NoLogo, LineMetaDataContent::Subway, Color{0x920783} }, // 4 OSM: 9632502 WD: Q24835582 28.14, 112.9 x 28.3, 113.1
    { 9, 25098, NoLogo, LineMetaDataContent::Subway, Color{0xa6d30b} }, // 4 OSM: 9633082 WD: Q6553126 30.53, 114 x 30.61, 114.4
    { 54, 25118, NoLogo, LineMetaDataContent::Subway, Color{0xf6d300} }, // 11 OSM: 9633134 WD: Q11124500 30.49, 114.3 x 30.54, 114.7
    { 358, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x8b4513} }, // L3 OSM: 9633218 WD: Q5986353 -33.46, -70.69 x -33.37, -70.56
    { 434, 25138, 2154, LineMetaDataContent::RapidTransit, Color{0x9f7fb8} }, // S9 OSM: 9634178 WD: Q116125198 47.41, 15.27 x 47.61, 15.68
    { 47, 25156, 2154, LineMetaDataContent::RapidTransit, Color{0x5cc1d1} }, // S8 OSM: 9634179 WD: Q116125196 47.17, 14.44 x 47.42, 15.28
    { 412, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0067c0} }, // L OSM: 9638873 WD: Q1329642 35.17, 137 x 35.18, 137.1
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x3b6a96} }, // 2 OSM: 9642906 WD: Q15913266 43.83, 125.2 x 43.88, 125.4
    { 19, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x25b7bc} }, // 8 OSM: 9642908 WD: Q15956288 43.95, 125.3 x 44.01, 125.4
    { 6, 25174, NoLogo, LineMetaDataContent::Subway, Color{0x9950b2} }, // 5 OSM: 9645952 WD: Q5926109 22.48, 113.9 x 22.63, 114.1
    { 55, 25197, NoLogo, LineMetaDataContent::Subway, Color{0xee352e} }, // 1 OSM: 9651536 WD: Q126093 40.7, -74.02 x 40.89, -73.9
    { 1152, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xf05b94} }, // S20 OSM: 9652168 WD: Q111523342 47.24, 8.514 x 47.39, 8.727
    { 16, 25223, NoLogo, LineMetaDataContent::Subway, Color{0xee352e} }, // 2 OSM: 9655665 WD: Q126142 40.63, -74.01 x 40.9, -73.85
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x571887} }, // 3 OSM: 9656354 WD: Q25824052 22.72, 108.2 x 22.88, 108.4
    { 59, 25249, NoLogo, LineMetaDataContent::Subway, Color{0xee352e} }, // 3 OSM: 9663807 WD: Q126151 40.66, -74.01 x 40.82, -73.88
    { 3505, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6c8bc6} }, // D11 OSM: 9672611 51.1, 16.15 x 51.4, 17.04
    { 9, 25275, NoLogo, LineMetaDataContent::Subway, Color{0x00933c} }, // 4 OSM: 9677108 WD: Q126163 40.66, -74.01 x 40.89, -73.88
    { 1780, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xce0037} }, // NS OSM: 9677671 WD: Q60608236 -6.292, 106.8 x -6.191, 106.8
    { 350, 25301, 25314, LineMetaDataContent::RapidTransit, Color{0xee343f} }, // L1 OSM: 9678605 WD: Q14543324 -33.91, 151.1 x -33.87, 151.2
    { 412, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe4022d} }, // L OSM: 9678765 -32.93, 151.8 x -32.92, 151.8
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 2 OSM: 9680853 51.37, -0.2081 x 51.42, -0.02612
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb5e61d} }, // 4 OSM: 9680854 51.37, -0.2081 x 51.42, -0.04953
    { 6, 25326, NoLogo, LineMetaDataContent::Subway, Color{0x00933c} }, // 5 OSM: 9682651 WD: Q126177 40.63, -74.01 x 40.9, -73.83
    { 1637, 25352, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008a45} }, // T8 OSM: 9698883 WD: Q4698965 -34.07, 150.8 x -33.86, 151.2
    { 130, 25365, NoLogo, LineMetaDataContent::Subway, Color{0x846e74} }, // 9 OSM: 9699772 WD: Q5939429 22.51, 113.9 x 22.57, 114.1
    { 2096, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // BLUE OSM: 9701744 53.33, -1.508 x 53.4, -1.344
    { 3509, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x800080} }, // PURP OSM: 9701781 53.34, -1.469 x 53.38, -1.424
    { 3514, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffff00} }, // YELL OSM: 9701824 53.38, -1.51 x 53.42, -1.405
    { 3519, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // TT OSM: 9701873 53.38, -1.469 x 53.44, -1.343
    { 3522, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x006bb6} }, // SIR OSM: 9701910 40.51, -74.25 x 40.64, -74.07
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe2368c} }, // 14 OSM: 9708096 47.14, 37.54 x 47.18, 37.62
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe2368c} }, // 13 OSM: 9708097 47.14, 37.54 x 47.18, 37.62
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x13b5eb} }, // 8 OSM: 9708100 47.1, 37.51 x 47.12, 37.56
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4f3893} }, // 10 OSM: 9708103 47.1, 37.51 x 47.17, 37.62
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf37b24} }, // 3 OSM: 9709247 47.1, 37.51 x 47.12, 37.65
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xf37b24} }, // 4 OSM: 9709277 47.1, 37.51 x 47.12, 37.65
    { 3526, 25388, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008150} }, // GL(E) OSM: 9709938 WD: Q172040 42.33, -71.12 x 42.41, -71.06
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x897ab7} }, // 11 OSM: 9712140 47.1, 37.54 x 47.18, 37.65
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffbf00} }, // 5 OSM: 9712141 47.1, 37.54 x 47.15, 37.65
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffbf00} }, // 6 OSM: 9712142 47.1, 37.54 x 47.12, 37.65
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0068b2} }, // 9 OSM: 9712143 47.1, 37.54 x 47.18, 37.65
    { 298, 25416, NoLogo, LineMetaDataContent::Subway, Color{0xff6319} }, // M OSM: 9712349 WD: Q126418 40.7, -74 x 40.76, -73.84
    { 412, 25442, NoLogo, LineMetaDataContent::Subway, Color{0xa7a9ac} }, // L OSM: 9716997 WD: Q126534 40.65, -74 x 40.74, -73.9
    { 434, NoLogo, 24102, LineMetaDataContent::RapidTransit, Color{0x9589c6} }, // S9 OSM: 9719969 WD: Q3239195 47.35, 7.81 x 47.46, 7.918
    { 3532, 3454, NoLogo, LineMetaDataContent::Subway, Color{0xb933ad} }, // <7> OSM: 9721629 WD: Q126203 40.74, -74 x 40.76, -73.83
    { 3536, 3584, NoLogo, LineMetaDataContent::Subway, Color{0x00933c} }, // <6> OSM: 9721630 WD: Q126192 40.71, -74.01 x 40.85, -73.83
    { 3540, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // 202 OSM: 9729897 WD: Q51912653 51.04, -114.2 x 51.13, -113.9
    { 3206, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // 201 OSM: 9729912 WD: Q51898028 50.9, -114.2 x 51.13, -114.1
    { 3544, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfc6357} }, // 22R OSM: 9730137 WD: Q14192100 53.46, -113.5 x 53.57, -113.5
    { 3548, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3a59a9} }, // 21R OSM: 9730138 WD: Q12054219 53.46, -113.5 x 53.6, -113.4
    { 55, 25468, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // 1 OSM: 9732464 WD: Q56188749 -3.033, 104.7 x -2.894, 104.8
    { 3552, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xed1d24} }, // TWL OSM: 9736531 WD: Q1194568 22.28, 114.1 x 22.38, 114.2
    { 3556, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x7d499d} }, // TKL OSM: 9736612 WD: Q989347 22.29, 114.2 x 22.32, 114.3
    { 230, 18709, NoLogo, LineMetaDataContent::Subway, Color{0x996633} }, // J OSM: 9747970 WD: Q126484 40.68, -74.01 x 40.72, -73.8
    { 194, 25516, NoLogo, LineMetaDataContent::Subway, Color{0xff6319} }, // B OSM: 9748435 WD: Q126381 40.58, -74 x 40.87, -73.89
    { 286, 2413, 2440, LineMetaDataContent::RapidTransit, Color{0xef7b10} }, // LO OSM: 9752361 WD: Q7363198 51.56, 0.1838 x 51.58, 0.2521
    { 233, 25542, NoLogo, LineMetaDataContent::Subway, Color{0xff6319} }, // F OSM: 9753684 WD: Q126404 40.58, -74 x 40.77, -73.78
    { 3560, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xb2007b} }, // Yangluo OSM: 9765661 WD: Q11124502 30.65, 114.3 x 30.72, 114.6
    { 225, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xf17079} }, // S25 OSM: 9767545 WD: Q115743707 47.28, 8.204 x 47.48, 8.341
    { 3568, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xfece08} }, // S23 OSM: 9767546 WD: Q115743940 47.22, 7.784 x 47.49, 8.308
    { 3163, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xc89f3b} }, // S26 OSM: 9767547 WD: Q115646660 47.14, 7.907 x 47.4, 8.436
    { 291, 25568, NoLogo, LineMetaDataContent::Subway, Color{0x0039a6} }, // C OSM: 9767766 WD: Q126358 40.67, -74.01 x 40.84, -73.87
    { 2288, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x13ae99} }, // S14 OSM: 9768340 WD: Q115747591 47.24, 8.041 x 47.39, 8.19
    { 974, 25594, NoLogo, LineMetaDataContent::Subway, Color{0xff6319} }, // D OSM: 9769161 WD: Q126396 40.58, -74.01 x 40.88, -73.88
    { 327, 25620, NoLogo, LineMetaDataContent::Subway, Color{0x0039a6} }, // E OSM: 9769302 WD: Q126368 40.7, -74.01 x 40.76, -73.8
    { 3572, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x000000} }, // 751P OSM: 9788142 WD: Q15903000 22.41, 114 x 22.47, 114
    { 3577, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee3a41} }, // NEC OSM: 9795466 WD: Q7057868 40.2, -74.79 x 40.77, -73.99
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe73132} }, // T2 OSM: 9797089 49.18, -0.3663 x 49.21, -0.3479
    { 1577, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009adf} }, // T3 OSM: 9797090 49.15, -0.364 x 49.19, -0.3411
    { 1408, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf686c3} }, // TRE OSM: 9797671 WD: Q7838588 39.95, -75.2 x 40.22, -74.75
    { 991, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xffc709} }, // S31 OSM: 9800222 WD: Q115646663 47.05, 8.548 x 47.16, 8.724
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x37ad96} }, // 4 OSM: 9807766 WD: Q15939632 34.14, 108.9 x 34.38, 109
    { 3581, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3096c2} }, // NLR OSM: 9821052 WD: Q3078283 40.73, -74.19 x 40.78, -74.16
    { 59, 25646, NoLogo, LineMetaDataContent::Subway, Color{0xeca154} }, // 3 OSM: 9841063 WD: Q862941 22.94, 113.3 x 23.4, 113.4
    { 3585, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0194d7} }, // JFK OSM: 9862004 WD: Q406683 40.64, -73.83 x 40.7, -73.78
    { 58, 25666, NoLogo, LineMetaDataContent::RapidTransit, Color{0x2ca05a} }, // 13 OSM: 9881314 WD: Q6553067 -23.55, -46.64 x -23.43, -46.49
    { 3589, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Norte OSM: 9881792 -5.797, -35.42 x -5.632, -35.21
    { 130, 25678, NoLogo, LineMetaDataContent::Subway, Color{0x017cbf} }, // 9 OSM: 9893306 WD: Q11138917 41.72, 123.3 x 41.84, 123.5
    { 437, 25709, NoLogo, LineMetaDataContent::RapidTransit, Color{0x76c761} }, // Green OSM: 9897509 WD: Q6925400 37.28, -122 x 37.41, -121.9
    { 267, 25728, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a4e2} }, // Blue OSM: 9897510 WD: Q4737344 37.24, -121.9 x 37.41, -121.8
    { 3595, 25746, 25746, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // ARL OSM: 9921501 WD: Q1133704 13.69, 100.5 x 13.76, 100.8
    { 130, 25761, NoLogo, LineMetaDataContent::Subway, Color{0x71cc98} }, // 9 OSM: 9924027 WD: Q6553161 23.36, 113.1 x 23.4, 113.3
    { 941, 25781, 226, LineMetaDataContent::RapidTransit, Color{0xc36939} }, // S42 OSM: 9942315 WD: Q15118875 52.46, 13.28 x 52.55, 13.48
    { 464, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffd700} }, // G OSM: 9942698 WD: Q5578772 39.75, -105.1 x 39.81, -105
    { 194, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // B OSM: 9942699 WD: Q19865232 39.75, -105 x 39.82, -105
    { 475, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x57c0e8} }, // A OSM: 9942719 WD: Q5328174 39.75, -105 x 39.85, -104.7
    { 2423, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcccccc} }, // Silver OSM: 9946498 32.71, -117.2 x 32.72, -117.2
    { 3600, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // 530 OSM: 9946502 32.71, -117.2 x 32.84, -117
    { 3604, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // 520 OSM: 9946503 32.71, -117.2 x 32.81, -117
    { 291, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf79239} }, // C OSM: 9947502 WD: Q5015067 39.58, -105 x 39.76, -105
    { 974, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008348} }, // D OSM: 9947503 WD: Q5207092 39.58, -105 x 39.75, -105
    { 327, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x552683} }, // E OSM: 9947507 WD: Q5324803 39.52, -105 x 39.76, -104.9
    { 233, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee3e33} }, // F OSM: 9947520 WD: Q5427493 39.52, -105 x 39.75, -104.9
    { 34, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0075bf} }, // H OSM: 9947525 39.63, -105 x 39.75, -104.8
    { 480, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xb7f037} }, // R OSM: 9947529 WD: Q5515134 39.52, -104.9 x 39.77, -104.8
    { 521, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x37b5a5} }, // W OSM: 9947532 WD: Q7958496 39.72, -105.2 x 39.76, -105
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x23a638} }, // T1 OSM: 9953164 49.15, -0.3663 x 49.2, -0.3292
    { 928, NoLogo, 23635, LineMetaDataContent::RapidTransit, Color{0x293838} }, // S12 OSM: 9959066 WD: Q26828150 45.36, 9.159 x 45.5, 9.32
    { 3608, 20298, 16137, LineMetaDataContent::Subway, Color{0x996746} }, // AREX OSM: 9961461 WD: Q487643 37.44, 126.4 x 37.6, 127
    { 3613, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd1aa00} }, // SAR-VIN OSM: 9963645 WD: Q10318744 -22.68, -43.25 x -22.57, -43.18
    { 3621, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x660066} }, // Belford Roxo OSM: 9963651 WD: Q10318671 -22.91, -43.4 x -22.76, -43.19
    { 3634, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf60619} }, // Deodoro OSM: 9963665 WD: Q18473921 -22.91, -43.39 x -22.85, -43.19
    { 3642, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfa8835} }, // Saracuruna OSM: 9963667 WD: Q10318727 -22.91, -43.31 x -22.68, -43.19
    { 3653, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x5194c4} }, // JRI-PBI OSM: 9963669 WD: Q10318719 -22.64, -43.71 x -22.61, -43.65
    { 3661, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x96333b} }, // SAR-GIM OSM: 9963674 WD: Q10318688 -22.68, -43.25 x -22.52, -42.98
    { 3669, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6b297e} }, // Parangaba-Mucuripe OSM: 9963934 WD: Q10318709 -3.776, -38.56 x -3.72, -38.48
    { 3688, 25812, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // Oeste OSM: 9963937 WD: Q14325543 -3.77, -38.66 x -3.718, -38.54
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009ee3} }, // 4 OSM: 9964886 52.25, 10.51 x 52.27, 10.56
    { 475, 25850, 1055, LineMetaDataContent::RapidTransit, Color{0x00bfff} }, // A OSM: 9971068 WD: Q2323144 55.46, 12.17 x 55.93, 12.59
    { 479, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xde1d43} }, // LR OSM: 9976617 39.17, -76.68 x 39.5, -76.62
    { 16, 25872, 25893, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // 2 OSM: 9984970 WD: Q4873303 2.999, 101.4 x 3.685, 101.7
    { 55, 25914, 25893, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // 1 OSM: 9985625 WD: Q4207166 2.452, 101.7 x 3.239, 102.2
    { 65, 25935, 25893, LineMetaDataContent::RapidTransit, Color{0xa52a2a} }, // 10 OSM: 9985661 WD: Q51419215 3.081, 101.6 x 3.136, 101.7
    { 141, 25957, 4474, LineMetaDataContent::Subway, Color{0xde64a1} }, // 15 OSM: 10011657 WD: Q4226438 55.7, 37.73 x 55.73, 37.93
    { 267, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Blue OSM: 10012484 WD: Q4929376 35.11, -80.88 x 35.32, -80.73
    { 130, 25982, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 9 OSM: 10015448 WD: Q26197601 53.41, 14.49 x 53.47, 14.55
    { 3347, 24286, NoLogo, LineMetaDataContent::Subway, Color{0x8ba2ae} }, // MG OSM: 10023806 WD: Q283861 35.55, 139.6 x 35.63, 139.7
    { 3695, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xbcbe00} }, // E2 OSM: 10025161 WD: Q104233849 43.27, -2.021 x 43.35, -1.782
    { 3698, 26002, NoLogo, LineMetaDataContent::Subway, Color{0x01aaaa} }, // TJ OSM: 10032387 WD: Q1040703 35.44, 139.2 x 36.12, 139.7
    { 3353, 24336, NoLogo, LineMetaDataContent::Subway, Color{0x01aaaa} }, // DT OSM: 10032468 WD: Q1190086 35.47, 139.4 x 36.11, 139.8
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee1b2e} }, // 1 OSM: 10036404 WD: Q5159786 45.4, -75.74 x 45.43, -75.61
    { 3701, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00a650} }, // OT OSM: 10036880 WD: Q1063832 35.36, 139.2 x 35.67, 139.7
    { 287, 26033, 26033, LineMetaDataContent::RapidTransit, Color{0xe80000} }, // O OSM: 10073686 WD: Q1142127 34.65, 135.5 x 34.71, 135.5
    { 294, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9ab6d3} }, // S OSM: 10077909 WD: Q56525586 47.15, -122.5 x 47.6, -122.2
    { 468, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9ab6d3} }, // N OSM: 10077955 47.6, -122.4 x 47.98, -122.2
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000b} }, // 10 OSM: 10082596 52.25, 10.51 x 52.31, 10.54
    { 3704, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa17800} }, // 김포 골드라인 OSM: 10092720 37.56, 126.6 x 37.65, 126.8
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 9 OSM: 10092776 WD: Q15222207 63.4, 10.31 x 63.43, 10.39
    { 3724, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x98002e} }, // 1975 OSM: 10094530 WD: Q3239135 43.11, -79.89 x 43.64, -79.06
    { 167, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x98002e} }, // 1967 OSM: 10094530 WD: Q3239135 43.11, -79.89 x 43.64, -79.06
    { 3729, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x98002e} }, // 1983 OSM: 10094530 WD: Q3239135 43.11, -79.89 x 43.64, -79.06
    { 880, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x98002e} }, // 1992 OSM: 10094533 WD: Q3239135 43.11, -79.89 x 43.65, -79.06
    { 3734, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x98002e} }, // 1968 OSM: 10094533 WD: Q3239135 43.11, -79.89 x 43.65, -79.06
    { 3739, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x98002e} }, // 1984 OSM: 10094533 WD: Q3239135 43.11, -79.89 x 43.65, -79.06
    { 22, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xd6a461} }, // 18 OSM: 10095918 WD: Q6553089 31.04, 121.5 x 31.34, 121.6
    { 3744, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00214d} }, // 910 OSM: 10098291 55.76, 12.5 x 55.81, 12.53
    { 3748, 25388, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008150} }, // GL(D) OSM: 10099594 WD: Q172031 42.32, -71.25 x 42.38, -71.06
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4ea391} }, // 9 OSM: 10112938 47.12, 27.56 x 47.19, 27.59
    { 137, 26049, NoLogo, LineMetaDataContent::Subway, Color{0xb289bc} }, // 14 OSM: 10131355 WD: Q63781395 34.73, 113.5 x 34.78, 113.5
    { 3754, NoLogo, 3710, LineMetaDataContent::Subway, Color{0x3f48cc} }, // Daxing Airport OSM: 10136967 WD: Q19840478 39.51, 116.3 x 39.85, 116.4
    { 55, 26069, 22951, LineMetaDataContent::Subway, Color{0xa55fc8} }, // 1 OSM: 10149342 WD: Q18654264 36.5, 116.8 x 36.68, 116.9
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xcd5c5c} }, // 1 OSM: 10163085 WD: Q66660306 31.63, 119.9 x 31.9, 120
    { 206, NoLogo, 26103, LineMetaDataContent::Tramway, Color{0x363d42} }, // T1 OSM: 10181950 WD: Q48747416 43.93, 4.799 x 43.94, 4.841
    { 3769, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x015698} }, // River Line OSM: 10213690 WD: Q2155505 39.94, -75.13 x 40.22, -74.71
    { 354, NoLogo, 25314, LineMetaDataContent::RapidTransit, Color{0xee343f} }, // L2 OSM: 10214162 WD: Q16927050 -33.92, 151.2 x -33.86, 151.2
    { 1786, NoLogo, 8396, LineMetaDataContent::Tramway, Color{0x873f98} }, // T6 OSM: 10218859 WD: Q21657685 45.73, 4.834 x 45.75, 4.897
    { 3701, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffe100} }, // OT OSM: 10238058 34.97, 135.7 x 35.07, 135.9
    { 61, NoLogo, 24102, LineMetaDataContent::RapidTransit, Color{0x81cd7b} }, // S1 OSM: 10249610 WD: Q3239193 47.51, 7.591 x 47.57, 8.063
    { 164, NoLogo, 24102, LineMetaDataContent::RapidTransit, Color{0x5ba3d8} }, // S3 OSM: 10249618 WD: Q3239191 47.33, 7.08 x 47.55, 7.918
    { 291, 26134, NoLogo, LineMetaDataContent::Subway, Color{0x00dd00} }, // C OSM: 10258970 WD: Q1057729 34.64, 135.4 x 34.73, 135.8
    { 294, NoLogo, 26150, LineMetaDataContent::RapidTransit, Color{0xbf1600} }, // S OSM: 10261953 WD: Q1621240 19.45, -99.2 x 19.67, -99.15
    { 3780, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x343f4b} }, // CMET OSM: 10271387 WD: Q16927042 -35.28, 149.1 x -35.19, 149.2
    { 3785, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x004792} }, // APT Blue OSM: 10274979 32.86, -96.94 x 32.87, -96.93
    { 358, NoLogo, 26176, LineMetaDataContent::Tramway, Color{0x009640} }, // L3 OSM: 10281452 WD: Q16655742 43.66, 7.194 x 43.71, 7.212
    { 1142, 26198, 2634, LineMetaDataContent::Subway, Color{0xff0a0a} }, // M3 OSM: 10283923 WD: Q1094251 55.67, 12.53 x 55.71, 12.59
    { 3794, 25746, NoLogo, LineMetaDataContent::Subway, Color{0x65b724} }, // BTS Sukhumvit OSM: 10285801 WD: Q4921598 13.57, 100.5 x 13.93, 100.6
    { 350, NoLogo, 26176, LineMetaDataContent::Tramway, Color{0xd20a11} }, // L1 OSM: 10286521 WD: Q3238669 43.7, 7.254 x 43.73, 7.293
    { 233, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // F OSM: 10286522 WD: Q3537109 35.91, 136.2 x 36.07, 136.2
    { 3808, 26210, 26235, LineMetaDataContent::RapidTransit, Color{0xf6a602} }, // D1 OSM: 10309188 WD: Q62091003 55.67, 37.28 x 56.01, 37.59
    { 3811, 26248, 26235, LineMetaDataContent::RapidTransit, Color{0xe83f83} }, // D2 OSM: 10309312 WD: Q62091175 55.43, 37.18 x 55.84, 37.74
    { 55, 26273, 26273, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 10309985 WD: Q2106 53.2, 50.13 x 53.21, 50.28
    { 3814, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff88bb} }, // Rochdale - East Didsbury OSM: 10310648 53.41, -2.28 x 53.62, -2.088
    { 3839, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x887766} }, // Shaw and Crompton - East Didsbury OSM: 10310683 53.41, -2.28 x 53.58, -2.089
    { 3873, 26295, NoLogo, LineMetaDataContent::Subway, Color{0xffd700} }, // JB OSM: 10312072 WD: Q1091295 35.61, 139.6 x 35.9, 140.1
    { 2118, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0066bb} }, // Manchester Airport - Manchester Victoria OSM: 10314875 WD: Q22712167 53.37, -2.297 x 53.49, -2.238
    { 475, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xdc143c} }, // A OSM: 10315780 WD: Q118587129 55.42, 37.62 x 55.73, 37.9
    { 475, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xdc143c} }, // A OSM: 10315781 WD: Q118577041 55.61, 37.22 x 56, 37.59
    { 3876, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff7700} }, // Ashton-under-Lyne – MediaCityUK OSM: 10320090 53.47, -2.297 x 53.49, -2.098
    { 3910, NoLogo, 6526, LineMetaDataContent::Subway, Color{0xffffff} }, // Arcobaleno OSM: 10320583 WD: Q3832713 40.89, 14.21 x 40.97, 14.24
    { 1664, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf9b428} }, // Gold OSM: 10322047 WD: Q22948672 25.26, 51.44 x 25.29, 51.57
    { 3921, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ccff} }, // Ashton-under-Lyne – Eccles OSM: 10326857 WD: Q22087023 53.47, -2.335 x 53.49, -2.098
    { 3950, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x881188} }, // Piccadilly - Altrincham OSM: 10328430 WD: Q22087020 53.39, -2.347 x 53.48, -2.23
    { 2533, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffbb00} }, // Bury - Manchester Piccadilly OSM: 10334672 53.48, -2.321 x 53.59, -2.226
    { 3974, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008800} }, // Altrincham – Bury OSM: 10334764 53.39, -2.347 x 53.59, -2.226
    { 3994, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd32232} }, // ESFECO OSM: 10334823 WD: Q1132053 -22.95, -43.22 x -22.94, -43.2
    { 4001, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, // MSC 821 OSM: 10366537 14.17, 121 x 14.62, 121.3
    { 4009, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff6600} }, // MSC 1708 OSM: 10366538 14.17, 121 x 14.62, 121.3
    { 55, 26317, NoLogo, LineMetaDataContent::Subway, Color{0xbf3a35} }, // 1 OSM: 10379854 WD: Q47004909 34.24, 117.1 x 34.27, 117.3
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0080bc} }, // 1 OSM: 10380194 WD: Q10893610 36.04, 103.7 x 36.1, 103.9
    { 137, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xccad02} }, // 14 OSM: 10381397 WD: Q85884202 34.37, 108.8 x 34.46, 109.1
    { 59, 26333, NoLogo, LineMetaDataContent::Subway, Color{0xf39800} }, // 3 OSM: 10383244 WD: Q10946022 29.65, 121.4 x 29.91, 121.6
    { 4018, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x073686} }, // KS OSM: 10384058 WD: Q855470 35.53, 139.8 x 35.81, 140.4
    { 6, 26354, NoLogo, LineMetaDataContent::Subway, Color{0x0db0c8} }, // 5 OSM: 10386968 WD: Q11102446 30.17, 120 x 30.32, 120.3
    { 6, 26374, NoLogo, LineMetaDataContent::Subway, Color{0x2a5947} }, // 5 OSM: 10387105 WD: Q15928521 34.72, 113.6 x 34.78, 113.8
    { 4021, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffc425} }, // Airtrain OSM: 10391556 WD: Q409266 -27.47, 153 x -27.38, 153.1
    { 1133, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 22 OSM: 10396259 WD: Q2885972 52.07, 5.112 x 52.09, 5.184
    { 4030, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x96c93c} }, // Taipa OSM: 10402175 WD: Q15935354 22.14, 113.5 x 22.16, 113.6
    { 437, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x009530} }, // Green OSM: 10403427 WD: Q25343673 25.27, 51.35 x 25.32, 51.53
    { 4036, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdb6198} }, // 305 OSM: 10409526 51.46, 7.152 x 51.48, 7.324
    { 4040, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x40558e} }, // 309 OSM: 10409567 51.44, 7.297 x 51.48, 7.337
    { 4044, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe28e07} }, // 316 OSM: 10409642 51.48, 7.16 x 51.53, 7.272
    { 358, NoLogo, 25314, LineMetaDataContent::RapidTransit, Color{0xee343f} }, // L3 OSM: 10411683 WD: Q16927050 -33.93, 151.2 x -33.86, 151.2
    { 55, 26393, NoLogo, LineMetaDataContent::Tramway, Color{0x96368b} }, // 1 OSM: 10413963 WD: Q15883002 51.2, 4.388 x 51.26, 4.421
    { 4048, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // 4М OSM: 10423669 47.83, 33.34 x 48, 33.5
    { 4052, 5700, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // 3М OSM: 10423670 WD: Q106432004 47.88, 33.39 x 48, 33.5
    { 4056, 18802, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // 2М OSM: 10423671 WD: Q106432003 47.89, 33.39 x 48, 33.5
    { 4060, 18571, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // 1М OSM: 10423672 WD: Q106432002 47.89, 33.39 x 47.96, 33.46
    { 291, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // C OSM: 10423828 WD: Q5061366 18.79, 72.83 x 19.65, 73.47
    { 4064, 7259, 226, LineMetaDataContent::RapidTransit, Color{0x006db6} }, // RB 32 OSM: 10432813 WD: Q7388251 51.43, 6.775 x 51.58, 7.459
    { 4070, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe73035} }, // Fredericksburg OSM: 10433416 38.22, -77.46 x 38.9, -77
    { 4085, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00bbb3} }, // CHW OSM: 10433666 WD: Q5093959 39.95, -75.21 x 40.08, -75.15
    { 4089, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa57b27} }, // CHE OSM: 10433667 WD: Q5093950 39.95, -75.21 x 40.08, -75.15
    { 4093, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x91456c} }, // AIR OSM: 10433668 WD: Q4698916 39.87, -75.26 x 39.96, -75.16
    { 4097, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x775ca7} }, // CYN OSM: 10433669 WD: Q5200188 39.95, -75.23 x 40.01, -75.17
    { 4101, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee5067} }, // NOR OSM: 10433670 WD: Q6747157 39.95, -75.35 x 40.12, -75.15
    { 4105, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0081c5} }, // ELW OSM: 10433671 WD: Q6805374 39.89, -75.46 x 39.98, -75.15
    { 4109, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8ed16a} }, // NWK OSM: 10433672 WD: Q8022734 39.67, -75.75 x 39.96, -75.16
    { 1179, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xc72a80} }, // L5 OSM: 10443588 46.18, 5.999 x 46.22, 6.144
    { 1183, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00b3b9} }, // L6 OSM: 10447940 46.1, 5.821 x 46.22, 6.144
    { 16, 26415, NoLogo, LineMetaDataContent::Subway, Color{0x00643a} }, // 2 OSM: 10458608 WD: Q20063925 26.04, 119.1 x 26.11, 119.4
    { 346, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xdc911b} }, // L4 OSM: 10464491 46.17, 6.121 x 46.32, 6.237
    { 54, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x3850a2} }, // 11 OSM: 10467354 WD: Q15944362 36.1, 120.5 x 36.48, 120.8
    { 58, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00ac84} }, // 13 OSM: 10467728 WD: Q15937512 35.67, 119.7 x 35.95, 120.2
    { 4113, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Sado OSM: 10484570 WD: Q1314068 38.51, -9.08 x 38.66, -8.838
    { 177, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00ace7} }, // 17 OSM: 10486182 WD: Q3238620 46.19, 6.125 x 46.2, 6.232
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // A OSM: 10486983 WD: Q3239053 47.83, 1.9 x 47.93, 1.939
    { 16, NoLogo, 23053, LineMetaDataContent::Subway, Color{0x4bb134} }, // 2 OSM: 10488738 WD: Q24838989 24.48, 117.9 x 24.58, 118.2
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf57b00} }, // 3 OSM: 10488912 WD: Q6112757 31.26, 120.5 x 31.37, 120.8
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x098137} }, // 3 OSM: 10488951 WD: Q17023374 31.75, 117.2 x 31.93, 117.4
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x44d62c} }, // T2 OSM: 10490757 30.69, 103.8 x 30.83, 104
    { 194, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x72277b} }, // B OSM: 10494114 WD: Q3239067 47.9, 1.854 x 47.91, 1.977
    { 358, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6c9d40} }, // L3 OSM: 10505987 45.91, 6.121 x 46.32, 6.703
    { 2768, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x44d62c} }, // T2B OSM: 10506169 30.73, 104 x 30.8, 104
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe82311} }, // 1 OSM: 10507454 WD: Q76339003 40.78, 111.6 x 40.86, 111.8
    { 59, 26434, 22951, LineMetaDataContent::Subway, Color{0x3f63e6} }, // 3 OSM: 10513363 WD: Q24837836 36.62, 117.1 x 36.77, 117.2
    { 4118, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4ca585} }, // TGM1 OSM: 10519278 22.9, 112.8 x 22.95, 112.9
    { 350, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xbf3527} }, // L1 OSM: 10521809 46.17, 6.121 x 46.4, 6.581
    { 354, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0085c4} }, // L2 OSM: 10526246 45.9, 6.116 x 46.32, 6.362
    { 6, 26468, NoLogo, LineMetaDataContent::Subway, Color{0xbb29bb} }, // 5 OSM: 10526316 WD: Q22100474 30.45, 104 x 30.83, 104.1
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc11} }, // 2 OSM: 10547015 WD: Q1878641 51, 3.709 x 51.05, 3.773
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xef7c00} }, // 9 OSM: 10547655 48.34, 10.89 x 48.37, 10.9
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3028c} }, // A OSM: 10551319 WD: Q93096868 48.38, -4.556 x 48.43, -4.444
    { 137, 26478, NoLogo, LineMetaDataContent::Subway, Color{0x827a04} }, // 14 OSM: 10557252 WD: Q6553074 31.22, 121.3 x 31.27, 121.6
    { 1270, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf9661e} }, // Orange OSM: 10561837 37.36, -122.1 x 37.42, -121.8
    { 4123, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0x4782ff} }, // 91/Perris Valley OSM: 10563416 WD: Q4645737 33.76, -118.2 x 34.06, -117.2
    { 4140, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // Inland Empire-Orange County OSM: 10563417 WD: Q6380515 33.19, -117.9 x 34.1, -117.3
    { 4154, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0xff8000} }, // Orange County OSM: 10563418 WD: Q5220500 33.19, -118.2 x 34.06, -117.4
    { 4168, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0x800080} }, // Riverside OSM: 10563419 WD: Q4801982 33.96, -118.2 x 34.06, -117.4
    { 4178, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0x800000} }, // San Bernardino OSM: 10563420 WD: Q4798016 34.05, -118.2 x 34.11, -117.2
    { 4193, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0xffc260} }, // Ventura County OSM: 10563421 WD: Q4132754 34.05, -119.2 x 34.29, -118.2
    { 4208, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0x008000} }, // Antelope Valley OSM: 10563422 WD: Q4162507 34.05, -118.5 x 34.7, -118.1
    { 3061, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // Blue Line OSM: 10563564 25.31, 51.42 x 25.32, 51.43
    { 4224, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x4ba7a6} }, // Turquoise Line OSM: 10563806 25.41, 51.49 x 25.43, 51.5
    { 3426, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xdd722d} }, // Orange Line OSM: 10563807 25.37, 51.49 x 25.43, 51.53
    { 4239, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd64488} }, // Purple Line OSM: 10563808 25.37, 51.49 x 25.42, 51.53
    { 2387, 11776, 226, LineMetaDataContent::RapidTransit, Color{0x008000} }, // Central OSM: 10570207 WD: Q459508 -7.233, -39.41 x -7.206, -39.3
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8a8988} }, // 1 OSM: 10570395 WD: Q10318643 -5.111, -42.82 x -5.08, -42.74
    { 1432, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x008000} }, // CBTU OSM: 10570416 WD: Q18484877 -7.131, -34.98 x -6.974, -34.83
    { 3589, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Norte OSM: 10570453 -3.683, -40.37 x -3.662, -40.34
    { 2089, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // Sul OSM: 10570461 -3.699, -40.36 x -3.682, -40.33
    { 4251, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // 550 OSM: 10577109 30.26, -97.86 x 30.59, -97.7
    { 16, 26507, NoLogo, LineMetaDataContent::Tramway, Color{0xf18e00} }, // 2 OSM: 10579671 WD: Q3238812 43.57, 3.831 x 43.65, 3.931
    { 59, 26517, NoLogo, LineMetaDataContent::Tramway, Color{0xcbd300} }, // 3 OSM: 10579672 WD: Q3238911 43.56, 3.81 x 43.62, 3.964
    { 55, 26527, NoLogo, LineMetaDataContent::Tramway, Color{0x005ba1} }, // 1 OSM: 10579673 WD: Q3238667 43.6, 3.817 x 43.64, 3.92
    { 4255, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee293d} }, // TEX OSM: 10580066 WD: Q28228164 32.75, -97.34 x 32.94, -97.04
    { 496, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 656 OSM: 10588005 32.72, -117.4 x 33.19, -117.2
    { 4259, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 662 OSM: 10588005 32.72, -117.4 x 33.19, -117.2
    { 4263, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 636 OSM: 10588005 32.72, -117.4 x 33.19, -117.2
    { 1763, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 654 OSM: 10588005 32.72, -117.4 x 33.19, -117.2
    { 4267, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 640 OSM: 10588005 32.72, -117.4 x 33.19, -117.2
    { 4271, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ff80} }, // 630 OSM: 10588005 32.72, -117.4 x 33.19, -117.2
    { 4275, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x55502b} }, // UP Express OSM: 10608917 WD: Q497520 43.64, -79.62 x 43.71, -79.38
    { 3151, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7d4d31} }, // S15 OSM: 10615459 47.46, 8.895 x 47.56, 9.041
    { 912, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9285bf} }, // S10 OSM: 10615934 47.46, 9.021 x 47.57, 9.38
    { 4286, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x794400} }, // Stouffville OSM: 10624851 WD: Q3239216 43.64, -79.38 x 44, -79.23
    { 4298, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x009ac7} }, // Richmond Hill OSM: 10624852 WD: Q3239183 43.64, -79.43 x 43.88, -79.32
    { 4312, 26537, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf57f25} }, // Milton OSM: 10624853 WD: Q3239156 43.52, -79.87 x 43.67, -79.38
    { 4319, 26556, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00853f} }, // Kitchener OSM: 10624854 WD: Q3239126 42.98, -81.25 x 43.71, -79.38
    { 4329, 26578, NoLogo, LineMetaDataContent::RapidTransit, Color{0x003768} }, // Barrie OSM: 10624855 WD: Q3239071 43.64, -79.69 x 44.37, -79.38
    { 4336, 26597, NoLogo, LineMetaDataContent::RapidTransit, Color{0xee3124} }, // Lakeshore East OSM: 10624856 WD: Q3239134 43.64, -79.38 x 43.87, -78.89
    { 964, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x8c86bf} }, // S28 OSM: 10644936 WD: Q115747154 47.29, 7.939 x 47.39, 8.17
    { 4351, 2660, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9f142c} }, // Lakeshore West OSM: 10647448 WD: Q3239135 43.25, -79.89 x 43.65, -79.38
    { 4366, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xb41d8e} }, // S22 OSM: 10650450 47.39, 9.359 x 47.43, 9.462
    { 839, 26624, NoLogo, LineMetaDataContent::Subway, Color{0xfedb00} }, // Y OSM: 10658528 WD: Q5971413 24.98, 121.5 x 25.06, 121.5
    { 3316, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00ffff} }, // Aqua Line OSM: 10659365 WD: Q62051025 21.11, 78.99 x 21.15, 79.15
    { 2288, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf7941d} }, // S14 OSM: 10685821 47.56, 9.103 x 47.66, 9.192
    { 4370, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xadd8e6} }, // LRT OSM: 10693161 WD: Q65762187 -6.193, 106.9 x -6.155, 106.9
    { 41, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf26531} }, // S7 OSM: 10696321 47.48, 9.102 x 47.57, 9.51
    { 4374, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 102 OSM: 10696526 39.91, -75.3 x 39.96, -75.26
    { 4378, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 101 OSM: 10696527 39.91, -75.39 x 39.96, -75.26
    { 164, 26648, 2154, LineMetaDataContent::RapidTransit, Color{0xe6007e} }, // S3 OSM: 10699280 WD: Q116125181 46.95, 15.42 x 47.1, 16.02
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 10 OSM: 10703006 WD: Q839339 39.95, -75.25 x 39.98, -75.16
    { 1891, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 34 OSM: 10703188 WD: Q839339 39.94, -75.25 x 39.96, -75.16
    { 1137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 36 OSM: 10703676 WD: Q839339 39.9, -75.24 x 39.96, -75.16
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 11 OSM: 10705415 WD: Q839339 39.92, -75.26 x 39.96, -75.16
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 13 OSM: 10705526 WD: Q839339 39.92, -75.26 x 39.96, -75.16
    { 50, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x5da526} }, // S2 OSM: 10724094 WD: Q115646644 46.82, 8.496 x 47.45, 9.063
    { 164, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xf58220} }, // S3 OSM: 10724334 WD: Q115646645 47, 8.297 x 47.1, 8.632
    { 213, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xa62b48} }, // S4 OSM: 10736536 WD: Q115646646 46.91, 8.3 x 47.05, 8.398
    { 44, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xee3d96} }, // S5 OSM: 10736575 WD: Q115646648 46.84, 8.185 x 47.05, 8.314
    { 199, 26666, 2154, LineMetaDataContent::RapidTransit, Color{0xf39200} }, // S6 OSM: 10748876 WD: Q116125188 46.72, 15.21 x 47.07, 15.48
    { 322, 26684, 6526, LineMetaDataContent::Subway, Color{0x5d9732} }, // M2 OSM: 10760559 WD: Q2519385 45.4, 9.145 x 45.55, 9.437
    { 1142, 26704, 6526, LineMetaDataContent::Subway, Color{0xfdb813} }, // M3 OSM: 10788272 WD: Q2519355 45.43, 9.163 x 45.53, 9.257
    { 260, 26724, 6526, LineMetaDataContent::Subway, Color{0xee2e24} }, // M1 OSM: 10803053 WD: Q2400801 45.46, 9.084 x 45.54, 9.239
    { 180, NoLogo, 26744, LineMetaDataContent::RapidTransit, Color{0x644215} }, // S50 OSM: 10816434 WD: Q110305283 46.48, 6.836 x 46.62, 7.087
    { 1857, NoLogo, 26744, LineMetaDataContent::RapidTransit, Color{0x0c5a6c} }, // S30 OSM: 10816437 WD: Q115701424 46.78, 6.638 x 46.85, 7.154
    { 1660, NoLogo, 26744, LineMetaDataContent::RapidTransit, Color{0x6e9ed4} }, // S21 OSM: 10816438 WD: Q110305258 46.8, 7.094 x 47, 7.154
    { 1152, NoLogo, 26744, LineMetaDataContent::RapidTransit, Color{0x24318a} }, // S20 OSM: 10816439 WD: Q115702408 46.8, 6.933 x 47.01, 7.154
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3fbfaa} }, // 15 OSM: 10899251 47.1, 37.62 x 47.12, 37.65
    { 8, 26770, 2634, LineMetaDataContent::Subway, Color{0x36b6f1} }, // M4 OSM: 10925800 WD: Q88965328 55.67, 12.56 x 55.71, 12.6
    { 4382, 26782, NoLogo, LineMetaDataContent::RapidTransit, Color{0xed772d} }, // SI OSM: 10956060 WD: Q93546 35.72, 139.2 x 35.91, 139.7
    { 44, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8dc63f} }, // S5 OSM: 10958455 47.4, 9.102 x 47.57, 9.642
    { 928, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x6a489d} }, // S12 OSM: 10961967 WD: Q106455671 46.85, 9.441 x 47.05, 9.562
    { 188, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x38b54a} }, // S24 OSM: 10963118 47.36, 9.451 x 47.38, 9.538
    { 1660, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x089690} }, // S21 OSM: 10963311 WD: Q106455085 47.33, 9.359 x 47.43, 9.462
    { 3250, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // 1720 OSM: 10976185 13.13, 123.2 x 13.62, 123.8
    { 3599, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // 1530 OSM: 10976234 13.59, 123 x 13.77, 123.2
    { 4385, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffa500} }, // 1645 OSM: 10976234 13.59, 123 x 13.77, 123.2
    { 468, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9f26b4} }, // N OSM: 11004619 WD: Q19877104 39.75, -105 x 39.92, -104.9
    { 4390, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee0011} }, // The Trafford Centre – Cornbrook OSM: 11041584 WD: Q28404109 53.46, -2.348 x 53.47, -2.267
    { 404, 26801, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // TS OSM: 11065562 WD: Q2791146 35.51, 139.4 x 36.11, 139.8
    { 26, 26835, NoLogo, LineMetaDataContent::Subway, Color{0xffb25b} }, // 16 OSM: 11076299 WD: Q22099544 30.2, 119.7 x 30.27, 120
    { 34, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x303888} }, // H OSM: 11093106 WD: Q5654835 18.94, 72.83 x 19.12, 73.12
    { 521, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xebcf1f} }, // W OSM: 11094510 WD: Q7988022 18.93, 72.81 x 19.46, 72.86
    { 4424, NoLogo, 20951, LineMetaDataContent::Subway, Color{0x252525} }, // JSQ–33 via HOB OSM: 11100813 WD: Q1931652 40.72, -74.06 x 40.75, -73.99
    { 65, 26856, NoLogo, LineMetaDataContent::Subway, Color{0x62aa3c} }, // 10 OSM: 11123255 WD: Q20688706 41.71, 123.3 x 41.86, 123.5
    { 294, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffc0cb} }, // S OSM: 11135401 WD: Q5364907 34.32, 134.1 x 34.34, 134.2
    { 408, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // K OSM: 11135402 WD: Q5371397 34.19, 133.8 x 34.35, 134.1
    { 468, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // N OSM: 11135412 WD: Q5364831 34.27, 134 x 34.35, 134.2
    { 61, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x000000} }, // S1 OSM: 11183563 47.15, 9.601 x 47.55, 9.817
    { 50, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x000000} }, // S2 OSM: 11185452 47.16, 9.078 x 47.48, 9.651
    { 164, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x000000} }, // S3 OSM: 11185510 47.45, 9.637 x 47.55, 9.754
    { 213, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x000000} }, // S4 OSM: 11185615 47.08, 9.816 x 47.15, 9.918
    { 41, 26888, 2154, LineMetaDataContent::RapidTransit, Color{0xbe1622} }, // S7 OSM: 11185888 WD: Q116125192 46.96, 15.08 x 47.07, 15.42
    { 83, 26906, 2154, LineMetaDataContent::RapidTransit, Color{0xf39200} }, // S61 OSM: 11185889 WD: Q116125190 46.72, 15.21 x 47.07, 15.42
    { 4441, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff6319} }, // <F> OSM: 11248274 40.58, -74 x 40.77, -73.78
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xabcd03} }, // 3 OSM: 11257190 WD: Q17030673 28.1, 112.9 x 28.25, 113.1
    { 6, 26925, NoLogo, LineMetaDataContent::Subway, Color{0xffe200} }, // 5 OSM: 11257230 WD: Q18668926 28.09, 113 x 28.29, 113.1
    { 4445, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S76 OSM: 11266353 WD: Q100707374 47.49, 18.9 x 47.62, 19.17
    { 4449, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aeef} }, // HBLR OSM: 11269271 WD: Q114054273 40.65, -74.13 x 40.79, -74.01
    { 941, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x9a6b31} }, // S42 OSM: 11277216 WD: Q106451501 47.28, 8.204 x 47.44, 8.539
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 3 OSM: 11279461 46.95, 31.98 x 46.98, 32.03
    { 1142, 26944, 17830, LineMetaDataContent::Subway, Color{0x008000} }, // M3 OSM: 11299964 WD: Q12289405 42.68, 23.24 x 42.7, 23.35
    { 141, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x3e6c01} }, // 15 OSM: 11328858 39.96, -75.25 x 39.98, -75.13
    { 4454, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // RL(M) OSM: 11359791 WD: Q172144 42.27, -71.09 x 42.28, -71.06
    { 4460, 25388, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008150} }, // GL(B) OSM: 11359792 WD: Q172011 42.34, -71.17 x 42.36, -71.06
    { 4466, 25388, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008150} }, // GL(C) OSM: 11359793 WD: Q172022 42.34, -71.15 x 42.36, -71.06
    { 4472, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x73757d} }, // Metro OSM: 11364344 42.88, -78.88 x 42.95, -78.82
    { 267, NoLogo, 26969, LineMetaDataContent::RapidTransit, Color{0x0000f8} }, // Blue OSM: 11366428 WD: Q4929372 38.59, -90.35 x 38.65, -90.05
    { 279, NoLogo, 26969, LineMetaDataContent::RapidTransit, Color{0xf80000} }, // Red OSM: 11366429 WD: Q7304508 38.51, -90.36 x 38.74, -89.88
    { 80, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 63 OSM: 11375919 59.93, 30.44 x 59.96, 30.49
    { 41, 26997, 23635, LineMetaDataContent::RapidTransit, Color{0xf60060} }, // S7 OSM: 11479781 WD: Q26878568 45.48, 9.179 x 45.86, 9.399
    { 61, NoLogo, 27011, LineMetaDataContent::RapidTransit, Color{0x11385b} }, // S1 OSM: 11482970 WD: Q43285793 39.7, 116.1 x 39.9, 116.7
    { 2314, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x55c5d0} }, // S81 OSM: 11484467 47.39, 9.275 x 47.42, 9.369
    { 4478, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00b9f2} }, // S82 OSM: 11484468 47.42, 9.367 x 47.46, 9.4
    { 304, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf0d808} }, // U OSM: 11490692 WD: Q28153731 18.88, 72.95 x 19.03, 73.04
    { 39, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x4b0082} }, // T OSM: 11490693 WD: Q7833528 18.99, 72.97 x 19.19, 73.12
    { 50, NoLogo, 27011, LineMetaDataContent::RapidTransit, Color{0x11385b} }, // S2 OSM: 11494225 WD: Q4390966 40.07, 115.5 x 40.44, 116.3
    { 44, NoLogo, 27011, LineMetaDataContent::RapidTransit, Color{0xfabbcb} }, // S5 OSM: 11494329 WD: Q42308711 39.94, 116.2 x 40.69, 117.1
    { 616, 27024, 27024, LineMetaDataContent::RapidTransit, Color{0x0092db} }, // 301 OSM: 11494376 WD: Q106676138 43.42, -80.55 x 43.5, -80.44
    { 4482, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff061d} }, // C-1a OSM: 11498247 36.53, -6.206 x 36.54, -6.194
    { 199, NoLogo, 24102, LineMetaDataContent::RapidTransit, Color{0xe9583f} }, // S6 OSM: 11519985 WD: Q63705067 47.54, 7.591 x 47.71, 7.849
    { 4487, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0072bc} }, // N6 OSM: 11522997 47.55, 7.587 x 47.59, 7.656
    { 1142, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcf06} }, // M3 OSM: 11525600 WD: Q2637212 50.41, 4.43 x 50.48, 4.452
    { 4490, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Thilawa OSM: 11548643 16.66, 96.16 x 16.86, 96.26
    { 4498, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Eastern University OSM: 11548647 16.74, 96.16 x 16.86, 96.29
    { 4517, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // Ywar Thar Gyi OSM: 11548648 16.78, 96.16 x 16.93, 96.27
    { 4531, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // Computer University OSM: 11548671 16.78, 96.07 x 17.01, 96.16
    { 4551, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // Insein - Hlaw Karr OSM: 11548680 16.87, 96.08 x 17, 96.11
    { 4570, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Dagon University OSM: 11549059 16.78, 96.16 x 16.91, 96.23
    { 1891, NoLogo, 13305, LineMetaDataContent::Tramway, Color{0x858585} }, // 34 OSM: 11565304 WD: Q100991407 52.04, 4.244 x 52.08, 4.543
    { 4587, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe1e1ff} }, // SN 4 OSM: 11566470 50.97, -0.1728 x 51.5, 0.213
    { 4592, 27046, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00bfff} }, // KK OSM: 11568311 WD: Q906807 35.18, 139.6 x 35.64, 139.8
    { 16, NoLogo, 18944, LineMetaDataContent::Subway, Color{0xfec30a} }, // 2 OSM: 11582700 WD: Q85776743 37.97, 114.5 x 38.09, 114.5
    { 27, 27072, NoLogo, LineMetaDataContent::Subway, Color{0x3abca8} }, // 6 OSM: 11583149 WD: Q6119435 22.54, 113.8 x 22.79, 114.1
    { 65, 27095, NoLogo, LineMetaDataContent::Subway, Color{0xf8779e} }, // 10 OSM: 11583622 WD: Q15925362 22.52, 114.1 x 22.7, 114.1
    { 4595, 24061, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008a29} }, // C-2 (CIVIS) OSM: 11589066 WD: Q2287356 40.44, -3.682 x 40.64, -3.183
    { 460, 27119, NoLogo, LineMetaDataContent::RapidTransit, Color{0x449ad5} }, // R1 OSM: 11592118 WD: Q2395239 41.36, 2.02 x 41.77, 2.769
    { 194, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x094b8d} }, // B OSM: 11592473 WD: Q4705897 -37.91, 144.9 x -37.76, 145.4
    { 8, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x84c8eb} }, // M4 OSM: 11592482 WD: Q1841724 50.41, 4.435 x 50.43, 4.503
    { 4607, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffb531} }, // CH OSM: 11592485 WD: Q7639008 -37.82, 144.7 x -37.58, 145
    { 4610, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee1d23} }, // E11 OSM: 11604709 WD: Q106925455 47.48, 7.584 x 47.55, 7.612
    { 4614, 27136, 16137, LineMetaDataContent::Subway, Color{0xf5a200} }, // 272 OSM: 11619514 WD: Q84389881 37.24, 126.6 x 37.58, 127.1
    { 4618, 27158, 27199, LineMetaDataContent::Tramway, Color{0xdce3e9} }, // T1a OSM: 11636568 WD: Q117008305 38.72, 35.37 x 38.79, 35.63
    { 4622, 27217, 27199, LineMetaDataContent::Tramway, Color{0xdce3e9} }, // T2a OSM: 11636816 WD: Q117008320 38.69, 35.49 x 38.73, 35.56
    { 4626, 27258, NoLogo, LineMetaDataContent::Subway, Color{0xb8007c} }, // TL-3 OSM: 11637375 WD: Q5986357 20.62, -103.4 x 20.74, -103.3
    { 206, 27158, 27199, LineMetaDataContent::Tramway, Color{0xdce3e9} }, // T1 OSM: 11641755 WD: Q117008305 38.72, 35.37 x 38.79, 35.63
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffa500} }, // 4 OSM: 11643429 WD: Q24837537 24.86, 102.6 x 25.11, 102.9
    { 493, 27217, 27199, LineMetaDataContent::Tramway, Color{0xdce3e9} }, // T2 OSM: 11644048 WD: Q117008320 38.69, 35.49 x 38.73, 35.56
    { 4631, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc16c18} }, // 4–环–5 OSM: 11665748 29.41, 106.4 x 29.63, 106.7
    { 4643, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xa58704} }, // BTS Gold Line OSM: 11681439 WD: Q25540775 13.72, 100.5 x 13.73, 100.5
    { 22, 27324, NoLogo, LineMetaDataContent::Subway, Color{0x006272} }, // 18 OSM: 11697795 WD: Q22100462 30.27, 104.1 x 30.61, 104.5
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0645ad} }, // 2 OSM: 11697809 WD: Q82669483 40.75, 111.6 x 40.87, 111.8
    { 11, NoLogo, 8003, LineMetaDataContent::Subway, Color{0xff8040} }, // M5 OSM: 11697885 WD: Q1641397 44.41, 26.01 x 44.44, 26.07
    { 16, 27335, 22469, LineMetaDataContent::Subway, Color{0x00ff00} }, // 2 OSM: 11720074 WD: Q6427302 22.57, 88.37 x 22.59, 88.43
    { 194, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x406681} }, // B OSM: 11727456 35.02, 135.7 x 35.03, 135.7
    { 3194, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xbd0d2e} }, // Π1 OSM: 11748540 WD: Q3536559 38.24, 21.73 x 38.3, 21.78
    { 3198, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x27509b} }, // Π2 OSM: 11748541 WD: Q3536559 38.14, 21.56 x 38.24, 21.73
    { 213, 2154, 226, LineMetaDataContent::RapidTransit, Color{0xd7df23} }, // S4 OSM: 11758267 WD: Q680235 47.25, 11.08 x 47.58, 12.17
    { 164, 2154, 226, LineMetaDataContent::RapidTransit, Color{0xbec2d0} }, // S3 OSM: 11763877 WD: Q680235 47, 11.39 x 47.26, 11.51
    { 44, 2154, 226, LineMetaDataContent::RapidTransit, Color{0xd4b4c4} }, // S5 OSM: 11763897 WD: Q680235 47.24, 10.86 x 47.39, 11.78
    { 47, 27375, 2154, LineMetaDataContent::RapidTransit, Color{0x257ca7} }, // S8 OSM: 11763916 WD: Q112707555 47.42, 12.06 x 47.52, 12.63
    { 298, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x035eb9} }, // M OSM: 11772006 WD: Q118902123 61.17, 23.5 x 61.51, 23.86
    { 4657, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9a897e} }, // E5 OSM: 11796871 WD: Q104233835 43.3, -1.983 x 43.32, -1.931
    { 59, 27395, NoLogo, LineMetaDataContent::Subway, Color{0x0101f8} }, // 3 OSM: 11798336 WD: Q19852709 31.5, 120.2 x 31.6, 120.4
    { 4660, 27420, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0f6cc3} }, // TI OSM: 11801291 WD: Q906598 36.02, 139.2 x 36.33, 139.7
    { 4663, 27454, NoLogo, LineMetaDataContent::Subway, Color{0xf68b1e} }, // TN OSM: 11801775 WD: Q845954 35.51, 139.4 x 36.75, 139.8
    { 287, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xf7943a} }, // O OSM: 11803501 WD: Q18385578 31.46, 74.24 x 31.59, 74.43
    { 27, NoLogo, 6526, LineMetaDataContent::Subway, Color{0x0099cc} }, // 6 OSM: 11807149 WD: Q3832666 40.82, 14.19 x 40.84, 14.25
    { 1577, 27486, NoLogo, LineMetaDataContent::Tramway, Color{0xcc0099} }, // T3 OSM: 11813038 WD: Q117327547 36.88, 30.66 x 36.99, 30.72
    { 493, 27527, NoLogo, LineMetaDataContent::Tramway, Color{0x027ffd} }, // T2 OSM: 11813041 WD: Q116369823 36.87, 30.68 x 36.89, 30.72
    { 4666, 27568, NoLogo, LineMetaDataContent::Tramway, Color{0xff6400} }, // T1A OSM: 11813042 WD: Q117327542 36.89, 30.64 x 36.94, 30.81
    { 4670, 27610, NoLogo, LineMetaDataContent::Tramway, Color{0xff6400} }, // T1B OSM: 11813043 WD: Q117327753 36.89, 30.64 x 36.95, 30.88
    { 4674, 27652, NoLogo, LineMetaDataContent::RapidTransit, Color{} }, // FEX OSM: 11815470 WD: Q100533383 52.36, 13.36 x 52.55, 13.6
    { 4678, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // CK OSM: 11830794 WD: Q5097496 33.75, 130.7 x 33.87, 130.8
    { 34, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0072bc} }, // H OSM: 11839798 WD: Q1074266 42.64, 141.3 x 43.11, 141.7
    { 59, NoLogo, 17784, LineMetaDataContent::Subway, Color{0x008000} }, // 3 OSM: 11845129 WD: Q2889805 53.84, 27.53 x 53.91, 27.55
    { 4681, 27671, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd12027} }, // NH OSM: 11851821 WD: Q1137838 34.76, 136.8 x 35.41, 137.4
    { 354, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000cd} }, // L2 OSM: 11871075 WD: Q42387974 30.44, 114.4 x 30.51, 114.5
    { 1664, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfece0c} }, // Gold OSM: 11873946 WD: Q5059275 35.21, -80.86 x 35.25, -80.82
    { 59, 27681, NoLogo, LineMetaDataContent::Subway, Color{0x90403e} }, // 3 OSM: 11899105 WD: Q30641320 21.03, 105.7 x 21.05, 105.8
    { 1985, NoLogo, 27711, LineMetaDataContent::Subway, Color{0xff0000} }, // UMRT1 OSM: 11919223 WD: Q61132107 10.77, 106.7 x 10.88, 106.8
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xdae600} }, // 4 OSM: 11923211 WD: Q26262003 22.75, 108.2 x 22.77, 108.5
    { 992, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xd77d00} }, // 31 OSM: 11997852 WD: Q1760190 59.33, 17.95 x 59.36, 17.98
    { 226, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 25 OSM: 12010107 WD: Q2619013 52.27, 4.831 x 52.34, 4.876
    { 27, 27731, NoLogo, LineMetaDataContent::Subway, Color{0xb36924} }, // 6 OSM: 12039115 WD: Q22100481 30.43, 103.9 x 30.81, 104.1
    { 354, NoLogo, 26176, LineMetaDataContent::Tramway, Color{0x004f9f} }, // L2 OSM: 12078298 WD: Q3238814 43.66, 7.199 x 43.7, 7.285
    { 19, 27741, NoLogo, LineMetaDataContent::Subway, Color{0x88dd00} }, // 8 OSM: 12086373 WD: Q26262006 30.54, 104 x 30.73, 104.2
    { 177, 27751, NoLogo, LineMetaDataContent::Subway, Color{0x80e0a7} }, // 17 OSM: 12095438 WD: Q28973151 30.63, 103.8 x 30.76, 104.2
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 7 OSM: 12114202 44.78, 20.37 x 44.81, 20.52
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 9 OSM: 12114471 44.76, 20.37 x 44.81, 20.48
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 11 OSM: 12114747 44.79, 20.37 x 44.83, 20.46
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 13 OSM: 12115860 44.77, 20.37 x 44.81, 20.43
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 1 OSM: 12116142 60.16, 24.92 x 60.22, 24.96
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 2 OSM: 12116144 60.16, 24.92 x 60.2, 24.96
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 3 OSM: 12116149 60.16, 24.9 x 60.2, 24.96
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 4 OSM: 12116155 60.17, 24.87 x 60.2, 24.98
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 5 OSM: 12116158 60.16, 24.94 x 60.17, 24.97
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 6 OSM: 12116159 60.15, 24.92 x 60.21, 24.98
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 7 OSM: 12116160 60.15, 24.92 x 60.2, 24.96
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 8 OSM: 12116163 60.16, 24.91 x 60.21, 24.98
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 9 OSM: 12116164 60.15, 24.91 x 60.2, 24.95
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00985f} }, // 10 OSM: 12116165 60.16, 24.89 x 60.21, 24.95
    { 412, 27762, 3131, LineMetaDataContent::RapidTransit, Color{0x7577c0} }, // L OSM: 12142601 WD: Q93379 48.81, 2.011 x 49.05, 2.324
    { 9, 27796, NoLogo, LineMetaDataContent::Subway, Color{0xabcd03} }, // 4 OSM: 12144421 WD: Q10946023 29.78, 121.4 x 29.98, 121.6
    { 1364, 27817, 9418, LineMetaDataContent::Tramway, Color{0x7c72b3} }, // T5 OSM: 12174617 WD: Q48848864 41.02, 28.94 x 41.09, 28.96
    { 2791, 24336, NoLogo, LineMetaDataContent::Subway, Color{0x937cb9} }, // Z OSM: 12184336 WD: Q1190086 35.51, 139.4 x 36.11, 139.8
    { 141, 27845, NoLogo, LineMetaDataContent::Subway, Color{0xbba786} }, // 15 OSM: 12231218 WD: Q6553078 31.02, 121.4 x 31.35, 121.4
    { 953, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00c000} }, // 2A OSM: 12231738 WD: Q30919856 20.95, 105.7 x 21.03, 105.8
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xfab71b} }, // 2 OSM: 12232119 50.89, 11.58 x 50.93, 11.62
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x6a2e74} }, // 5 OSM: 12232120 50.88, 11.58 x 50.93, 11.64
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xda020e} }, // 4 OSM: 12232121 50.88, 11.58 x 50.96, 11.62
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x7f5f00} }, // 3 OSM: 12232122 50.88, 11.58 x 50.9, 11.64
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe94c0a} }, // 1 OSM: 12232123 50.88, 11.58 x 50.96, 11.62
    { 4684, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf0e68c} }, // Limited OSM: 12246239 37, -122.4 x 37.78, -121.6
    { 233, 27855, 21523, LineMetaDataContent::Subway, Color{0x9c5e31} }, // F OSM: 12248576 WD: Q1332908 35.44, 139.4 x 36.05, 139.7
    { 4382, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xed772d} }, // SI OSM: 12250873 35.74, 139.3 x 35.85, 139.7
    { 4692, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3e049} }, // TECO OSM: 12321313 27.94, -82.46 x 27.96, -82.44
    { 4697, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdb161c} }, // QLine OSM: 12330605 42.33, -83.07 x 42.37, -83.05
    { 298, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // M OSM: 12331275 43.03, -87.92 x 43.05, -87.9
    { 294, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // S OSM: 12332844 34.65, 133.9 x 34.67, 133.9
    { 34, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // H OSM: 12332845 34.66, 133.9 x 34.67, 133.9
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 2 OSM: 12340019 WD: Q18155116 29.95, -90.07 x 29.96, -90.06
    { 388, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x90ee90} }, // 48 OSM: 12340020 29.96, -90.1 x 29.98, -90.08
    { 501, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 47 OSM: 12340021 29.95, -90.11 x 29.98, -90.07
    { 15, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 12 OSM: 12340022 29.93, -90.13 x 29.96, -90.07
    { 267, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00aae4} }, // Blue OSM: 12340243 34.74, -92.27 x 34.76, -92.26
    { 437, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x66ff00} }, // Green OSM: 12340244 34.74, -92.27 x 34.75, -92.26
    { 55, NoLogo, 6526, LineMetaDataContent::Subway, Color{0xfeca1b} }, // 1 OSM: 12341393 WD: Q1085934 40.84, 14.22 x 40.9, 14.27
    { 493, NoLogo, 27895, LineMetaDataContent::Tramway, Color{0x50ab43} }, // T2 OSM: 12342707 WD: Q30634535 38.4, 27.07 x 38.44, 27.17
    { 4703, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x961a54} }, // MXP2 OSM: 12343018 WD: Q1858023 45.48, 8.704 x 45.65, 9.215
    { 1398, NoLogo, 27915, LineMetaDataContent::RapidTransit, Color{0x800080} }, // Purple OSM: 12356340 WD: Q4533683 29.7, -95.37 x 29.76, -95.33
    { 279, NoLogo, 27915, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // Red OSM: 12356341 WD: Q16934038 29.67, -95.41 x 29.83, -95.36
    { 437, NoLogo, 27915, LineMetaDataContent::RapidTransit, Color{0x008000} }, // Green OSM: 12356342 WD: Q4262189 29.74, -95.37 x 29.76, -95.3
    { 4708, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff1b6e} }, // APT Rose OSM: 12360663 32.86, -96.94 x 32.87, -96.93
    { 4717, 27938, 12031, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // m1 OSM: 12371355 WD: Q685114 46.52, 6.564 x 46.54, 6.63
    { 206, NoLogo, 27895, LineMetaDataContent::Tramway, Color{0x50ab43} }, // T1 OSM: 12378475 WD: Q21523607 38.45, 27.07 x 38.48, 27.13
    { 59, 27965, NoLogo, LineMetaDataContent::Subway, Color{0xff8000} }, // 3 OSM: 12380649 WD: Q56377988 25.67, -100.3 x 25.71, -100.3
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc1d522} }, // 5 OSM: 12385671 WD: Q43445187 31.7, 117.3 x 31.94, 117.3
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x146eb7} }, // 4 OSM: 12400338 WD: Q107104582 40.83, 14.26 x 40.85, 14.31
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x4096d2} }, // 1 OSM: 12400369 WD: Q107104562 40.84, 14.26 x 40.87, 14.29
    { 916, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x8fbc8f} }, // 399 OSM: 12417807 33.12, -117.4 x 33.22, -117.1
    { 4720, 27983, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9b26b6} }, // Π5 OSM: 12423300 WD: Q35645597 38.01, 22.1 x 38.24, 22.73
    { 16, 28018, 6526, LineMetaDataContent::Tramway, Color{0x025257} }, // 2 OSM: 12462807 WD: Q2274338 40.82, 14.13 x 40.87, 14.31
    { 4724, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0d82c7} }, // OH OSM: 12463786 WD: Q11430772 35.23, 139 x 35.69, 139.7
    { 199, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xd72319} }, // S6 OSM: 12524258 WD: Q110186534 49.44, 10.58 x 49.58, 11.08
    { 4727, 28037, 5051, LineMetaDataContent::Tramway, Color{0x5291ce} }, // T9 OSM: 12564972 WD: Q3537038 48.75, 2.365 x 48.82, 2.419
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd22630} }, // T1 OSM: 12567203 39.71, 116.5 x 39.8, 116.6
    { 4730, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x015dab} }, // Atlantic City OSM: 12577780 WD: Q756350 39.36, -75.2 x 40.01, -74.44
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 1 OSM: 12606970 WD: Q107191166 37.99, -1.174 x 38.04, -1.124
    { 2667, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x78b942} }, // Verde OSM: 12632067 -9.672, -35.74 x -9.65, -35.72
    { 2698, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x1a5ba3} }, // Azul OSM: 12632071 -9.625, -35.86 x -9.478, -35.75
    { 8, NoLogo, 17830, LineMetaDataContent::Subway, Color{0xffff00} }, // M4 OSM: 12668937 WD: Q101570868 42.65, 23.26 x 42.74, 23.42
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfdc434} }, // 1 OSM: 12686111 WD: Q56388740 46.24, 20.12 x 46.42, 20.34
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 3 OSM: 12758107 61.44, 23.74 x 61.5, 23.87
    { 480, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x81cf00} }, // R OSM: 12765542 WD: Q3239181 50.64, 3.071 x 50.69, 3.179
    { 39, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0099ff} }, // T OSM: 12765723 WD: Q3239234 50.64, 3.071 x 50.72, 3.159
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // 1 OSM: 12771495 31.53, 130.5 x 31.6, 130.6
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 2 OSM: 12771498 31.56, 130.5 x 31.6, 130.6
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x005bac} }, // 2 OSM: 12791164 WD: Q19856264 26.52, 106.6 x 26.7, 106.8
    { 4744, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xcc0000} }, // Route 2020 OSM: 12820286 WD: Q97940934 24.96, 55.13 x 25.06, 55.16
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x800080} }, // 3 OSM: 12824257 12.82, 80.22 x 13.15, 80.27
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff8000} }, // 4 OSM: 12824987 13.03, 80.08 x 13.05, 80.28
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 5 OSM: 12828618 12.9, 80.16 x 13.16, 80.24
    { 1224, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // IR87 OSM: 12856601 47.49, 19.08 x 47.89, 20.42
    { 4755, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xaacd46} }, // G40 OSM: 12856603 WD: Q112963120 46.37, 18.15 x 47.5, 19.04
    { 4759, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd28} }, // Z42 OSM: 12856604 WD: Q112225437 46.96, 18.76 x 47.5, 19.04
    { 59, NoLogo, 23053, LineMetaDataContent::Subway, Color{0x0c89de} }, // 3 OSM: 12893656 WD: Q47500936 24.43, 118.1 x 24.58, 118.3
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x529fc9} }, // 2 OSM: 12914035 WD: Q106783516 31.75, 119.9 x 31.81, 120.1
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc5003e} }, // 1 OSM: 12920991 WD: Q24836509 29.92, 120.2 x 30.31, 120.6
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xa6e35f} }, // 5 OSM: 12925442 WD: Q15939245 34.22, 108.7 x 34.27, 109
    { 59, 26317, NoLogo, LineMetaDataContent::Subway, Color{0x008bd5} }, // 3 OSM: 12935364 WD: Q47291030 34.15, 117.2 x 34.28, 117.2
    { 16, 26317, NoLogo, LineMetaDataContent::Subway, Color{0xef8200} }, // 2 OSM: 12935365 WD: Q47004987 34.21, 117.2 x 34.33, 117.3
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc4608c} }, // 1 OSM: 12942003 WD: Q15936968 34.66, 112.3 x 34.7, 112.6
    { 27, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x767fb8} }, // 6 OSM: 13040751 WD: Q52596166 34.15, 108.8 x 34.28, 109.1
    { 130, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xec9e3c} }, // 9 OSM: 13042254 WD: Q97350661 34.27, 109.1 x 34.4, 109.2
    { 19, 28070, NoLogo, LineMetaDataContent::Subway, Color{0xac145a} }, // 8 OSM: 13042427 WD: Q11102451 30.3, 120.4 x 30.31, 120.5
    { 55, NoLogo, 17177, LineMetaDataContent::RapidTransit, Color{0xe10506} }, // 1 OSM: 13058394 WD: Q15078613 13.8, 100.5 x 14, 100.6
    { 130, 28080, NoLogo, LineMetaDataContent::Subway, Color{0xbe4d00} }, // 9 OSM: 13060970 WD: Q18653898 30.25, 120.2 x 30.46, 120.3
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xdfaa00} }, // 1 OSM: 13067815 WD: Q15935678 35.94, 120.2 x 36.34, 120.4
    { 19, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc02996} }, // 8 OSM: 13068450 WD: Q22100048 36.17, 120 x 36.4, 120.4
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1 OSM: 13072753 61.49, 23.77 x 61.51, 23.82
    { 27, 28090, NoLogo, LineMetaDataContent::Subway, Color{0x0072ce} }, // 6 OSM: 13077350 WD: Q11102449 30.05, 119.9 x 30.3, 120.2
    { 9, 28104, NoLogo, LineMetaDataContent::Subway, Color{0x6bc349} }, // 4 OSM: 13077360 WD: Q11102444 30.16, 120.1 x 30.36, 120.2
    { 4763, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0077c8} }, // HH OSM: 13078550 30.38, 120.3 x 30.52, 120.7
    { 61, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x1b61ae} }, // S1 OSM: 13084233 27.91, 120.6 x 27.99, 121
    { 130, 28124, NoLogo, LineMetaDataContent::Subway, Color{0xffb81c} }, // 9 OSM: 13088859 WD: Q28972638 30.58, 104 x 30.7, 104.1
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe93cac} }, // 5 OSM: 13091428 WD: Q6553133 31.23, 120.4 x 31.37, 120.8
    { 4766, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // Т1 OSM: 13121369 59.94, 30.26 x 59.96, 30.35
    { 4770, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x5eb3e4} }, // TNH1 OSM: 13124236 WD: Q18651563 23, 113.2 x 23.04, 113.2
    { 4775, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xd42d1b} }, // THP1 OSM: 13140107 23.18, 113.5 x 23.22, 113.5
    { 1179, NoLogo, 2975, LineMetaDataContent::Tramway, Color{0x172983} }, // L5 OSM: 13154071 WD: Q9025966 38.34, -0.479 x 38.38, -0.4118
    { 4780, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0000ff} }, // Ouargla tram OSM: 13159622 WD: Q16680954 31.94, 5.265 x 31.96, 5.333
    { 16, 28134, NoLogo, LineMetaDataContent::Subway, Color{0xdb6d1c} }, // 2 OSM: 13176924 WD: Q5947229 22.48, 113.9 x 22.57, 114.2
    { 19, 28157, NoLogo, LineMetaDataContent::Subway, Color{0xdb6d1c} }, // 8 OSM: 13176927 WD: Q11174946 22.56, 114.2 x 22.59, 114.3
    { 1316, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xed1c24} }, // 44 OSM: 13199272 44.44, 26.02 x 44.47, 26.09
    { 199, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xb58bd7} }, // S6 OSM: 13200482 31.92, 118.9 x 32.06, 119.2
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe50a80} }, // 10 OSM: 13217677 55.67, 52.28 x 55.77, 52.45
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x362d86} }, // 9 OSM: 13217678 55.67, 52.28 x 55.77, 52.45
    { 54, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x182f72} }, // 11 OSM: 13217860 55.7, 52.34 x 55.74, 52.47
    { 42, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x808080} }, // 7 OSM: 13242817 49.17, 16.55 x 49.23, 16.63
    { 22, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0047ba} }, // 18 OSM: 13246294 22.7, 113.3 x 23.13, 113.6
    { 16, 28180, NoLogo, LineMetaDataContent::Subway, Color{0x00ae59} }, // 2 OSM: 13250192 WD: Q10921993 45.72, 126.5 x 45.87, 126.7
    { 4793, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // TRS OSM: 13262889 WD: Q39081226 -24.98, -65.65 x -24.65, -65.04
    { 50, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe4222b} }, // S2 OSM: 13282128 27.75, 120.6 x 28.08, 121
    { 4797, 28204, 3710, LineMetaDataContent::Subway, Color{0xa12830} }, // 1E OSM: 13298577 WD: Q1039452 39.85, 116.5 x 39.91, 116.7
    { 16, 28229, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 2 OSM: 13305615 WD: Q13390010 53.38, 14.55 x 53.43, 14.64
    { 4800, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // TAD OSM: 13308590 WD: Q18286525 -27.78, -64.27 x -27.73, -64.24
    { 4804, 28249, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7a745a} }, // F1 OSM: 13313680 WD: Q503503 41.03, 28.99 x 41.04, 28.99
    { 4807, 28277, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7a745a} }, // F2 OSM: 13313681 WD: Q387264 41.02, 28.97 x 41.03, 28.97
    { 9, 28305, NoLogo, LineMetaDataContent::Subway, Color{0x00a0e9} }, // 4 OSM: 13317505 WD: Q15938386 34.68, 113.6 x 34.83, 113.7
    { 59, 28324, NoLogo, LineMetaDataContent::Subway, Color{0xf39939} }, // 3 OSM: 13317992 WD: Q15950459 34.72, 113.6 x 34.84, 113.8
    { 4810, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 7а OSM: 13334566 59.88, 30.39 x 59.93, 30.5
    { 350, 28343, 20608, LineMetaDataContent::Subway, Color{0xff7400} }, // L1 OSM: 13335174 WD: Q6515333 10.48, -66.96 x 10.52, -66.8
    { 4814, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0066cc} }, // TPC OSM: 13341386 -31.77, -60.53 x -31.73, -60.29
    { 346, 28364, 20608, LineMetaDataContent::Subway, Color{0xfff000} }, // L4 OSM: 13350037 WD: Q21659772 10.43, -67.01 x 10.5, -66.84
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc00} }, // 2 OSM: 13395428 51.29, 12.28 x 51.34, 12.44
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc00} }, // 9 OSM: 13397093 51.3, 12.37 x 51.38, 12.43
    { 3549, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 1R OSM: 13406771 47.05, 21.91 x 47.08, 21.94
    { 4818, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 1N OSM: 13408068 47.05, 21.91 x 47.08, 21.94
    { 19, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 8 OSM: 13408524 47.05, 21.9 x 47.08, 21.93
    { 249, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x9462b1} }, // 23 OSM: 13443923 47.07, 15.44 x 47.07, 15.46
    { 3083, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffff00} }, // Yellow Line OSM: 13475082 25.31, 51.42 x 25.32, 51.45
    { 58, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 13 OSM: 13489151 52.1, 11.59 x 52.11, 11.65
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffda01} }, // 2 OSM: 13502832 WD: Q6850047 28.56, 115.8 x 28.7, 116
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0079c3} }, // 3 OSM: 13507037 WD: Q10908095 28.51, 115.9 x 28.7, 116
    { 42, 28385, NoLogo, LineMetaDataContent::Subway, Color{0x88129e} }, // 7 OSM: 13528567 WD: Q11102450 30.2, 120.2 x 30.33, 120.5
    { 65, 28395, NoLogo, LineMetaDataContent::Subway, Color{0xdaa520} }, // 10 OSM: 13535688 WD: Q18653896 30.27, 120.1 x 30.38, 120.1
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff850d} }, // 4 OSM: 13536846 WD: Q43283453 31.8, 117.1 x 31.95, 117.3
    { 59, 28406, NoLogo, LineMetaDataContent::Subway, Color{0xffd700} }, // 3 OSM: 13538221 WD: Q11102442 30.21, 120 x 30.39, 120.3
    { 55, 28426, 16137, LineMetaDataContent::Subway, Color{0x009088} }, // 1 OSM: 13538911 WD: Q626996 35.11, 126.8 x 35.16, 126.9
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x800080} }, // 4 OSM: 13540934 31.47, 120.3 x 31.63, 120.3
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x3b62a9} }, // 5 OSM: 13557463 WD: Q26262004 22.75, 108.3 x 22.87, 108.4
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009cdd} }, // 3 OSM: 13562401 53.44, 14.49 x 53.46, 14.55
    { 4821, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x50af47} }, // S 47 OSM: 13562799 51.48, 11.96 x 51.52, 11.99
    { 928, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // S12 OSM: 13566082 48.87, 8.347 x 49.02, 8.518
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x6fba2c} }, // 2 OSM: 13592842 WD: Q48899497 34.6, 112.4 x 34.71, 112.5
    { 4807, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc10230} }, // F2 OSM: 13604445 WD: Q10886732 22.97, 113 x 23.01, 113.3
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 3 OSM: 13606198 WD: Q785655 41.87, 12.47 x 41.92, 12.52
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffa500} }, // 1 OSM: 13615315 WD: Q110419397 26.48, 80.25 x 26.51, 80.32
    { 244, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00ced1} }, // 20 OSM: 13620411 WD: Q27940747 22.65, 113.8 x 22.72, 113.8
    { 54, 28451, 3710, LineMetaDataContent::Subway, Color{0xed796a} }, // 11 OSM: 13623628 WD: Q6553057 39.9, 116.1 x 39.93, 116.2
    { 177, 28472, 3710, LineMetaDataContent::Subway, Color{0x00a9a9} }, // 17 OSM: 13625147 WD: Q24834015 39.79, 116.5 x 39.86, 116.6
    { 145, 28493, 3710, LineMetaDataContent::Subway, Color{0xd6aac1} }, // 19 OSM: 13625329 WD: Q6553202 39.81, 116.3 x 39.98, 116.4
    { 6, 28514, NoLogo, LineMetaDataContent::Subway, Color{0x1d2088} }, // 5 OSM: 13626146 WD: Q10946024 29.81, 121.5 x 29.92, 121.6
    { 58, 28535, NoLogo, LineMetaDataContent::Subway, Color{0xffe400} }, // 13 OSM: 13633615 WD: Q10938159 39.15, 121.7 x 39.43, 121.9
    { 4826, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x664827} }, // TER OSM: 13645078 WD: Q66819158 14.68, -17.44 x 14.77, -17.2
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xa43034} }, // 5 OSM: 13647962 WD: Q11124520 30.45, 114.3 x 30.65, 114.4
    { 26, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc24c6d} }, // 16 OSM: 13648363 30.27, 114 x 30.51, 114.2
    { 4830, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee0000} }, // E7 OSM: 13649968 48.1, 11.58 x 48.14, 11.61
    { 9, NoLogo, 23375, LineMetaDataContent::Subway, Color{0x1c7736} }, // 4 OSM: 13652091 WD: Q10940016 39.1, 117.2 x 39.14, 117.4
    { 98, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee0000} }, // 37 OSM: 13664761 48.13, 11.6 x 48.18, 11.64
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00a560} }, // 4 OSM: 13681035 WD: Q15907959 28.6, 115.7 x 28.72, 116
    { 991, 28556, 2154, LineMetaDataContent::RapidTransit, Color{0xe6007e} }, // S31 OSM: 13708521 WD: Q116125183 47.1, 15.62 x 47.22, 15.71
    { 19, NoLogo, 23375, LineMetaDataContent::Subway, Color{0x602e7c} }, // 8 OSM: 13711701 WD: Q10940012 38.98, 117.3 x 39.04, 117.4
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xca9822} }, // 6 OSM: 13743101 50.89, 10.56 x 50.9, 10.58
    { 475, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xee1d23} }, // A OSM: 13746337 WD: Q2204240 48.52, 7.693 x 48.6, 7.754
    { 194, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x009ee0} }, // B OSM: 13746399 WD: Q2799227 48.55, 7.689 x 48.63, 7.769
    { 1152, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xb4532f} }, // S20 OSM: 13763963 WD: Q106455085 47.33, 9.359 x 47.43, 9.462
    { 3568, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xc6912f} }, // S23 OSM: 13763964 47.29, 9.252 x 47.41, 9.437
    { 3163, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xb55b59} }, // S26 OSM: 13763966 WD: Q819377 47.45, 9.59 x 47.47, 9.601
    { 225, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x66a4d9} }, // S25 OSM: 13763967 WD: Q337800 47.45, 9.493 x 47.48, 9.541
    { 4833, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x9c2727} }, // GAWC OSM: 13903112 WD: Q5528455 -34.92, 138.5 x -34.59, 138.7
    { 4838, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x094b8d} }, // GWY OSM: 13903708 WD: Q5568092 -37.88, 145 x -37.81, 145.2
    { 4842, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00ffff} }, // Aqua OSM: 13916711 WD: Q59155699 18.51, 73.8 x 18.51, 73.84
    { 1398, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x800080} }, // Purple OSM: 13917129 WD: Q59155676 18.59, 73.8 x 18.63, 73.83
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xcc5923} }, // T1 OSM: 13962101 30.4, 114.1 x 30.5, 114.2
    { 59, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // 3 OSM: 13986696 WD: Q54366530 17.39, 78.38 x 17.45, 78.56
    { 1133, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xcd5228} }, // 22 OSM: 13988001 22.94, 113.3 x 23.02, 113.4
    { 16, 16542, NoLogo, LineMetaDataContent::Subway, Color{0xffff00} }, // 2 OSM: 13989917 WD: Q28419528 19.13, 72.83 x 19.26, 72.87
    { 42, 16542, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 7 OSM: 13989918 WD: Q28419537 19.11, 72.85 x 19.25, 72.87
    { 44, 28575, 2154, LineMetaDataContent::RapidTransit, Color{0xec008c} }, // S5 OSM: 13995159 WD: Q67882950 48.27, 14.02 x 48.3, 14.29
    { 164, 28586, 2154, LineMetaDataContent::RapidTransit, Color{0x3f318f} }, // S3 OSM: 13995160 WD: Q67882855 48.26, 14.29 x 48.36, 14.52
    { 50, 28597, 2154, LineMetaDataContent::RapidTransit, Color{0x00aaad} }, // S2 OSM: 13995161 WD: Q67882763 48.16, 14.02 x 48.29, 14.29
    { 61, 28608, 2154, LineMetaDataContent::RapidTransit, Color{0xf58220} }, // S1 OSM: 13995162 WD: Q67882646 48.02, 14.29 x 48.3, 14.52
    { 213, 28619, 2154, LineMetaDataContent::RapidTransit, Color{0x96bc33} }, // S4 OSM: 13995163 WD: Q67882906 47.91, 14.1 x 48.29, 14.29
    { 130, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x862041} }, // 9 OSM: 14004564 WD: Q15917000 29.53, 106.4 x 29.76, 106.6
    { 4847, 12698, 8672, LineMetaDataContent::RapidTransit, Color{0x159dd9} }, // R40 OSM: 14008626 WD: Q96483953 48.23, 16.21 x 48.35, 16.37
    { 9, 28630, 7716, LineMetaDataContent::Subway, Color{0x9933ff} }, // 4 OSM: 14074756 WD: Q55663681 41.22, 69.26 x 41.3, 69.37
    { 39, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x357219} }, // T OSM: 14079401 WD: Q118874961 60.17, 24.78 x 60.74, 25.11
    { 6, 28656, NoLogo, LineMetaDataContent::Subway, Color{0x893b67} }, // 5 OSM: 14085418 WD: Q25305553 25.99, 119.2 x 26.11, 119.3
    { 2814, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a49f} }, // B1 OSM: 14125993 WD: Q7521893 39.91, 32.58 x 39.97, 32.97
    { 4851, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x094b8d} }, // LIL OSM: 14142941 WD: Q6548623 -37.83, 144.9 x -37.76, 145.3
    { 65, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xb3cb6d} }, // 10 OSM: 14166437 39.45, -0.378 x 39.46, -0.3348
    { 4855, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 7AB OSM: 14194208 51.72, 19.41 x 51.83, 19.55
    { 16, 28675, NoLogo, LineMetaDataContent::Tramway, Color{0x229922} }, // 2 OSM: 14211347 WD: Q1854674 51.17, 4.35 x 51.26, 4.464
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 2 OSM: 14215022 WD: Q97325177 37.71, 112.6 x 37.92, 112.6
    { 4859, 28697, 5051, LineMetaDataContent::Tramway, Color{0x827a04} }, // T10 OSM: 14232362 WD: Q3537026 48.76, 2.248 x 48.79, 2.304
    { 4863, 28731, 3131, LineMetaDataContent::Tramway, Color{0x8a5f20} }, // T13 OSM: 14263358 WD: Q3515106 48.8, 2.043 x 48.97, 2.095
    { 4867, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x006983} }, // Montauk OSM: 14264133 WD: Q4044495 40.7, -73.99 x 41.05, -71.95
    { 27, 28765, NoLogo, LineMetaDataContent::Subway, Color{0x005bac} }, // 6 OSM: 14303415 WD: Q46096730 28.17, 112.8 x 28.22, 113.2
    { 4875, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffcd28} }, // Z40 OSM: 14319938 WD: Q112225436 46.37, 18.15 x 47.5, 19.04
    { 6, 28784, NoLogo, LineMetaDataContent::Tramway, Color{0x95254c} }, // 5 OSM: 14329573 WD: Q16655754 43.59, 3.81 x 43.66, 3.877
    { 44, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf3c737} }, // S5 OSM: 14372453 46.53, 13.83 x 46.62, 14.04
    { 267, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x3bbfef} }, // Blue OSM: 14381218 30.2, -97.75 x 30.42, -97.66
    { 137, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x00a8e7} }, // 14 OSM: 14402834 51.33, 12.32 x 51.34, 12.38
    { 4879, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x187dcd} }, // JT OSM: 14434654 WD: Q112169762 29.31, 106.3 x 29.41, 106.4
    { 22, 28794, 7886, LineMetaDataContent::Subway, Color{0x00a88f} }, // 18 OSM: 14455702 WD: Q3240157 48.71, 2.07 x 48.79, 2.362
    { 1617, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xce8e00} }, // Hempstead OSM: 14460239 WD: Q5712708 40.68, -73.97 x 40.73, -73.62
    { 4882, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xc33032} }, // Jinyi OSM: 14489040 WD: Q43304703 29.08, 119.6 x 29.33, 120.1
    { 27, 28830, NoLogo, LineMetaDataContent::Subway, Color{0x005eb8} }, // 6 OSM: 14509136 WD: Q24886992 25.9, 119.4 x 26.02, 119.6
    { 1912, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x228b22} }, // V OSM: 14576928 -17.41, -66.28 x -17.4, -66.15
    { 480, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xff0000} }, // R OSM: 14576929 -17.45, -66.15 x -17.41, -66.13
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffcc99} }, // 1 OSM: 14594830 WD: Q16924991 22.67, 114 x 22.72, 114.1
    { 4888, 28849, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffce00} }, // S90 OSM: 14604626 WD: Q108075807 45.87, 8.92 x 46.17, 9.005
    { 1152, 28862, NoLogo, LineMetaDataContent::RapidTransit, Color{0x007dc6} }, // S20 OSM: 14604783 WD: Q3832731 46.15, 8.801 x 46.22, 9.042
    { 912, 28875, NoLogo, LineMetaDataContent::RapidTransit, Color{0xed1c24} }, // S10 OSM: 14604788 WD: Q3832722 45.81, 8.933 x 46.35, 9.074
    { 1857, 28888, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00a651} }, // S30 OSM: 14604990 WD: Q3832740 45.66, 8.624 x 46.16, 8.942
    { 160, 28901, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe35a13} }, // S60 OSM: 14605103 WD: Q112899163 45.97, 8.86 x 46.01, 8.948
    { 1109, 28914, NoLogo, LineMetaDataContent::RapidTransit, Color{0x6cc27f} }, // S40 OSM: 14605384 WD: Q47219003 45.81, 8.833 x 45.87, 9.074
    { 180, 28927, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7d4808} }, // S50 OSM: 14605385 WD: Q47219058 45.6, 8.704 x 46.35, 9.042
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // 1 OSM: 14611374 WD: Q48868979 38.64, -9.167 x 38.69, -9.147
    { 59, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // 3 OSM: 14611403 WD: Q48868985 38.66, -9.208 x 38.69, -9.147
    { 16, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // 2 OSM: 14611445 WD: Q48868981 38.64, -9.18 x 38.67, -9.151
    { 145, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x05c3de} }, // 19 OSM: 14613133 WD: Q48903466 30.22, 120 x 30.3, 120.5
    { 27, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x920783} }, // 6 OSM: 14642983 WD: Q15935783 34.67, 113.4 x 34.74, 113.5
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 9 OSM: 14644778 47.2, 38.88 x 47.22, 38.94
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 2 OSM: 14657624 WD: Q65081142 22.98, 72.53 x 23.1, 72.6
    { 408, 28940, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe96bb0} }, // K OSM: 14669757 WD: Q5184164 33.96, -118.4 x 34.02, -118.3
    { 3761, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0bd5fe} }, // Airport OSM: 14677578 WD: Q109448267 -31.98, 115.8 x -31.92, 116
    { 4892, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x005a9c} }, // Fremantle OSM: 14677734 WD: Q5501509 -32.05, 115.7 x -31.94, 115.9
    { 4902, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa90056} }, // Midland OSM: 14677911 WD: Q6842474 -31.95, 115.9 x -31.89, 116
    { 4910, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xe06f1d} }, // Mandurah OSM: 14678704 WD: Q1895265 -32.53, 115.7 x -31.95, 115.9
    { 4919, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfebe10} }, // Thornlie OSM: 14683170 WD: Q1924165 -32.05, 115.9 x -31.95, 116
    { 4928, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfebe10} }, // Armadale OSM: 14683181 WD: Q1924165 -32.15, 115.9 x -31.95, 116
    { 4937, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xa6aa12} }, // Joondalup OSM: 14689510 WD: Q6276051 -31.96, 115.7 x -31.64, 115.9
    { 2664, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe3000b} }, // 4A OSM: 14712448 49.48, 8.364 x 49.53, 8.509
    { 4947, NoLogo, 26488, LineMetaDataContent::RapidTransit, Color{0xc2e35c} }, // Arrow OSM: 14728552 WD: Q7413424 34.06, -117.3 x 34.1, -117.2
    { 16, NoLogo, 25893, LineMetaDataContent::RapidTransit, Color{0x008000} }, // 2 OSM: 14729478 WD: Q20977784 5.357, 100.3 x 6.664, 100.5
    { 4953, 28965, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7a745a} }, // F4 OSM: 14738978 WD: Q31193345 41.08, 29.05 x 41.09, 29.05
    { 55, NoLogo, 25893, LineMetaDataContent::RapidTransit, Color{0x1964b7} }, // 1 OSM: 14744279 WD: Q20977784 4.776, 100.4 x 5.394, 100.9
    { 206, 28993, NoLogo, LineMetaDataContent::RapidTransit, Color{0x7cfc00} }, // T1 OSM: 14758569 WD: Q5985905 36.41, -6.288 x 36.53, -6.134
    { 137, 29011, NoLogo, LineMetaDataContent::Subway, Color{0xf2c75c} }, // 14 OSM: 14764338 WD: Q21245993 22.54, 114.1 x 22.76, 114.4
    { 4956, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xecdb3b} }, // GR01 OSM: 14785799 37.06, 37.33 x 37.17, 37.45
    { 55, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 1 OSM: 14870574 WD: Q47015943 31.91, 120.8 x 32.11, 121
    { 18, 29035, 17033, LineMetaDataContent::Subway, Color{0x23387f} }, // M8 OSM: 14900218 WD: Q5996245 40.95, 29.09 x 41.03, 29.16
    { 65, NoLogo, 23375, LineMetaDataContent::Subway, Color{0xb9cf09} }, // 10 OSM: 14903908 WD: Q10940015 39.05, 117.2 x 39.15, 117.3
    { 16, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xbf4525} }, // 2 OSM: 14933919 WD: Q114608664 60.35, 5.289 x 60.39, 5.362
    { 55, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xed4800} }, // 1 OSM: 14934588 WD: Q28412165 27.47, 118 x 27.63, 118.1
    { 8, 29063, 6526, LineMetaDataContent::Subway, Color{0x2f4481} }, // M4 OSM: 14937470 WD: Q943476 45.46, 9.218 x 45.47, 9.278
    { 350, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x30556e} }, // L1 OSM: 14942883 56.15, 10.2 x 56.41, 10.88
    { 15, 29083, NoLogo, LineMetaDataContent::Subway, Color{0xa192b2} }, // 12 OSM: 14944729 WD: Q11559867 22.47, 113.8 x 22.73, 113.9
    { 4961, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x428d89} }, // 6B OSM: 14953717 WD: Q114025973 22.77, 113.9 x 22.81, 114
    { 354, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x30556e} }, // L2 OSM: 14973319 55.97, 10.12 x 56.23, 10.23
    { 3438, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xf7941d} }, // S44 OSM: 14978073 47.56, 9.103 x 47.66, 9.192
    { 244, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xa0216e} }, // 20 OSM: 14987053 47.39, 8.353 x 47.43, 8.489
    { 1656, NoLogo, 12650, LineMetaDataContent::RapidTransit, Color{0xed6fa7} }, // S19 OSM: 14987372 WD: Q110973246 50.4, 4.335 x 50.9, 4.488
    { 2703, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xffd520} }, // Broadway Subway OSM: 14991403 49.26, -123.2 x 49.27, -123.1
    { 4964, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S74 OSM: 14995079 WD: Q115171353 47.72, 18.11 x 47.78, 18.74
    { 4968, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffff00} }, // S 10 OSM: 14995860 51.32, 12.27 x 51.37, 12.39
    { 1767, 29107, 226, LineMetaDataContent::RapidTransit, Color{0x202776} }, // S53 OSM: 15014017 WD: Q115285815 51.03, 3.711 x 51.11, 3.986
    { 206, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfdec4a} }, // T1 OSM: 15022247 45.69, 9.676 x 45.76, 9.798
    { 9, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x007a33} }, // 4 OSM: 15051229 WD: Q15947246 36.06, 120.3 x 36.14, 120.6
    { 3417, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x002f87} }, // F3 OSM: 15054273 WD: Q10886732 22.82, 113.1 x 23.02, 113.3
    { 61, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0061ae} }, // S1 OSM: 15058106 WD: Q48899113 28.32, 121.3 x 28.66, 121.4
    { 4973, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x008000} }, // IR85 OSM: 15058598 47.49, 19.08 x 47.78, 19.95
    { 26, 29128, NoLogo, LineMetaDataContent::Subway, Color{0x1e22aa} }, // 16 OSM: 15059918 WD: Q11215578 22.69, 114.2 x 22.74, 114.4
    { 27, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x006e34} }, // 6 OSM: 15060937 WD: Q97257710 23.73, 90.36 x 23.87, 90.42
    { 4978, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x83898f} }, // 58d OSM: 15062383 -37.84, 145 x -37.81, 145
    { 59, 22446, 22469, LineMetaDataContent::Subway, Color{0x800080} }, // 3 OSM: 15068969 WD: Q27502952 22.45, 88.3 x 22.51, 88.32
    { 4982, 29152, 17033, LineMetaDataContent::Subway, Color{0xa1609b} }, // M11 OSM: 15083966 WD: Q31193348 41.08, 28.71 x 41.26, 28.98
    { 4986, 29181, 17033, LineMetaDataContent::Subway, Color{} }, // M14 OSM: 15099622 WD: Q31193350 41.02, 29.05 x 41.04, 29.1
    { 2089, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x0000ff} }, // Sul OSM: 15268630 -6.071, -35.26 x -5.78, -35.21
    { 6, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe77817} }, // 5 OSM: 15268961 47.14, 27.54 x 47.17, 27.64
    { 4990, NoLogo, 2975, LineMetaDataContent::Tramway, Color{0x706e6d} }, // L-9 OSM: 15320668 WD: Q11690013 38.55, -0.1354 x 38.84, 0.1131
    { 42, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x96d700} }, // 7 OSM: 15336346 32.11, 118.8 x 32.13, 118.9
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x008000} }, // 1 OSM: 15351430 41.29, 36.23 x 41.37, 36.34
    { 59, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 3 OSM: 15351431 41.37, 36.19 x 41.38, 36.23
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff0000} }, // 2 OSM: 15354644 41.22, 36.34 x 41.29, 36.46
    { 4994, NoLogo, 26744, LineMetaDataContent::RapidTransit, Color{0xefd51f} }, // RE3 OSM: 15413862 WD: Q115749580 46.6, 6.906 x 46.85, 7.191
    { 3694, NoLogo, 26744, LineMetaDataContent::RapidTransit, Color{0xc31622} }, // RE2 OSM: 15413942 WD: Q115749575 46.6, 6.906 x 46.95, 7.44
    { 408, 29210, NoLogo, LineMetaDataContent::RapidTransit, Color{0xc3b091} }, // K OSM: 15443527 WD: Q10914168 24.94, 121.5 x 24.99, 121.5
    { 1577, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x0d0dff} }, // T3 OSM: 15463464 37.03, 37.31 x 37.09, 37.35
    { 4366, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x3a6198} }, // S22 OSM: 15463831 WD: Q115743565 47.29, 7.688 x 47.31, 7.71
    { 206, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xff2b0a} }, // T1 OSM: 15470243 37.02, 37.32 x 37.07, 37.38
    { 493, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x08ff08} }, // T2 OSM: 15471518 37.06, 37.33 x 37.09, 37.38
    { 16, 29238, NoLogo, LineMetaDataContent::Subway, Color{0x229954} }, // 2 OSM: 15510494 WD: Q97218492 29.57, 52.49 x 29.63, 52.57
    { 4998, 29262, 17033, LineMetaDataContent::Subway, Color{0xc8cb2d} }, // M12 OSM: 15520693 WD: Q31193310 40.97, 29.06 x 41.04, 29.12
    { 16, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xe2e200} }, // 2 OSM: 15520695 47.52, 21.61 x 47.56, 21.63
    { 55, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffb752} }, // 1 OSM: 15540826 WD: Q116860182 35.92, 0.06022 x 35.98, 0.1102
    { 16, 29291, 29316, LineMetaDataContent::Subway, Color{0x58e558} }, // 2 OSM: 15545706 WD: Q116978502 35.7, 50.88 x 35.86, 51.01
    { 11, 29366, 17033, LineMetaDataContent::Subway, Color{0x683064} }, // M5 OSM: 15547373 WD: Q1229371 40.96, 29.01 x 41.03, 29.28
    { 57, 29394, 17033, LineMetaDataContent::Subway, Color{0x0ca950} }, // M13 OSM: 15547419 WD: Q48742876 41, 29.2 x 41.03, 29.25
    { 1326, 29423, 17033, LineMetaDataContent::Subway, Color{0xf19ebf} }, // M7 OSM: 15547431 WD: Q16949749 41.03, 28.67 x 41.09, 29.01
    { 1142, 29451, 17033, LineMetaDataContent::Subway, Color{0x00a8e1} }, // M3 OSM: 15547443 WD: Q1880963 40.97, 28.77 x 41.12, 28.88
    { 5002, 29479, 17033, LineMetaDataContent::Subway, Color{0xffd400} }, // M9 OSM: 15547473 WD: Q25209252 40.98, 28.77 x 41.08, 28.86
    { 5005, 29507, 17033, LineMetaDataContent::Subway, Color{} }, // M20 OSM: 15547627 WD: Q109779737 40.98, 28.62 x 41.03, 28.88
    { 392, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xce1417} }, // 30 OSM: 15554589 59.92, 30.38 x 59.93, 30.44
    { 2332, 29536, 27199, LineMetaDataContent::Tramway, Color{0x037bdf} }, // T3a OSM: 15568057 WD: Q117008328 38.72, 35.4 x 38.79, 35.63
    { 1577, 29536, 27199, LineMetaDataContent::Tramway, Color{0x037bdf} }, // T3 OSM: 15568179 WD: Q117008328 38.72, 35.4 x 38.79, 35.63
    { 1597, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xdce3e9} }, // T4 OSM: 15571056 38.7, 35.43 x 38.78, 35.57
    { 475, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xffbf00} }, // A OSM: 15603175 WD: Q4647009 32.98, -97.13 x 33.21, -96.93
    { 6, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xe60012} }, // 5 OSM: 15611913 WD: Q28411250 38.88, 121.6 x 39.05, 121.7
    { 249, NoLogo, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 23 OSM: 15624869 WD: Q100741440 47.47, 19.05 x 47.51, 19.09
    { 475, 29577, 29597, LineMetaDataContent::Subway, Color{0x00a562} }, // A OSM: 15640862 WD: Q1292805 50.07, 14.34 x 50.1, 14.52
    { 194, 29617, 29597, LineMetaDataContent::Subway, Color{0xf8b322} }, // B OSM: 15640873 WD: Q1460442 50.04, 14.29 x 50.11, 14.58
    { 291, 29637, 29597, LineMetaDataContent::Subway, Color{0xcf003d} }, // C OSM: 15640889 WD: Q168571 50.03, 14.43 x 50.13, 14.53
    { 327, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00ad4f} }, // E OSM: 15654116 WD: Q118612325 36.78, 10.1 x 36.79, 10.18
    { 1142, 29657, 29679, LineMetaDataContent::Subway, Color{0x35ab52} }, // M3 OSM: 15655643 WD: Q2420584 50.39, 30.43 x 50.48, 30.7
    { 260, 29699, 29679, LineMetaDataContent::Subway, Color{0xdd2a26} }, // M1 OSM: 15655644 WD: Q2334153 50.44, 30.35 x 50.47, 30.65
    { 322, 29721, 29679, LineMetaDataContent::Subway, Color{0x2782c5} }, // M2 OSM: 15655645 WD: Q2204296 50.37, 30.45 x 50.52, 30.53
    { 267, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x0000ff} }, // Blue OSM: 15668739 6.446, 3.312 x 6.479, 3.395
    { 145, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0xffa500} }, // 19 OSM: 15670312 51.72, 19.43 x 51.83, 19.49
    { 4804, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0x00adbb} }, // F1 OSM: 15700253 25.88, 119.3 x 26.11, 119.7
    { 55, NoLogo, 29743, LineMetaDataContent::Subway, Color{0xe31d1b} }, // 1 OSM: 15797036 WD: Q18419905 -0.2955, -78.56 x -0.1536, -78.48
    { 974, 29754, 8458, LineMetaDataContent::Tramway, Color{0x91619d} }, // D OSM: 15797847 WD: Q16655779 44.82, -0.6675 x 44.89, -0.55
    { 5009, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0x00aff0} }, // S225 OSM: 15809425 46.91, 19.7 x 47.18, 20.18
    { 27, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 6 OSM: 15840812 55.81, 37.41 x 55.86, 37.51
    { 9, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 4 OSM: 15840813 55.75, 37.66 x 55.82, 37.73
    { 130, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x000000} }, // 9 OSM: 15840817 55.78, 37.58 x 55.79, 37.61
    { 244, NoLogo, NoLogo, LineMetaDataContent::Tramway, Color{0x595fa7} }, // 20 OSM: 15858526 52.4, 16.91 x 52.41, 16.96
    { 50, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0xffc0cb} }, // S2 OSM: 15865690 WD: Q115756448 46.7, 9.386 x 46.85, 9.531
    { 61, NoLogo, 226, LineMetaDataContent::RapidTransit, Color{0x62a0ea} }, // S1 OSM: 15865708 WD: Q115756382 46.8, 9.386 x 46.98, 9.689
    { 16, NoLogo, NoLogo, LineMetaDataContent::Subway, Color{0xff0000} }, // 2 OSM: 15917615 WD: Q65050458 36.03, 103.8 x 36.07, 103.9
    { 287, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x035eb9} }, // O OSM: 15925639 WD: Q118924451 60.46, 25.66 x 60.98, 26.96
    { 2791, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0xe0071c} }, // Z OSM: 15925779 WD: Q118874964 60.17, 24.93 x 60.98, 26.71
    { 974, NoLogo, 3352, LineMetaDataContent::RapidTransit, Color{0x035eb9} }, // D OSM: 15932097 WD: Q118874955 61, 24.48 x 61, 24.48
    { 957, NoLogo, 170, LineMetaDataContent::Tramway, Color{0xffd800} }, // 1A OSM: 15953835 WD: Q15982260 47.48, 19.03 x 47.55, 19.11
    { 957, NoLogo, NoLogo, LineMetaDataContent::RapidTransit, Color{0xfdc434} }, // 1A OSM: 15961882 WD: Q56388740 46.24, 20.12 x 46.27, 20.15
};

static constexpr const auto line_data_count = sizeof(line_data) / sizeof(LineMetaDataContent);

static inline constexpr uint16_t Bucket(uint16_t index) { return line_data_count + index; }

static const int16_t line_data_bucketTable[] = {
    1321, 1303, 1318, 1319, 1320, -1,
    352, 354, 2785, 396, 395, 368, 367, -1,
    1199, 2851, 2660, 1133, 1194, 1201, 1212, 1211, -1,
    836, 1983, 241, -1,
    1510, 1515, -1,
    2400, 1392, 2402, 2403, 2404, -1,
    890, 891, 886, 321, 887, 892, 893, 885, 888, 889, -1,
    402, 401, 1179, -1,
    393, 2232, 343, -1,
    1034, 190, -1,
    379, 383, -1,
    1713, 1235, 1715, 763, -1,
    220, 222, -1,
    1317, 1297, -1,
    1369, 1368, -1,
    1552, 1561, 1371, -1,
    485, 1504, 1428, 245, 1502, 1503, -1,
    2392, 2393, 2387, -1,
    619, 622, 623, -1,
    690, 1090, -1,
    790, 791, 1341, 1222, 1219, 1218, -1,
    1858, 1205, 1208, 1130, 1118, 1200, 1207, 1132, 1213, -1,
    242, 1989, -1,
    2910, 2911, -1,
    2363, 2479, -1,
    2810, 2680, 2795, -1,
    2675, 2378, 2676, -1,
    2538, 1731, 1538, 1732, 1769, 1734, 2000, -1,
    2285, 2611, 2329, 2466, 2612, 2101, 2284, 2562, 2476, 2602, -1,
    842, 2610, 2151, 841, -1,
    843, 842, 2610, 2151, 841, 2129, 835, -1,
    1532, 2254, 2253, 2401, -1,
    2887, 1357, 799, -1,
    2504, 2505, -1,
    894, 511, -1,
    206, 2295, 2298, 2294, 2296, 2299, 2297, 2437, -1,
    206, 2295, 2298, 2294, 2296, 2299, 2297, -1,
    2644, 398, 1808, 2370, 746, 1793, 2309, 2235, 399, 1794, -1,
    855, 849, 923, 853, 605, -1,
    1086, 2266, 2267, 1373, 1372, 2268, -1,
    385, 1099, -1,
    2533, 1290, 1701, 1281, 1291, 1293, 1268, 1269, 1266, 1267, 1294, 467, 1265, 650, -1,
    1441, 1008, -1,
    2339, 2327, 2328, -1,
    640, 189, 2599, 1505, 235, -1,
    728, 358, 729, 1083, 559, 743, -1,
    2866, 2865, 2463, 2461, 2116, 2460, -1,
    1271, 463, 81, 85, 662, 251, 666, 667, 1089, -1,
    1214, 1271, 463, 568, 364, 85, 2364, 664, 665, 666, 667, 1089, 668, 669, 670, 674, 701, 675, 676, -1,
    620, 621, 624, -1,
    688, 1969, 1248, 1968, -1,
    2856, 2882, 2879, -1,
    2024, 2626, 2803, 1998, 729, 1083, -1,
    1843, 448, 1660, 1957, 1921, -1,
    1660, 444, 1949, 846, 847, 25, 1413, -1,
    527, 528, 651, 303, 963, -1,
    2554, 2557, -1,
    1454, 1453, -1,
    723, 954, -1,
    800, 1894, 2890, 2891, 1338, -1,
    202, 335, 951, 950, 1434, 1435, -1,
    895, 810, 723, 954, 722, 1663, -1,
    727, 726, -1,
    787, 36, 14, -1,
    226, 227, -1,
    2446, 2160, 2456, 2490, 2170, -1,
    1196, 2661, 1206, 1210, 1209, 1198, 1134, 2787, 2662, 2095, -1,
    2142, 2141, -1,
    896, 897, 713, -1,
    1652, 2895, 2894, -1,
    1508, 1514, 1545, 1513, -1,
    1688, 1679, -1,
    2277, 1930, 2276, 1898, 1897, 1837, 1839, 1838, -1,
    1558, 2162, -1,
    2820, 2818, -1,
    316, 1401, 2342, 2036, 2341, -1,
    2542, 2539, 2885, 2884, -1,
    2693, 510, 509, 750, 751, 2694, -1,
    1756, 1888, 2543, -1,
    1403, 2239, -1,
    2166, 2493, -1,
    2168, 2223, -1,
    1683, 1684, -1,
    2796, 2899, -1,
    2306, 1938, -1,
    288, 1691, -1,
    1139, 794, 1948, 378, 377, 295, 296, 384, 2513, -1,
    1592, 2072, 2108, 2528, 2640, 2287, 1852, -1,
    2406, 1912, 1780, 1391, -1,
    2426, 630, 631, 2423, 632, 2425, 2424, 629, 2421, 628, 2422, 633, -1,
    2406, 1912, -1,
    2251, 2255, 2256, 2257, 2258, 2259, 2260, -1,
    161, 256, 1244, 1945, -1,
    2213, 2212, -1,
    1784, 1791, 1782, 1783, 1785, 1786, 1788, 2316, -1,
    2416, 2790, -1,
    1354, 1356, 1355, -1,
    1093, 1092, -1,
    1534, 1533, 1531, -1,
    2434, 2435, 2432, 2431, 2430, -1,
    1764, 1766, -1,
    2435, 2431, 2430, -1,
    2178, 2180, 2182, 2188, 273, 268, 2211, 2210, 2491, 272, 2227, 2229, 2230, 2222, 2794, 2219, 2207, 231, 371, 519, 274, 1039, 1672, -1,
    2178, 2182, 2188, 272, 2229, 371, -1,
    920, 918, 2062, 2067, 2064, -1,
    901, 192, 191, -1,
    1493, 1494, 1109, -1,
    1342, 1002, 2122, 2127, -1,
    1714, 2042, 2532, 2039, 1666, 1668, 1676, 1673, 1677, 1671, -1,
    211, 2186, 1529, 2187, 1638, 1467, 1553, 1548, 1551, 2527, 1383, 1640, 1367, -1,
    1498, 1497, 1496, 939, 884, 938, 1500, 944, 945, 1499, 941, 1506, 1468, 712, 2784, 459, 1429, -1,
    1485, 2842, 1479, 1480, 1478, 1481, 1487, 1488, 1489, 1483, -1,
    1014, 1016, -1,
    636, 635, -1,
    2376, 1664, -1,
    2040, 2087, 2113, 2114, 2115, 2089, -1,
    1487, 1484, -1,
    1485, 1479, 1215, 1480, 1478, -1,
    1117, 1125, 1126, 1129, 1128, -1,
    673, 63, 1406, 64, 72, -1,
    671, 785, 1301, 786, 783, -1,
    617, 613, 614, 1069, 618, 625, -1,
    1812, 1970, 1409, -1,
    2777, 1822, -1,
    2459, 2457, 2458, 805, 1993, 2023, 2263, 2021, 1994, 1995, 1996, 1997, 2022, -1,
    453, 1951, 1960, 2452, 2236, 2084, 1959, 2496, -1,
    2429, 1951, 953, 1959, 2840, 993, -1,
    1997, 1998, -1,
    453, 2084, -1,
    19, 1326, 22, 16, 109, 1411, 1412, -1,
    998, 2441, 2840, -1,
    82, 83, 84, 949, 89, 314, 37, 48, 30, 50, 2079, 38, 39, 40, 41, 42, 43, 44, 45, -1,
    737, 1023, 719, -1,
    961, 962, 964, -1,
    178, 2641, -1,
    2555, 2556, -1,
    140, 1450, 265, 141, 594, 103, 995, -1,
    2769, 2771, 2767, -1,
    689, 709, 707, 904, -1,
    1252, 484, 1249, 1250, 1170, 1251, 495, 489, 488, 137, -1,
    110, 93, 117, -1,
    98, 76, 78, 128, 80, 127, 859, 2845, 1936, -1,
    71, 28, 302, 135, 136, 2090, 67, 1473, 2248, 143, 12, 15, 255, 125, 122, 121, 99, 120, 119, 118, -1,
    71, 302, 135, 136, 2090, 15, -1,
    2274, 97, 276, 287, 1045, 201, -1,
    2165, 2171, -1,
    1203, 1857, 465, 464, 1114, -1,
    1202, 2902, 1197, -1,
    1195, 2844, -1,
    1203, 465, 1114, -1,
    752, 748, 834, 753, 711, -1,
    1258, 1142, 2859, 1144, 1145, -1,
    1611, 1612, -1,
    2361, 2360, 2359, -1,
    1029, 1030, 1028, -1,
    1509, 1546, 2775, -1,
    524, 776, -1,
    2523, 2524, -1,
    2673, 2246, 2321, -1,
    2161, 1818, 1821, -1,
    2472, 2473, -1,
    1623, 1622, -1,
    2199, 2203, 2204, 2206, -1,
    412, 427, 1896, 389, 430, 696, 1472, 443, 411, 434, 433, 493, 431, 425, 934, 426, -1,
    693, 2774, -1,
    2440, 2110, -1,
    1956, 1886, 1882, 1883, 1889, 1914, 1885, -1,
    1685, 1887, 2179, 2728, -1,
    1929, 2584, 1924, 1928, 2581, 2385, -1,
    642, 1934, 2545, 1933, 806, 2772, 1932, -1,
    2697, 2153, 2733, 2849, 2157, 2685, -1,
    248, 247, 250, -1,
    1759, 2066, 2175, 2530, 2163, 2190, 250, -1,
    2744, 2167, 2159, -1,
    1924, 2581, 2385, -1,
    2237, 2670, -1,
    1705, 2345, 1706, 2237, 2666, 2670, -1,
    1952, 2382, 2663, -1,
    838, 2748, -1,
    2086, 1082, 1081, 300, -1,
    2723, 2477, 2725, 2674, -1,
    2681, 2700, -1,
    1947, 1735, 2346, 2740, -1,
    1804, 2384, -1,
    958, 957, 959, 1739, 2692, -1,
    1415, 1521, 1519, 1520, 2398, 2603, 1418, 2300, 232, 1420, 1516, 1422, 236, 1517, 1518, -1,
    290, 2738, 2701, 376, 1140, 1138, 2305, 375, 2508, 2643, -1,
    1976, 1973, -1,
    1807, 1746, -1,
    2003, 1760, 2264, -1,
    2003, 2012, -1,
    1805, 1724, 1723, -1,
    2003, 1992, -1,
    1919, 1920, -1,
    2484, 2482, -1,
    2149, 1866, -1,
    1954, 2347, 2097, 1229, -1,
    2698, 1802, -1,
    225, 198, 233, 0, 54, 1, 197, 2534, 2759, 2778, -1,
    2245, 2244, 2399, -1,
    983, 2019, -1,
    2052, 2054, -1,
    1334, 1178, -1,
    2250, 2249, 2474, 2261, -1,
    1243, 2290, 2289, -1,
    2215, 2214, -1,
    2629, 2627, 2628, -1,
    782, 708, 788, 718, -1,
    1526, 1527, 1528, -1,
    1767, 1768, 1765, 1530, -1,
    2275, 1763, -1,
    2445, 2371, 1809, -1,
    2220, 394, 267, 2495, 2208, 392, 755, 270, 1795, 756, 271, 2195, -1,
    394, 392, 756, -1,
    1596, 1598, -1,
    193, 1536, -1,
    1006, 2241, 604, -1,
    1006, 850, 2241, -1,
    1776, 1777, 2711, -1,
    381, 2501, 2302, 2202, 382, 380, 1717, 1716, -1,
    1330, 1328, 1828, -1,
    2283, 2559, -1,
    1649, 1648, -1,
    1159, 1702, 1237, -1,
    439, 437, 438, 1263, -1,
    2419, 2417, 2418, 2788, -1,
    764, 765, 780, 2901, -1,
    595, 1055, -1,
    1547, 188, 1562, -1,
    1911, 212, -1,
    2793, 1432, -1,
    940, 943, -1,
    1654, 1653, 2651, 2652, -1,
    1445, 985, 1470, 1699, 1829, 1443, 1540, 1774, 1024, 1456, 1474, 1832, 1541, 1059, 1475, 1476, 1482, 1484, -1,
    353, 520, -1,
    2373, 2374, -1,
    1183, 293, -1,
    1058, 1067, 898, 2112, 2462, 2121, 2120, 2117, 1051, -1,
    1058, 898, 2112, 2121, 184, -1,
    2313, 2225, 450, 2314, 2209, -1,
    1476, 1477, 1483, -1,
    2083, 2517, -1,
    2752, 2753, 1772, -1,
    571, 1216, -1,
    569, 570, 571, 572, 573, -1,
    969, 1475, -1,
    1343, 1349, 1917, 2526, 1345, 1307, 1309, 1310, 1311, -1,
    1257, 2351, -1,
    1216, 1276, 1279, 1277, -1,
    365, 2354, 359, 360, 362, -1,
    306, 2833, -1,
    2103, 2104, 1984, 937, -1,
    599, 601, 503, 600, -1,
    601, 600, -1,
    2567, 2568, -1,
    2880, 2881, 1495, -1,
    2873, 2857, 1581, 2880, 2877, 2831, 1495, 2601, -1,
    1726, 1823, -1,
    2802, 2805, 2800, -1,
    2507, 2020, -1,
    451, 2226, 2454, 2455, 184, -1,
    2228, 2225, 2224, 2226, 2436, 450, 2314, 2209, -1,
    1953, 2453, 2454, -1,
    825, 1469, 824, 533, 828, 826, 827, 820, 822, 830, 823, 440, 1404, 1942, 454, 802, 2177, 1937, 444, 435, 441, 1943, 452, 1922, 456, -1,
    2801, 2803, 2800, -1,
    2452, 1953, -1,
    998, 453, 444, 1953, 1950, 435, 1949, 258, -1,
    2908, 2468, -1,
    998, 2486, 2754, 2470, 2438, 2755, 2469, 2467, 2443, 2510, -1,
    2485, 2486, -1,
    2554, 2556, 1047, -1,
    1324, 1323, 1325, 24, 1316, 21, 680, 423, 649, 414, -1,
    366, 677, 678, -1,
    735, 739, 738, 740, 741, 742, 677, 678, 680, 649, 414, -1,
    961, 962, 679, 695, -1,
    679, 695, 532, -1,
    1450, 593, 104, 103, -1,
    166, 549, 167, 179, 522, 486, 521, -1,
    131, 428, 593, 104, 988, -1,
    1902, 1901, 1097, -1,
    1256, 1084, 1394, 1463, -1,
    2770, 2768, -1,
    487, 803, 832, 1892, 1891, 534, 567, 575, 1893, -1,
    487, 803, 1892, 1891, 567, -1,
    588, 590, 591, -1,
    874, 2005, 2006, 875, 881, 868, 873, 871, 882, 876, 883, 705, 792, 1098, -1,
    1072, 1073, 1074, -1,
    91, 2712, -1,
    112, 113, 114, -1,
    58, 60, 56, -1,
    58, 59, 60, 56, -1,
    1187, 1338, 1340, -1,
    416, 420, 421, 422, 446, 415, 447, -1,
    7, 6, 69, 66, 32, 31, 68, 33, 2569, 8, 5, 144, 214, 124, -1,
    1221, 1220, 61, -1,
    2010, 1507, 1221, 1220, 931, 922, 1022, 61, 62, -1,
    310, 1289, 307, 2016, 2018, 311, 1855, 1204, 466, 1064, 1113, 2494, 1111, -1,
    1204, 1113, 2494, 1111, -1,
    900, 899, -1,
    1171, 1278, 1982, 1981, 1980, 1275, 1565, 1273, 1400, 1172, 2906, 1979, 1174, 1175, 1566, 1399, 1567, -1,
    2140, 2139, 2138, 2137, 2136, 2134, 2133, 2132, 2898, 2147, 2145, 2131, 2144, 2143, 2780, -1,
    2139, 2138, 2137, 2134, 2133, 2132, 2898, 2147, 2145, 2130, 2144, 2143, 2780, -1,
    854, 915, 916, 914, 929, 861, -1,
    660, 654, -1,
    702, 602, 603, 1405, -1,
    626, 609, 436, 1643, 867, 1642, 2549, -1,
    2598, 2592, 1511, 1512, 261, 259, -1,
    681, 552, 715, 517, 682, 545, 543, 767, 539, 818, 683, 684, 513, 540, 538, 544, 685, 548, 546, 554, 512, 777, 2506, 555, 551, 2684, -1,
    1260, 1261, -1,
    1690, 2657, 2658, 2659, -1,
    2525, 2521, 2520, 2522, -1,
    1586, 1587, -1,
    2815, 2817, 2819, -1,
    1834, 1833, 2037, -1,
    2025, 2026, -1,
    1571, 2094, -1,
    500, 501, -1,
    905, 908, 372, 907, 952, 491, 409, 2904, 1070, 408, 424, 2903, 1425, 442, 492, -1,
    2279, 1449, 2904, 1070, 432, 2331, 492, -1,
    1096, 796, 1451, 641, -1,
    759, 760, 761, 762, -1,
    2102, 2813, -1,
    648, 1927, 2394, 2583, 2682, -1,
    921, 1050, 1471, 1314, -1,
    246, 1375, 2218, -1,
    1825, 2153, -1,
    2531, 2828, 2852, 2164, 1579, 2690, -1,
    1720, 1719, 2492, -1,
    1941, 2126, 2125, 2743, 2158, 1815, -1,
    2344, 2909, -1,
    1711, 2304, 1694, 2706, -1,
    1711, 1694, 2707, 2706, 2349, -1,
    2389, 2548, -1,
    1247, 1730, -1,
    2720, 2721, -1,
    2375, 2776, -1,
    1946, 2679, 2348, 2678, -1,
    2665, 2672, -1,
    1803, 2724, 2634, -1,
    2343, 2667, -1,
    2124, 2861, 2123, -1,
    1419, 1850, -1,
    294, 291, 2739, 297, 793, 784, -1,
    2832, 1975, 1974, 2152, 1977, -1,
    2741, 1754, 2888, -1,
    1693, 1692, -1,
    1240, 1241, -1,
    1240, 2481, 1241, 1322, 2243, -1,
    1918, 1915, 1572, -1,
    1875, 1874, 1877, -1,
    1851, 1859, 2073, 2070, 2282, 1813, 1863, 2063, 2047, 1862, -1,
    586, 844, 264, 228, 88, 209, 341, 839, 196, 2536, -1,
    139, 138, 981, 982, 984, 1332, -1,
    1423, 1424, 2541, -1,
    1298, 1299, -1,
    1779, 1789, 1787, 1790, -1,
    730, 714, -1,
    1770, 1771, -1,
    1736, 1738, -1,
    2444, 2450, 2451, 2449, 2368, 1806, -1,
    2176, 1797, 1798, 2480, 1439, -1,
    2176, 2220, -1,
    1599, 1594, 1595, 1597, -1,
    462, 863, -1,
    1007, 999, -1,
    1708, 1707, 1709, 1800, -1,
    2807, 405, 1387, 2809, 2808, 1617, -1,
    1331, 1327, 1329, -1,
    965, 1680, -1,
    965, 1687, 1680, 1686, -1,
    260, 1452, 991, -1,
    332, 1398, -1,
    260, 1452, 991, 1457, -1,
    219, 217, 218, 1255, 1254, -1,
    305, 1386, -1,
    1264, 1879, -1,
    1166, 1999, 1163, 1160, 1161, 1168, 1165, 1164, 1264, 1879, 1157, 1158, 1156, -1,
    1037, 1396, -1,
    2336, 2333, 2338, 2330, 2337, -1,
    2191, 2192, 2194, 2193, -1,
    188, 1641, -1,
    2381, 2386, -1,
    1436, 1433, -1,
    1465, 1600, 1631, 1634, 1633, 1630, 1967, 1012, 1052, 1632, -1,
    1437, 1430, -1,
    2519, 2535, -1,
    1830, 956, 955, 627, 1458, -1,
    1021, 1019, 1013, 1015, 1017, 2311, -1,
    1043, 1042, 1040, 1041, -1,
    1101, 1103, 1102, -1,
    2033, 1061, 2043, 2044, 2045, 2046, 2031, 2082, 2032, 2034, 2038, 2537, 2518, -1,
    184, 185, -1,
    2048, 2517, -1,
    1061, 2046, 2031, 2032, 2034, 2038, 2518, -1,
    157, 159, -1,
    565, 87, 1270, -1,
    1087, 2395, 1088, -1,
    2358, 974, 975, 2781, 968, 970, 971, 972, 973, 1180, 967, -1,
    1346, 1347, 1351, 1344, 1916, 1348, -1,
    73, 1053, 74, 280, 1283, 279, -1,
    1352, 1344, 1916, -1,
    1107, 1121, 1124, 1108, 1123, 2580, 1127, 1116, -1,
    1280, 563, 65, 564, -1,
    565, 87, 1270, 1272, -1,
    1226, 1227, 1228, -1,
    363, 2356, 361, -1,
    2355, 672, -1,
    1978, 2893, -1,
    2635, 299, -1,
    299, 2334, -1,
    1775, 1557, -1,
    2552, 2553, -1,
    1614, 1613, 2498, 2648, -1,
    1824, 2632, 2625, -1,
    1727, 1728, -1,
    451, 2226, -1,
    2841, 2226, -1,
    998, 1953, 1950, 455, 1939, -1,
    1942, 2452, 1943, 1922, -1,
    2452, 1958, 1943, 1922, -1,
    2428, 2467, -1,
    2487, 953, 2467, -1,
    998, 455, -1,
    20, 608, 23, 2731, 1085, -1,
    366, 649, -1,
    961, 964, -1,
    733, 734, 366, -1,
    530, 531, 523, 964, -1,
    529, 530, 531, 523, 694, 1146, 351, 1147, 992, 1150, 1151, 1152, -1,
    584, 585, -1,
    180, 203, -1,
    164, 2049, 165, 2050, 262, -1,
    146, 147, 132, 150, 145, 148, 1035, 133, 195, 994, 989, 942, 987, 996, 997, -1,
    179, 180, -1,
    350, 348, 349, 1390, 347, 346, -1,
    976, 978, -1,
    1054, 1036, -1,
    52, 53, 331, 330, 327, 333, 334, -1,
    878, 1091, -1,
    808, 2291, 1137, 837, 2273, 831, -1,
    168, 175, 936, 169, 170, 171, 173, 390, 879, -1,
    107, 108, 106, -1,
    229, 230, 2713, -1,
    1185, 1192, 795, 1193, 1186, 410, 1188, 1189, 1190, 1339, -1,
    4, 29, 35, 70, 2, 3, 657, 13, -1,
    1185, 1192, 1193, 1186, 1188, 1190, 1339, -1,
    576, 646, 2729, 579, 583, 582, 2281, -1,
    576, 2729, 579, 583, 2281, -1,
    329, 328, -1,
    239, 281, 282, 238, 1181, 1182, 283, 75, 2696, 237, 1230, -1,
    234, 606, -1,
    468, 2015, 319, 308, 9, 469, 482, 481, 2093, 473, 478, 483, 309, 1026, 200, 480, 476, 471, 477, 475, 386, 1065, 1063, 1353, -1,
    2587, 2588, 2585, 2586, -1,
    1848, 1846, 1906, 1845, 1847, 2060, 2058, 1907, 1905, 1842, 1908, 2059, -1,
    100, 655, 658, 656, 101, 105, 102, 653, 659, -1,
    1010, 1009, -1,
    1364, 1363, 1988, -1,
    1364, 1365, 1361, 1362, 1363, 240, 1988, -1,
    1364, 1365, 1361, 1362, 1363, 240, 1988, 845, -1,
    2691, 710, -1,
    502, 213, -1,
    254, 253, -1,
    1027, 1033, -1,
    506, 507, 508, -1,
    644, 819, -1,
    766, 769, 772, -1,
    768, 541, 771, 1003, 542, 773, 754, 2708, 553, 770, -1,
    1820, 1819, -1,
    2870, 2871, -1,
    1667, 1636, 1570, -1,
    1656, 1657, -1,
    1366, 2197, 2196, 2200, 2201, 2205, -1,
    1366, 2197, 2196, -1,
    932, 925, 928, -1,
    445, 2331, -1,
    373, 445, 374, 490, -1,
    388, 2332, -1,
    498, 2051, -1,
    2512, 2511, -1,
    2765, 2766, -1,
    2763, 1926, -1,
    418, 387, -1,
    1046, 298, 2155, -1,
    1752, 2686, -1,
    249, 2217, -1,
    2689, 249, -1,
    811, 852, 851, 817, -1,
    1718, 1725, 1722, 1721, -1,
    1080, 2439, -1,
    2348, 2722, -1,
    1681, 2560, 2727, -1,
    2307, 2664, -1,
    1742, 2383, -1,
    1681, 1682, 2560, 2727, -1,
    1742, 1964, 2383, 1963, -1,
    1689, 1733, -1,
    2737, 1935, -1,
    2746, 2750, -1,
    2008, 1698, 1522, -1,
    1698, 1522, 2292, -1,
    1537, 1762, 1525, -1,
    1762, 1761, 1525, -1,
    638, 639, 1233, -1,
    1578, 1577, 1585, -1,
    1867, 1868, 1869, 2288, 1865, 1871, 1870, -1,
    547, 2551, 1873, -1,
    2071, 2074, -1,
    1853, 1861, 1864, 1854, 1849, 1860, 2056, -1,
    1038, 516, 263, 340, 342, -1,
    2310, 2357, -1,
    1744, 1745, 2633, -1,
    345, 1245, 1135, -1,
    2621, 2620, -1,
    2620, 2619, -1,
    1095, 1094, -1,
    2447, 2499, 2448, 2367, 2366, 2369, 397, -1,
    2367, 2366, 397, -1,
    2499, 397, -1,
    864, 194, -1,
    865, 864, -1,
    1799, 2340, -1,
    2002, 1393, 252, 1618, 1615, -1,
    1696, 1697, -1,
    1675, 1665, -1,
    1665, 1695, -1,
    224, 221, 2687, -1,
    216, 215, -1,
    1162, 1169, 1153, 1155, 1154, -1,
    207, 687, -1,
    1910, 1909, -1,
    2262, 2233, -1,
    2336, 2333, -1,
    1637, 1550, -1,
    1637, 1639, -1,
    304, 1004, 1005, -1,
    1501, 706, -1,
    2027, 2380, -1,
    1057, 747, -1,
    1442, 1444, -1,
    158, 160, -1,
    158, 160, 1336, -1,
    1773, 204, 406, -1,
    880, 1312, 1313, 278, -1,
    880, 1053, 1307, -1,
    1106, 1122, 1110, 1105, 1115, -1,
    86, 566, -1,
    731, 1302, 757, 1292, -1,
    1987, 1986, 1985, -1,
    1972, 2065, -1,
    1285, 1287, -1,
    2624, 2564, -1,
    1737, 1753, -1,
    1416, 1417, 1414, -1,
    1416, 1417, -1,
    1583, 869, -1,
    814, 815, -1,
    1958, 1949, -1,
    1404, 1942, -1,
    2441, 2486, 2443, -1,
    153, 156, 1661, -1,
    2080, 156, 47, 49, 51, 1661, -1,
    153, 49, 51, -1,
    732, 736, -1,
    1148, 1149, -1,
    962, 1148, 1150, -1,
    947, 312, 948, 313, 2396, -1,
    130, 149, 749, 587, -1,
    2608, 2606, -1,
    134, 181, -1,
    801, 574, -1,
    2107, 326, -1,
    872, 877, -1,
    697, 699, -1,
    17, 18, -1,
    1071, 1075, 1076, -1,
    391, 174, 870, 2730, -1,
    94, 2719, 116, 95, 96, -1,
    77, 2791, -1,
    57, 725, -1,
    57, 55, 725, -1,
    1191, 1238, -1,
    155, 27, 562, -1,
    580, 2702, 581, -1,
    580, 581, -1,
    277, 2320, 2465, -1,
    325, 323, 324, -1,
    325, 323, -1,
    474, 2913, 2889, 479, 338, 292, 2109, -1,
    535, 536, 556, 537, 557, -1,
    536, 556, 537, 557, 2585, -1,
    2914, 647, 497, 496, 407, -1,
    474, 338, -1,
    2702, 583, 582, -1,
    1359, 1360, 1365, -1,
    1359, 1360, -1,
    807, 2874, -1,
    596, 704, 703, -1,
    1141, 1259, 2303, -1,
    1141, 1259, 1143, 2303, -1,
    720, 1066, -1,
    1031, 1032, -1,
    2677, 2650, -1,
    2594, 2595, 2597, -1,
    2589, 2590, 2591, 2593, 2594, 2595, 2596, 2597, -1,
    2544, 2540, -1,
    1651, 1650, -1,
    2409, 2410, -1,
    1656, 1657, 1658, -1,
    930, 924, 926, 927, 275, 2812, -1,
    909, 910, -1,
    494, 1543, -1,
    906, 911, 1395, -1,
    1376, 1377, 1378, 1380, 1305, 1379, 1306, -1,
    1376, 1377, 1378, 1380, 1305, 1379, 1306, 1389, 1388, 1381, 2231, 1382, -1,
    1537, 1589, -1,
    1563, 1621, -1,
    2653, 2654, -1,
    320, 199, 2854, 419, -1,
    550, 1304, 980, 979, -1,
    2318, 2630, -1,
    2622, 2623, -1,
    862, 866, -1,
    1397, 1448, 2092, -1,
    2414, 2415, -1,
    223, 221, -1,
    686, 1225, -1,
    611, 615, -1,
    829, 821, -1,
    2609, 2605, 2607, -1,
    339, 1079, -1,
    1191, 795, -1,
    461, 182, 458, -1,
    461, 458, -1,
    322, 324, -1,
    318, 2017, 317, -1,
    337, 318, 2017, 336, -1,
    1365, 1361, -1,
    1361, 240, 2579, -1,
    2715, 2714, -1,
    1141, 1259, -1,
    505, 506, -1,
    1378, 1380, 1379, -1,
    821, 1953, -1,
    2617, 2616, -1,
    525, 526, -1,
};

static const constexpr LineMetaDataQuadTreeDepthIndex line_data_depthOffsets[] = {
    { 27, 0 },
    { 26, 1 },
    { 25, 9 },
    { 24, 54 },
    { 23, 161 },
    { 22, 365 },
    { 21, 699 },
    { 20, 1076 },
    { 19, 1428 },
    { 18, 1604 },
    { 17, 1690 },
    { 16, 1756 },
};

static const constexpr LineMetaDataZIndex line_data_zquadtree[] = {
    { 227, Bucket(0) }, // 30.8, -5.517 x 44.22, 7.905
    { 390, 2405 }, // 30.8, -119.6 x 37.51, -112.9
    { 397, 2007 }, // 37.51, -112.9 x 44.22, -106.2
    { 400, 1740 }, // 44.22, -126.3 x 50.93, -119.6
    { 431, Bucket(6) }, // 37.51, -79.34 x 44.22, -72.63
    { 773, 2785 }, // 37.51, -72.63 x 44.22, -65.91
    { 946, Bucket(14) }, // 44.22, 14.62 x 50.93, 21.33
    { 950, Bucket(23) }, // 57.64, 14.62 x 64.35, 21.33
    { 956, Bucket(27) }, // 57.64, 21.33 x 64.35, 28.04
    { 1555, 2128 }, // 34.15, -123 x 37.51, -119.6
    { 1558, 2128 }, // 37.51, -123 x 40.86, -119.6
    { 1560, Bucket(30) }, // 30.8, -119.6 x 34.15, -116.2
    { 1561, 1392 }, // 34.15, -119.6 x 37.51, -116.2
    { 1695, Bucket(36) }, // 40.86, -89.4 x 44.22, -86.05
    { 1719, 2433 }, // 40.86, -82.69 x 44.22, -79.34
    { 1724, Bucket(47) }, // 37.51, -79.34 x 40.86, -75.98
    { 1726, Bucket(51) }, // 37.51, -75.98 x 40.86, -72.63
    { 1727, 355 }, // 40.86, -75.98 x 44.22, -72.63
    { 2314, Bucket(55) }, // -36.31, -62.56 x -32.96, -59.2
    { 2336, Bucket(55) }, // -36.31, -59.2 x -32.96, -55.85
    { 3093, Bucket(58) }, // 40.86, -72.63 x 44.22, -69.27
    { 3636, Bucket(61) }, // 37.51, -5.517 x 40.86, -2.162
    { 3638, Bucket(66) }, // 37.51, -2.162 x 40.86, 1.194
    { 3645, Bucket(69) }, // 40.86, 1.194 x 44.22, 4.549
    { 3683, 1371 }, // 47.57, -2.162 x 50.93, 1.194
    { 3685, Bucket(72) }, // 54.28, -5.517 x 57.64, -2.162
    { 3686, Bucket(75) }, // 50.93, -2.162 x 54.28, 1.194
    { 3689, Bucket(79) }, // 47.57, 1.194 x 50.93, 4.549
    { 3690, Bucket(86) }, // 44.22, 4.549 x 47.57, 7.905
    { 3692, 946 }, // 50.93, 1.194 x 54.28, 4.549
    { 3735, Bucket(90) }, // 40.86, 11.26 x 44.22, 14.62
    { 3776, 2806 }, // 44.22, 7.905 x 47.57, 11.26
    { 3778, 1455 }, // 44.22, 11.26 x 47.57, 14.62
    { 3780, Bucket(94) }, // 50.93, 7.905 x 54.28, 11.26
    { 3782, 724 }, // 50.93, 11.26 x 54.28, 14.62
    { 3785, Bucket(97) }, // 47.57, 14.62 x 50.93, 17.97
    { 3786, Bucket(104) }, // 44.22, 17.97 x 47.57, 21.33
    { 3787, 1207 }, // 47.57, 17.97 x 50.93, 21.33
    { 3788, 2181 }, // 50.93, 14.62 x 54.28, 17.97
    { 3800, Bucket(114) }, // 57.64, 14.62 x 60.99, 17.97
    { 3802, Bucket(114) }, // 57.64, 17.97 x 60.99, 21.33
    { 3826, Bucket(117) }, // 57.64, 24.68 x 60.99, 28.04
    { 9050, 2824 }, // 3.952, 98.5 x 7.308, 101.9
    { 9180, 2471 }, // 10.66, 122 x 14.02, 125.3
    { 9285, 2324 }, // 54.28, 34.75 x 57.64, 38.1
    { 9354, Bucket(120) }, // 17.37, 71.66 x 20.73, 75.01
    { 9771, 2156 }, // 20.73, 111.9 x 24.09, 115.3
    { 9863, Bucket(123) }, // 27.44, 118.6 x 30.8, 122
    { 9875, Bucket(127) }, // 34.15, 118.6 x 37.51, 122
    { 9876, 2514 }, // 37.51, 115.3 x 40.86, 118.6
    { 9883, Bucket(131) }, // 34.15, 125.3 x 37.51, 128.7
    { 9886, Bucket(131) }, // 37.51, 125.3 x 40.86, 128.7
    { 9913, 2573 }, // 34.15, 135.4 x 37.51, 138.8
    { 9915, Bucket(139) }, // 34.15, 138.8 x 37.51, 142.1
    { 3830, 1588 }, // -12.82, -77.66 x -11.15, -75.98
    { 6221, Bucket(150) }, // 35.83, -123 x 37.51, -121.3
    { 6232, Bucket(155) }, // 37.51, -123 x 39.18, -121.3
    { 6243, Bucket(163) }, // 32.47, -117.9 x 34.15, -116.2
    { 6337, 369 }, // 32.47, -112.9 x 34.15, -111.2
    { 6723, Bucket(168) }, // 32.47, -97.79 x 34.15, -96.11
    { 6770, Bucket(172) }, // 37.51, -91.08 x 39.18, -89.4
    { 6782, Bucket(175) }, // 40.86, -87.73 x 42.54, -86.05
    { 6879, Bucket(178) }, // 42.54, -81.01 x 44.22, -79.34
    { 6898, 2365 }, // 37.51, -77.66 x 39.18, -75.98
    { 6901, Bucket(187) }, // 42.54, -79.34 x 44.22, -77.66
    { 6905, Bucket(195) }, // 39.18, -75.98 x 40.86, -74.3
    { 6907, 1119 }, // 39.18, -74.3 x 40.86, -72.63
    { 6922, 663 }, // 44.22, -94.44 x 45.9, -92.76
    { 7082, 2078 }, // 44.22, -74.3 x 45.9, -72.63
    { 9268, 2699 }, // -26.25, -65.91 x -24.57, -64.24
    { 9407, Bucket(206) }, // -24.57, -47.46 x -22.89, -45.78
    { 9751, Bucket(212) }, // -24.57, -44.1 x -22.89, -42.43
    { 9794, Bucket(212) }, // -22.89, -44.1 x -21.21, -42.43
    { 12372, Bucket(219) }, // 40.86, -72.63 x 42.54, -70.95
    { 14551, 1462 }, // 42.54, -3.839 x 44.22, -2.162
    { 14558, 1490 }, // 40.86, -0.4838 x 42.54, 1.194
    { 14580, Bucket(222) }, // 40.86, 1.194 x 42.54, 2.872
    { 14651, Bucket(237) }, // 52.61, -7.195 x 54.28, -5.517
    { 14729, 286 }, // 45.9, -2.162 x 47.57, -0.4838
    { 14739, Bucket(240) }, // 52.61, -3.839 x 54.28, -2.162
    { 14745, Bucket(241) }, // 52.61, -2.162 x 54.28, -0.4838
    { 14756, Bucket(244) }, // 47.57, 1.194 x 49.25, 2.872
    { 14759, 1491 }, // 49.25, 2.872 x 50.93, 4.549
    { 14760, 634 }, // 44.22, 4.549 x 45.9, 6.227
    { 14762, Bucket(250) }, // 44.22, 6.227 x 45.9, 7.905
    { 14763, Bucket(257) }, // 45.9, 6.227 x 47.57, 7.905
    { 14765, 1410 }, // 49.25, 4.549 x 50.93, 6.227
    { 14766, 251 }, // 47.57, 6.227 x 49.25, 7.905
    { 14767, Bucket(264) }, // 49.25, 6.227 x 50.93, 7.905
    { 14776, 1410 }, // 50.93, 4.549 x 52.61, 6.227
    { 14778, Bucket(274) }, // 50.93, 6.227 x 52.61, 7.905
    { 14940, Bucket(294) }, // 40.86, 11.26 x 42.54, 12.94
    { 15031, 833 }, // 29.12, 29.72 x 30.8, 31.39
    { 15056, 2638 }, // 37.51, 21.33 x 39.18, 23
    { 15058, Bucket(298) }, // 37.51, 23 x 39.18, 24.68
    { 15089, 1710 }, // 39.18, 28.04 x 40.86, 29.72
    { 15092, Bucket(303) }, // 40.86, 28.04 x 42.54, 29.72
    { 15104, Bucket(307) }, // 44.22, 7.905 x 45.9, 9.583
    { 15105, Bucket(314) }, // 45.9, 7.905 x 47.57, 9.583
    { 15107, 1843 }, // 45.9, 9.583 x 47.57, 11.26
    { 15108, Bucket(320) }, // 47.57, 7.905 x 49.25, 9.583
    { 15109, Bucket(328) }, // 49.25, 7.905 x 50.93, 9.583
    { 15111, 607 }, // 49.25, 9.583 x 50.93, 11.26
    { 15113, Bucket(334) }, // 45.9, 11.26 x 47.57, 12.94
    { 15115, Bucket(337) }, // 45.9, 12.94 x 47.57, 14.62
    { 15117, Bucket(340) }, // 49.25, 11.26 x 50.93, 12.94
    { 15119, Bucket(343) }, // 49.25, 12.94 x 50.93, 14.62
    { 15121, Bucket(349) }, // 52.61, 7.905 x 54.28, 9.583
    { 15127, 2836 }, // 55.96, 9.583 x 57.64, 11.26
    { 15128, Bucket(356) }, // 50.93, 11.26 x 52.61, 12.94
    { 15129, Bucket(363) }, // 52.61, 11.26 x 54.28, 12.94
    { 15130, Bucket(366) }, // 50.93, 12.94 x 52.61, 14.62
    { 15132, Bucket(370) }, // 54.28, 11.26 x 55.96, 12.94
    { 15137, Bucket(373) }, // 45.9, 14.62 x 47.57, 16.29
    { 15140, 2170 }, // 47.57, 14.62 x 49.25, 16.29
    { 15142, 1217 }, // 47.57, 16.29 x 49.25, 17.97
    { 15145, Bucket(379) }, // 45.9, 17.97 x 47.57, 19.65
    { 15148, 2095 }, // 47.57, 17.97 x 49.25, 19.65
    { 15160, Bucket(390) }, // 50.93, 17.97 x 52.61, 19.65
    { 15171, Bucket(393) }, // 59.32, 9.583 x 60.99, 11.26
    { 15271, Bucket(397) }, // 49.25, 29.72 x 50.93, 31.39
    { 15299, Bucket(402) }, // 59.32, 23 x 60.99, 24.68
    { 15302, 2558 }, // 60.99, 23 x 62.67, 24.68
    { 15305, Bucket(401) }, // 59.32, 24.68 x 60.99, 26.36
    { 34771, Bucket(406) }, // 12.34, 76.69 x 14.02, 78.37
    { 34779, 1881 }, // 12.34, 80.05 x 14.02, 81.72
    { 36159, Bucket(409) }, // 2.275, 100.2 x 3.952, 101.9
    { 36202, 2826 }, // 3.952, 100.2 x 5.63, 101.9
    { 36245, 2277 }, // 2.275, 101.9 x 3.952, 103.5
    { 36246, Bucket(418) }, // 0.597, 103.5 x 2.275, 105.2
    { 36356, Bucket(421) }, // -32.96, 115.3 x -31.28, 117
    { 36702, Bucket(424) }, // 14.02, 120.3 x 15.7, 122
    { 36944, Bucket(430) }, // 37.51, 34.75 x 39.18, 36.43
    { 37142, 2325 }, // 54.28, 36.43 x 55.96, 38.1
    { 37143, 2332 }, // 55.96, 36.43 x 57.64, 38.1
    { 37276, Bucket(435) }, // 54.28, 51.53 x 55.96, 53.2
    { 37526, 2057 }, // 27.44, 76.69 x 29.12, 78.37
    { 39056, Bucket(442) }, // 24.09, 101.9 x 25.76, 103.5
    { 39063, 2547 }, // 29.12, 103.5 x 30.8, 105.2
    { 39065, 2655 }, // 25.76, 105.2 x 27.44, 106.9
    { 39085, Bucket(446) }, // 22.41, 111.9 x 24.09, 113.6
    { 39100, Bucket(449) }, // 27.44, 111.9 x 29.12, 113.6
    { 39103, Bucket(452) }, // 29.12, 113.6 x 30.8, 115.3
    { 39162, Bucket(455) }, // 37.51, 113.6 x 39.18, 115.3
    { 39449, Bucket(458) }, // 25.76, 118.6 x 27.44, 120.3
    { 39453, 2665 }, // 29.12, 118.6 x 30.8, 120.3
    { 39455, 2600 }, // 29.12, 120.3 x 30.8, 122
    { 39493, Bucket(461) }, // 35.83, 115.3 x 37.51, 117
    { 39495, 1938 }, // 35.83, 117 x 37.51, 118.6
    { 39496, 2119 }, // 30.8, 118.6 x 32.47, 120.3
    { 39498, Bucket(464) }, // 30.8, 120.3 x 32.47, 122
    { 39505, Bucket(467) }, // 39.18, 115.3 x 40.86, 117
    { 39514, 1810 }, // 37.51, 120.3 x 39.18, 122
    { 39540, 1750 }, // 40.86, 122 x 42.54, 123.7
    { 39652, 2312 }, // 34.15, 135.4 x 35.83, 137.1
    { 39660, Bucket(477) }, // 34.15, 138.8 x 35.83, 140.4
    { 39661, 2561 }, // 35.83, 138.8 x 37.51, 140.4
    { 39679, 1840 }, // 42.54, 140.4 x 44.22, 142.1
    { 41819, 1282 }, // -41.35, 174 x -39.67, 175.7
    { 41823, 10 }, // -37.99, 174 x -36.31, 175.7
    { 42019, 2098 }, // -34.64, 150.5 x -32.96, 152.2
    { 12287, 1427 }, // -37.15, -73.46 x -36.31, -72.63
    { 16292, 417 }, // 5.63, -75.98 x 6.469, -75.14
    { 24928, 840 }, // 37.51, -123 x 38.35, -122.1
    { 24967, Bucket(485) }, // 33.31, -118.8 x 34.15, -117.9
    { 24972, Bucket(490) }, // 32.47, -117.9 x 33.31, -117.1
    { 24978, Bucket(503) }, // 34.15, -118.8 x 34.99, -117.9
    { 25542, Bucket(506) }, // 39.18, -105.3 x 40.02, -104.5
    { 25633, Bucket(514) }, // 45.06, -123 x 45.9, -122.1
    { 25637, 2289 }, // 46.73, -123 x 47.57, -122.1
    { 25789, 2213 }, // 50.09, -114.6 x 50.93, -113.7
    { 25832, Bucket(519) }, // 50.93, -114.6 x 51.77, -113.7
    { 26628, Bucket(522) }, // 19.05, -99.47 x 19.89, -98.63
    { 26711, 2416 }, // 29.96, -98.63 x 30.8, -97.79
    { 26717, Bucket(531) }, // 29.96, -97.79 x 30.8, -96.95
    { 26892, 2420 }, // 32.47, -97.79 x 33.31, -96.95
    { 26894, Bucket(534) }, // 32.47, -96.95 x 33.31, -96.11
    { 27399, Bucket(538) }, // 33.31, -85.21 x 34.15, -84.37
    { 27405, Bucket(538) }, // 33.31, -84.37 x 34.15, -83.53
    { 27503, Bucket(541) }, // 40.02, -80.18 x 40.86, -79.34
    { 27519, Bucket(545) }, // 43.38, -80.18 x 44.22, -79.34
    { 27593, Bucket(551) }, // 38.35, -77.66 x 39.18, -76.82
    { 27605, Bucket(554) }, // 43.38, -79.34 x 44.22, -78.5
    { 27620, 2372 }, // 39.18, -75.98 x 40.02, -75.14
    { 27629, Bucket(558) }, // 40.02, -74.3 x 40.86, -73.46
    { 27640, Bucket(582) }, // 40.86, -74.3 x 41.7, -73.46
    { 27690, 2004 }, // 44.22, -93.6 x 45.06, -92.76
    { 28329, Bucket(589) }, // 45.06, -74.3 x 45.9, -73.46
    { 36877, 2169 }, // -33.8, -70.95 x -32.96, -70.11
    { 36901, 960 }, // -33.8, -69.27 x -32.96, -68.43
    { 36912, 960 }, // -32.96, -69.27 x -32.12, -68.43
    { 37049, 2710 }, // -32.12, -60.88 x -31.28, -60.04
    { 37377, 986 }, // -35.47, -59.2 x -34.64, -58.37
    { 37380, Bucket(595) }, // -34.64, -59.2 x -33.8, -58.37
    { 37527, 1239 }, // -30.44, -51.65 x -29.6, -50.82
    { 40084, 2272 }, // -4.436, -39.07 x -3.597, -38.23
    { 40097, 1120 }, // -8.631, -35.72 x -7.792, -34.88
    { 40112, 2242 }, // -6.114, -35.72 x -5.275, -34.88
    { 49491, 1100 }, // 41.7, -71.79 x 42.54, -70.95
    { 57767, Bucket(599) }, // 33.31, -8.034 x 34.15, -7.195
    { 57773, 1236 }, // 33.31, -7.195 x 34.15, -6.356
    { 57791, 1645 }, // 36.67, -6.356 x 37.51, -5.517
    { 57840, Bucket(603) }, // 40.86, -8.872 x 41.7, -8.034
    { 58189, Bucket(608) }, // 40.02, -3.839 x 40.86, -3
    { 58214, 1253 }, // 39.18, -1.323 x 40.02, -0.4838
    { 58217, 2860 }, // 38.35, -0.4838 x 39.18, 0.3551
    { 58220, 1253 }, // 39.18, -0.4838 x 40.02, 0.3551
    { 58226, 460 }, // 40.86, -1.323 x 41.7, -0.4838
    { 58227, 460 }, // 41.7, -1.323 x 42.54, -0.4838
    { 58982, 210 }, // 52.61, -1.323 x 53.45, -0.4838
    { 58984, Bucket(619) }, // 50.93, -0.4838 x 51.77, 0.3551
    { 59027, Bucket(633) }, // 48.41, 2.033 x 49.25, 2.872
    { 59039, Bucket(651) }, // 50.09, 3.711 x 50.93, 4.549
    { 59041, Bucket(662) }, // 45.06, 4.549 x 45.9, 5.388
    { 59043, Bucket(665) }, // 45.06, 5.388 x 45.9, 6.227
    { 59046, 2376 }, // 45.9, 5.388 x 46.73, 6.227
    { 59051, 357 }, // 45.06, 7.066 x 45.9, 7.905
    { 59052, Bucket(668) }, // 45.9, 6.227 x 46.73, 7.066
    { 59053, 1664 }, // 46.73, 6.227 x 47.57, 7.066
    { 59055, Bucket(671) }, // 46.73, 7.066 x 47.57, 7.905
    { 59061, Bucket(678) }, // 50.09, 4.549 x 50.93, 5.388
    { 59063, 1486 }, // 50.09, 5.388 x 50.93, 6.227
    { 59070, 677 }, // 49.25, 7.066 x 50.09, 7.905
    { 59082, Bucket(681) }, // 50.93, 3.711 x 51.77, 4.549
    { 59083, 1308 }, // 51.77, 3.711 x 52.61, 4.549
    { 59105, Bucket(687) }, // 51.77, 4.549 x 52.61, 5.388
    { 59112, Bucket(693) }, // 50.93, 6.227 x 51.77, 7.066
    { 59114, Bucket(699) }, // 50.93, 7.066 x 51.77, 7.905
    { 59759, 2639 }, // 40.02, 13.78 x 40.86, 14.62
    { 59763, Bucket(705) }, // 41.7, 12.1 x 42.54, 12.94
    { 59770, 2639 }, // 40.86, 13.78 x 41.7, 14.62
    { 59864, 903 }, // 40.86, 16.29 x 41.7, 17.13
    { 60226, 1970 }, // 37.51, 22.17 x 38.35, 23
    { 60232, Bucket(712) }, // 37.51, 23 x 38.35, 23.84
    { 60370, 1582 }, // 40.86, 28.88 x 41.7, 29.72
    { 60390, Bucket(716) }, // 39.18, 32.23 x 40.02, 33.07
    { 60419, Bucket(719) }, // 45.06, 8.744 x 45.9, 9.583
    { 60421, Bucket(733) }, // 46.73, 7.905 x 47.57, 8.744
    { 60422, 2802 }, // 45.9, 8.744 x 46.73, 9.583
    { 60423, Bucket(742) }, // 46.73, 8.744 x 47.57, 9.583
    { 60425, Bucket(749) }, // 45.06, 9.583 x 45.9, 10.42
    { 60432, Bucket(752) }, // 47.57, 7.905 x 48.41, 8.744
    { 60433, Bucket(755) }, // 48.41, 7.905 x 49.25, 8.744
    { 60434, Bucket(763) }, // 47.57, 8.744 x 48.41, 9.583
    { 60435, Bucket(767) }, // 48.41, 8.744 x 49.25, 9.583
    { 60436, Bucket(787) }, // 49.25, 7.905 x 50.09, 8.744
    { 60437, Bucket(791) }, // 50.09, 7.905 x 50.93, 8.744
    { 60438, 649 }, // 49.25, 8.744 x 50.09, 9.583
    { 60442, 265 }, // 47.57, 10.42 x 48.41, 11.26
    { 60443, 607 }, // 48.41, 10.42 x 49.25, 11.26
    { 60446, Bucket(795) }, // 49.25, 10.42 x 50.09, 11.26
    { 60453, Bucket(798) }, // 46.73, 11.26 x 47.57, 12.1
    { 60464, Bucket(801) }, // 47.57, 11.26 x 48.41, 12.1
    { 60468, 178 }, // 49.25, 11.26 x 50.09, 12.1
    { 60474, Bucket(809) }, // 47.57, 13.78 x 48.41, 14.62
    { 60476, 977 }, // 49.25, 12.94 x 50.09, 13.78
    { 60477, 1340 }, // 50.09, 12.94 x 50.93, 13.78
    { 60483, 705 }, // 51.77, 8.744 x 52.61, 9.583
    { 60489, Bucket(813) }, // 51.77, 9.583 x 52.61, 10.42
    { 60492, Bucket(815) }, // 52.61, 9.583 x 53.45, 10.42
    { 60493, Bucket(818) }, // 53.45, 9.583 x 54.28, 10.42
    { 60512, 172 }, // 50.93, 11.26 x 51.77, 12.1
    { 60513, Bucket(829) }, // 51.77, 11.26 x 52.61, 12.1
    { 60514, Bucket(833) }, // 50.93, 12.1 x 51.77, 12.94
    { 60516, 117 }, // 52.61, 11.26 x 53.45, 12.1
    { 60521, Bucket(843) }, // 51.77, 12.94 x 52.61, 13.78
    { 60522, 1338 }, // 50.93, 13.78 x 51.77, 14.62
    { 60524, Bucket(864) }, // 52.61, 12.94 x 53.45, 13.78
    { 60531, Bucket(871) }, // 55.12, 12.1 x 55.96, 12.94
    { 60549, Bucket(878) }, // 46.73, 14.62 x 47.57, 15.45
    { 60550, 154 }, // 45.9, 15.45 x 46.73, 16.29
    { 60551, 2749 }, // 46.73, 15.45 x 47.57, 16.29
    { 60568, 789 }, // 47.57, 16.29 x 48.41, 17.13
    { 60581, 1195 }, // 46.73, 17.97 x 47.57, 18.81
    { 60583, Bucket(881) }, // 46.73, 18.81 x 47.57, 19.65
    { 60588, 2649 }, // 45.9, 19.65 x 46.73, 20.49
    { 60589, Bucket(887) }, // 46.73, 19.65 x 47.57, 20.49
    { 60592, Bucket(891) }, // 47.57, 17.97 x 48.41, 18.81
    { 60594, Bucket(894) }, // 47.57, 18.81 x 48.41, 19.65
    { 60600, 1197 }, // 47.57, 19.65 x 48.41, 20.49
    { 60651, 257 }, // 51.77, 20.49 x 52.61, 21.33
    { 60686, Bucket(898) }, // 59.32, 10.42 x 60.16, 11.26
    { 60811, 243 }, // 58.48, 17.13 x 59.32, 17.97
    { 60933, 1856 }, // 46.73, 21.33 x 47.57, 22.17
    { 60975, Bucket(904) }, // 46.73, 27.2 x 47.57, 28.04
    { 61039, Bucket(910) }, // 53.45, 27.2 x 54.28, 28.04
    { 61085, 2896 }, // 50.09, 29.72 x 50.93, 30.55
    { 61112, Bucket(913) }, // 47.57, 33.07 x 48.41, 33.91
    { 61145, Bucket(917) }, // 55.12, 29.72 x 55.96, 30.55
    { 61221, Bucket(921) }, // 60.16, 24.68 x 60.99, 25.52
    { 61324, Bucket(925) }, // 59.32, 29.72 x 60.16, 30.55
    { 144855, Bucket(928) }, // 16.54, 95.99 x 17.37, 96.82
    { 144877, Bucket(931) }, // 13.18, 100.2 x 14.02, 101
    { 144984, Bucket(935) }, // 0.597, 103.5 x 1.436, 104.4
    { 145425, 2821 }, // -32.12, 115.3 x -31.28, 116.1
    { 146887, Bucket(939) }, // 13.18, 122.8 x 14.02, 123.7
    { 147743, 2829 }, // 36.67, 37.26 x 37.51, 38.1
    { 147777, 2886 }, // 38.35, 34.75 x 39.18, 35.59
    { 147794, 2864 }, // 40.86, 35.59 x 41.7, 36.43
    { 147800, 2864 }, // 40.86, 36.43 x 41.7, 37.26
    { 148043, 2111 }, // 24.92, 50.69 x 25.76, 51.53
    { 148065, 2111 }, // 24.92, 51.53 x 25.76, 52.36
    { 148161, Bucket(942) }, // 24.92, 54.88 x 25.76, 55.72
    { 148251, 1628 }, // 34.99, 50.69 x 35.83, 51.53
    { 148406, 301 }, // 35.83, 59.08 x 36.67, 59.91
    { 148495, Bucket(945) }, // 46.73, 37.26 x 47.57, 38.1
    { 148571, Bucket(950) }, // 55.12, 37.26 x 55.96, 38.1
    { 149068, 2326 }, // 52.61, 49.85 x 53.45, 50.69
    { 149667, 2478 }, // 18.21, 72.5 x 19.05, 73.34
    { 149670, 2478 }, // 19.05, 72.5 x 19.89, 73.34
    { 149970, Bucket(967) }, // 40.86, 69.14 x 41.7, 69.98
    { 150064, Bucket(970) }, // 20.73, 78.37 x 21.57, 79.21
    { 150105, Bucket(973) }, // 28.28, 76.69 x 29.12, 77.53
    { 150525, 2013 }, // 43.38, 86.76 x 44.22, 87.6
    { 150527, 2013 }, // 43.38, 87.6 x 44.22, 88.44
    { 156222, Bucket(981) }, // 22.41, 107.7 x 23.25, 108.6
    { 156253, Bucket(986) }, // 29.96, 103.5 x 30.8, 104.4
    { 156278, Bucket(993) }, // 29.12, 106.1 x 29.96, 106.9
    { 156342, Bucket(1001) }, // 22.41, 112.8 x 23.25, 113.6
    { 156343, 2247 }, // 23.25, 112.8 x 24.09, 113.6
    { 156345, Bucket(1008) }, // 21.57, 113.6 x 22.41, 114.4
    { 156348, Bucket(1012) }, // 22.41, 113.6 x 23.25, 114.4
    { 156402, 2786 }, // 27.44, 112.8 x 28.28, 113.6
    { 156413, Bucket(1020) }, // 29.96, 113.6 x 30.8, 114.4
    { 156424, Bucket(1024) }, // 30.8, 103.5 x 31.63, 104.4
    { 156549, Bucket(1028) }, // 33.31, 108.6 x 34.15, 109.4
    { 156560, Bucket(1031) }, // 34.15, 108.6 x 34.99, 109.4
    { 156592, 2669 }, // 34.15, 111.9 x 34.99, 112.8
    { 156600, 1712 }, // 34.15, 113.6 x 34.99, 114.4
    { 157770, Bucket(1038) }, // 24.09, 117.8 x 24.92, 118.6
    { 157777, Bucket(1042) }, // 28.28, 115.3 x 29.12, 116.1
    { 157803, Bucket(1045) }, // 24.92, 121.2 x 25.76, 122
    { 157815, Bucket(1050) }, // 29.96, 119.5 x 30.8, 120.3
    { 157816, Bucket(1055) }, // 27.44, 120.3 x 28.28, 121.2
    { 157822, Bucket(1058) }, // 29.12, 121.2 x 29.96, 122
    { 157961, Bucket(1063) }, // 31.63, 117 x 32.47, 117.8
    { 157963, 957 }, // 31.63, 117.8 x 32.47, 118.6
    { 157985, Bucket(1066) }, // 31.63, 118.6 x 32.47, 119.5
    { 157992, 2683 }, // 30.8, 120.3 x 31.63, 121.2
    { 157994, Bucket(1072) }, // 30.8, 121.2 x 31.63, 122
    { 158012, 2377 }, // 35.83, 120.3 x 36.67, 121.2
    { 158022, Bucket(1088) }, // 39.18, 116.1 x 40.02, 117
    { 158025, Bucket(1099) }, // 38.35, 117 x 39.18, 117.8
    { 158028, 1976 }, // 39.18, 117 x 40.02, 117.8
    { 158059, Bucket(1102) }, // 38.35, 121.2 x 39.18, 122
    { 158135, Bucket(1105) }, // 36.67, 126.2 x 37.51, 127
    { 158140, 1659 }, // 35.83, 127 x 36.67, 127.9
    { 158141, Bucket(1109) }, // 36.67, 127 x 37.51, 127.9
    { 158163, 1749 }, // 41.7, 122.8 x 42.54, 123.7
    { 158175, Bucket(1112) }, // 43.38, 124.5 x 44.22, 125.3
    { 158177, 1626 }, // 38.35, 125.3 x 39.18, 126.2
    { 158178, Bucket(1105) }, // 37.51, 126.2 x 38.35, 127
    { 158184, Bucket(1116) }, // 37.51, 127 x 38.35, 127.9
    { 158197, Bucket(1113) }, // 43.38, 125.3 x 44.22, 126.2
    { 158481, Bucket(1119) }, // 34.99, 128.7 x 35.83, 129.5
    { 158512, 400 }, // 34.15, 132.1 x 34.99, 132.9
    { 158520, Bucket(1122) }, // 34.15, 133.7 x 34.99, 134.6
    { 158608, Bucket(1125) }, // 34.15, 135.4 x 34.99, 136.3
    { 158643, Bucket(1128) }, // 34.99, 139.6 x 35.83, 140.4
    { 158646, 1954 }, // 35.83, 139.6 x 36.67, 140.4
    { 158696, 1591 }, // 37.51, 140.4 x 38.35, 141.3
    { 158718, 2571 }, // 42.54, 141.3 x 43.38, 142.1
    { 158883, Bucket(1133) }, // 45.06, 126.2 x 45.9, 127
    { 165214, Bucket(1136) }, // -37.99, 144.6 x -37.15, 145.5
    { 168076, 2189 }, // -34.64, 150.5 x -33.8, 151.4
    { 49148, 1426 }, // -37.15, -73.46 x -36.73, -73.05
    { 64751, 1574 }, // 8.566, -79.76 x 8.986, -79.34
    { 64762, 1574 }, // 8.986, -79.76 x 9.405, -79.34
    { 99549, Bucket(1147) }, // 37.09, -122.1 x 37.51, -121.7
    { 99714, Bucket(1151) }, // 37.51, -122.5 x 37.93, -122.1
    { 99721, 1913 }, // 37.93, -122.1 x 38.35, -121.7
    { 99726, Bucket(1154) }, // 38.35, -121.7 x 38.77, -121.3
    { 99748, 2054 }, // 38.35, -121.3 x 38.77, -120.9
    { 99891, 2637 }, // 32.89, -117.5 x 33.31, -117.1
    { 99895, 2823 }, // 33.73, -117.5 x 34.15, -117.1
    { 101661, Bucket(1157) }, // 40.44, -112.1 x 40.86, -111.6
    { 102169, Bucket(1160) }, // 39.6, -105.3 x 40.02, -104.9
    { 102511, 1300 }, // 48.83, -123.4 x 49.25, -123
    { 102522, 1300 }, // 49.25, -123.4 x 49.67, -123
    { 102533, 163 }, // 45.48, -123 x 45.9, -122.5
    { 102551, 1243 }, // 47.15, -122.5 x 47.57, -122.1
    { 102594, Bucket(1165) }, // 47.57, -122.5 x 47.99, -122.1
    { 103356, Bucket(1169) }, // 53.45, -113.7 x 53.86, -113.3
    { 106512, 1049 }, // 19.05, -99.47 x 19.47, -99.05
    { 106963, Bucket(1172) }, // 29.54, -95.69 x 29.96, -95.28
    { 108494, 782 }, // 41.7, -88.14 x 42.12, -87.73
    { 108516, Bucket(1176) }, // 41.7, -87.73 x 42.12, -87.31
    { 109796, 2280 }, // 34.99, -81.01 x 35.41, -80.59
    { 110025, Bucket(1181) }, // 41.28, -81.85 x 41.7, -81.43
    { 110078, 2427 }, // 43.38, -79.76 x 43.8, -79.34
    { 110206, 1177 }, // 36.67, -76.4 x 37.09, -75.98
    { 110375, Bucket(1185) }, // 38.77, -77.24 x 39.18, -76.82
    { 110392, Bucket(1190) }, // 39.18, -76.82 x 39.6, -76.4
    { 110483, Bucket(1193) }, // 39.6, -75.56 x 40.02, -75.14
    { 110486, 1809 }, // 40.02, -75.56 x 40.44, -75.14
    { 110517, Bucket(1197) }, // 40.44, -74.3 x 40.86, -73.88
    { 110519, 2240 }, // 40.44, -73.88 x 40.86, -73.46
    { 110560, Bucket(1210) }, // 40.86, -74.3 x 41.28, -73.88
    { 112810, 2434 }, // 44.22, -79.76 x 44.64, -79.34
    { 113319, 2075 }, // 45.48, -73.88 x 45.9, -73.46
    { 136649, 1234 }, // -39.25, -68.43 x -38.83, -68.01
    { 147508, Bucket(1214) }, // -33.8, -70.95 x -33.38, -70.53
    { 148047, 244 }, // -31.7, -64.66 x -31.28, -64.24
    { 148058, 244 }, // -31.28, -64.66 x -30.86, -64.24
    { 149522, Bucket(1217) }, // -34.64, -58.78 x -34.22, -58.37
    { 149777, 449 }, // -27.5, -59.2 x -27.09, -58.78
    { 150518, Bucket(1220) }, // -23.73, -47.04 x -23.31, -46.62
    { 150524, Bucket(1224) }, // -23.73, -46.62 x -23.31, -46.2
    { 151432, 1605 }, // -16.18, -48.3 x -15.76, -47.88
    { 152823, Bucket(1228) }, // 10.24, -67.17 x 10.66, -66.75
    { 156712, 2270 }, // -22.89, -43.27 x -22.47, -42.85
    { 157463, 1700 }, // -13.24, -38.65 x -12.82, -38.23
    { 160339, 1337 }, // -4.017, -38.65 x -3.597, -38.23
    { 160450, 2858 }, // -6.114, -35.3 x -5.694, -34.88
    { 188152, 1965 }, // 8.986, 7.066 x 9.405, 7.485
    { 196652, 1607 }, // 18.21, -70.11 x 18.63, -69.69
    { 196782, 1173 }, // 18.21, -66.33 x 18.63, -65.91
    { 197967, Bucket(1232) }, // 42.12, -71.37 x 42.54, -70.95
    { 197989, 382 }, // 42.12, -70.95 x 42.54, -70.53
    { 231161, 2827 }, // 36.25, -6.356 x 36.67, -5.936
    { 231214, 2379 }, // 38.35, -9.292 x 38.77, -8.872
    { 231300, 2379 }, // 38.35, -8.872 x 38.77, -8.453
    { 231317, 1828 }, // 40.44, -8.872 x 40.86, -8.453
    { 231360, Bucket(1241) }, // 40.86, -8.872 x 41.28, -8.453
    { 232540, 1647 }, // 36.67, -4.678 x 37.09, -4.259
    { 232565, 1461 }, // 37.09, -3.839 x 37.51, -3.42
    { 232735, 2041 }, // 40.44, -4.259 x 40.86, -3.839
    { 232757, 1670 }, // 40.44, -3.839 x 40.86, -3.42
    { 232913, Bucket(1245) }, // 42.96, -2.162 x 43.38, -1.742
    { 232938, 1296 }, // 40.86, 0.7745 x 41.28, 1.194
    { 233076, 1539 }, // 36.67, 2.872 x 37.09, 3.291
    { 233242, Bucket(1248) }, // 39.18, 2.452 x 39.6, 2.872
    { 233243, Bucket(1248) }, // 39.6, 2.452 x 40.02, 2.872
    { 233280, 1296 }, // 40.86, 1.194 x 41.28, 1.613
    { 233289, Bucket(1251) }, // 41.28, 2.033 x 41.7, 2.452
    { 233300, Bucket(1255) }, // 43.38, 1.194 x 43.8, 1.613
    { 233340, Bucket(1260) }, // 43.38, 3.711 x 43.8, 4.13
    { 233468, 2582 }, // 43.38, 7.066 x 43.8, 7.485
    { 234425, 1440 }, // 53.03, -6.356 x 53.45, -5.936
    { 235593, 2397 }, // 47.99, -4.678 x 48.41, -4.259
    { 235596, 2397 }, // 48.41, -4.678 x 48.83, -4.259
    { 235659, Bucket(1265) }, // 44.64, -0.9032 x 45.06, -0.4838
    { 235671, Bucket(1270) }, // 47.15, -1.742 x 47.57, -1.323
    { 235709, 913 }, // 47.15, 0.3551 x 47.57, 0.7745
    { 235714, 1055 }, // 47.57, -1.742 x 47.99, -1.323
    { 235762, 1001 }, // 49.25, -0.06436 x 49.67, 0.3551
    { 235909, 205 }, // 52.19, -2.162 x 52.61, -1.742
    { 235937, Bucket(1273) }, // 51.35, -0.4838 x 51.77, -0.06436
    { 235971, Bucket(1277) }, // 54.7, -1.742 x 55.12, -1.323
    { 236108, Bucket(1280) }, // 48.41, 2.033 x 48.83, 2.452
    { 236109, Bucket(1283) }, // 48.83, 2.033 x 49.25, 2.452
    { 236149, Bucket(1286) }, // 50.51, 2.872 x 50.93, 3.291
    { 236150, 1535 }, // 50.09, 3.291 x 50.51, 3.711
    { 236158, 1048 }, // 50.09, 4.13 x 50.51, 4.549
    { 236159, Bucket(1291) }, // 50.51, 4.13 x 50.93, 4.549
    { 236165, Bucket(1310) }, // 45.48, 4.549 x 45.9, 4.969
    { 236183, 514 }, // 47.15, 4.969 x 47.57, 5.388
    { 236186, Bucket(1313) }, // 45.9, 5.808 x 46.31, 6.227
    { 236191, Bucket(1316) }, // 47.15, 5.808 x 47.57, 6.227
    { 236209, 2631 }, // 46.31, 6.227 x 46.73, 6.647
    { 236214, 315 }, // 46.73, 6.647 x 47.15, 7.066
    { 236220, Bucket(1319) }, // 46.73, 7.066 x 47.15, 7.485
    { 236221, 2314 }, // 47.15, 7.066 x 47.57, 7.485
    { 236222, Bucket(1329) }, // 46.73, 7.485 x 47.15, 7.905
    { 236223, Bucket(1335) }, // 47.15, 7.485 x 47.57, 7.905
    { 236245, Bucket(1341) }, // 50.51, 4.549 x 50.93, 4.969
    { 236264, 1446 }, // 47.57, 7.066 x 47.99, 7.485
    { 236266, Bucket(1345) }, // 47.57, 7.485 x 47.99, 7.905
    { 236270, Bucket(1348) }, // 48.41, 7.485 x 48.83, 7.905
    { 236279, Bucket(1352) }, // 50.51, 6.647 x 50.93, 7.066
    { 236282, 678 }, // 49.25, 7.485 x 49.67, 7.905
    { 236285, Bucket(1355) }, // 50.51, 7.066 x 50.93, 7.485
    { 236328, 2846 }, // 50.93, 3.711 x 51.35, 4.13
    { 236330, Bucket(1361) }, // 50.93, 4.13 x 51.35, 4.549
    { 236334, Bucket(1364) }, // 51.77, 4.13 x 52.19, 4.549
    { 236420, 1308 }, // 51.77, 4.549 x 52.19, 4.969
    { 236421, 1966 }, // 52.19, 4.549 x 52.61, 4.969
    { 236422, Bucket(1374) }, // 51.77, 4.969 x 52.19, 5.388
    { 236450, Bucket(1377) }, // 50.93, 6.647 x 51.35, 7.066
    { 236451, 365 }, // 51.35, 6.647 x 51.77, 7.066
    { 236457, Bucket(1382) }, // 51.35, 7.066 x 51.77, 7.485
    { 237206, Bucket(1388) }, // 60.16, 4.969 x 60.58, 5.388
    { 238710, Bucket(1391) }, // 36.67, 10 x 37.09, 10.42
    { 239039, Bucket(1396) }, // 40.44, 14.2 x 40.86, 14.62
    { 239052, 2734 }, // 41.7, 12.1 x 42.12, 12.52
    { 239054, 2734 }, // 41.7, 12.52 x 42.12, 12.94
    { 239082, Bucket(1401) }, // 40.86, 14.2 x 41.28, 14.62
    { 241276, Bucket(1404) }, // 36.67, 30.55 x 37.09, 30.97
    { 241436, 1703 }, // 40.02, 28.88 x 40.44, 29.3
    { 241474, Bucket(1407) }, // 40.86, 28.46 x 41.28, 28.88
    { 241480, Bucket(1411) }, // 40.86, 28.88 x 41.28, 29.3
    { 241563, Bucket(1420) }, // 39.6, 32.65 x 40.02, 33.07
    { 241672, 778 }, // 44.22, 8.744 x 44.64, 9.163
    { 241677, Bucket(1423) }, // 45.48, 8.744 x 45.9, 9.163
    { 241679, Bucket(1427) }, // 45.48, 9.163 x 45.9, 9.583
    { 241682, 2803 }, // 45.9, 8.324 x 46.31, 8.744
    { 241684, Bucket(1430) }, // 46.73, 7.905 x 47.15, 8.324
    { 241685, Bucket(1436) }, // 47.15, 7.905 x 47.57, 8.324
    { 241686, Bucket(1445) }, // 46.73, 8.324 x 47.15, 8.744
    { 241687, Bucket(1449) }, // 47.15, 8.324 x 47.57, 8.744
    { 241688, Bucket(1475) }, // 45.9, 8.744 x 46.31, 9.163
    { 241692, Bucket(1479) }, // 46.73, 8.744 x 47.15, 9.163
    { 241693, Bucket(1482) }, // 47.15, 8.744 x 47.57, 9.163
    { 241694, Bucket(1491) }, // 46.73, 9.163 x 47.15, 9.583
    { 241695, Bucket(1494) }, // 47.15, 9.163 x 47.57, 9.583
    { 241701, 2847 }, // 45.48, 9.583 x 45.9, 10
    { 241717, Bucket(1505) }, // 47.15, 9.583 x 47.57, 10
    { 241727, Bucket(1508) }, // 47.15, 10.84 x 47.57, 11.26
    { 241730, 456 }, // 47.57, 8.324 x 47.99, 8.744
    { 241733, 1085 }, // 48.83, 7.905 x 49.25, 8.324
    { 241735, Bucket(1512) }, // 48.83, 8.324 x 49.25, 8.744
    { 241736, 453 }, // 47.57, 8.744 x 47.99, 9.163
    { 241742, 153 }, // 48.41, 9.163 x 48.83, 9.583
    { 241744, Bucket(1524) }, // 49.25, 7.905 x 49.67, 8.324
    { 241746, Bucket(1527) }, // 49.25, 8.324 x 49.67, 8.744
    { 241747, Bucket(1539) }, // 49.67, 8.324 x 50.09, 8.744
    { 241750, Bucket(1544) }, // 50.09, 8.324 x 50.51, 8.744
    { 241752, Bucket(1523) }, // 49.25, 8.744 x 49.67, 9.163
    { 241754, 677 }, // 49.25, 9.163 x 49.67, 9.583
    { 241756, 532 }, // 50.09, 8.744 x 50.51, 9.163
    { 241771, Bucket(1548) }, // 47.99, 10.84 x 48.41, 11.26
    { 241775, 179 }, // 48.83, 10.84 x 49.25, 11.26
    { 241786, Bucket(1553) }, // 49.25, 10.84 x 49.67, 11.26
    { 241789, 700 }, // 50.51, 10.42 x 50.93, 10.84
    { 241798, 266 }, // 45.06, 11.68 x 45.48, 12.1
    { 241804, 1242 }, // 45.06, 12.1 x 45.48, 12.52
    { 241805, 1242 }, // 45.48, 12.1 x 45.9, 12.52
    { 241813, 1047 }, // 47.15, 11.26 x 47.57, 11.68
    { 241823, 1901 }, // 47.15, 12.52 x 47.57, 12.94
    { 241845, 1901 }, // 47.15, 12.94 x 47.57, 13.36
    { 241849, 2789 }, // 46.31, 13.78 x 46.73, 14.2
    { 241855, 2171 }, // 47.15, 14.2 x 47.57, 14.62
    { 241856, 2554 }, // 47.57, 11.26 x 47.99, 11.68
    { 241857, Bucket(1561) }, // 47.99, 11.26 x 48.41, 11.68
    { 241858, 2554 }, // 47.57, 11.68 x 47.99, 12.1
    { 241859, 104 }, // 47.99, 11.68 x 48.41, 12.1
    { 241860, 1450 }, // 48.41, 11.26 x 48.83, 11.68
    { 241862, 1450 }, // 48.41, 11.68 x 48.83, 12.1
    { 241866, Bucket(1568) }, // 47.57, 12.52 x 47.99, 12.94
    { 241885, 645 }, // 50.51, 12.1 x 50.93, 12.52
    { 241887, Bucket(1571) }, // 50.51, 12.52 x 50.93, 12.94
    { 241888, Bucket(1567) }, // 47.57, 12.94 x 47.99, 13.36
    { 241899, Bucket(1576) }, // 47.99, 14.2 x 48.41, 14.62
    { 241909, Bucket(1573) }, // 50.51, 12.94 x 50.93, 13.36
    { 241915, Bucket(1579) }, // 49.67, 14.2 x 50.09, 14.62
    { 241918, Bucket(1589) }, // 50.09, 14.2 x 50.51, 14.62
    { 241926, Bucket(1595) }, // 51.77, 8.324 x 52.19, 8.744
    { 241935, 792 }, // 52.19, 9.163 x 52.61, 9.583
    { 241946, 792 }, // 52.61, 9.163 x 53.03, 9.583
    { 241950, 1251 }, // 53.45, 9.163 x 53.86, 9.583
    { 241957, Bucket(1599) }, // 52.19, 9.583 x 52.61, 10
    { 241960, 700 }, // 50.93, 10.42 x 51.35, 10.84
    { 241961, 111 }, // 51.35, 10.42 x 51.77, 10.84
    { 241962, Bucket(1614) }, // 50.93, 10.84 x 51.35, 11.26
    { 241972, 152 }, // 53.45, 9.583 x 53.86, 10
    { 242034, 2839 }, // 55.96, 10 x 56.38, 10.42
    { 242056, Bucket(1618) }, // 50.93, 12.1 x 51.35, 12.52
    { 242068, Bucket(1621) }, // 53.45, 11.26 x 53.86, 11.68
    { 242071, Bucket(1625) }, // 53.86, 11.68 x 54.28, 12.1
    { 242077, Bucket(1629) }, // 53.86, 12.1 x 54.28, 12.52
    { 242082, Bucket(1634) }, // 50.93, 13.36 x 51.35, 13.78
    { 242085, Bucket(1638) }, // 52.19, 12.94 x 52.61, 13.36
    { 242087, Bucket(1646) }, // 52.19, 13.36 x 52.61, 13.78
    { 242088, 1187 }, // 50.93, 13.78 x 51.35, 14.2
    { 242198, 2489 }, // 46.73, 15.04 x 47.15, 15.45
    { 242199, 176 }, // 47.15, 15.04 x 47.57, 15.45
    { 242251, Bucket(1661) }, // 47.99, 15.87 x 48.41, 16.29
    { 242273, Bucket(1665) }, // 47.99, 16.29 x 48.41, 16.71
    { 242333, Bucket(1675) }, // 47.15, 18.81 x 47.57, 19.23
    { 242334, 1131 }, // 46.73, 19.23 x 47.15, 19.65
    { 242356, 1131 }, // 46.73, 19.65 x 47.15, 20.07
    { 242376, Bucket(1689) }, // 47.57, 18.81 x 47.99, 19.23
    { 242432, Bucket(1694) }, // 50.93, 14.62 x 51.35, 15.04
    { 242471, Bucket(1697) }, // 52.19, 16.71 x 52.61, 17.13
    { 242571, Bucket(1715) }, // 51.35, 19.23 x 51.77, 19.65
    { 242574, Bucket(1731) }, // 51.77, 19.23 x 52.19, 19.65
    { 242591, 592 }, // 53.86, 19.23 x 54.28, 19.65
    { 242626, 1288 }, // 54.28, 18.39 x 54.7, 18.81
    { 242745, Bucket(1745) }, // 59.74, 10.42 x 60.16, 10.84
    { 242818, Bucket(1752) }, // 57.64, 11.68 x 58.06, 12.1
    { 243333, 798 }, // 58.9, 17.97 x 59.32, 18.39
    { 243344, 1644 }, // 59.32, 17.97 x 59.74, 18.39
    { 243833, Bucket(1755) }, // 49.67, 23.84 x 50.09, 24.26
    { 243850, Bucket(1760) }, // 44.22, 25.94 x 44.64, 26.36
    { 244374, 2497 }, // 46.73, 31.81 x 47.15, 32.23
    { 244884, Bucket(1768) }, // 60.16, 24.68 x 60.58, 25.1
    { 245299, Bucket(1775) }, // 59.74, 30.13 x 60.16, 30.55
    { 545991, 1261 }, // 8.566, 38.52 x 8.986, 38.94
    { 546002, Bucket(1802) }, // 8.986, 38.52 x 9.405, 38.94
    { 556126, 1669 }, // 9.824, 76.27 x 10.24, 76.69
    { 556465, Bucket(1805) }, // 12.76, 80.05 x 13.18, 80.47
    { 578555, 2278 }, // 2.694, 101.4 x 3.114, 101.9
    { 578558, 2278 }, // 3.114, 101.4 x 3.533, 101.9
    { 579420, Bucket(1810) }, // 16.54, 95.99 x 16.95, 96.4
    { 579509, Bucket(1815) }, // 13.6, 100.2 x 14.02, 100.6
    { 579709, 2216 }, // -3.178, 104.4 x -2.758, 104.8
    { 579937, 1944 }, // 1.016, 103.5 x 1.436, 104
    { 581002, 2577 }, // 10.66, 106.5 x 11.08, 106.9
    { 581702, Bucket(1818) }, // -32.12, 115.7 x -31.7, 116.1
    { 584239, 2758 }, // -35.05, 138.3 x -34.64, 138.8
    { 584250, 2758 }, // -34.64, 138.3 x -34.22, 138.8
    { 587235, Bucket(1822) }, // 14.44, 120.7 x 14.86, 121.2
    { 590049, 1624 }, // 21.15, 39.78 x 21.57, 40.2
    { 590753, Bucket(1826) }, // 24.5, 46.49 x 24.92, 46.91
    { 591755, 1542 }, // 37.93, 46.07 x 38.35, 46.49
    { 592345, 1568 }, // 29.54, 52.36 x 29.96, 52.78
    { 593005, 2876 }, // 35.41, 50.69 x 35.83, 51.11
    { 593007, Bucket(1829) }, // 35.41, 51.11 x 35.83, 51.53
    { 593016, 2876 }, // 35.83, 50.69 x 36.25, 51.11
    { 593040, 1569 }, // 32.47, 51.53 x 32.89, 51.95
    { 593988, 1620 }, // 48.41, 34.75 x 48.83, 35.17
    { 594011, Bucket(1832) }, // 49.67, 36.01 x 50.09, 36.43
    { 594279, 2332 }, // 55.54, 36.85 x 55.96, 37.26
    { 594285, Bucket(1835) }, // 55.54, 37.26 x 55.96, 37.68
    { 594286, 2331 }, // 55.12, 37.68 x 55.54, 38.1
    { 594287, Bucket(1851) }, // 55.54, 37.68 x 55.96, 38.1
    { 596245, Bucket(1859) }, // 53.86, 48.17 x 54.28, 48.59
    { 596288, Bucket(1859) }, // 54.28, 48.17 x 54.7, 48.59
    { 596301, 1601 }, // 55.54, 49.01 x 55.96, 49.43
    { 596429, Bucket(1864) }, // 55.54, 52.36 x 55.96, 52.78
    { 598745, Bucket(1869) }, // 22.83, 72.5 x 23.25, 72.92
    { 599721, 2563 }, // 31.22, 74.17 x 31.63, 74.59
    { 600420, 1743 }, // 28.28, 76.69 x 28.7, 77.11
    { 600422, 1884 }, // 28.28, 77.11 x 28.7, 77.53
    { 600497, 2735 }, // 26.18, 80.05 x 26.6, 80.47
    { 600502, 1931 }, // 26.6, 80.47 x 27.02, 80.89
    { 600508, 1931 }, // 26.6, 80.89 x 27.02, 81.31
    { 600826, 1880 }, // 22.41, 88.02 x 22.83, 88.44
    { 601457, 1625 }, // 42.96, 76.69 x 43.38, 77.11
    { 624890, 2578 }, // 22.41, 108.1 x 22.83, 108.6
    { 624908, 779 }, // 24.92, 102.7 x 25.34, 103.1
    { 625015, Bucket(1872) }, // 30.38, 104 x 30.8, 104.4
    { 625051, 1629 }, // 26.18, 106.5 x 26.6, 106.9
    { 625054, 1629 }, // 26.6, 106.5 x 27.02, 106.9
    { 625112, 2792 }, // 29.12, 106.1 x 29.54, 106.5
    { 625115, 2154 }, // 29.54, 106.5 x 29.96, 106.9
    { 625371, Bucket(1878) }, // 22.83, 113.2 x 23.25, 113.6
    { 625383, Bucket(1883) }, // 21.99, 114 x 22.41, 114.4
    { 625392, 2837 }, // 22.41, 113.6 x 22.83, 114
    { 625393, Bucket(1887) }, // 22.83, 113.6 x 23.25, 114
    { 625394, Bucket(1890) }, // 22.41, 114 x 22.83, 114.4
    { 625609, Bucket(1897) }, // 27.86, 112.8 x 28.28, 113.2
    { 625655, Bucket(1901) }, // 30.38, 114 x 30.8, 114.4
    { 625776, Bucket(1908) }, // 35.83, 103.5 x 36.25, 104
    { 626240, 1704 }, // 34.15, 108.6 x 34.57, 109
    { 626242, 2671 }, // 34.15, 109 x 34.57, 109.4
    { 626338, 2159 }, // 30.8, 114 x 31.22, 114.4
    { 626379, Bucket(1911) }, // 34.57, 113.2 x 34.99, 113.6
    { 626401, Bucket(1916) }, // 34.57, 113.6 x 34.99, 114
    { 626495, Bucket(1922) }, // 40.44, 111.5 x 40.86, 111.9
    { 626538, 2548 }, // 40.86, 111.5 x 41.28, 111.9
    { 626562, 2782 }, // 37.51, 112.3 x 37.93, 112.8
    { 631002, Bucket(1925) }, // 22.41, 119.9 x 22.83, 120.3
    { 631024, Bucket(1925) }, // 22.41, 120.3 x 22.83, 120.7
    { 631110, Bucket(1928) }, // 28.28, 115.7 x 28.7, 116.1
    { 631144, 2834 }, // 27.44, 117.8 x 27.86, 118.2
    { 631186, Bucket(1931) }, // 25.76, 119.1 x 26.18, 119.5
    { 631212, 1438 }, // 24.92, 121.2 x 25.34, 121.6
    { 631262, Bucket(1934) }, // 29.96, 119.9 x 30.38, 120.3
    { 631276, 2850 }, // 28.28, 121.2 x 28.7, 121.6
    { 631281, 2665 }, // 29.54, 120.3 x 29.96, 120.7
    { 631284, Bucket(1939) }, // 29.96, 120.3 x 30.38, 120.7
    { 631293, 1850 }, // 30.38, 121.2 x 30.8, 121.6
    { 631844, Bucket(1942) }, // 31.63, 117 x 32.05, 117.4
    { 631904, Bucket(1946) }, // 34.15, 117 x 34.57, 117.4
    { 631940, 1757 }, // 31.63, 118.6 x 32.05, 119.1
    { 631941, Bucket(1949) }, // 32.05, 118.6 x 32.47, 119.1
    { 631971, 1964 }, // 31.22, 120.7 x 31.63, 121.2
    { 631974, 2830 }, // 31.63, 120.7 x 32.05, 121.2
    { 631975, 2830 }, // 32.05, 120.7 x 32.47, 121.2
    { 631976, Bucket(1953) }, // 30.8, 121.2 x 31.22, 121.6
    { 632048, 2848 }, // 35.83, 120.3 x 36.25, 120.7
    { 632089, Bucket(1956) }, // 39.6, 116.1 x 40.02, 116.5
    { 632092, 291 }, // 40.02, 116.1 x 40.44, 116.5
    { 632101, Bucket(1963) }, // 38.77, 117 x 39.18, 117.4
    { 632112, Bucket(1965) }, // 39.18, 117 x 39.6, 117.4
    { 632239, Bucket(1969) }, // 38.77, 121.6 x 39.18, 122
    { 632250, 2741 }, // 39.18, 121.6 x 39.6, 122
    { 632526, 2726 }, // 34.99, 126.6 x 35.41, 127
    { 632543, 1589 }, // 37.09, 126.6 x 37.51, 127
    { 632559, 1693 }, // 35.41, 128.3 x 35.83, 128.7
    { 632565, 1589 }, // 37.09, 127 x 37.51, 127.4
    { 632570, Bucket(1973) }, // 35.83, 128.3 x 36.25, 128.7
    { 632581, 1754 }, // 38.77, 122 x 39.18, 122.4
    { 632651, Bucket(1976) }, // 41.28, 123.2 x 41.7, 123.7
    { 632654, Bucket(1979) }, // 41.7, 123.2 x 42.12, 123.7
    { 633924, Bucket(1985) }, // 34.99, 128.7 x 35.41, 129.1
    { 634080, 2483 }, // 34.15, 133.7 x 34.57, 134.2
    { 634433, 2315 }, // 34.57, 135.4 x 34.99, 135.8
    { 634446, Bucket(1989) }, // 34.99, 136.7 x 35.41, 137.1
    { 634450, 2323 }, // 35.83, 135.8 x 36.25, 136.3
    { 634573, Bucket(1993) }, // 35.41, 139.6 x 35.83, 140
    { 635535, 1801 }, // 45.48, 126.6 x 45.9, 127
    { 660847, 812 }, // -38.41, 145.1 x -37.99, 145.5
    { 660856, Bucket(2004) }, // -37.99, 144.6 x -37.57, 145.1
    { 669174, 11 }, // -37.15, 174.4 x -36.73, 174.8
    { 669180, 11 }, // -37.15, 174.8 x -36.73, 175.3
    { 672260, 2317 }, // -35.47, 148.8 x -35.05, 149.3
    { 672307, 2184 }, // -34.22, 150.9 x -33.8, 151.4
    { 259050, 2105 }, // 8.986, -79.55 x 9.195, -79.34
    { 398857, Bucket(2015) }, // 37.72, -122.5 x 37.93, -122.3
    { 399485, 1781 }, // 33.94, -118.3 x 34.15, -118.1
    { 403703, Bucket(2022) }, // 20.52, -103.5 x 20.73, -103.2
    { 403874, 2541 }, // 20.73, -103.5 x 20.94, -103.2
    { 405616, 2011 }, // 33.31, -112.1 x 33.52, -111.8
    { 406645, 1333 }, // 40.65, -112.1 x 40.86, -111.8
    { 410047, Bucket(2026) }, // 49.04, -123.2 x 49.25, -123
    { 410090, Bucket(2026) }, // 49.25, -123.2 x 49.46, -123
    { 410134, 162 }, // 45.48, -122.7 x 45.69, -122.5
    { 410389, Bucket(2026) }, // 49.04, -123 x 49.25, -122.7
    { 410432, Bucket(2026) }, // 49.25, -123 x 49.46, -122.7
    { 426051, Bucket(2029) }, // 19.26, -99.26 x 19.47, -99.05
    { 426054, 1792 }, // 19.47, -99.26 x 19.68, -99.05
    { 430305, 809 }, // 32.68, -96.95 x 32.89, -96.74
    { 433978, Bucket(2034) }, // 41.7, -87.94 x 41.91, -87.73
    { 434064, Bucket(2034) }, // 41.7, -87.73 x 41.91, -87.52
    { 435871, Bucket(2037) }, // 25.55, -80.39 x 25.76, -80.18
    { 435914, Bucket(2037) }, // 25.76, -80.39 x 25.97, -80.18
    { 438484, 1095 }, // 33.73, -84.37 x 33.94, -84.16
    { 440280, 2515 }, // 43.38, -80.59 x 43.59, -80.39
    { 440315, Bucket(2040) }, // 43.59, -79.55 x 43.8, -79.34
    { 441681, 1738 }, // 43.59, -79.34 x 43.8, -79.13
    { 441935, Bucket(2043) }, // 39.81, -75.35 x 40.02, -75.14
    { 441957, 1806 }, // 39.81, -75.14 x 40.02, -74.93
    { 442069, 2238 }, // 40.65, -74.3 x 40.86, -74.09
    { 442071, Bucket(2050) }, // 40.65, -74.09 x 40.86, -73.88
    { 442242, Bucket(2056) }, // 40.86, -74.09 x 41.07, -73.88
    { 443047, 661 }, // 44.85, -93.39 x 45.06, -93.18
    { 453139, 2286 }, // 45.27, -75.77 x 45.48, -75.56
    { 590035, Bucket(2059) }, // -33.59, -70.74 x -33.38, -70.53
    { 592277, 244 }, // -31.49, -64.24 x -31.28, -64.03
    { 592320, 244 }, // -31.28, -64.24 x -31.07, -64.03
    { 594924, 2797 }, // -17.44, -66.33 x -17.23, -66.12
    { 598090, Bucket(2064) }, // -34.64, -58.57 x -34.43, -58.37
    { 602074, Bucket(2067) }, // -23.73, -46.83 x -23.52, -46.62
    { 605731, 1606 }, // -15.97, -48.09 x -15.76, -47.88
    { 611292, 1899 }, // 10.24, -67.17 x 10.45, -66.96
    { 611295, 2709 }, // 10.45, -66.96 x 10.66, -66.75
    { 624095, 1374 }, // -23.1, -43.48 x -22.89, -43.27
    { 624117, 1374 }, // -23.1, -43.27 x -22.89, -43.06
    { 626849, 2265 }, // -22.68, -43.27 x -22.47, -43.06
    { 626900, 1335 }, // -19.96, -44.1 x -19.75, -43.89
    { 629853, 1407 }, // -13.03, -38.65 x -12.82, -38.44
    { 630271, 2647 }, // -9.679, -35.93 x -9.469, -35.72
    { 639724, 2411 }, // -7.372, -39.49 x -7.162, -39.28
    { 641357, 2271 }, // -3.807, -38.65 x -3.597, -38.44
    { 641566, Bucket(2070) }, // -8.211, -35.09 x -8.001, -34.88
    { 641615, 2413 }, // -7.162, -35.09 x -6.953, -34.88
    { 641637, 2413 }, // -7.162, -34.88 x -6.953, -34.67
    { 742703, 2742 }, // 14.65, -17.47 x 14.86, -17.26
    { 742789, 2742 }, // 14.65, -17.26 x 14.86, -17.05
    { 752610, 2106 }, // 8.986, 7.276 x 9.195, 7.485
    { 786609, 1608 }, // 18.42, -70.11 x 18.63, -69.9
    { 791871, 1056 }, // 42.33, -71.16 x 42.54, -70.95
    { 918960, 90 }, // 28.28, -16.42 x 28.49, -16.21
    { 924375, 1224 }, // 33.94, -6.985 x 34.15, -6.775
    { 924857, Bucket(2075) }, // 38.56, -9.292 x 38.77, -9.082
    { 925443, Bucket(2082) }, // 41.07, -8.663 x 41.28, -8.453
    { 930760, 2875 }, // 35.83, -0.06436 x 36.04, 0.1454
    { 930939, Bucket(2086) }, // 40.23, -4.049 x 40.44, -3.839
    { 931025, Bucket(2089) }, // 40.23, -3.839 x 40.44, -3.63
    { 931028, 1686 }, // 40.44, -3.839 x 40.65, -3.63
    { 931279, Bucket(2094) }, // 43.17, -3.21 x 43.38, -3
    { 931299, Bucket(2098) }, // 42.75, -2.791 x 42.96, -2.581
    { 931301, Bucket(2101) }, // 43.17, -3 x 43.38, -2.791
    { 931364, 2645 }, // 37.93, -1.323 x 38.14, -1.113
    { 931435, 1254 }, // 39.39, -0.6935 x 39.6, -0.4838
    { 931521, Bucket(2106) }, // 39.39, -0.4838 x 39.6, -0.2741
    { 932306, Bucket(2112) }, // 36.67, 3.081 x 36.88, 3.291
    { 932379, 2688 }, // 31.84, 5.179 x 32.05, 5.388
    { 933134, Bucket(2115) }, // 41.28, 1.823 x 41.49, 2.033
    { 933156, Bucket(2118) }, // 41.28, 2.033 x 41.49, 2.243
    { 933711, 208 }, // 43.17, 5.179 x 43.38, 5.388
    { 933733, 208 }, // 43.17, 5.388 x 43.38, 5.598
    { 933873, 2319 }, // 43.59, 7.066 x 43.8, 7.276
    { 942684, 597 }, // 47.15, -1.742 x 47.36, -1.532
    { 942719, 935 }, // 47.36, -0.6935 x 47.57, -0.4838
    { 942860, Bucket(2132) }, // 47.99, -1.742 x 48.2, -1.532
    { 943082, 745 }, // 49.25, 0.9842 x 49.46, 1.194
    { 943343, Bucket(2138) }, // 53.24, -2.371 x 53.45, -2.162
    { 943354, Bucket(2135) }, // 53.45, -2.371 x 53.65, -2.162
    { 943415, 1619 }, // 55.75, -4.468 x 55.96, -4.259
    { 943421, 1619 }, // 55.75, -4.259 x 55.96, -4.049
    { 943695, Bucket(2141) }, // 53.24, -1.532 x 53.45, -1.323
    { 943713, 558 }, // 52.82, -1.323 x 53.03, -1.113
    { 943750, 1549 }, // 51.35, -0.2741 x 51.56, -0.06436
    { 943756, Bucket(2146) }, // 51.35, -0.06436 x 51.56, 0.1454
    { 943757, 188 }, // 51.56, -0.06436 x 51.77, 0.1454
    { 943759, 2221 }, // 51.56, 0.1454 x 51.77, 0.3551
    { 944279, 2081 }, // 45.69, 3.081 x 45.9, 3.291
    { 944395, Bucket(2149) }, // 47.78, 1.823 x 47.99, 2.033
    { 944435, Bucket(2152) }, // 48.62, 2.243 x 48.83, 2.452
    { 944438, Bucket(2155) }, // 48.83, 2.243 x 49.04, 2.452
    { 944444, Bucket(2166) }, // 48.83, 2.452 x 49.04, 2.662
    { 944603, 2029 }, // 50.3, 3.501 x 50.51, 3.711
    { 944635, Bucket(2169) }, // 50.3, 4.34 x 50.51, 4.549
    { 944639, Bucket(2172) }, // 50.72, 4.34 x 50.93, 4.549
    { 944663, Bucket(2178) }, // 45.69, 4.759 x 45.9, 4.969
    { 944690, Bucket(2185) }, // 45.06, 5.598 x 45.27, 5.808
    { 944732, 515 }, // 47.15, 4.969 x 47.36, 5.179
    { 944747, Bucket(2190) }, // 46.11, 6.017 x 46.31, 6.227
    { 944750, 285 }, // 46.31, 6.017 x 46.52, 6.227
    { 944836, 285 }, // 46.31, 6.227 x 46.52, 6.437
    { 944891, 185 }, // 46.94, 7.695 x 47.15, 7.905
    { 944893, Bucket(2194) }, // 47.36, 7.485 x 47.57, 7.695
    { 944894, Bucket(2208) }, // 47.15, 7.695 x 47.36, 7.905
    { 944895, Bucket(2211) }, // 47.36, 7.695 x 47.57, 7.905
    { 945003, 1635 }, // 49.46, 6.017 x 49.67, 6.227
    { 945064, Bucket(2214) }, // 47.57, 7.485 x 47.78, 7.695
    { 945067, Bucket(2222) }, // 47.78, 7.695 x 47.99, 7.905
    { 945070, Bucket(2222) }, // 47.99, 7.695 x 48.2, 7.905
    { 945119, Bucket(2225) }, // 50.72, 6.856 x 50.93, 7.066
    { 945290, Bucket(2229) }, // 50.93, 3.501 x 51.14, 3.711
    { 945312, Bucket(2229) }, // 50.93, 3.711 x 51.14, 3.92
    { 945323, Bucket(2233) }, // 51.14, 4.34 x 51.35, 4.549
    { 945337, Bucket(2245) }, // 51.98, 4.13 x 52.19, 4.34
    { 945338, Bucket(2252) }, // 51.77, 4.34 x 51.98, 4.549
    { 945339, Bucket(2259) }, // 51.98, 4.34 x 52.19, 4.549
    { 945680, 1309 }, // 51.77, 4.549 x 51.98, 4.759
    { 945686, Bucket(2263) }, // 52.19, 4.759 x 52.4, 4.969
    { 945801, Bucket(2272) }, // 51.14, 6.647 x 51.35, 6.856
    { 945802, Bucket(2277) }, // 50.93, 6.856 x 51.14, 7.066
    { 945806, Bucket(2282) }, // 51.35, 6.856 x 51.56, 7.066
    { 945828, Bucket(2286) }, // 51.35, 7.066 x 51.56, 7.276
    { 945830, Bucket(2290) }, // 51.35, 7.276 x 51.56, 7.485
    { 954840, Bucket(2293) }, // 36.67, 10 x 36.88, 10.21
    { 956157, Bucket(2296) }, // 40.65, 14.2 x 40.86, 14.41
    { 956328, Bucket(2299) }, // 40.86, 14.2 x 41.07, 14.41
    { 957833, 902 }, // 41.07, 16.71 x 41.28, 16.92
    { 962042, Bucket(2302) }, // 29.96, 31.18 x 30.17, 31.39
    { 962384, 1557 }, // 29.96, 31.39 x 30.17, 31.6
    { 963591, Bucket(2305) }, // 38.14, 21.54 x 38.35, 21.75
    { 963597, 2552 }, // 38.14, 21.75 x 38.35, 21.96
    { 963726, 1811 }, // 37.93, 23.63 x 38.14, 23.84
    { 964034, Bucket(2308) }, // 42.54, 23.21 x 42.75, 23.42
    { 964250, Bucket(2313) }, // 38.35, 26.99 x 38.56, 27.2
    { 964272, 1824 }, // 38.35, 27.2 x 38.56, 27.41
    { 965105, 2565 }, // 36.88, 30.55 x 37.09, 30.76
    { 965920, 869 }, // 40.86, 28.88 x 41.07, 29.09
    { 966253, Bucket(2317) }, // 39.81, 32.65 x 40.02, 32.86
    { 966713, 2835 }, // 45.27, 9.163 x 45.48, 9.373
    { 966737, 185 }, // 46.94, 7.905 x 47.15, 8.115
    { 966739, 2453 }, // 46.94, 8.115 x 47.15, 8.324
    { 966740, Bucket(2208) }, // 47.15, 7.905 x 47.36, 8.115
    { 966741, 2313 }, // 47.36, 7.905 x 47.57, 8.115
    { 966742, 451 }, // 47.15, 8.115 x 47.36, 8.324
    { 966743, 452 }, // 47.36, 8.115 x 47.57, 8.324
    { 966745, Bucket(2320) }, // 46.94, 8.324 x 47.15, 8.534
    { 966748, Bucket(2320) }, // 47.15, 8.324 x 47.36, 8.534
    { 966749, Bucket(2323) }, // 47.36, 8.324 x 47.57, 8.534
    { 966750, 1953 }, // 47.15, 8.534 x 47.36, 8.744
    { 966751, Bucket(2326) }, // 47.36, 8.534 x 47.57, 8.744
    { 966752, 2804 }, // 45.9, 8.744 x 46.11, 8.953
    { 966767, 2907 }, // 46.52, 9.373 x 46.73, 9.583
    { 966772, Bucket(2332) }, // 47.15, 8.744 x 47.36, 8.953
    { 966773, Bucket(2337) }, // 47.36, 8.744 x 47.57, 8.953
    { 966775, Bucket(2342) }, // 47.36, 8.953 x 47.57, 9.163
    { 966778, 2907 }, // 46.73, 9.373 x 46.94, 9.583
    { 966783, 2757 }, // 47.36, 9.373 x 47.57, 9.583
    { 966864, 2908 }, // 46.73, 9.583 x 46.94, 9.792
    { 966865, 953 }, // 46.94, 9.583 x 47.15, 9.792
    { 966867, 2488 }, // 46.94, 9.792 x 47.15, 10
    { 966868, 953 }, // 47.15, 9.583 x 47.36, 9.792
    { 966869, Bucket(2345) }, // 47.36, 9.583 x 47.57, 9.792
    { 966870, 2488 }, // 47.15, 9.792 x 47.36, 10
    { 966922, Bucket(2349) }, // 47.57, 8.534 x 47.78, 8.744
    { 966940, Bucket(2352) }, // 48.83, 8.324 x 49.04, 8.534
    { 966941, 1085 }, // 49.04, 8.324 x 49.25, 8.534
    { 966942, 1085 }, // 48.83, 8.534 x 49.04, 8.744
    { 966944, 1958 }, // 47.57, 8.744 x 47.78, 8.953
    { 966964, 649 }, // 48.83, 8.744 x 49.04, 8.953
    { 966965, Bucket(2358) }, // 49.04, 8.744 x 49.25, 8.953
    { 966966, 156 }, // 48.83, 8.953 x 49.04, 9.163
    { 966967, Bucket(2358) }, // 49.04, 8.953 x 49.25, 9.163
    { 966972, 156 }, // 48.83, 9.163 x 49.04, 9.373
    { 966973, 649 }, // 49.04, 9.163 x 49.25, 9.373
    { 966975, 649 }, // 49.04, 9.373 x 49.25, 9.583
    { 966983, Bucket(2361) }, // 49.88, 8.115 x 50.09, 8.324
    { 966985, 2822 }, // 49.46, 8.324 x 49.67, 8.534
    { 966986, Bucket(2364) }, // 49.25, 8.534 x 49.46, 8.744
    { 966988, 414 }, // 49.67, 8.324 x 49.88, 8.534
    { 966989, 964 }, // 49.88, 8.324 x 50.09, 8.534
    { 966991, Bucket(2368) }, // 49.88, 8.534 x 50.09, 8.744
    { 967002, Bucket(2373) }, // 50.09, 8.534 x 50.3, 8.744
    { 967013, Bucket(2361) }, // 49.88, 8.744 x 50.09, 8.953
    { 967024, Bucket(2361) }, // 50.09, 8.744 x 50.3, 8.953
    { 967071, 607 }, // 49.04, 10.21 x 49.25, 10.42
    { 967082, 2554 }, // 47.57, 11.05 x 47.78, 11.26
    { 967085, Bucket(2386) }, // 48.2, 10.84 x 48.41, 11.05
    { 967146, Bucket(2389) }, // 49.25, 11.05 x 49.46, 11.26
    { 967252, Bucket(2392) }, // 47.15, 11.26 x 47.36, 11.47
    { 967405, 933 }, // 46.52, 14.2 x 46.73, 14.41
    { 967430, Bucket(2398) }, // 47.99, 11.47 x 48.2, 11.68
    { 967467, 1903 }, // 47.78, 12.73 x 47.99, 12.94
    { 967488, Bucket(2414) }, // 49.25, 11.26 x 49.46, 11.47
    { 967551, 1464 }, // 50.72, 12.73 x 50.93, 12.94
    { 967553, 1903 }, // 47.78, 12.94 x 47.99, 13.15
    { 967597, Bucket(2417) }, // 48.2, 14.2 x 48.41, 14.41
    { 967628, Bucket(2424) }, // 49.67, 13.36 x 49.88, 13.57
    { 967637, 1464 }, // 50.72, 12.94 x 50.93, 13.15
    { 967663, 2892 }, // 49.88, 14.41 x 50.09, 14.62
    { 967674, 2892 }, // 50.09, 14.41 x 50.3, 14.62
    { 967723, Bucket(2427) }, // 51.14, 9.373 x 51.35, 9.583
    { 967726, 1054 }, // 51.35, 9.373 x 51.56, 9.583
    { 967742, 1091 }, // 52.19, 9.373 x 52.4, 9.583
    { 967780, Bucket(2430) }, // 53.03, 8.744 x 53.24, 8.953
    { 967828, Bucket(2438) }, // 52.19, 9.583 x 52.4, 9.792
    { 967860, Bucket(2441) }, // 52.19, 10.42 x 52.4, 10.63
    { 967872, 792 }, // 52.61, 9.583 x 52.82, 9.792
    { 967890, 848 }, // 53.45, 9.792 x 53.65, 10
    { 967891, 1176 }, // 53.65, 9.792 x 53.86, 10
    { 967896, 848 }, // 53.45, 10 x 53.65, 10.21
    { 968206, Bucket(2448) }, // 51.35, 11.89 x 51.56, 12.1
    { 968211, Bucket(2458) }, // 51.98, 11.47 x 52.19, 11.68
    { 968227, Bucket(2462) }, // 51.14, 12.31 x 51.35, 12.52
    { 968230, Bucket(2462) }, // 51.35, 12.31 x 51.56, 12.52
    { 968240, 142 }, // 51.77, 12.1 x 51.98, 12.31
    { 968320, 1464 }, // 50.93, 12.94 x 51.14, 13.15
    { 968321, 810 }, // 51.14, 12.94 x 51.35, 13.15
    { 968322, 1340 }, // 50.93, 13.15 x 51.14, 13.36
    { 968324, 810 }, // 51.35, 12.94 x 51.56, 13.15
    { 968330, Bucket(2466) }, // 50.93, 13.57 x 51.14, 13.78
    { 968349, Bucket(2477) }, // 52.4, 13.36 x 52.61, 13.57
    { 968351, 34 }, // 52.4, 13.57 x 52.61, 13.78
    { 968352, Bucket(2486) }, // 50.93, 13.78 x 51.14, 13.99
    { 968382, 1895 }, // 52.19, 14.41 x 52.4, 14.62
    { 968431, Bucket(2494) }, // 53.24, 14.41 x 53.45, 14.62
    { 968442, Bucket(2502) }, // 53.45, 14.41 x 53.65, 14.62
    { 968795, Bucket(2508) }, // 46.94, 15.24 x 47.15, 15.45
    { 968817, 329 }, // 46.94, 15.45 x 47.15, 15.66
    { 969006, 79 }, // 47.99, 16.08 x 48.2, 16.29
    { 969007, 2773 }, // 48.2, 16.08 x 48.41, 16.29
    { 969092, 79 }, // 47.99, 16.29 x 48.2, 16.5
    { 969093, 2773 }, // 48.2, 16.29 x 48.41, 16.5
    { 969111, Bucket(2511) }, // 49.04, 16.5 x 49.25, 16.71
    { 969246, Bucket(2523) }, // 45.48, 18.6 x 45.69, 18.81
    { 969335, Bucket(2526) }, // 47.36, 19.02 x 47.57, 19.23
    { 969358, Bucket(2551) }, // 44.64, 20.28 x 44.85, 20.49
    { 969659, Bucket(2556) }, // 48.62, 21.12 x 48.83, 21.33
    { 970287, 2146 }, // 51.56, 19.44 x 51.77, 19.65
    { 970298, 2146 }, // 51.77, 19.44 x 51.98, 19.65
    { 970428, 1077 }, // 52.19, 20.91 x 52.4, 21.12
    { 970982, 860 }, // 59.74, 10.63 x 59.95, 10.84
    { 971215, 2293 }, // 63.3, 10.21 x 63.51, 10.42
    { 971274, Bucket(2569) }, // 57.64, 11.89 x 57.85, 12.1
    { 972858, Bucket(2579) }, // 58.48, 16.08 x 58.69, 16.29
    { 972991, Bucket(2582) }, // 59.11, 17.76 x 59.32, 17.97
    { 973034, Bucket(2582) }, // 59.32, 17.76 x 59.53, 17.97
    { 973333, Bucket(2586) }, // 59.11, 17.97 x 59.32, 18.18
    { 973335, 797 }, // 59.11, 18.18 x 59.32, 18.39
    { 973376, Bucket(2594) }, // 59.32, 17.97 x 59.53, 18.18
    { 975401, Bucket(2603) }, // 44.43, 25.94 x 44.64, 26.15
    { 977371, Bucket(2606) }, // 50.3, 30.34 x 50.51, 30.55
    { 977850, Bucket(2609) }, // 48.41, 34.54 x 48.62, 34.75
    { 978328, Bucket(2612) }, // 55.12, 30.13 x 55.33, 30.34
    { 979520, Bucket(2615) }, // 59.32, 24.68 x 59.53, 24.89
    { 981196, Bucket(2619) }, // 59.74, 30.13 x 59.95, 30.34
    { 981197, Bucket(2622) }, // 59.95, 30.13 x 60.16, 30.34
    { 981198, Bucket(2626) }, // 59.74, 30.34 x 59.95, 30.55
    { 2226005, 1926 }, // 17.16, 78.37 x 17.37, 78.58
    { 2314234, 1836 }, // 3.114, 101.6 x 3.323, 101.9
    { 2317681, 2030 }, // 16.75, 95.99 x 16.95, 96.19
    { 2318038, 1827 }, // 13.6, 100.4 x 13.81, 100.6
    { 2318975, 2183 }, // -6.324, 106.7 x -6.114, 106.9
    { 2319751, Bucket(2637) }, // 1.226, 103.7 x 1.436, 104
    { 2326808, 2816 }, // -32.12, 115.7 x -31.91, 115.9
    { 2348942, 1835 }, // 14.44, 120.9 x 14.65, 121.2
    { 2348943, 2035 }, // 14.65, 120.9 x 14.86, 121.2
    { 2363737, 1674 }, // 36.88, 35.17 x 37.09, 35.38
    { 2363889, Bucket(2640) }, // 36.88, 37.26 x 37.09, 37.47
    { 2363892, 2871 }, // 37.09, 37.26 x 37.3, 37.47
    { 2364718, 2862 }, // 41.28, 36.22 x 41.49, 36.43
    { 2366712, 1814 }, // 40.02, 44.4 x 40.23, 44.6
    { 2368699, 2353 }, // 25.13, 51.32 x 25.34, 51.53
    { 2370578, 2656 }, // 24.92, 55.09 x 25.13, 55.3
    { 2372031, Bucket(2643) }, // 35.62, 51.32 x 35.83, 51.53
    { 2372373, 1667 }, // 35.62, 51.53 x 35.83, 51.74
    { 2372817, Bucket(2647) }, // 40.23, 49.85 x 40.44, 50.06
    { 2374508, 1262 }, // 36.25, 59.49 x 36.46, 59.7
    { 2375923, Bucket(2650) }, // 46.94, 37.47 x 47.15, 37.68
    { 2375926, Bucket(2657) }, // 47.15, 37.47 x 47.36, 37.68
    { 2376047, 499 }, // 49.88, 36.22 x 50.09, 36.43
    { 2376286, Bucket(2661) }, // 47.15, 38.73 x 47.36, 38.94
    { 2377139, Bucket(2665) }, // 55.33, 37.47 x 55.54, 37.68
    { 2377140, 2332 }, // 55.54, 37.26 x 55.75, 37.47
    { 2377141, 2332 }, // 55.75, 37.26 x 55.96, 37.47
    { 2377142, Bucket(2668) }, // 55.54, 37.47 x 55.75, 37.68
    { 2377143, Bucket(2673) }, // 55.75, 37.47 x 55.96, 37.68
    { 2378169, Bucket(2676) }, // 48.62, 44.4 x 48.83, 44.6
    { 2379211, 716 }, // 56.17, 43.77 x 56.38, 43.98
    { 2379233, 716 }, // 56.17, 43.98 x 56.38, 44.19
    { 2385716, 2695 }, // 55.54, 52.36 x 55.75, 52.57
    { 2394685, Bucket(2679) }, // 18.84, 72.92 x 19.05, 73.13
    { 2394722, Bucket(2682) }, // 19.05, 72.71 x 19.26, 72.92
    { 2394728, 2512 }, // 19.05, 72.92 x 19.26, 73.13
    { 2399524, 691 }, // 41.28, 69.14 x 41.49, 69.35
    { 2400768, Bucket(2685) }, // 17.37, 78.37 x 17.58, 78.58
    { 2401371, 1826 }, // 26.81, 75.64 x 27.02, 75.85
    { 2401683, 1890 }, // 28.49, 76.9 x 28.7, 77.11
    { 2420007, 1602 }, // 54.91, 82.77 x 55.12, 82.98
    { 2420206, Bucket(2688) }, // 56.38, 84.87 x 56.59, 85.08
    { 2490838, 2853 }, // 23.67, 90.32 x 23.88, 90.53
    { 2499337, 2576 }, // 20.94, 105.6 x 21.15, 105.8
    { 2499632, 1755 }, // 24.92, 102.7 x 25.13, 102.9
    { 2500061, 1923 }, // 30.59, 104 x 30.8, 104.2
    { 2501476, 2391 }, // 22.83, 112.8 x 23.04, 113
    { 2501484, 2764 }, // 22.83, 113.2 x 23.04, 113.4
    { 2501485, Bucket(2691) }, // 23.04, 113.2 x 23.25, 113.4
    { 2501487, Bucket(2695) }, // 23.04, 113.4 x 23.25, 113.6
    { 2501533, Bucket(2698) }, // 22.2, 114 x 22.41, 114.2
    { 2501570, 2689 }, // 22.41, 113.8 x 22.62, 114
    { 2501571, 1579 }, // 22.62, 113.8 x 22.83, 114
    { 2501576, Bucket(2701) }, // 22.41, 114 x 22.62, 114.2
    { 2502620, 2762 }, // 30.38, 114 x 30.59, 114.2
    { 2502622, 2574 }, // 30.38, 114.2 x 30.59, 114.4
    { 2502644, 2574 }, // 30.38, 114.4 x 30.59, 114.6
    { 2502792, 2394 }, // 30.8, 104 x 31.01, 104.2
    { 2505484, 2732 }, // 34.57, 112.3 x 34.78, 112.6
    { 2505518, 2811 }, // 34.57, 113.4 x 34.78, 113.6
    { 2506404, 2529 }, // 37.93, 114.4 x 38.14, 114.6
    { 2516119, Bucket(2704) }, // 52.4, 103.7 x 52.61, 104
    { 2516126, Bucket(2709) }, // 52.19, 104.2 x 52.4, 104.4
    { 2524747, 1751 }, // 25.97, 119.3 x 26.18, 119.5
    { 2524802, 1104 }, // 24.09, 120.5 x 24.29, 120.7
    { 2524850, Bucket(2714) }, // 24.92, 121.4 x 25.13, 121.6
    { 2525051, 2722 }, // 30.17, 120.1 x 30.38, 120.3
    { 2525137, Bucket(2717) }, // 30.17, 120.3 x 30.38, 120.5
    { 2527419, 1758 }, // 31.84, 118.4 x 32.05, 118.6
    { 2527618, 2668 }, // 34.15, 117.2 x 34.36, 117.4
    { 2527751, 2118 }, // 31.43, 118.8 x 31.63, 119.1
    { 2527761, 1758 }, // 31.84, 118.6 x 32.05, 118.8
    { 2527762, 2118 }, // 31.63, 118.8 x 31.84, 119.1
    { 2527791, Bucket(2720) }, // 31.43, 120.1 x 31.63, 120.3
    { 2527800, Bucket(2724) }, // 31.63, 119.9 x 31.84, 120.1
    { 2527875, 1963 }, // 31.01, 120.5 x 31.22, 120.7
    { 2527876, Bucket(2727) }, // 31.22, 120.3 x 31.43, 120.5
    { 2527877, Bucket(2730) }, // 31.43, 120.3 x 31.63, 120.5
    { 2527878, Bucket(2735) }, // 31.22, 120.5 x 31.43, 120.7
    { 2527879, 1964 }, // 31.43, 120.5 x 31.63, 120.7
    { 2527884, Bucket(2727) }, // 31.22, 120.7 x 31.43, 120.9
    { 2528107, 1733 }, // 36.04, 120.1 x 36.25, 120.3
    { 2528193, Bucket(2740) }, // 36.04, 120.3 x 36.25, 120.5
    { 2528334, 1971 }, // 39.6, 115.9 x 39.81, 116.1
    { 2528357, Bucket(2743) }, // 39.81, 116.1 x 40.02, 116.3
    { 2528359, 289 }, // 39.81, 116.3 x 40.02, 116.5
    { 2528407, Bucket(2746) }, // 38.97, 117.2 x 39.18, 117.4
    { 2528415, 1990 }, // 38.97, 117.6 x 39.18, 117.8
    { 2530173, Bucket(2749) }, // 37.3, 126.6 x 37.51, 126.8
    { 2530175, 1537 }, // 37.3, 126.8 x 37.51, 127
    { 2530260, 1524 }, // 37.09, 127 x 37.3, 127.2
    { 2530261, 1761 }, // 37.3, 127 x 37.51, 127.2
    { 2530814, 2173 }, // 43.8, 125.1 x 44.01, 125.3
    { 2530856, Bucket(2753) }, // 37.51, 126.6 x 37.72, 126.8
    { 2530858, Bucket(2757) }, // 37.51, 126.8 x 37.72, 127
    { 2530944, Bucket(2761) }, // 37.51, 127 x 37.72, 127.2
    { 2535633, 1560 }, // 33.52, 130.4 x 33.73, 130.6
    { 2535638, 2570 }, // 33.73, 130.6 x 33.94, 130.8
    { 2536030, Bucket(2765) }, // 33.73, 132.7 x 33.94, 132.9
    { 2536195, 1559 }, // 34.36, 132.3 x 34.57, 132.5
    { 2536201, 1559 }, // 34.36, 132.5 x 34.57, 132.7
    { 2536364, Bucket(2769) }, // 34.57, 135 x 34.78, 135.2
    { 2537732, Bucket(2773) }, // 34.57, 135.4 x 34.78, 135.6
    { 2537735, 1873 }, // 34.78, 135.6 x 34.99, 135.8
    { 2537746, Bucket(2781) }, // 34.99, 135.6 x 35.2, 135.8
    { 2537786, 1876 }, // 34.99, 136.9 x 35.2, 137.1
    { 2538267, 2100 }, // 35.2, 139.4 x 35.41, 139.6
    { 2538292, Bucket(2785) }, // 35.41, 139.6 x 35.62, 139.8
    { 2538293, Bucket(2788) }, // 35.62, 139.6 x 35.83, 139.8
    { 2538314, 2077 }, // 35.83, 139.4 x 36.04, 139.6
    { 2538336, 2077 }, // 35.83, 139.6 x 36.04, 139.8
    { 2539149, 1590 }, // 38.14, 140.9 x 38.35, 141.1
    { 2539492, 1841 }, // 42.96, 141.3 x 43.17, 141.5
    { 2643426, Bucket(2796) }, // -37.99, 144.8 x -37.78, 145.1
    { 2689231, Bucket(2802) }, // -34.01, 151.1 x -33.8, 151.4
    { 2690638, 2350 }, // -27.5, 152.8 x -27.3, 153
    { 2690660, 2350 }, // -27.5, 153 x -27.3, 153.2
    { 1028415, 2900 }, // -0.3468, -78.6 x -0.2419, -78.5
    { 1028458, 2900 }, // -0.2419, -78.6 x -0.137, -78.5
    { 1028501, 2900 }, // -0.3468, -78.5 x -0.2419, -78.39
    { 1028544, 2900 }, // -0.2419, -78.5 x -0.137, -78.39
    { 1042715, 856 }, // 6.154, -75.67 x 6.259, -75.56
    { 1597918, 2814 }, // 33.94, -118.4 x 34.05, -118.3
    { 1597940, 2814 }, // 33.94, -118.3 x 34.05, -118.2
    { 1620607, Bucket(2805) }, // 25.66, -100.4 x 25.76, -100.3
    { 1620693, Bucket(2805) }, // 25.66, -100.3 x 25.76, -100.2
    { 1622465, 1112 }, // 33.42, -112.1 x 33.52, -111.9
    { 1626582, 2009 }, // 40.65, -111.9 x 40.76, -111.8
    { 1634715, 2001 }, // 39.71, -105 x 39.81, -104.9
    { 1639162, 161 }, // 45.48, -123.1 x 45.58, -123
    { 1640360, 2843 }, // 49.25, -123.2 x 49.36, -123.1
    { 1640536, Bucket(2809) }, // 45.48, -122.7 x 45.58, -122.6
    { 1718167, Bucket(2813) }, // 29.85, -90.14 x 29.96, -90.03
    { 1718210, Bucket(2816) }, // 29.96, -90.14 x 30.06, -90.03
    { 1735915, 781 }, // 41.81, -87.83 x 41.91, -87.73
    { 1735916, 1962 }, // 41.91, -87.94 x 42.02, -87.83
    { 1736257, 781 }, // 41.81, -87.73 x 41.91, -87.62
    { 1736261, 744 }, // 42.02, -87.73 x 42.12, -87.62
    { 1753594, Bucket(2819) }, // 33.73, -84.47 x 33.84, -84.37
    { 1753936, 1094 }, // 33.73, -84.37 x 33.84, -84.27
    { 1756742, 2575 }, // 35.2, -80.91 x 35.3, -80.8
    { 1758961, 2614 }, // 42.23, -83.11 x 42.33, -83.01
    { 1758964, 2614 }, // 42.33, -83.11 x 42.44, -83.01
    { 1761263, 186 }, // 43.69, -79.44 x 43.8, -79.34
    { 1766103, 2275 }, // 39.08, -76.72 x 39.18, -76.61
    { 1766693, 2503 }, // 42.85, -78.92 x 42.96, -78.81
    { 1766725, 187 }, // 43.69, -79.34 x 43.8, -79.23
    { 1767743, Bucket(2822) }, // 39.92, -75.25 x 40.02, -75.14
    { 1767786, Bucket(2830) }, // 40.02, -75.25 x 40.13, -75.14
    { 1767829, Bucket(2834) }, // 39.92, -75.14 x 40.02, -75.04
    { 1767872, 397 }, // 40.02, -75.14 x 40.13, -75.04
    { 1768305, 1747 }, // 40.55, -73.88 x 40.65, -73.78
    { 1813112, 919 }, // 45.48, -73.67 x 45.58, -73.57
    { 2372011, 2703 }, // -27.82, -64.34 x -27.71, -64.24
    { 2392191, Bucket(2837) }, // -34.74, -58.47 x -34.64, -58.37
    { 2392362, Bucket(2840) }, // -34.64, -58.47 x -34.53, -58.37
    { 2408299, 1011 }, // -23.63, -46.73 x -23.52, -46.62
    { 2408345, 1466 }, // -24.04, -46.41 x -23.94, -46.31
    { 2408385, 1011 }, // -23.63, -46.62 x -23.52, -46.52
    { 2442711, 1609 }, // 10.56, -71.68 x 10.66, -71.58
    { 2444773, 1610 }, // 10.14, -68.01 x 10.24, -67.91
    { 2496469, Bucket(2843) }, // -23, -43.27 x -22.89, -43.16
    { 2507278, 2269 }, // -22.68, -43.79 x -22.58, -43.69
    { 2507300, 2269 }, // -22.68, -43.69 x -22.58, -43.58
    { 2557665, 2412 }, // -5.17, -42.85 x -5.065, -42.74
    { 3007285, 2897 }, // 6.364, 3.291 x 6.469, 3.396
    { 3007328, 2897 }, // 6.469, 3.291 x 6.574, 3.396
    { 3167481, 2500 }, // 42.23, -71.16 x 42.33, -71.05
    { 3167484, 2502 }, // 42.33, -71.16 x 42.44, -71.05
    { 3698582, 2516 }, // 36.46, -6.251 x 36.56, -6.146
    { 3699431, Bucket(2846) }, // 38.66, -9.187 x 38.77, -9.082
    { 3699442, 1615 }, // 38.77, -9.187 x 38.87, -9.082
    { 3723759, 1697 }, // 40.34, -3.944 x 40.44, -3.839
    { 3723780, 1817 }, // 37.72, -3.839 x 37.82, -3.734
    { 3724101, Bucket(2852) }, // 40.34, -3.839 x 40.44, -3.734
    { 3724103, Bucket(2855) }, // 40.34, -3.734 x 40.44, -3.63
    { 3724112, 1696 }, // 40.44, -3.839 x 40.55, -3.734
    { 3724114, Bucket(2858) }, // 40.44, -3.734 x 40.55, -3.63
    { 3725204, 2014 }, // 43.17, -3 x 43.27, -2.896
    { 3725248, 1452 }, // 43.38, -3 x 43.48, -2.896
    { 3725458, 1778 }, // 37.93, -1.218 x 38.03, -1.113
    { 3725546, 224 }, // 38.35, -0.5886 x 38.45, -0.4838
    { 3725845, 2687 }, // 38.24, -0.4838 x 38.35, -0.3789
    { 3725888, Bucket(2861) }, // 38.35, -0.4838 x 38.45, -0.3789
    { 3726086, Bucket(2865) }, // 39.39, -0.3789 x 39.5, -0.2741
    { 3726495, 356 }, // 41.6, -1.008 x 41.7, -0.9032
    { 3726517, 356 }, // 41.6, -0.9032 x 41.7, -0.7984
    { 3727022, 1295 }, // 41.07, 1.089 x 41.18, 1.194
    { 3732484, 1295 }, // 41.07, 1.194 x 41.18, 1.299
    { 3732624, 1315 }, // 41.28, 2.033 x 41.39, 2.138
    { 3732627, Bucket(2868) }, // 41.39, 2.138 x 41.49, 2.243
    { 3734847, 207 }, // 43.27, 5.283 x 43.38, 5.388
    { 3734873, 2308 }, // 43.9, 4.759 x 44.01, 4.864
    { 3734933, Bucket(2874) }, // 43.27, 5.388 x 43.38, 5.493
    { 3770738, 598 }, // 47.15, -1.637 x 47.26, -1.532
    { 3771949, Bucket(2877) }, // 47.89, 0.1454 x 47.99, 0.2502
    { 3771960, Bucket(2877) }, // 47.99, 0.1454 x 48.1, 0.2502
    { 3771991, Bucket(2880) }, // 49.15, -0.3789 x 49.25, -0.2741
    { 3772198, 1000 }, // 49.46, 0.0405 x 49.57, 0.1454
    { 3773416, 2475 }, // 53.45, -2.371 x 53.55, -2.266
    { 3773663, 1370 }, // 55.86, -4.364 x 55.96, -4.259
    { 3774784, Bucket(2883) }, // 53.45, -2.162 x 53.55, -2.057
    { 3775003, Bucket(2886) }, // 51.45, -0.1692 x 51.56, -0.06436
    { 3775025, Bucket(2889) }, // 51.45, -0.06436 x 51.56, 0.0405
    { 3777261, Bucket(2892) }, // 45.37, 4.34 x 45.48, 4.445
    { 3777272, 304 }, // 45.48, 4.34 x 45.58, 4.445
    { 3777741, 2783 }, // 48.73, 2.243 x 48.83, 2.347
    { 3777743, 2642 }, // 48.73, 2.347 x 48.83, 2.452
    { 3777754, Bucket(2896) }, // 48.83, 2.347 x 48.94, 2.452
    { 3778551, 1991 }, // 50.82, 4.235 x 50.93, 4.34
    { 3778557, 1831 }, // 50.82, 4.34 x 50.93, 4.445
    { 3778652, 1018 }, // 45.69, 4.759 x 45.79, 4.864
    { 3778654, 758 }, // 45.69, 4.864 x 45.79, 4.969
    { 3778763, 1044 }, // 45.16, 5.703 x 45.27, 5.808
    { 3778990, Bucket(2899) }, // 46.11, 6.122 x 46.21, 6.227
    { 3779255, 2091 }, // 44.95, 7.59 x 45.06, 7.695
    { 3779298, 2091 }, // 45.06, 7.59 x 45.16, 7.695
    { 3779531, Bucket(2902) }, // 46.84, 7.381 x 46.94, 7.485
    { 3779534, Bucket(2902) }, // 46.94, 7.381 x 47.05, 7.485
    { 3779553, 1051 }, // 46.84, 7.485 x 46.94, 7.59
    { 3779556, 1051 }, // 46.94, 7.485 x 47.05, 7.59
    { 3779571, 2869 }, // 47.26, 7.59 x 47.36, 7.695
    { 3779575, 2517 }, // 47.47, 7.59 x 47.57, 7.695
    { 3779577, 2869 }, // 47.26, 7.695 x 47.36, 7.8
    { 3779822, 578 }, // 48.62, 6.122 x 48.73, 6.227
    { 3780233, Bucket(2905) }, // 47.68, 7.276 x 47.78, 7.381
    { 3780271, Bucket(2908) }, // 47.89, 7.8 x 47.99, 7.905
    { 3780282, Bucket(2911) }, // 47.99, 7.8 x 48.1, 7.905
    { 3780329, Bucket(2915) }, // 48.52, 7.695 x 48.62, 7.8
    { 3780564, 92 }, // 50.72, 7.066 x 50.82, 7.171
    { 3781350, 1350 }, // 51.98, 4.235 x 52.08, 4.34
    { 3781355, Bucket(2919) }, // 51.87, 4.445 x 51.98, 4.549
    { 3782721, Bucket(2924) }, // 51.87, 4.549 x 51.98, 4.654
    { 3782747, Bucket(2928) }, // 52.29, 4.864 x 52.4, 4.969
    { 3783208, Bucket(2934) }, // 50.93, 6.856 x 51.03, 6.961
    { 3783323, Bucket(2937) }, // 51.45, 7.381 x 51.56, 7.485
    { 3819363, Bucket(2942) }, // 36.77, 10.11 x 36.88, 10.21
    { 3821962, 1223 }, // 39.18, 9.058 x 39.29, 9.163
    { 3823599, Bucket(2946) }, // 43.69, 11.16 x 43.8, 11.26
    { 3823610, Bucket(2946) }, // 43.8, 11.16 x 43.9, 11.26
    { 3824155, Bucket(2949) }, // 38.03, 13.25 x 38.14, 13.36
    { 3824177, 1284 }, // 38.03, 13.36 x 38.14, 13.46
    { 3824629, Bucket(2952) }, // 40.76, 14.2 x 40.86, 14.3
    { 3824843, 612 }, // 41.81, 12.41 x 41.91, 12.52
    { 3824846, 610 }, // 41.91, 12.41 x 42.02, 12.52
    { 3824865, 616 }, // 41.81, 12.52 x 41.91, 12.62
    { 3825312, 2624 }, // 40.86, 14.2 x 40.97, 14.3
    { 3829792, 1554 }, // 37.51, 15.04 x 37.61, 15.14
    { 3830101, 601 }, // 40.76, 14.62 x 40.86, 14.72
    { 3830784, 600 }, // 40.86, 14.62 x 40.97, 14.72
    { 3854843, Bucket(2955) }, // 40.55, 22.9 x 40.65, 23
    { 3860419, 2566 }, // 36.77, 30.66 x 36.88, 30.76
    { 3860422, 2566 }, // 36.88, 30.66 x 36.98, 30.76
    { 3863355, Bucket(2958) }, // 39.71, 30.45 x 39.81, 30.55
    { 3863441, Bucket(2962) }, // 39.71, 30.55 x 39.81, 30.66
    { 3863595, Bucket(2965) }, // 40.97, 28.77 x 41.07, 28.88
    { 3863681, 1583 }, // 40.97, 28.88 x 41.07, 28.98
    { 3863686, 1584 }, // 41.07, 28.98 x 41.18, 29.09
    { 3863691, 2878 }, // 40.97, 29.19 x 41.07, 29.3
    { 3866968, 184 }, // 47.15, 8.115 x 47.26, 8.219
    { 3866971, 452 }, // 47.26, 8.219 x 47.36, 8.324
    { 3866975, 1940 }, // 47.47, 8.219 x 47.57, 8.324
    { 3866993, 2224 }, // 47.26, 8.324 x 47.36, 8.429
    { 3866994, 1953 }, // 47.15, 8.429 x 47.26, 8.534
    { 3866995, 1953 }, // 47.26, 8.429 x 47.36, 8.534
    { 3866996, 2224 }, // 47.36, 8.324 x 47.47, 8.429
    { 3867003, 1950 }, // 47.26, 8.639 x 47.36, 8.744
    { 3867004, Bucket(2968) }, // 47.36, 8.534 x 47.47, 8.639
    { 3867007, Bucket(2971) }, // 47.47, 8.639 x 47.57, 8.744
    { 3867089, 1404 }, // 47.26, 8.744 x 47.36, 8.849
    { 3867092, Bucket(2974) }, // 47.36, 8.744 x 47.47, 8.849
    { 3867093, 1942 }, // 47.47, 8.744 x 47.57, 8.849
    { 3867096, 2452 }, // 47.15, 8.953 x 47.26, 9.058
    { 3867097, 2452 }, // 47.26, 8.953 x 47.36, 9.058
    { 3867100, 2452 }, // 47.36, 8.953 x 47.47, 9.058
    { 3867103, Bucket(2977) }, // 47.47, 9.058 x 47.57, 9.163
    { 3867126, 2509 }, // 47.36, 9.268 x 47.47, 9.373
    { 3867256, 813 }, // 45.48, 10.21 x 45.58, 10.32
    { 3867460, 2908 }, // 46.94, 9.583 x 47.05, 9.687
    { 3867461, 2485 }, // 47.05, 9.583 x 47.15, 9.687
    { 3867463, 2485 }, // 47.05, 9.687 x 47.15, 9.792
    { 3867658, 1940 }, // 47.57, 8.219 x 47.68, 8.324
    { 3867690, 1958 }, // 47.57, 8.639 x 47.68, 8.744
    { 3867763, 26 }, // 48.94, 8.429 x 49.04, 8.534
    { 3867772, 1085 }, // 49.04, 8.534 x 49.15, 8.639
    { 3867775, 366 }, // 49.15, 8.639 x 49.25, 8.744
    { 3867855, Bucket(2981) }, // 48.73, 9.058 x 48.83, 9.163
    { 3867865, 649 }, // 48.94, 8.953 x 49.04, 9.058
    { 3867866, 153 }, // 48.83, 9.058 x 48.94, 9.163
    { 3867877, Bucket(2985) }, // 48.73, 9.163 x 48.83, 9.268
    { 3867888, Bucket(2992) }, // 48.83, 9.163 x 48.94, 9.268
    { 3867890, 153 }, // 48.83, 9.268 x 48.94, 9.373
    { 3867896, 153 }, // 48.83, 9.373 x 48.94, 9.478
    { 3867935, 962 }, // 49.98, 8.219 x 50.09, 8.324
    { 3867947, Bucket(2996) }, // 49.36, 8.639 x 49.46, 8.744
    { 3868010, Bucket(2999) }, // 50.09, 8.639 x 50.19, 8.744
    { 3868053, 962 }, // 49.98, 8.744 x 50.09, 8.849
    { 3868096, Bucket(3002) }, // 50.09, 8.744 x 50.19, 8.849
    { 3868191, 1459 }, // 48.31, 9.897 x 48.41, 10
    { 3868234, 1459 }, // 48.41, 9.897 x 48.52, 10
    { 3868319, 312 }, // 48.31, 10.74 x 48.41, 10.84
    { 3868341, Bucket(3006) }, // 48.31, 10.84 x 48.41, 10.95
    { 3868585, 129 }, // 49.36, 11.05 x 49.46, 11.16
    { 3868637, 697 }, // 50.82, 10.63 x 50.93, 10.74
    { 3869010, 183 }, // 47.15, 11.37 x 47.26, 11.47
    { 3869721, Bucket(3012) }, // 48.1, 11.47 x 48.2, 11.57
    { 3869723, 2747 }, // 48.1, 11.57 x 48.2, 11.68
    { 3869781, 179 }, // 49.15, 11.26 x 49.25, 11.37
    { 3869824, 2554 }, // 47.57, 12.1 x 47.68, 12.2
    { 3869871, 1900 }, // 47.89, 12.83 x 47.99, 12.94
    { 3869882, 1900 }, // 47.99, 12.83 x 48.1, 12.94
    { 3870047, Bucket(3017) }, // 50.82, 11.57 x 50.93, 11.68
    { 3870079, Bucket(3020) }, // 50.82, 11.99 x 50.93, 12.1
    { 3870165, 181 }, // 50.82, 12.1 x 50.93, 12.2
    { 3870171, 1256 }, // 50.61, 12.41 x 50.72, 12.52
    { 3870174, 1256 }, // 50.72, 12.41 x 50.82, 12.52
    { 3870653, Bucket(3023) }, // 49.98, 14.41 x 50.09, 14.51
    { 3870696, Bucket(3023) }, // 50.09, 14.41 x 50.19, 14.51
    { 3870822, 589 }, // 51.98, 8.429 x 52.08, 8.534
    { 3870828, 589 }, // 51.98, 8.534 x 52.08, 8.639
    { 3871034, 326 }, // 53.03, 8.639 x 53.13, 8.744
    { 3871120, Bucket(3026) }, // 53.03, 8.744 x 53.13, 8.849
    { 3871315, Bucket(3029) }, // 52.29, 9.687 x 52.4, 9.792
    { 3871368, Bucket(3032) }, // 50.93, 10.63 x 51.03, 10.74
    { 3871387, Bucket(3035) }, // 51.45, 10.74 x 51.56, 10.84
    { 3871394, Bucket(3038) }, // 50.93, 10.95 x 51.03, 11.05
    { 3872825, Bucket(3042) }, // 51.45, 11.89 x 51.56, 11.99
    { 3872847, Bucket(3047) }, // 52.08, 11.57 x 52.19, 11.68
    { 3872909, Bucket(3053) }, // 51.24, 12.31 x 51.35, 12.41
    { 3872920, 77 }, // 51.35, 12.31 x 51.45, 12.41
    { 3872938, 1463 }, // 50.93, 12.83 x 51.03, 12.94
    { 3872962, 1078 }, // 51.77, 12.2 x 51.87, 12.31
    { 3873091, 115 }, // 53.55, 11.37 x 53.65, 11.47
    { 3873150, Bucket(3056) }, // 54.07, 11.99 x 54.18, 12.1
    { 3873236, Bucket(3059) }, // 54.07, 12.1 x 54.18, 12.2
    { 3873280, 1463 }, // 50.93, 12.94 x 51.03, 13.04
    { 3873323, Bucket(3063) }, // 51.03, 13.67 x 51.14, 13.78
    { 3873397, Bucket(3066) }, // 52.5, 13.36 x 52.61, 13.46
    { 3873406, 637 }, // 52.4, 13.67 x 52.5, 13.78
    { 3873463, 457 }, // 51.66, 14.3 x 51.77, 14.41
    { 3873493, 177 }, // 52.5, 13.78 x 52.61, 13.88
    { 3873727, Bucket(3070) }, // 53.34, 14.51 x 53.45, 14.62
    { 3873770, Bucket(3074) }, // 53.45, 14.51 x 53.55, 14.62
    { 3874011, 277 }, // 55.65, 12.41 x 55.75, 12.52
    { 3874014, 2301 }, // 55.75, 12.41 x 55.86, 12.52
    { 3874033, Bucket(3077) }, // 55.65, 12.52 x 55.75, 12.62
    { 3874036, 2301 }, // 55.75, 12.52 x 55.86, 12.62
    { 3875183, Bucket(3081) }, // 47.05, 15.35 x 47.15, 15.45
    { 3875269, Bucket(3085) }, // 47.05, 15.45 x 47.15, 15.56
    { 3877340, 479 }, // 47.36, 19.02 x 47.47, 19.12
    { 3877341, Bucket(3088) }, // 47.47, 19.02 x 47.57, 19.12
    { 3877342, 470 }, // 47.36, 19.12 x 47.47, 19.23
    { 3877435, Bucket(3096) }, // 44.74, 20.38 x 44.85, 20.49
    { 3877521, Bucket(3102) }, // 44.74, 20.49 x 44.85, 20.59
    { 3877669, Bucket(3108) }, // 46.21, 20.07 x 46.31, 20.17
    { 3878024, Bucket(3114) }, // 47.57, 19.02 x 47.68, 19.12
    { 3878638, 1844 }, // 48.62, 21.22 x 48.73, 21.33
    { 3879189, Bucket(3117) }, // 53.34, 14.62 x 53.45, 14.72
    { 3881149, 2135 }, // 51.66, 19.44 x 51.77, 19.54
    { 3881192, 2135 }, // 51.77, 19.44 x 51.87, 19.54
    { 3885096, 652 }, // 57.64, 11.89 x 57.74, 11.99
    { 3892138, Bucket(3121) }, // 59.32, 17.87 x 59.42, 17.97
    { 3893504, Bucket(3125) }, // 59.32, 17.97 x 59.42, 18.08
    { 3899741, Bucket(3128) }, // 47.47, 21.54 x 47.57, 21.64
    { 3899751, 2716 }, // 47.05, 21.85 x 47.15, 21.96
    { 3901331, Bucket(3131) }, // 49.78, 23.95 x 49.88, 24.05
    { 3902415, Bucket(3135) }, // 47.05, 27.51 x 47.15, 27.62
    { 3902426, Bucket(3139) }, // 47.15, 27.51 x 47.26, 27.62
    { 3909485, 504 }, // 50.4, 30.34 x 50.51, 30.45
    { 3909573, Bucket(3144) }, // 50.4, 30.55 x 50.51, 30.66
    { 3909584, Bucket(3144) }, // 50.51, 30.55 x 50.61, 30.66
    { 3911183, 2362 }, // 47.89, 33.39 x 47.99, 33.49
    { 3913290, Bucket(3147) }, // 55.12, 30.03 x 55.23, 30.13
    { 3913312, Bucket(3147) }, // 55.12, 30.13 x 55.23, 30.24
    { 3916778, 1512 }, // 60.16, 24.58 x 60.26, 24.68
    { 3917370, Bucket(3150) }, // 61.41, 23.74 x 61.52, 23.84
    { 3917456, 2650 }, // 61.41, 23.84 x 61.52, 23.95
    { 3918081, 505 }, // 59.42, 24.68 x 59.53, 24.79
    { 3918109, Bucket(3153) }, // 60.05, 24.89 x 60.16, 25
    { 3918152, Bucket(3157) }, // 60.16, 24.89 x 60.26, 25
    { 3924787, 518 }, // 59.84, 30.24 x 59.95, 30.34
    { 3924792, 775 }, // 59.74, 30.34 x 59.84, 30.45
    { 3924793, 2883 }, // 59.84, 30.34 x 59.95, 30.45
    { 3924796, 774 }, // 59.95, 30.34 x 60.05, 30.45
    { 9276245, 2442 }, // -6.219, 106.9 x -6.114, 107
    { 9453665, 804 }, // 31.74, 35.17 x 31.84, 35.27
    { 9455557, 2868 }, // 36.98, 37.26 x 37.09, 37.37
    { 9455568, 2868 }, // 37.09, 37.26 x 37.19, 37.37
    { 9457775, Bucket(3166) }, // 38.66, 35.48 x 38.77, 35.59
    { 9467626, Bucket(3169) }, // 41.7, 44.71 x 41.81, 44.81
    { 9468949, 1651 }, // 41.6, 44.81 x 41.7, 44.92
    { 9468992, 1651 }, // 41.7, 44.81 x 41.81, 44.92
    { 9474799, 2335 }, // 25.24, 51.42 x 25.34, 51.53
    { 9474810, Bucket(3172) }, // 25.34, 51.42 x 25.45, 51.53
    { 9476165, 2353 }, // 25.24, 51.53 x 25.34, 51.63
    { 9476176, Bucket(3172) }, // 25.34, 51.53 x 25.45, 51.63
    { 9477522, 2872 }, // 29.54, 52.47 x 29.64, 52.57
    { 9490927, Bucket(3175) }, // 40.34, 49.74 x 40.44, 49.85
    { 9503693, 2198 }, // 47.05, 37.47 x 47.15, 37.58
    { 9503695, 2464 }, // 47.05, 37.58 x 47.15, 37.68
    { 9505146, Bucket(3179) }, // 47.15, 38.84 x 47.26, 38.94
    { 9508566, Bucket(3186) }, // 55.75, 37.37 x 55.86, 37.47
    { 9508568, 2332 }, // 55.54, 37.47 x 55.65, 37.58
    { 9508569, 2332 }, // 55.65, 37.47 x 55.75, 37.58
    { 9508571, Bucket(3189) }, // 55.65, 37.58 x 55.75, 37.68
    { 9508572, Bucket(3192) }, // 55.75, 37.47 x 55.86, 37.58
    { 9508574, 912 }, // 55.75, 37.58 x 55.86, 37.68
    { 9508593, 1543 }, // 55.65, 37.68 x 55.75, 37.79
    { 9508596, 912 }, // 55.75, 37.68 x 55.86, 37.79
    { 9516847, 1544 }, // 56.28, 43.87 x 56.38, 43.98
    { 9551720, 1604 }, // 56.8, 60.54 x 56.91, 60.65
    { 9578890, 1555 }, // 19.05, 72.81 x 19.16, 72.92
    { 9579108, 2760 }, // 18.42, 73.76 x 18.53, 73.86
    { 9579109, 2761 }, // 18.53, 73.76 x 18.63, 73.86
    { 9598098, 692 }, // 41.28, 69.25 x 41.39, 69.35
    { 9603074, 1925 }, // 17.37, 78.47 x 17.48, 78.58
    { 9613224, 2855 }, // 22.41, 88.23 x 22.51, 88.33
    { 9613227, 2550 }, // 22.51, 88.33 x 22.62, 88.44
    { 9680031, 1603 }, // 55.02, 82.88 x 55.12, 82.98
    { 9997350, 2604 }, // 20.94, 105.7 x 21.04, 105.8
    { 10000245, 2388 }, // 30.69, 104 x 30.8, 104.1
    { 10005755, 2352 }, // 22.09, 113.5 x 22.2, 113.6
    { 10005942, 1573 }, // 23.04, 113.3 x 23.14, 113.4
    { 10006111, Bucket(3196) }, // 22.3, 113.9 x 22.41, 114
    { 10006134, 1421 }, // 22.2, 114.1 x 22.3, 114.2
    { 10006277, 2153 }, // 22.72, 113.6 x 22.83, 113.7
    { 10006278, 2736 }, // 22.62, 113.7 x 22.72, 113.8
    { 10006282, Bucket(3204) }, // 22.41, 113.9 x 22.51, 114
    { 10006283, 1579 }, // 22.51, 113.9 x 22.62, 114
    { 10006287, 2838 }, // 22.72, 113.9 x 22.83, 114
    { 10006292, 1752 }, // 23.04, 113.6 x 23.14, 113.7
    { 10006304, 1382 }, // 22.41, 114 x 22.51, 114.1
    { 10006308, 2799 }, // 22.62, 114 x 22.72, 114.1
    { 10019167, 1704 }, // 34.05, 108.9 x 34.15, 109
    { 10064479, 816 }, // 52.5, 103.8 x 52.61, 104
    { 10096388, 1729 }, // 22.62, 120.3 x 22.72, 120.4
    { 10099402, 2867 }, // 24.92, 121.5 x 25.03, 121.6
    { 10099404, 1246 }, // 25.13, 121.4 x 25.24, 121.5
    { 10110743, 2390 }, // 36.56, 117.1 x 36.67, 117.2
    { 10110786, 2390 }, // 36.67, 117.1 x 36.77, 117.2
    { 10111157, 2307 }, // 31.53, 119.9 x 31.63, 120
    { 10111167, 1682 }, // 31.53, 120.2 x 31.63, 120.3
    { 10111204, 2307 }, // 31.84, 119.9 x 31.95, 120
    { 10111630, 1904 }, // 31.01, 121.5 x 31.11, 121.6
    { 10121045, 1537 }, // 37.4, 127 x 37.51, 127.1
    { 10123259, 2174 }, // 43.9, 125.2 x 44.01, 125.3
    { 10123358, 1627 }, // 38.97, 125.7 x 39.08, 125.8
    { 10123776, Bucket(3217) }, // 37.51, 127 x 37.61, 127.1
    { 10123780, 1523 }, // 37.72, 127 x 37.82, 127.1
    { 10124624, 2173 }, // 43.8, 125.3 x 43.9, 125.5
    { 10124625, 2174 }, // 43.9, 125.3 x 44.01, 125.5
    { 10142190, Bucket(3220) }, // 33.52, 130.3 x 33.63, 130.4
    { 10142231, Bucket(3223) }, // 31.53, 130.5 x 31.63, 130.6
    { 10142532, Bucket(3220) }, // 33.52, 130.4 x 33.63, 130.5
    { 10142976, Bucket(1973) }, // 35.83, 128.7 x 35.93, 128.8
    { 10145466, 2150 }, // 34.57, 135.3 x 34.68, 135.4
    { 10150928, 2150 }, // 34.57, 135.4 x 34.68, 135.5
    { 10150943, 1872 }, // 34.89, 135.7 x 34.99, 135.8
    { 10150986, 1872 }, // 34.99, 135.7 x 35.1, 135.8
    { 10151145, 1878 }, // 35.1, 136.9 x 35.2, 137
    { 10151147, 2172 }, // 35.1, 137 x 35.2, 137.1
    { 10153083, 1593 }, // 35.51, 139.5 x 35.62, 139.6
    { 10153157, 561 }, // 35.3, 139.6 x 35.41, 139.7
    { 10153168, 1564 }, // 35.41, 139.6 x 35.51, 139.7
    { 10153172, 560 }, // 35.62, 139.6 x 35.72, 139.7
    { 10153175, 2055 }, // 35.72, 139.7 x 35.83, 139.8
    { 10153346, 2068 }, // 35.83, 139.7 x 35.93, 139.8
    { 10157968, 2028 }, // 42.96, 141.3 x 43.06, 141.4
    { 10573707, Bucket(3226) }, // -37.89, 145 x -37.78, 145.1
    { 4170863, 1384 }, // 6.207, -75.61 x 6.259, -75.56
    { 4170949, 1384 }, // 6.207, -75.56 x 6.259, -75.51
    { 6381721, Bucket(3231) }, // 37.77, -122.4 x 37.82, -122.4
    { 6382490, 2053 }, // 38.56, -121.5 x 38.61, -121.5
    { 6393016, 2252 }, // 32.68, -117.2 x 32.74, -117.1
    { 6461986, 1423 }, // 20.73, -103.4 x 20.78, -103.3
    { 6872671, 2618 }, // 29.9, -90.08 x 29.96, -90.03
    { 6872842, 2618 }, // 29.96, -90.08 x 30.01, -90.03
    { 6884885, Bucket(3236) }, // 32.84, -96.95 x 32.89, -96.9
    { 6884889, 1358 }, // 32.74, -96.85 x 32.79, -96.8
    { 6918343, Bucket(3239) }, // 34.73, -92.29 x 34.78, -92.23
    { 6943678, 744 }, // 42.02, -87.78 x 42.07, -87.73
    { 6944481, 2615 }, // 43.01, -87.94 x 43.06, -87.88
    { 6975585, 2613 }, // 27.91, -82.48 x 27.96, -82.43
    { 7029750, 1062 }, // 39.08, -84.53 x 39.13, -84.47
    { 7071146, 1806 }, // 40.02, -75.19 x 40.08, -75.14
    { 7073139, 1796 }, // 40.7, -74.04 x 40.76, -73.99
    { 7073144, 1748 }, // 40.65, -73.99 x 40.7, -73.94
    { 7252456, 917 }, // 45.48, -73.57 x 45.53, -73.52
    { 9518751, 2798 }, // -17.49, -66.18 x -17.44, -66.12
    { 9518794, 2798 }, // -17.44, -66.18 x -17.39, -66.12
    { 9568767, 866 }, // -34.69, -58.42 x -34.64, -58.37
    { 9569134, 857 }, // -34.95, -58 x -34.9, -57.95
    { 9569220, 857 }, // -34.95, -57.95 x -34.9, -57.89
    { 9569450, Bucket(3242) }, // -34.64, -58.42 x -34.58, -58.37
    { 9780728, 1556 }, // 10.45, -66.86 x 10.51, -66.81
    { 9780730, 1556 }, // 10.45, -66.81 x 10.51, -66.75
    { 9985879, Bucket(3245) }, // -22.94, -43.21 x -22.89, -43.16
    { 10084346, 2646 }, // -9.679, -35.77 x -9.627, -35.72
    { 10239102, Bucket(3249) }, // -3.702, -40.38 x -3.65, -40.33
    { 14703373, 370 }, // 28.44, -16.32 x 28.49, -16.26
    { 14797725, 1616 }, // 38.71, -9.187 x 38.77, -9.135
    { 14797768, 1616 }, // 38.77, -9.187 x 38.82, -9.135
    { 14882592, 1646 }, // 36.67, -4.468 x 36.72, -4.416
    { 14896391, 1816 }, // 40.18, -3.787 x 40.23, -3.734
    { 14896402, 1816 }, // 40.23, -3.787 x 40.29, -3.734
    { 14902186, Bucket(3252) }, // 38.35, -0.5362 x 38.4, -0.4838
    { 14903552, 223 }, // 38.35, -0.4838 x 38.4, -0.4314
    { 14904345, 2779 }, // 39.45, -0.3789 x 39.5, -0.3265
    { 14933786, 1060 }, // 43.59, 3.868 x 43.64, 3.92
    { 14939390, Bucket(3255) }, // 43.27, 5.336 x 43.33, 5.388
    { 14939732, 686 }, // 43.27, 5.388 x 43.33, 5.441
    { 14941982, 2322 }, // 43.69, 7.223 x 43.75, 7.276
    { 14942004, 2322 }, // 43.69, 7.276 x 43.75, 7.328
    { 15087964, 2234 }, // 49.15, -0.3789 x 49.2, -0.3265
    { 15094740, 1370 }, // 55.86, -4.259 x 55.91, -4.206
    { 15111020, 1431 }, // 48.94, 2.347 x 48.99, 2.4
    { 15111117, 1447 }, // 48.99, 2.557 x 49.04, 2.61
    { 15118138, 2088 }, // 46.94, 7.433 x 47, 7.485
    { 15121911, 86 }, // 50.88, 6.909 x 50.93, 6.961
    { 15296623, 1286 }, // 38.08, 13.3 x 38.14, 13.36
    { 15298431, 2564 }, // 40.81, 14.14 x 40.86, 14.2
    { 15298519, 2636 }, // 40.81, 14.25 x 40.86, 14.3
    { 15299375, Bucket(3258) }, // 41.86, 12.47 x 41.91, 12.52
    { 15299461, Bucket(3258) }, // 41.86, 12.52 x 41.91, 12.57
    { 15301250, 2636 }, // 40.86, 14.25 x 40.91, 14.3
    { 15419575, 1408 }, // 37.87, 23.69 x 37.93, 23.74
    { 15419618, 1408 }, // 37.93, 23.69 x 37.98, 23.74
    { 15435807, 1492 }, // 31.16, 29.87 x 31.22, 29.92
    { 15435850, 1492 }, // 31.22, 29.87 x 31.27, 29.92
    { 15467850, 451 }, // 47.15, 8.062 x 47.21, 8.115
    { 15467880, 184 }, // 47.15, 8.219 x 47.21, 8.272
    { 15467881, 184 }, // 47.21, 8.219 x 47.26, 8.272
    { 15467882, 184 }, // 47.15, 8.272 x 47.21, 8.324
    { 15467994, 829 }, // 47.36, 8.482 x 47.42, 8.534
    { 15468016, Bucket(3261) }, // 47.36, 8.534 x 47.42, 8.586
    { 15468376, 1942 }, // 47.36, 8.849 x 47.42, 8.901
    { 15468379, 2428 }, // 47.42, 8.901 x 47.47, 8.953
    { 15468381, 2428 }, // 47.52, 8.849 x 47.57, 8.901
    { 15468382, 2428 }, // 47.47, 8.901 x 47.52, 8.953
    { 15468383, 2428 }, // 47.52, 8.901 x 47.57, 8.953
    { 15468394, 2486 }, // 47.15, 9.111 x 47.21, 9.163
    { 15468395, 2486 }, // 47.21, 9.111 x 47.26, 9.163
    { 15468398, 2486 }, // 47.26, 9.111 x 47.31, 9.163
    { 15468399, 2486 }, // 47.31, 9.111 x 47.36, 9.163
    { 15468410, 2486 }, // 47.36, 9.111 x 47.42, 9.163
    { 15468411, 2486 }, // 47.42, 9.111 x 47.47, 9.163
    { 15468501, 2441 }, // 47.52, 9.163 x 47.57, 9.216
    { 15469848, 2908 }, // 46.94, 9.687 x 47, 9.74
    { 15471096, 1085 }, // 49.04, 8.639 x 49.09, 8.691
    { 15471099, 366 }, // 49.09, 8.691 x 49.15, 8.744
    { 15471469, 649 }, // 48.99, 9.058 x 49.04, 9.111
    { 15471471, 649 }, // 48.99, 9.111 x 49.04, 9.163
    { 15471508, 46 }, // 48.73, 9.163 x 48.78, 9.216
    { 15471556, 153 }, // 48.94, 9.163 x 48.99, 9.216
    { 15471557, 649 }, // 48.99, 9.163 x 49.04, 9.216
    { 15471558, 153 }, // 48.94, 9.216 x 48.99, 9.268
    { 15471559, 649 }, // 48.99, 9.216 x 49.04, 9.268
    { 15471564, 153 }, // 48.94, 9.268 x 48.99, 9.32
    { 15471565, 649 }, // 48.99, 9.268 x 49.04, 9.32
    { 15471566, 153 }, // 48.94, 9.32 x 48.99, 9.373
    { 15471567, 649 }, // 48.99, 9.32 x 49.04, 9.373
    { 15471588, 153 }, // 48.94, 9.373 x 48.99, 9.425
    { 15471589, 649 }, // 48.99, 9.373 x 49.04, 9.425
    { 15471591, 649 }, // 48.99, 9.425 x 49.04, 9.478
    { 15471597, 649 }, // 48.99, 9.478 x 49.04, 9.53
    { 15471840, 414 }, // 49.67, 8.534 x 49.72, 8.586
    { 15472767, 1460 }, // 48.36, 9.95 x 48.41, 10
    { 15472853, 1460 }, // 48.36, 10 x 48.41, 10.05
    { 15472938, 1460 }, // 48.41, 9.95 x 48.46, 10
    { 15473024, 1460 }, // 48.41, 10 x 48.46, 10.05
    { 15474341, 1955 }, // 49.41, 11.05 x 49.46, 11.1
    { 15475485, 721 }, // 45.42, 12.2 x 45.48, 12.26
    { 15475528, 721 }, // 45.48, 12.2 x 45.53, 12.26
    { 15478892, 2745 }, // 48.1, 11.57 x 48.15, 11.63
    { 15478893, 151 }, // 48.15, 11.57 x 48.2, 11.63
    { 15480189, Bucket(3264) }, // 50.88, 11.57 x 50.93, 11.63
    { 15480318, 643 }, // 50.82, 12.05 x 50.88, 12.1
    { 15485474, 698 }, // 50.93, 10.68 x 50.98, 10.74
    { 15491112, Bucket(3264) }, // 50.93, 11.57 x 50.98, 11.63
    { 15491639, 126 }, // 51.3, 12.36 x 51.35, 12.41
    { 15491682, 126 }, // 51.35, 12.36 x 51.4, 12.41
    { 15491754, 1464 }, // 50.93, 12.89 x 50.98, 12.94
    { 15491962, Bucket(3268) }, // 52.4, 12.47 x 52.45, 12.52
    { 15492048, Bucket(3268) }, // 52.4, 12.52 x 52.45, 12.57
    { 15492602, 55 }, // 54.07, 12.05 x 54.13, 12.1
    { 15493636, Bucket(3271) }, // 51.03, 13.78 x 51.09, 13.83
    { 15493853, Bucket(3274) }, // 51.72, 14.3 x 51.77, 14.35
    { 15494024, Bucket(3278) }, // 51.77, 14.3 x 51.82, 14.35
    { 15494909, 577 }, // 53.39, 14.51 x 53.45, 14.56
    { 15500734, 322 }, // 47.05, 15.4 x 47.1, 15.45
    { 15501076, Bucket(3281) }, // 47.05, 15.45 x 47.1, 15.51
    { 15509342, Bucket(3284) }, // 47.47, 18.97 x 47.52, 19.02
    { 15509364, Bucket(3288) }, // 47.47, 19.02 x 47.52, 19.07
    { 15509369, 472 }, // 47.42, 19.12 x 47.47, 19.18
    { 15509743, 403 }, // 44.79, 20.44 x 44.85, 20.49
    { 15514553, 2061 }, // 48.67, 21.22 x 48.73, 21.27
    { 15516928, 583 }, // 53.45, 14.62 x 53.5, 14.67
    { 15518159, 1184 }, // 52.34, 16.87 x 52.4, 16.92
    { 15518170, 1184 }, // 52.4, 16.87 x 52.45, 16.92
    { 15518181, 1274 }, // 52.34, 16.92 x 52.4, 16.98
    { 15518192, 1274 }, // 52.4, 16.92 x 52.45, 16.98
    { 15524597, 2148 }, // 51.72, 19.44 x 51.77, 19.49
    { 15524768, 2148 }, // 51.77, 19.44 x 51.82, 19.49
    { 15567871, Bucket(3293) }, // 59.26, 17.92 x 59.32, 17.97
    { 15568554, Bucket(3296) }, // 59.32, 17.92 x 59.37, 17.97
    { 15574016, 2579 }, // 59.32, 17.97 x 59.37, 18.02
    { 15599006, Bucket(3300) }, // 47.05, 21.9 x 47.1, 21.96
    { 15609792, Bucket(3303) }, // 47.15, 27.62 x 47.21, 27.67
    { 15626045, 2572 }, // 53.81, 27.51 x 53.86, 27.57
    { 15626088, 2572 }, // 53.86, 27.51 x 53.92, 27.57
    { 15666862, Bucket(3306) }, // 59.42, 24.63 x 59.47, 24.68
    { 37088620, 2546 }, // 13.7, 100.5 x 13.76, 100.5
    { 37835467, 2863 }, // 41.33, 36.16 x 41.39, 36.22
    { 37870335, 1651 }, // 41.65, 44.76 x 41.7, 44.81
    { 37899197, 2718 }, // 25.29, 51.42 x 25.34, 51.47
    { 37899243, 2408 }, // 25.4, 51.47 x 25.45, 51.53
    { 37904660, 2335 }, // 25.24, 51.53 x 25.29, 51.58
    { 38034280, 2331 }, // 55.54, 37.58 x 55.59, 37.63
    { 38034282, 2331 }, // 55.54, 37.63 x 55.59, 37.68
    { 38034283, 2331 }, // 55.59, 37.63 x 55.65, 37.68
    { 38034286, 2331 }, // 55.65, 37.63 x 55.7, 37.68
    { 38034287, 2331 }, // 55.7, 37.63 x 55.75, 37.68
    { 38034296, 2905 }, // 55.75, 37.58 x 55.8, 37.63
    { 38171119, 2695 }, // 55.7, 52.31 x 55.75, 52.36
    { 38206711, 1604 }, // 56.75, 60.6 x 56.8, 60.65
    { 38723305, 413 }, // 56.43, 84.98 x 56.49, 85.03
    { 40024447, 1381 }, // 22.35, 114 x 22.41, 114
    { 40024532, 344 }, // 22.3, 114 x 22.35, 114.1
    { 40024533, Bucket(3309) }, // 22.35, 114 x 22.41, 114.1
    { 40025216, Bucket(3309) }, // 22.41, 114 x 22.46, 114.1
    { 40044672, 2388 }, // 30.8, 104 x 30.85, 104
    { 40384186, 1729 }, // 22.62, 120.3 x 22.67, 120.3
    { 40444842, 1681 }, // 31.63, 120.3 x 31.69, 120.3
    { 40446208, 1681 }, // 31.63, 120.3 x 31.69, 120.4
    { 40571221, 1693 }, // 35.78, 128.7 x 35.83, 128.8
    { 40576486, 1232 }, // 33.84, 132.7 x 33.89, 132.8
    { 40581857, 1577 }, // 34.62, 135.2 x 34.68, 135.3
    { 40581860, 1577 }, // 34.68, 135.2 x 34.73, 135.3
    { 40581862, 1576 }, // 34.68, 135.3 x 34.73, 135.3
    { 40605957, 2172 }, // 35.15, 137.1 x 35.2, 137.1
    { 40612326, 2076 }, // 35.51, 139.4 x 35.57, 139.5
    { 40612340, 2069 }, // 35.72, 139.4 x 35.78, 139.4
    { 40612676, 1593 }, // 35.51, 139.6 x 35.57, 139.7
    { 40612701, 2068 }, // 35.78, 139.7 x 35.83, 139.8
    { 40613410, 2096 }, // 35.83, 139.9 x 35.88, 139.9
    { 25933824, 1745 }, // 25.76, -100.3 x 25.79, -100.3
    { 26253071, 990 }, // 47.23, -122.5 x 47.26, -122.4
    { 26253093, 990 }, // 47.23, -122.4 x 47.26, -122.4
    { 27683990, 429 }, // 35.15, -90.01 x 35.17, -89.98
    { 28142893, 1961 }, // 42.2, -83.37 x 42.23, -83.35
    { 28143389, 858 }, // 42.3, -83.06 x 42.33, -83.03
    { 28143432, 858 }, // 42.33, -83.06 x 42.36, -83.03
    { 28285952, 1806 }, // 40.02, -75.14 x 40.05, -75.12
    { 59602602, 1452 }, // 43.38, -3.027 x 43.41, -3
    { 59722010, 1402 }, // 41.39, 2.111 x 41.41, 2.138
    { 59722038, 1167 }, // 41.44, 2.164 x 41.47, 2.19
    { 59758968, 1385 }, // 43.27, 5.546 x 43.3, 5.572
    { 60458445, 1020 }, // 45.76, 4.812 x 45.79, 4.838
    { 60469317, 2380 }, // 46.18, 6.227 x 46.21, 6.253
    { 60469695, 1136 }, // 46.5, 6.62 x 46.52, 6.647
    { 60469738, 1136 }, // 46.52, 6.62 x 46.55, 6.647
    { 60470037, 1136 }, // 46.5, 6.647 x 46.52, 6.673
    { 60470080, 1136 }, // 46.52, 6.647 x 46.55, 6.673
    { 60500687, 966 }, // 51.22, 4.418 x 51.24, 4.445
    { 60523536, 1312 }, // 51.87, 4.549 x 51.9, 4.576
    { 61197503, 616 }, // 41.88, 12.49 x 41.91, 12.52
    { 61281621, 600 }, // 40.84, 14.62 x 40.86, 14.64
    { 61743317, 1492 }, // 31.19, 29.92 x 31.22, 29.95
    { 61818977, 2099 }, // 41.1, 28.98 x 41.12, 29.01
    { 61818984, 2825 }, // 41.07, 29.03 x 41.1, 29.06
    { 61871532, 184 }, // 47.21, 8.272 x 47.23, 8.298
    { 61871535, 452 }, // 47.23, 8.298 x 47.26, 8.324
    { 61871952, 2224 }, // 47.47, 8.324 x 47.49, 8.35
    { 61871978, Bucket(3313) }, // 47.36, 8.508 x 47.39, 8.534
    { 61873508, 1942 }, // 47.42, 8.849 x 47.44, 8.875
    { 61873509, 1942 }, // 47.44, 8.849 x 47.47, 8.875
    { 61873520, 1942 }, // 47.47, 8.849 x 47.49, 8.875
    { 61873521, 1942 }, // 47.49, 8.849 x 47.52, 8.875
    { 61873522, 2428 }, // 47.47, 8.875 x 47.49, 8.901
    { 61873523, 2428 }, // 47.49, 8.875 x 47.52, 8.901
    { 61873570, 2486 }, // 47.15, 9.084 x 47.18, 9.111
    { 61873571, 2486 }, // 47.18, 9.084 x 47.21, 9.111
    { 61873574, 2486 }, // 47.21, 9.084 x 47.23, 9.111
    { 61873575, 2486 }, // 47.23, 9.084 x 47.26, 9.111
    { 61873586, 2486 }, // 47.26, 9.084 x 47.28, 9.111
    { 61873587, 2486 }, // 47.28, 9.084 x 47.31, 9.111
    { 61873590, 2486 }, // 47.31, 9.084 x 47.34, 9.111
    { 61873591, 2486 }, // 47.34, 9.084 x 47.36, 9.111
    { 61873634, 2486 }, // 47.36, 9.084 x 47.39, 9.111
    { 61873635, 2486 }, // 47.39, 9.084 x 47.42, 9.111
    { 61873638, 2486 }, // 47.42, 9.084 x 47.44, 9.111
    { 61873639, 2486 }, // 47.44, 9.084 x 47.47, 9.111
    { 61879509, 2485 }, // 47.13, 9.792 x 47.15, 9.818
    { 61879621, 2756 }, // 47.44, 9.583 x 47.47, 9.609
    { 61884391, 366 }, // 49.12, 8.665 x 49.15, 8.691
    { 61884392, 1085 }, // 49.04, 8.691 x 49.07, 8.717
    { 61885691, 1662 }, // 48.75, 9.137 x 48.78, 9.163
    { 61885882, 153 }, // 48.94, 9.137 x 48.96, 9.163
    { 61886033, 1662 }, // 48.75, 9.163 x 48.78, 9.189
    { 61886360, 153 }, // 48.94, 9.425 x 48.96, 9.451
    { 61889536, 530 }, // 50.09, 8.744 x 50.12, 8.77
    { 61898102, 2751 }, // 50.88, 10.55 x 50.9, 10.58
    { 61973999, 123 }, // 52.48, 13.33 x 52.5, 13.36
    { 62023132, 284 }, // 49.2, 16.56 x 49.22, 16.58
    { 62072639, 1580 }, // 52.37, 16.9 x 52.4, 16.92
    { 62072682, 1580 }, // 52.4, 16.9 x 52.42, 16.92
    { 62072725, 1580 }, // 52.37, 16.92 x 52.4, 16.95
    { 62271487, 240 }, // 59.29, 17.94 x 59.32, 17.97
    { 151255697, 1025 }, // 29.25, 47.96 x 29.28, 47.99
    { 151341957, 2863 }, // 41.36, 36.22 x 41.39, 36.24
    { 151860305, 1655 }, // 40.36, 49.85 x 40.39, 49.87
    { 152137124, 2332 }, // 55.59, 37.58 x 55.62, 37.61
    { 152137125, 2332 }, // 55.62, 37.58 x 55.65, 37.61
    { 152137126, 2331 }, // 55.59, 37.61 x 55.62, 37.63
    { 152137127, 2331 }, // 55.62, 37.61 x 55.65, 37.63
    { 152137136, 2332 }, // 55.65, 37.58 x 55.67, 37.61
    { 152137137, 2332 }, // 55.67, 37.58 x 55.7, 37.61
    { 152137138, 2331 }, // 55.65, 37.61 x 55.67, 37.63
    { 152137139, 2331 }, // 55.67, 37.61 x 55.7, 37.63
    { 152137140, 2332 }, // 55.7, 37.58 x 55.73, 37.61
    { 152137141, 2332 }, // 55.73, 37.58 x 55.75, 37.61
    { 152137142, 2331 }, // 55.7, 37.61 x 55.73, 37.63
    { 152137143, 2331 }, // 55.73, 37.61 x 55.75, 37.63
    { 152137151, 1068 }, // 55.73, 37.66 x 55.75, 37.68
    { 152137194, 1068 }, // 55.75, 37.66 x 55.78, 37.68
    { 152137493, 1068 }, // 55.73, 37.68 x 55.75, 37.71
    { 152137536, 1068 }, // 55.75, 37.68 x 55.78, 37.71
    { 162305944, 1231 }, // 33.84, 132.7 x 33.86, 132.8
    { 162324783, Bucket(3316) }, // 34.65, 133.9 x 34.68, 133.9
    { 162450911, 2096 }, // 35.8, 139.9 x 35.83, 139.9
    { 172124673, 2185 }, // -32.93, 151.8 x -32.91, 151.8
    { 103729834, 1745 }, // 25.76, -100.3 x 25.78, -100.3
    { 113170325, 269 }, // 40.74, -73.99 x 40.76, -73.98
    { 153713678, 1741 }, // -30, -51.2 x -29.98, -51.18
    { 153713700, 1741 }, // -30, -51.18 x -29.98, -51.17
    { 238342614, 1678 }, // 40.42, -3.721 x 40.43, -3.708
    { 239030251, 687 }, // 43.29, 5.375 x 43.3, 5.388
    { 245170176, 601 }, // 40.86, 14.62 x 40.88, 14.63
    { 247275642, 2705 }, // 41.02, 28.97 x 41.03, 28.98
    { 247275729, 2704 }, // 41.03, 28.98 x 41.05, 28.99
    { 247486136, 184 }, // 47.21, 8.298 x 47.22, 8.311
    { 247494047, 2428 }, // 47.46, 8.888 x 47.47, 8.901
    { 247494272, 2452 }, // 47.15, 9.058 x 47.17, 9.071
    { 247494273, 2452 }, // 47.17, 9.058 x 47.18, 9.071
    { 247494275, 2486 }, // 47.17, 9.071 x 47.18, 9.084
    { 247494276, 2452 }, // 47.18, 9.058 x 47.19, 9.071
    { 247494277, 2452 }, // 47.19, 9.058 x 47.21, 9.071
    { 247494278, 2486 }, // 47.18, 9.071 x 47.19, 9.084
    { 247494279, 2486 }, // 47.19, 9.071 x 47.21, 9.084
    { 247494288, 2452 }, // 47.21, 9.058 x 47.22, 9.071
    { 247494289, 2452 }, // 47.22, 9.058 x 47.23, 9.071
    { 247494290, 2486 }, // 47.21, 9.071 x 47.22, 9.084
    { 247494291, 2486 }, // 47.22, 9.071 x 47.23, 9.084
    { 247494292, 2452 }, // 47.23, 9.058 x 47.25, 9.071
    { 247494293, 2452 }, // 47.25, 9.058 x 47.26, 9.071
    { 247494294, 2486 }, // 47.23, 9.071 x 47.25, 9.084
    { 247494295, 2486 }, // 47.25, 9.071 x 47.26, 9.084
    { 247494336, 2452 }, // 47.26, 9.058 x 47.27, 9.071
    { 247494337, 2452 }, // 47.27, 9.058 x 47.28, 9.071
    { 247494338, 2486 }, // 47.26, 9.071 x 47.27, 9.084
    { 247494339, 2486 }, // 47.27, 9.071 x 47.28, 9.084
    { 247494340, 2452 }, // 47.28, 9.058 x 47.3, 9.071
    { 247494341, 2452 }, // 47.3, 9.058 x 47.31, 9.071
    { 247494342, 2486 }, // 47.28, 9.071 x 47.3, 9.084
    { 247494343, 2486 }, // 47.3, 9.071 x 47.31, 9.084
    { 247494352, 2452 }, // 47.31, 9.058 x 47.32, 9.071
    { 247494353, 2452 }, // 47.32, 9.058 x 47.34, 9.071
    { 247494354, 2486 }, // 47.31, 9.071 x 47.32, 9.084
    { 247494355, 2486 }, // 47.32, 9.071 x 47.34, 9.084
    { 247494356, 2452 }, // 47.34, 9.058 x 47.35, 9.071
    { 247494357, 2452 }, // 47.35, 9.058 x 47.36, 9.071
    { 247494358, 2486 }, // 47.34, 9.071 x 47.35, 9.084
    { 247494359, 2486 }, // 47.35, 9.071 x 47.36, 9.084
    { 247494528, 2452 }, // 47.36, 9.058 x 47.38, 9.071
    { 247494529, 2452 }, // 47.38, 9.058 x 47.39, 9.071
    { 247494530, 2486 }, // 47.36, 9.071 x 47.38, 9.084
    { 247494531, 2486 }, // 47.38, 9.071 x 47.39, 9.084
    { 247494532, 2452 }, // 47.39, 9.058 x 47.4, 9.071
    { 247494533, 2452 }, // 47.4, 9.058 x 47.42, 9.071
    { 247494534, 2486 }, // 47.39, 9.071 x 47.4, 9.084
    { 247494535, 2486 }, // 47.4, 9.071 x 47.42, 9.084
    { 247494544, 2452 }, // 47.42, 9.058 x 47.43, 9.071
    { 247494545, 2452 }, // 47.43, 9.058 x 47.44, 9.071
    { 247494546, 2486 }, // 47.42, 9.071 x 47.43, 9.084
    { 247494547, 2486 }, // 47.43, 9.071 x 47.44, 9.084
    { 247494548, 2452 }, // 47.44, 9.058 x 47.46, 9.071
    { 247494550, 2486 }, // 47.44, 9.071 x 47.46, 9.084
    { 247494551, 2486 }, // 47.46, 9.071 x 47.47, 9.084
    { 248011755, 2717 }, // 47.06, 15.44 x 47.08, 15.45
    { 248017217, 2717 }, // 47.06, 15.45 x 47.08, 15.47
    { 248291072, 1580 }, // 52.4, 16.92 x 52.41, 16.94
    { 249755989, Bucket(3303) }, // 47.14, 27.62 x 47.15, 27.63
    { 606387153, 2407 }, // 25.3, 51.42 x 25.32, 51.43
    { 646361821, 2085 }, // 25.12, 121.5 x 25.13, 121.5
    { 646361992, 2085 }, // 25.13, 121.5 x 25.15, 121.5
    { 647899818, 1589 }, // 37.51, 127 x 37.52, 127
    { 688497326, 2185 }, // -32.93, 151.8 x -32.92, 151.8
    { 947054399, 404 }, // 38.71, -9.141 x 38.71, -9.135
    { 947054442, 404 }, // 38.71, -9.141 x 38.72, -9.135
    { 947054485, 404 }, // 38.71, -9.135 x 38.71, -9.128
    { 947054528, 404 }, // 38.71, -9.135 x 38.72, -9.128
    { 979168146, 717 }, // 41.83, 12.89 x 41.84, 12.9
    { 987895808, 1492 }, // 31.22, 29.92 x 31.22, 29.93
    { 989977099, 2486 }, // 47.16, 9.078 x 47.17, 9.084
    { 990221653, 530 }, // 50.08, 8.744 x 50.09, 8.75
    { 990309034, 1450 }, // 48.41, 11.25 x 48.42, 11.26
    { 1002874883, 2912 }, // 61, 24.48 x 61.01, 24.49
    { 2596894943, 1231 }, // 33.83, 132.8 x 33.84, 132.8
    { 2598693247, 1575 }, // 35.19, 136.9 x 35.2, 136.9
    { 2598693930, 1575 }, // 35.2, 136.9 x 35.21, 136.9
    { 4294967295, Bucket(3319) }, // 339.5, 249.5 x 339.5, 249.5
};
}
