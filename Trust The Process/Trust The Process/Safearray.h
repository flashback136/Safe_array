#pragma once

#include <vector>
#include <iostream>




	typedef int i;
 	typedef float f;

	class Safearray
	{
	protected:
	std::vector<i> myVector;
	std::vector <f> myVector1;
	double sr_ar;
	public:
		
		Safearray();
		~Safearray();


		void setElement(i first, i second,i third) {
			myVector.insert(myVector.end(), first);
			myVector.insert(myVector.end(), second);
			myVector.insert(myVector.end(), third);
		}
		 i getValue(i number) {
			int value = myVector[number];
			return value;
		}

		 void setElement1(f first, f second, f third) {
			 myVector1.insert(myVector1.end(), first);
			 myVector1.insert(myVector1.end(), second);
			 myVector1.insert(myVector1.end(), third);
		 }
		 f getValue1(f number) {
			 float value = myVector1[number];
			 return value;
		 }

		template <class T> 
		void count_sr(T first , T second , T third) {
			 sr_ar = (first + second + third) / 3;	
		}

		double getSr_ar() {
			return sr_ar;
		}



	};



