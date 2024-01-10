#include <iostream>
#include <string>
#include <vector>
using namespace std;

//My code
class solution {
	//solution solution();
public:

	string reverseVowels(string s) {
		string result = "";
		//string store = "";
		//vector<int> vowelsPointer;
		string vowelsPointer = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
				|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
				vowelsPointer.push_back(i);
				//vowelsPointer = vowelsPointer + to_string(i);
				//store = store + "*";
				result = result + "*";

			}
			else {
				//vowelsPointer.push_back(0);
				//store = store + s[i];
				result = result + s[i];
			}
		}
		//cout << store << endl;
		//vowelsPointer.reserve();

		for (int i = 0; i < s.size(); i++) {
			//cout << vowelsPointer[i] << endl;
			//result == "*" ? result[i] = s[vowelsPointer.back()] : ;
			if (result[i] == '*') {
				/*result[i] = s[vowelsPointer.back()];
				vowelsPointer.pop_back();*/

				result[i] = s[vowelsPointer.back()];
				vowelsPointer.pop_back();
			}
			else {
				//result[i] = result + store[i];
			}
			//vowelsPointer[i] == 0? result = result+s[i] : 
		}
		cout << result << endl;


		return result;
	}

};
int main() {
	solution myCode;
	string s = "A man, a plan, a cameo, Zena, Bird, Mocha, Prowel, a rave, Uganda, Wait, a lobola, Argo, Goto, Koser, Ihab, Udall, a revocation, Ebarta, Muscat, eyes, Rehm, a cession, Udella, E-boat, OAS, a mirage, IPBM, a caress, Etam, FCA, a mica, Ojai, Lebowa, Yaeger, a barge, Rab, Alsatian, a mod, Adv, a rps, Ileane, Valeta, Grenada, Hetty, Fayme, REME, HCM, Tsan, Owena, Tamar, Yompur, Isa, Nil, Lorrin, Riksdag, Mona, Ronn, O'Conner, Kirk, an okay, Nafl, Lira, Robi, Rame, FIFA, a need, Rodi, Muharram, Ober, a coma, carri, Hwang, Taos, Salado, Olfe, Camag, Kdar, a hdkf, Jemina, Nadler, Ehud, Rutan, a baster, Ebn, aedegi, a gals, Ira, Tepper, a minim, a gowd, Ulda, Ogawa, TSgt, Callida, Rodl, Ewart, seraphs, Ain, Newgate, Vaden, navettes, Sabah, Swat, Luci, Pam, Arda, pools, a boar, Akira, Gally, CSC, Avalon, a tuba, AAM, Artima, AFB, Selah, wellies, Ronald, BArch, nullos, Uni, an aet, Nadabus, Tyree, Poop, Sennar, CAB, a nanny, Let, Efahan, Dasya, Moon, Ikaria, Nam, Lamar, Egor, Rover, Tanana, Loki, MIP, PharD, endia, rates, Punan, Eba, Alva, Paine, BEF, Fagan, nugae, taws, Una, Woll, a tab, CSE, Kamerad, YCL, a melt, Diehl, Lewellen, Sacci, Reggi, RFA, BSA, naoi, Kuyp, Oceanic, Sipple, Yalu, Kosey, nota, talers, Frida, a wab, Musset, Aoede, Erick, a reign, Attica, Marge, Leta, Mat, Naboth, Saphra, Gila, Arany, Costa, Fasta, Mabel, Udine, Derte, Medill, Erotes, RuPaul, Uzzi, Waler, Omak, a kaif, Freed, a doc, a marga, Nilla, Dole, USPO, Ogata, tubas, somata, Dash, Danika, Salida, Fiji, Emili, Kazak, Oder, CAC, Ilocanos, Nudd, Uda, Susette, Diskin, Numitor, Munn, a tsarina, Valle, Soraya, Masan, Ezaria, Teri, Luks, UNDRO, Naida, Wal, a major, Stelu, OGO, Dilan, Iapetus, an areg, a jacal, Nessi, R. Bayer, Wotan, a tip, Tabb, a stonk, a habu, Salli, Major, Berosus, a tepal, Layla, Gitana, Cold, Ogun, Sadie, Bowen, Rock, Cila, Wey, a halo, Omari, Albniz, Osana, Illimani, Laura, Mitzi, Dacey, a grill, Enyo, Leno, Snashall, a moot, an amt, a tike, Lamaism, Ygerne, Gainer, ilia, Vala, Alia, Keli, Codie, Bikini, Taliesin, Eyde, Baiel, DAgr, Obara, Caracas, Niven, Airlie, Vadim, Seda, a rata, Utas, Olathe, Pohai, Tatum, obli, Nadab, a nook, Corabel, a cercus, Levona, Sida, Sapir, Otilia, MSIE, Mbm, ILS, Opis, Sudra, Lea, Grieg, a robalo, Pack, an amp, Otaru, Savil, Spoor, Tarapoto, Kadner, Everard, Fleur, Nita, Palos, origamis, Lina, Naoma, Lananna, Erdei, trymata, Paza, Mano, Musa, Toy, Raff, U-boat, Neiman, Illampu, Osanna, Dinah, Pittel, a valor, Itonia, Tamra, Kamal, Edana, Cly, Redd, a tin, Gaza, CNS, Ultan, a haik, Nedra, Hyo, FRCS, orgies, a tub, Rabaul, Canea, Calva, Koren, Elgon, a trf, Aesir, Tema, Leda, Tica, DJS, Roe, Lanam, Haida, Bezwada, a grub, Lawry, Sarge, Lelah, Cimon, a vote, Naor, Alcatraz, O'Malley, Ivis, IADB, Roswell, Eboh, Tosca, Sik, Naylor, a kore, IPY, Al Pacino, valses, a cesura, ducs, a kale, Bald, Etta, Verena, RCS, Etan, an ova, Shira, Bar, CCP, Murat, Somnus, Mahren, Rubens, IAS, Berk, a bod, cates, a yam, a ten, a zakat, a jazy, Roca, a den, Sum, Edris, a berg, Ona, Melli, Wran, Dobro, Niagara, Hopis, LaSorella, Backer, Ragnar, Okla, Anitra, Neddra, hamli, Snapp, Ellyn, Iva, Des, Behar, OFris, a puce, Yenan, Averell, Eufaula, LBP, Wiak, Bob, a kaiak, a susu, Shani, Bib, Laon, a teacup, Gond, Yahgans, a loop, Virgo, Sina, an one, Wina, a jake, Kanaka, a site, Ball, Orkhon, Sung, IPA, a col, anni, a tramline, Bello, Cindy, OLLA, Leibniz, Erbil, Apulia, Pammi, Rgen, Yard, Lad, Tera, a dan, Ito, Rashi, Ewald, Omer, Cagle, byre-men, Say, Gilud, Omar, Omaha, RPO, Likasi, Putnem, Lohman, Irus, PYT, a bor, Baber, Ohare, Fallon, Egan, a dinar, Aloke, Kyra, Ranie, Norty, Lena, Pip, a grebe, Ino, LCT, Ialysus, a spa, Curt, a mall, Ard, Calen, Outhe, Parke, Bubalo, Tamanaha, Manado, opai, Gart, Ziv, a bit, a roof, masais, lekanai, Latia, Watt, Utley, a glia, Tait, an odd, Logan, Airedale, Bamako, Rianna, Bruyn, a z-axis, OPA, kakapos, a gid, Neff, a radar, Ewold, crases, Ibiza, RMA, Tula, Essen, Ulane, Guedalla, Baroda, Maren, Naman, Nina, a stir, a mary, Tia, Baese, Onega, Duhl, Uball, a tsade, Mahla, Dayle, Eno, a buhr, Apl, a bag, Evita, Garbo, Calli, Rema, Tama, a cera, Nast, Rahab, MeV, Ola, a cod, Uele, a fartlek, a dig, Irbil, a madame, Nika, Arne, Mada, Carey, Gehenna, Idabel, Ganny, Lyman, Y-level, Elora, Pahl, IHS, Taka, Naga, Ethe, YWCA, Nes, Billie, Nos, Laetitia, Hedy, E.H. Moore, Lasala, Tina Arena, a lug, Ade, Ens, Sumo, Cons, an aider, a wallow, Estron, Sang, Isadora, Heda, Cranaus, a tahr, Riba, Dina, Mas, deti, Nuri, Marr, a floss, a milady, a rfb, Solley, lares, a mog, Ladew, a coll, Ebba, Algeria, LCVP, Minabe, Zobe, Sassari, Dasi, caca, Mrike, Rajab, a sacaton, IMF, CSA, an aug, Ina, Sacco, Napa, Nahama, Rechaba, Roos, Asar, a dor, EHFA, John, Imitt, EDC, Eraste, Donella, Cmon, Rosol, Rafaela, Derina, Ubald, Siwash, Ariew, a gale, pis, Sibel, Patsis, Erasme, Edan, Nireus, Sita, Ion, Matsys, Tebet, IHD, Lihue, Morie, Doi, R. Ravi, varia, Davon, a moror, Epp, Arcaro, Tabor, Paros, Netaji, Gannes, a fit, a load, Aruba, Bebel, Gabel, BAg, Nepal, LBJ, SbW, Oralie, Waki, Sadler, egesta, INH, Orton, a ";
	//s = "LeetCode";
	cout << myCode.reverseVowels(s) << endl;
}


ChatGPT
class Solution {
public:
	bool isVowel(char c) {
		return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	}
	string reverseVowels(string s) {
		int left = 0, right = s.size() - 1;

		while (left < right) {
			// Find the next vowel from the left
			while (left < right && !isVowel(s[left])) {
				left++;
			}

			// Find the next vowel from the right
			while (left < right && !isVowel(s[right])) {
				right--;
			}

			// Swap vowels
			if (left < right) {
				swap(s[left], s[right]);
				left++;
				right--;
			}
		}

		return s;
	}
};