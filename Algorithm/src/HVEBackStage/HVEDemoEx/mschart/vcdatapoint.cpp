// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "vcdatapoint.h"

// Dispatch interfaces referenced by this interface
#include "vcdatapointlabel.h"
#include "vcbrush.h"
#include "VcPen.h"
#include "vcmarker.h"


/////////////////////////////////////////////////////////////////////////////
// CVcDataPoint properties

/////////////////////////////////////////////////////////////////////////////
// CVcDataPoint operations

CVcDataPointLabel CVcDataPoint::GetDataPointLabel()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcDataPointLabel(pDispatch);
}

CVcBrush CVcDataPoint::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcBrush(pDispatch);
}

CVcPen CVcDataPoint::GetEdgePen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcPen(pDispatch);
}

CVcMarker CVcDataPoint::GetMarker()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcMarker(pDispatch);
}

float CVcDataPoint::GetOffset()
{
	float result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CVcDataPoint::SetOffset(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CVcDataPoint::ResetCustom()
{
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CVcDataPoint::Select()
{
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
