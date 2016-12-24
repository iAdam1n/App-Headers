/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct __SecTrust* SecTrustRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_MO7;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CTFont* CTFontRef;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	long long field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_AF12;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct {
	BOOL field1;
	unsigned char field2;
	BOOL field3;
	unsigned long long field4;
} SCD_Struct_SR16;

typedef struct __CFData* CFDataRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_TW21;

typedef struct {
	unsigned major;
	unsigned minor;
	unsigned bugfix;
} SCD_Struct_FA22;

typedef struct CLSMachOFile {
	int fd;
	unsigned long long mappedSize;
	void mappedFile;
} CLSMachOFile;

typedef struct CLSMachOSlice {
	void startAddress;
	int cputype;
	int cpusubtype;
} CLSMachOSlice;

typedef struct {
	void field1;
	unsigned long long field2;
	void field3;
	void field4;
	void field5;
} SCD_Struct_CL25;

typedef struct {
	char field1[33];
	BOOL field2;
	SCD_Struct_FA22 field3;
	SCD_Struct_FA22 field4;
	CLSMachOSlice field5;
	SCD_Struct_CL25 field6;
	long long field7;
} SCD_Struct_CL26;

typedef struct {
	char* field1;
	void field2;
	BOOL field3;
	void field4;
	char* field5;
	char* field6;
	char* field7;
	char* field8;
	char* field9;
	unsigned field10;
	BOOL field11;
	BOOL field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
} SCD_Struct_CL27;

typedef struct {
	char* field1;
	char* field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_CL28;
