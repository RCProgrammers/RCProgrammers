"""

Information:
			Creator: Jon Ezeiza
			Date: 11/10/2010
			Lines: 138
			Difficulty: Medium

"""

import random

print("Kaixo, orain \"asmatu zenbakia\" jolasera jolastuko dugu.\nJolas honetan, gu biotako batek 1etik 100era dagoen zenbaki bat pentsatuko du.\nOndoren, bestea zenbakiak proposatzen joango da, eta pentsatu behar zuenak pentsatutako zenbakia baxuagoa ala altuagoa den esaten dion bitartean, besteak 10 sailakera baino lehen zenbakia asmatu behar du.\n")

partida_kantitatea = int(input("Baina ezer egin baino lehen, zenbat aldiz jolastuko dugun esaidazu:"))

print("Ongi",partida_kantitatea, "aldiz jolastuko dugu.")

#Jolasaren hasiera

partida_eginak = 0

zu_partida_irabaziak = 0
ni_partida_irabaziak = 0

while partida_eginak != partida_kantitatea:
    
    print("\nOrain txanpon bat botako dut nork jolastuko duen jakiteko.\nAurpegia ateratzen bada, nik pentsatuko dut zenbakia eta zuk asmatu; eta gurutzea ateratzen bada, alderantziz.")

    input("\nSakatu enter tekla txanpona botatzeko\n")

    
    aurpegia_gurutzea = random.randint(2,3)

#Nik pentsatu

    if aurpegia_gurutzea == 2:
        ni_pentsatu= random.randint(1,100)

        zu_proposamen = int(input("Aurpegia atera da, nik pentsatuko dut zenbaki bat. Esan zer zenbaki pentsatu dudan zure ustez:"))
        sailakerak = 1
        
        while True:

            
            if ni_pentsatu == zu_proposamen:
                print("Oso ongi! Irabazi duzu!")
                partida_eginak += 1
                zu_partida_irabaziak += 1
                break
            
            elif ni_pentsatu > zu_proposamen:
                print("Ez, ez da zenbaki hori, nire zenbakia altuagoa da.")
                sailakerak += 1
                

                if sailakerak == 10:
                    print("Barkatu, sailakerak bukatu zaizkizu. Galdu duzu.")
                    partida_eginak += 1
                    ni_partida_irabaziak += 1
                    sailakerak = 0
                    break
                
            elif ni_pentsatu < zu_proposamen:
                print("Ez, ez da zenbaki hori, nire zenbakia baxuagoa da.")
                sailakerak += 1
                

                if sailakerak == 10:
                    print("Barkatu, sailakerak bukatu zaizkizu. Galdu duzu.")
                    partida_eginak += 1
                    ni_partida_irabaziak += 1
                    sailakerak = 0
                    break

            else:
                print("Zenbaki hori ez da onargarria.")

            zu_proposamen = int(input("Sailatu berriro:"))

        print("Bukatu dugu partida, goazen hurrengoa hastera.")

#Zuk pentsatu

    if aurpegia_gurutzea == 3:

        print("Gurutzea atera da, pentsatu zenbaki bat. Ondoren, nik zenbakiak proposatuko dizkizut eta zuk pentsatu duzuna baiko altuagoa, baxuagoa ala berdina den esan.\n")
        ni_proposamen = random.randint(1,100)
        print("Nik uste dut...",ni_proposamen, "zenbakia pentsatu duzula:")
        zu_pentsatu = input("")

        sailakerak = 0
        muga_altua = 100
        muga_baxua = 1
        
        while True:
            
                        
            if zu_pentsatu == "berdina":
                print("Benetan! Orduan irabazi dut!")
                partida_eginak += 1
                ni_partida_irabaziak += 1
                break

            elif zu_pentsatu == "baxuagoa":
                while ni_proposamen <= muga_altua:
                    muga_altua -= 1
                ni_proposamen = random.randint(muga_baxua,muga_altua)
                sailakerak += 1
                
                if sailakerak == 10:
                    print("O ez! Galdu dut!")
                    partida_eginak += 1
                    zu_partida_irabaziak += 1
                    sailakerak = 0
                    break

            elif zu_pentsatu == "altuagoa":
                while ni_proposamen >= muga_baxua:
                    muga_baxua += 1
                ni_proposamen = random.randint(muga_baxua,muga_altua)
                sailakerak += 1
                                 
                if sailakerak == 10:
                    print("O ez! Galdu dut!")
                    partida_eginak += 1
                    zu_partida_irabaziak += 1
                    sailakerak = 0
                    break
            else:
                ni_pentsatu = input("Mesedez, erantzun zehazki zenbakia \"baxuagoa\", \"altuagoa\" ala \"berdina\" den:")

            print("A! Orduan",ni_proposamen,"zenbakia pensatzen duzula uste dut")
            zu_pentsatu = input("")
         
        print("Ongi, bukatu dugu partida. Goazen hurrengoa hastera")

print("A ez! Barkatu! Bukatu dugu.")

if zu_partida_irabaziak < ni_partida_irabaziak:
    print("Zuk", zu_partida_irabaziak, "partida irabazi dituzu, eta nik", ni_partida_irabaziak,"partida. Beraz, nik irabazi dut.")

elif zu_partida_irabaziak > ni_partida_irabaziak:
    print("Zuk", zu_partida_irabaziak, "partida irabazi dituzu, eta nik", ni_partida_irabaziak,"partiada. Beraz, zuk irabazi duzu. Zorionak!")
else:
    print("Zuk", zu_partida_irabaziak, "partida irabazi dituzu, eta nik", ni_partida_irabaziak,"partiada. Beraz, enpatea egon da.")

input("Sakatu enter tekla jolasetik ateratzeko.")