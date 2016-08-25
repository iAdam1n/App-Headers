/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface GGLInstanceIDCheckinPreferences : NSObject {

	NSString* _deviceID;
	NSString* _secretToken;
	NSString* _deviceDataVersion;
	NSString* _digest;
	NSString* _versionInfo;
	NSMutableDictionary* _gServicesData;
	long long _lastCheckinTimestampMillis;

}

@property (nonatomic,copy) NSString * deviceID;                                 //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSString * secretToken;                              //@synthesize secretToken=_secretToken - In the implementation block
@property (nonatomic,copy) NSString * deviceDataVersion;                        //@synthesize deviceDataVersion=_deviceDataVersion - In the implementation block
@property (nonatomic,copy) NSString * digest;                                   //@synthesize digest=_digest - In the implementation block
@property (nonatomic,copy) NSString * versionInfo;                              //@synthesize versionInfo=_versionInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * gServicesData;               //@synthesize gServicesData=_gServicesData - In the implementation block
@property (assign,nonatomic) long long lastCheckinTimestampMillis;              //@synthesize lastCheckinTimestampMillis=_lastCheckinTimestampMillis - In the implementation block
+(id)checkinDeviceIDFromKeychainContent:(id)arg1 ;
+(id)checkinSecretFromKeychainContent:(id)arg1 ;
+(id)checkinKeychainContent:(id)arg1 forIndex:(int)arg2 ;
+(id)preferencesFromKeychainContents:(id)arg1 ;
-(id)checkinKeychainContent;
-(id)initWithDeviceID:(id)arg1 secretToken:(id)arg2 ;
-(void)updateWithCheckinPlistContents:(id)arg1 ;
-(void)reset;
-(BOOL)hasValidCheckinInfo;
-(NSString *)secretToken;
-(NSString *)deviceDataVersion;
-(long long)lastCheckinTimestampMillis;
-(NSMutableDictionary *)gServicesData;
-(id)checkinPlistContents;
-(void)setSecretToken:(NSString *)arg1 ;
-(void)setDeviceDataVersion:(NSString *)arg1 ;
-(void)setGServicesData:(NSMutableDictionary *)arg1 ;
-(void)setLastCheckinTimestampMillis:(long long)arg1 ;
-(NSString *)digest;
-(void)setDigest:(NSString *)arg1 ;
-(NSString *)versionInfo;
-(void)setVersionInfo:(NSString *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

