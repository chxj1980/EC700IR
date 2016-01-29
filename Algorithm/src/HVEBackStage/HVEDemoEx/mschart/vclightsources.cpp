// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "vclightsources.h"

// Dispatch interfaces referenced by this interface
#include "vclightsource.h"


/////////////////////////////////////////////////////////////////////////////
// CVcLightSources properties

/////////////////////////////////////////////////////////////////////////////
// CVcLightSources operations

long CVcLightSources::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CVcLightSource CVcLightSources::Add(float X, float Y, float Z, float Intensity)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		X, Y, Z, Intensity);
	return CVcLightSource(pDispatch);
}

void CVcLightSources::Remove(short Index)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

CVcLightSource CVcLightSources::GetItem(short Index)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		Index);
	return CVcLightSource(pDispatch);
}
