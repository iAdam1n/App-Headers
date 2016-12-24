/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray, CLLocation;

@interface FBFeedGraphQLConnectionQueryParameters : FBValueObject <NSCopying> {

	BOOL _includeBatteryInfo;
	BOOL _allowPinnedDummyStories;
	long long _feedType;
	NSString* _targetID;
	NSString* _refreshMode;
	NSString* _caller;
	NSDictionary* _queryOptions;
	NSArray* _recentVPVds;
	NSArray* _recentVPVdsV2;
	CLLocation* _cachedLocation;

}

@property (nonatomic,readonly) long long feedType;                            //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetID;                      //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * refreshMode;                   //@synthesize refreshMode=_refreshMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * caller;                        //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryOptions;              //@synthesize queryOptions=_queryOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recentVPVds;                    //@synthesize recentVPVds=_recentVPVds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recentVPVdsV2;                  //@synthesize recentVPVdsV2=_recentVPVdsV2 - In the implementation block
@property (nonatomic,readonly) BOOL includeBatteryInfo;                       //@synthesize includeBatteryInfo=_includeBatteryInfo - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * cachedLocation;              //@synthesize cachedLocation=_cachedLocation - In the implementation block
@property (nonatomic,readonly) BOOL allowPinnedDummyStories;                  //@synthesize allowPinnedDummyStories=_allowPinnedDummyStories - In the implementation block
-(NSString *)refreshMode;
-(NSDictionary *)queryOptions;
-(id)initWithFeedType:(long long)arg1 targetID:(id)arg2 refreshMode:(id)arg3 caller:(id)arg4 queryOptions:(id)arg5 recentVPVds:(id)arg6 recentVPVdsV2:(id)arg7 includeBatteryInfo:(BOOL)arg8 cachedLocation:(id)arg9 allowPinnedDummyStories:(BOOL)arg10 ;
-(NSArray *)recentVPVds;
-(NSArray *)recentVPVdsV2;
-(BOOL)includeBatteryInfo;
-(BOOL)allowPinnedDummyStories;
-(NSString *)targetID;
-(CLLocation *)cachedLocation;
-(NSString *)caller;
-(long long)feedType;
@end
