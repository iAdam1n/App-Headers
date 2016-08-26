/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBSDKAppEventsDeviceInfo : NSObject {

	NSString* _carrierName;
	NSString* _timeZoneAbbrev;
	unsigned long long _remainingDiskSpaceGB;
	NSString* _timeZoneName;
	NSString* _bundleIdentifier;
	NSString* _longVersion;
	NSString* _shortVersion;
	NSString* _sysVersion;
	NSString* _machine;
	NSString* _language;
	unsigned long long _totalDiskSpaceGB;
	unsigned long long _coreCount;
	double _width;
	double _height;
	double _density;
	long long _lastGroup1CheckTime;
	BOOL _isEncodingDirty;
	NSString* _encodedDeviceInfo;

}
+(id)sharedDeviceInfo;
+(unsigned)_coreCount;
+(id)_getTotalDiskSpace;
+(id)_getCarrier;
+(id)_getRemainingDiskSpace;
+(unsigned)_readSysCtlUInt:(int)arg1 type:(int)arg2 ;
+(void)extendDictionaryWithDeviceInfo:(id)arg1 ;
+(void)initialize;
-(id)encodedDeviceInfo;
-(void)_collectPersistentData;
-(BOOL)_isGroup1Expired;
-(void)_collectGroup1Data;
-(id)_generateEncoding;
-(void)setEncodedDeviceInfo:(id)arg1 ;
-(id)init;
@end
