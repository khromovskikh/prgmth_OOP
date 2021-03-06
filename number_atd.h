#pragma once
#ifndef __number_atd__
#define __number_atd__
#include <fstream>
using namespace std;
namespace simple_numbers 
{
	class number 
	{
	public:
		string measure;
		static number* in(ifstream &ifst);
		virtual void in_data(ifstream &ifst);
		virtual float to_float() = 0;
		virtual void multi_method(number *other,ofstream &ofst) = 0;
		virtual void mm_complex(ofstream &ofst) = 0;
		virtual void mm_rational(ofstream &ofst) = 0;
		virtual void mm_pol_coor(ofstream &ofst) = 0;
		bool �ompare_num(number &other);
		virtual void out(ofstream &ofst);
		virtual void filter_complex(ofstream &ofst);
	protected:
		number() {};
	};
} // end simple_numbers namespace
#endif