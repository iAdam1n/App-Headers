/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:47:05 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE1D7681-1F8E-4F70-B735-8E445CD8E257/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface OASAppBuildEmbeddedBuild : NSObject {

	BOOL _installableByHostDevice;
	BOOL _compatible;
	NSString* _bundleID;
	NSURL* _iconURL;
	NSArray* _deviceFamily;
	NSString* _includesStatement;
	NSString* _compatibilityStatement;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                              //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) NSArray * deviceFamily;                         //@synthesize deviceFamily=_deviceFamily - In the implementation block
@property (assign,nonatomic) BOOL installableByHostDevice;                 //@synthesize installableByHostDevice=_installableByHostDevice - In the implementation block
@property (nonatomic,copy) NSString * includesStatement;                   //@synthesize includesStatement=_includesStatement - In the implementation block
@property (assign,nonatomic) BOOL compatible;                              //@synthesize compatible=_compatible - In the implementation block
@property (nonatomic,copy) NSString * compatibilityStatement;              //@synthesize compatibilityStatement=_compatibilityStatement - In the implementation block
+(id)embeddedBuildFromDictionary:(id)arg1 ;
-(BOOL)installableByHostDevice;
-(BOOL)compatible;
-(NSString *)includesStatement;
-(NSString *)compatibilityStatement;
-(void)setCompatible:(BOOL)arg1 ;
-(void)setDeviceFamily:(NSArray *)arg1 ;
-(void)setCompatibilityStatement:(NSString *)arg1 ;
-(void)setInstallableByHostDevice:(BOOL)arg1 ;
-(void)setIncludesStatement:(NSString *)arg1 ;
-(NSURL *)iconURL;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSArray *)deviceFamily;
-(void)setIconURL:(NSURL *)arg1 ;
@end
