/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/NSCopying.h>

@class NSArray, NSDate, NSString, NSMutableDictionary, GADLocation, NSNumber, NSDictionary;

@interface GADRequest : NSObject <NSCopying> {

	NSArray* _testDevices;
	long long _gender;
	NSDate* _birthday;
	NSArray* _keywords;
	NSString* _contentURL;
	NSString* _requestAgent;
	NSMutableDictionary* _networkExtrasMap;
	GADLocation* _location;
	NSNumber* _childDirectedTreatment;
	NSDictionary* _privateMediationExtras;
	NSArray* _formatParameters;
	long long _responseType;
	unsigned long long _correlationID;

}

@property (nonatomic,copy) NSArray * testDevices;                                 //@synthesize testDevices=_testDevices - In the implementation block
@property (assign,nonatomic) long long gender;                                    //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSDate * birthday;                                     //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                                    //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) NSString * contentURL;                                 //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSString * requestAgent;                               //@synthesize requestAgent=_requestAgent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * networkExtrasMap;              //@synthesize networkExtrasMap=_networkExtrasMap - In the implementation block
@property (nonatomic,copy) GADLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSNumber * childDirectedTreatment;                     //@synthesize childDirectedTreatment=_childDirectedTreatment - In the implementation block
@property (nonatomic,copy) NSDictionary * privateMediationExtras;                 //@synthesize privateMediationExtras=_privateMediationExtras - In the implementation block
@property (nonatomic,copy) NSArray * formatParameters;                            //@synthesize formatParameters=_formatParameters - In the implementation block
@property (assign,nonatomic) long long responseType;                              //@synthesize responseType=_responseType - In the implementation block
@property (assign,nonatomic) unsigned long long correlationID;                    //@synthesize correlationID=_correlationID - In the implementation block
+(id)sdkVersionIdentifiers;
+(id)sdkVersionMetadata;
+(id)extendedSDKVersionNumber;
+(long long)requestTypeFromString:(id)arg1 ;
+(id)sdkVersion;
+(id)request;
+(void)initialize;
-(void)setLocationWithDescription:(id)arg1 ;
-(void)setTestDevices:(NSArray *)arg1 ;
-(id)adNetworkExtrasFor:(Class)arg1 ;
-(void)registerAdNetworkExtras:(id)arg1 ;
-(void)setLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 ;
-(unsigned long long)correlationID;
-(void)setCorrelationID:(unsigned long long)arg1 ;
-(NSArray *)testDevices;
-(id)networkExtrasAdditionalParameters;
-(void)setFormatParameters:(NSArray *)arg1 ;
-(void)setNetworkExtrasMap:(NSMutableDictionary *)arg1 ;
-(void)setPrivateMediationExtras:(NSDictionary *)arg1 ;
-(void)setChildDirectedTreatment:(NSNumber *)arg1 ;
-(void)setRequestAgent:(NSString *)arg1 ;
-(void)removeAdNetworkExtrasFor:(Class)arg1 ;
-(BOOL)isATestDevice;
-(id)genderString;
-(id)birthdayString;
-(id)contentURLString;
-(id)analyticsIDs;
-(NSArray *)formatParameters;
-(void)tagForChildDirectedTreatment:(BOOL)arg1 ;
-(void)setBirthdayWithMonth:(long long)arg1 day:(long long)arg2 year:(long long)arg3 ;
-(NSString *)requestAgent;
-(NSMutableDictionary *)networkExtrasMap;
-(NSNumber *)childDirectedTreatment;
-(NSDictionary *)privateMediationExtras;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
-(void)setContentURL:(NSString *)arg1 ;
-(NSString *)contentURL;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GADLocation *)location;
-(void)setResponseType:(long long)arg1 ;
-(id)parameters;
-(void)setLocation:(GADLocation *)arg1 ;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
-(long long)responseType;
@end

