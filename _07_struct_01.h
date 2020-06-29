#pragma once

namespace A {

	const char* name = "홍길동"; //상수문자열이라서 const를 적어줌

	namespace Score {

		struct Student {

			char name[20];
			int kor;
			int math;
			int eng;
		};
	}
}

