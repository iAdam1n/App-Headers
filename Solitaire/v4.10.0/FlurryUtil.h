/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@interface FlurryUtil : NSObject
+(char*)getId;
+(CGRect)deviceScreenBounds;
+(id)createParamKeysDictFromUrlParams:(id)arg1 paramsHeader:(id*)arg2 paramsKVString:(id*)arg3 ;
+(void)incrementCounter:(id)arg1 locationName:(char*)arg2 ;
+(long long)getSystemVersionAsAnInteger;
+(NSRange)flurryRangeOfData:(id)arg1 inData:(id)arg2 ;
+(BOOL)canvasInLandscapeRight;
+(BOOL)canvasInLandscape;
+(id)encodeIllegalCharsToPercentEscapeString:(id)arg1 ;
+(id)hashDataToHexString:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)getFlurryId;
+(id)getIdentifierForVendor;
+(id)encodeToPercentEscapeString:(id)arg1 ;
+(void)assertThreadIsNotMain;
+(void)assertRunningOnQueue:(id)arg1 ;
+(BOOL)canvasInLandscapeLeft;
+(BOOL)canvasInPortraitUpsideDown;
+(int)dataChecksum:(id)arg1 ;
+(double)reduceLocationPrecision:(double)arg1 ;
+(id)getCanvasOrientation;
+(id)decodeFromPercentEscapeString:(id)arg1 ;
+(void)substituteParamsInString:(id)arg1 withValuesDictionary:(id)arg2 forPattern:(id)arg3 ;
+(id)hashData:(id)arg1 ;
+(id)firstElementFromArray:(id)arg1 ;
+(id)md5String:(id)arg1 ;
+(unsigned long long)getFreeDiskspace;
+(id)filePathDirectory;
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
+(BOOL)isInWatchExtension;
+(id)dataFromHexString:(id)arg1 ;
+(void)archiveDictionary:(id)arg1 toFile:(id)arg2 ;
+(unsigned)uint32FromNSUInteger:(unsigned long long)arg1 ;
+(void)generateChecksumTable;
+(char*)getModule;
+(char*)getMgr;
+(char*)getUser;
+(char*)getLimit;
+(void)incrementCounter:(id)arg1 ;
+(id)allCounters;
+(void)decrementCounter:(id)arg1 ;
+(BOOL)canvasInLandscape:(id)arg1 ;
+(BOOL)canvasInLandscapeRight:(id)arg1 ;
+(BOOL)canvasInLandscapeLeft:(id)arg1 ;
+(BOOL)deviceInLandscape;
+(void)setShowErrorInLogEnabled:(BOOL)arg1 ;
+(void)cleanupStoredIdentifierForVendor;
+(id)generateCFUUIDBasedUID;
+(void)decrementCounter:(id)arg1 locationName:(char*)arg2 ;
+(void)printCounters;
+(void)setFlurryOptOut:(BOOL)arg1 ;
+(BOOL)updateIfChangedCookieValue:(id)arg1 forCookieKey:(id)arg2 ;
+(BOOL)isAdTrackingEnabled;
+(int)logLevel;
+(void)setLogLevel:(int)arg1 ;
+(void)handleException:(id)arg1 ;
+(BOOL)isRetina;
+(BOOL)isIPad;
+(BOOL)isInBackground;
+(id)preferredLanguage;
+(id)devicePlatform;
@end
