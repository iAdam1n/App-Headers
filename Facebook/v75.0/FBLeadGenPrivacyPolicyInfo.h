/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator;
@class NSString;

@interface FBLeadGenPrivacyPolicyInfo : NSObject {

	NSString* _content;
	NSString* _internalPolicy;
	NSString* _internalPolicyURL;
	NSString* _advertiserPolicy;
	NSString* _advertiserPolicyURL;
	id<FBNavigationCoordinator> _navigationCoordinator;

}

@property (nonatomic,copy,readonly) NSString * content;                                               //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalPolicy;                                        //@synthesize internalPolicy=_internalPolicy - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalPolicyURL;                                     //@synthesize internalPolicyURL=_internalPolicyURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * advertiserPolicy;                                      //@synthesize advertiserPolicy=_advertiserPolicy - In the implementation block
@property (nonatomic,copy,readonly) NSString * advertiserPolicyURL;                                   //@synthesize advertiserPolicyURL=_advertiserPolicyURL - In the implementation block
@property (nonatomic,__weak,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
+(id)newWithContent:(id)arg1 internalPolicy:(id)arg2 internalPolicyURL:(id)arg3 advertiserPolicy:(id)arg4 advertiserPolicyURL:(id)arg5 navigationCoordinator:(id)arg6 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id)initWithContent:(id)arg1 internalPolicy:(id)arg2 internalPolicyURL:(id)arg3 advertiserPolicy:(id)arg4 advertiserPolicyURL:(id)arg5 navigationCoordinator:(id)arg6 ;
-(NSString *)internalPolicy;
-(NSString *)internalPolicyURL;
-(NSString *)advertiserPolicy;
-(NSString *)advertiserPolicyURL;
-(NSString *)content;
@end
