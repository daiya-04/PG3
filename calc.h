#pragma once

template <typename T1,typename T2>
class calc{
private:

	T1 a;
	T2 b;

public:

	calc(T1 a,T2 b) : a(a),b(b){}

	T1 Min() { return static_cast<T1>(a < b ? a : b); }

};

