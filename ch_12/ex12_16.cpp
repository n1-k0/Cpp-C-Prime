#include "pch.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<int> up(new int(12));
	//unique_ptr<int> up2 = up;
	/*
		严重性	代码	说明	项目	文件	行	禁止显示状态
		错误(活动)	E1776	无法引用 函数 "std::unique_ptr<_Ty, _Dx>::unique_ptr(const std::unique_ptr<_Ty, _Dx> &)
		[其中 _Ty=int, _Dx=std::default_delete<int>]"
		-- 它是已删除的函数
	*/
	unique_ptr<int> up3(up);
	/*
		严重性	代码	说明	项目	文件	行	禁止显示状态
		错误(活动)	E1776	无法引用 函数 "std::unique_ptr<_Ty, _Dx>::unique_ptr(const std::unique_ptr<_Ty, _Dx> &) 
		[其中 _Ty=int, _Dx=std::default_delete<int>]" 
		-- 它是已删除的函数	

	*/

	return 0;
}
