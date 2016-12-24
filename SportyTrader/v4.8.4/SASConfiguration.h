/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface SASConfiguration : NSObject
+(id)md5HexDigest:(id)arg1 ;
+(id)sharedInstance;
+(id)userAgent;
+(id)appBundleIdentifier;
+(id)appName;
+(id)IPAddress;
+(id)architecture;
-(void)setSiteID:(long long)arg1 baseURL:(id)arg2 ;
-(unsigned long long)masterURLTimestamp;
-(void)setMasterURLTimestamp:(unsigned long long)arg1 ;
-(void)resetUID;
-(void)disableIdentifierHashing;
-(double)locationHeading;
-(long long)siteID;
-(void)setCoordinate:(CGSize)arg1 accuracy:(double)arg2 ;
-(void)setTestModeEnabled:(BOOL)arg1 ;
-(void)enableIdentifierHashing;
-(BOOL)isInTestMode;
-(void)dealloc;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(id)baseURL;
-(void)setHeading:(double)arg1 ;
-(void)setBaseURL:(id)arg1 ;
-(CGSize)locationCoordinate;
-(double)locationAccuracy;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isLoggingEnabled;
-(id)UID;
@end
