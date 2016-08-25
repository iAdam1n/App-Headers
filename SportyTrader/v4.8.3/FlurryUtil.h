/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface FlurryUtil : NSObject
+(CGRect)deviceScreenBounds;
+(BOOL)isKeyWindowAlertView;
+(id)createParamKeysDictFromUrlParams:(id)arg1 paramsHeader:(id*)arg2 paramsKVString:(id*)arg3 ;
+(void)incrementCounter:(id)arg1 locationName:(char*)arg2 ;
+(long long)getSystemVersionAsAnInteger;
+(NSRange)flurryRangeOfData:(id)arg1 inData:(id)arg2 ;
+(BOOL)canvasInLandscapeRight;
+(BOOL)canvasInLandscape;
+(BOOL)deviceInLandscape;
+(id)hashDataToHexString:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)getMACUID;
+(id)getFlurryId;
+(id)getIdentifierForVendor;
+(id)devicePlatform;
+(id)encodeToPercentEscapeString:(id)arg1 ;
+(BOOL)canvasInLandscapeLeft;
+(BOOL)canvasInPortraitUpsideDown;
+(BOOL)isAdTrackingEnabled;
+(int)dataChecksum:(id)arg1 ;
+(double)reduceLocationPrecision:(double)arg1 ;
+(id)getCanvasOrientation;
+(void)assertThreadIsNotMain;
+(id)decodeFromPercentEscapeString:(id)arg1 ;
+(id)encodeIllegalCharsToPercentEscapeString:(id)arg1 ;
+(id)hashData:(id)arg1 ;
+(id)firstElementFromArray:(id)arg1 ;
+(id)md5String:(id)arg1 ;
+(unsigned long long)getFreeDiskspace;
+(id)filePathDirectory;
+(BOOL)theAppIsActive;
+(BOOL)viewIsVisible:(id)arg1 ;
+(id)getOrientationStrFromInterfaceOrientation:(long long)arg1 ;
+(CGRect)screenBounds:(id)arg1 ;
+(void)substituteParamsInString:(id)arg1 withValuesDictionary:(id)arg2 forPattern:(id)arg3 ;
+(BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1 ;
+(id)safeUnarchiveObjectWithFile:(id)arg1 ;
+(BOOL)hasUserOptedOut;
+(int)int32FromNSInteger:(long long)arg1 ;
+(id)generateCFUUID;
+(id)oldFilePathDirectoryUptilAgentVersion109;
+(id)getFixedSalt;
+(char)deviceIsJailbroken;
+(char)appIsCracked;
+(long long)lastBootTime;
+(unsigned long long)getDiskSize;
+(float)getBatteryLevel;
+(long long)getBatteryState;
+(BOOL)isInWatchExtension;
+(void)archiveDictionary:(id)arg1 toFile:(id)arg2 ;
+(unsigned)uint32FromNSUInteger:(unsigned long long)arg1 ;
+(BOOL)canvasInLandscape:(id)arg1 ;
+(BOOL)canvasInLandscapeRight:(id)arg1 ;
+(BOOL)canvasInLandscapeLeft:(id)arg1 ;
+(void)generateChecksumTable;
+(id)MACString;
+(char*)getModule;
+(char*)getId;
+(char*)getMgr;
+(char*)getUser;
+(char*)getLimit;
+(void)incrementCounter:(id)arg1 ;
+(id)allCounters;
+(void)decrementCounter:(id)arg1 ;
+(id)getIPAddresses;
+(void)setShowErrorInLogEnabled:(BOOL)arg1 ;
+(BOOL)isPortaitOrientationSupportedForWindow:(id)arg1 ;
+(void)cleanupStoredIdentifierForVendor;
+(id)generateCFUUIDBasedUID;
+(void)decrementCounter:(id)arg1 locationName:(char*)arg2 ;
+(void)printCounters;
+(void)setFlurryOptOut:(BOOL)arg1 ;
+(BOOL)updateIfChangedCookieValue:(id)arg1 forCookieKey:(id)arg2 ;
+(id)getIPAddress:(BOOL)arg1 ;
+(int)logLevel;
+(void)setLogLevel:(int)arg1 ;
+(void)handleException:(id)arg1 ;
+(CGRect)screenBounds;
+(BOOL)isRetina;
+(BOOL)isIPad;
+(id)preferredLanguage;
@end

