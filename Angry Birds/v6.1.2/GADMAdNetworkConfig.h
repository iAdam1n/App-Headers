/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface GADMAdNetworkConfig : NSObject {

	NSString* _networkID;
	NSDictionary* _credentials;
	NSDictionary* _extras;
	NSDictionary* _ad;
	NSArray* _adapterList;
	Class _adapterClass;
	NSString* _allocationID;
	NSArray* _impressionURLs;
	NSArray* _clickURLs;
	NSArray* _videoStartURLs;
	NSArray* _rewardedUserURLs;

}

@property (nonatomic,copy,readonly) NSString * networkID;                    //@synthesize networkID=_networkID - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSDictionary * credentials;              //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extras;                   //@synthesize extras=_extras - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * ad;                       //@synthesize ad=_ad - In the implementation block
@property (nonatomic,copy,readonly) NSArray * adapterList;                   //@synthesize adapterList=_adapterList - In the implementation block
@property (nonatomic,readonly) Class adapterClass;                           //@synthesize adapterClass=_adapterClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * allocationID;                 //@synthesize allocationID=_allocationID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * impressionURLs;                //@synthesize impressionURLs=_impressionURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clickURLs;                     //@synthesize clickURLs=_clickURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoStartURLs;                //@synthesize videoStartURLs=_videoStartURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rewardedUserURLs;              //@synthesize rewardedUserURLs=_rewardedUserURLs - In the implementation block
-(Class)adapterClass;
-(NSArray *)clickURLs;
-(NSArray *)impressionURLs;
-(NSArray *)videoStartURLs;
-(NSArray *)rewardedUserURLs;
-(NSString *)publisherID;
-(NSString *)networkID;
-(NSDictionary *)extras;
-(NSArray *)adapterList;
-(NSString *)allocationID;
-(id)description;
-(NSDictionary *)ad;
-(NSDictionary *)credentials;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
@end
