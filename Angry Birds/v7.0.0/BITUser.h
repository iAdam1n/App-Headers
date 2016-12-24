/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/BITTelemetryObject.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface BITUser : BITTelemetryObject <NSCoding> {

	NSString* _accountAcquisitionDate;
	NSString* _accountId;
	NSString* _userAgent;
	NSString* _userId;
	NSString* _storeRegion;
	NSString* _authUserId;
	NSString* _anonUserAcquisitionDate;
	NSString* _authUserAcquisitionDate;

}

@property (nonatomic,copy) NSString * accountAcquisitionDate;               //@synthesize accountAcquisitionDate=_accountAcquisitionDate - In the implementation block
@property (nonatomic,copy) NSString * accountId;                            //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                            //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * storeRegion;                          //@synthesize storeRegion=_storeRegion - In the implementation block
@property (nonatomic,copy) NSString * authUserId;                           //@synthesize authUserId=_authUserId - In the implementation block
@property (nonatomic,copy) NSString * anonUserAcquisitionDate;              //@synthesize anonUserAcquisitionDate=_anonUserAcquisitionDate - In the implementation block
@property (nonatomic,copy) NSString * authUserAcquisitionDate;              //@synthesize authUserAcquisitionDate=_authUserAcquisitionDate - In the implementation block
-(id)serializeToDictionary;
-(NSString *)anonUserAcquisitionDate;
-(void)setAnonUserAcquisitionDate:(NSString *)arg1 ;
-(NSString *)accountAcquisitionDate;
-(NSString *)storeRegion;
-(NSString *)authUserId;
-(NSString *)authUserAcquisitionDate;
-(void)setAccountAcquisitionDate:(NSString *)arg1 ;
-(void)setStoreRegion:(NSString *)arg1 ;
-(void)setAuthUserId:(NSString *)arg1 ;
-(void)setAuthUserAcquisitionDate:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)isEqualToUser:(id)arg1 ;
@end
