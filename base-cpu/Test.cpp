#include <iostream>
#include "cpu.h"

int main(int argc, char* argv[]) 
{
	base::CPU *cpu = new base::CPU();
	std::cout << cpu->cpu_brand() << std::endl;
	std::cout << 	"mmx_:"<< cpu->has_mmx() <<std::endl <<
	"sse_:"<< cpu->has_sse() <<std::endl <<
	"sse2_:"<< cpu->has_sse2() <<std::endl <<
	"sse3_:"<< cpu->has_sse3() <<std::endl <<
	"ssse3_:"<< cpu->has_ssse3() <<std::endl <<
	"sse41_:"<< cpu->has_sse41() <<std::endl <<
	"sse42_:"<< cpu->has_sse42() <<std::endl <<
	"avx_:"<< cpu->has_avx() <<std::endl <<
	"avx_hardware_:"<< cpu->has_avx_hardware() <<std::endl <<
	"aesni_:"<< cpu->has_aesni() <<std::endl <<
	"non_stop_time_stamp_counter_:"<< cpu->has_non_stop_time_stamp_counter() <<std::endl <<
	"broken_neon_:"<< cpu->has_broken_neon() <<std::endl;
	system("pause");
	return 0;
}