/**
 * Auther : M7md Rf3t
 * Description : header file for strilaztion
 * @Gethup:https://gist.github.com/m7mdrf3t/d57f8623533921a408fe969092784e29
 */

#ifndef STR_LIB
#define STR_LIB
#include <stdint.h>
//#define isSystemsOk  false 

class Str_lib
{
public:
	Str_lib();
	~Str_lib();
	int16_t SGReads();
	int16_t presureReads();
	int16_t tempRead();
	void pulses(bool _stat ,uint32_t _afdly);
	void Drying(uint32_t _dt , int16_t _zP , int16_t _ft , uint32_t ft);
	void Vaccume(int16_t _prNd , uint32_t nt_ex_t);
	void Steaming(uint32_t nt_ex_tm,bool _hS , int16_t G_ct , int16_t G_prSe , int16_t G_SGt, int16_t G_ST_min_temp  );
	bool checkSystems(void);
	void heating(uint32_t he_Du , bool he_Stt , int16_t G_req_temp , int16_t G_ST_max_temp , int16_t G_req_pressure , int16_t G_ST_min_temp );
	void OpenSV(uint16_t pressToVacc);
	void ems7(void); 
	void Treminate(void);
	void EEPROM_Update(uint8_t _pNumb);
	uint8_t EEPROM_chk(uint8_t address);
	void Cycle_choo();
	void Main_cycle(uint8_t t_Cyc,uint8_t _he_T_To , uint8_t Dry_T_To);

	
private:
	void Error(int8_t ID);
	void display(char * _cmnt , int d_t );
	void Readings(void);
	void lcd_Readings(void);
	void lcd_display(bool _trim_bfr , char* _comm1 , char* _comm2 , bool _trim_afr ,bool rd);
	void SteamGenerator(int16_t g_t , bool isHeat);
};
#endif