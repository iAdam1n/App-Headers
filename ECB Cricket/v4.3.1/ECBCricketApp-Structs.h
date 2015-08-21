/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSOutputStream, NSData, NSString, GCKPB_PBGeneratedMessage, GCKPB_PBArray, GCKPB_PBEnumDescriptor;

typedef struct _NSZone* NSZoneRef;

typedef struct CGContext* CGContextRef;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct dispatch_source_s* dispatch_source_sRef;

typedef struct {
	/*function pointer*/void* field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
} SCD_Struct_CL4;

typedef struct {
	int field1;
	int field2;
	char* field3;
	BOOL field4;
	char* field5;
	BOOL field6;
} SCD_Struct_Cr5;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct SSLContext* SSLContextRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct CGColor* CGColorRef;

typedef struct __SecKey* SecKeyRef;

typedef struct __CTFontDescriptor* CTFontDescriptorRef;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_GC15;

typedef struct PBInputBufferState {
	char* bytes;
	unsigned long long bufferSize;
	unsigned long long bufferPos;
	unsigned long long currentLimit;
} PBInputBufferState;

typedef struct __CFString* CFStringRef;

typedef struct PBOutputBufferState {
	char* bytes;
	unsigned long long size;
	unsigned long long position;
	NSOutputStream* output;
} PBOutputBufferState;

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
	GCKPB_PBGeneratedMessage* valueMessage;
	GCKPB_PBGeneratedMessage* valueGroup;
	int valueEnum;
	GCKPB_PBArray* valueArray;
	id valueObject;
} SCD_Union_GC19;

typedef union {
	GCKPB_PBEnumDescriptor* enumDescriptor_;
	/*function pointer*/void* enumVerifier_;
} SCD_Union_GC20;

typedef struct PBGeneratedMessage_Storage* PBGeneratedMessage_StorageRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

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

typedef struct plcrash_mach_exception_port_set {
	unsigned count;
	unsigned masks[13];
	unsigned ports[13];
	int behaviors[13];
	int flavors[13];
} plcrash_mach_exception_port_set;

