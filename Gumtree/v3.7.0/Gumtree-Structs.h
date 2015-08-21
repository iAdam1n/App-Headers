/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSOutputStream, NSData, NSString, TAGPBGeneratedMessage, TAGPBArray, TAGPBEnumDescriptor;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_EC0;

typedef struct {
	SCD_Struct_EC0 field1;
	SCD_Struct_EC0 field2;
} SCD_Struct_EC1;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

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

typedef struct {
	CGPoint center;
	CGPoint span;
} SCD_Struct_EC6;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
} SCD_Struct_EC7;

typedef struct _NSZone* NSZoneRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
} SCD_Struct_XM10;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct dispatch_group_s* dispatch_group_sRef;

typedef struct _darwin_sigaltstack {
	void ss_sp;
	unsigned long long ss_size;
	int ss_flags;
} darwin_sigaltstack;

typedef struct __CFUUID* CFUUIDRef;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct PLCrashHostInfoVersion {
	unsigned long long major;
	unsigned long long minor;
	unsigned long long revision;
} PLCrashHostInfoVersion;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_PL17;

typedef struct plcrash_mach_exception_port_set {
	unsigned count;
	unsigned masks[13];
	unsigned ports[13];
	int behaviors[13];
	int flavors[13];
} plcrash_mach_exception_port_set;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct TAGPBInputBufferState {
	char* bytes;
	unsigned long long bufferSize;
	unsigned long long bufferPos;
	unsigned long long currentLimit;
} TAGPBInputBufferState;

typedef struct __CFString* CFStringRef;

typedef struct TAGPBOutputBufferState {
	char* bytes;
	unsigned long long size;
	unsigned long long position;
	NSOutputStream* output;
} TAGPBOutputBufferState;

typedef union {
	BOOL valueBool;
	unsigned valueFixed32;
	int valueSFixed32;
	float valueFloat;
	unsigned long long valueFixed64;
	long long valueSFixed64;
	double valueDouble;
	int valueInt32;
	long long valueInt64;
	int valueSInt32;
	long long valueSInt64;
	unsigned valueUInt32;
	unsigned long long valueUInt64;
	NSData* valueData;
	NSString* valueString;
	TAGPBGeneratedMessage* valueMessage;
	TAGPBGeneratedMessage* valueGroup;
	int valueEnum;
	TAGPBArray* valueArray;
	id valueObject;
} SCD_Union_TA24;

typedef union {
	TAGPBEnumDescriptor* enumDescriptor_;
	/*function pointer*/void* enumVerifier_;
} SCD_Union_TA25;

typedef struct TAGPBGeneratedMessage_Storage* TAGPBGeneratedMessage_StorageRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __asl_object_s* asl_object_sRef;

typedef struct CGImage* CGImageRef;

typedef struct CGContext* CGContextRef;

typedef struct __SecRandom* SecRandomRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_AT36;

typedef struct __CFBinaryHeap* CFBinaryHeapRef;

typedef struct GADAdSize {
	CGSize size;
	unsigned long long flags;
} GADAdSize;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_GA39;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct __CTLine* CTLineRef;

typedef struct __CTRun* CTRunRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;
