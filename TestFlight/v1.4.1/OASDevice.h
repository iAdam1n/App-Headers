/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface OASDevice : NSObject {

	BOOL _isCurrentDevice;
	NSString* _vendorID;
	NSString* _name;
	NSString* _model;
	NSString* _OS;
	NSString* _OSVersion;
	NSString* _OSBuild;
	NSString* _userID;
	NSString* _status;
	NSString* _APNSToken;

}

@property (nonatomic,retain) NSString * vendorID;               //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * model;                  //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * OS;                     //@synthesize OS=_OS - In the implementation block
@property (nonatomic,retain) NSString * OSVersion;              //@synthesize OSVersion=_OSVersion - In the implementation block
@property (nonatomic,retain) NSString * OSBuild;                //@synthesize OSBuild=_OSBuild - In the implementation block
@property (nonatomic,retain) NSString * userID;                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) NSString * status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * APNSToken;              //@synthesize APNSToken=_APNSToken - In the implementation block
@property (assign,nonatomic) BOOL isCurrentDevice;              //@synthesize isCurrentDevice=_isCurrentDevice - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(id)deviceFromDictionary:(id)arg1 ;
+(id)deviceFromJSONData:(id)arg1 ;
+(id)deviceFromJSONString:(id)arg1 ;
+(id)currentDevice;
-(void)setAPNSToken:(NSString *)arg1 ;
-(NSString *)APNSToken;
-(BOOL)isCurrentDevice;
-(NSString *)OS;
-(void)setOS:(NSString *)arg1 ;
-(void)setOSBuild:(NSString *)arg1 ;
-(void)setIsCurrentDevice:(BOOL)arg1 ;
-(NSString *)OSBuild;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(UIImage *)image;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setOSVersion:(NSString *)arg1 ;
-(NSString *)OSVersion;
-(NSString *)vendorID;
-(void)setVendorID:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

