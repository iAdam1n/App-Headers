/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@class NSString, FBAdPlacementDefinition, NSDictionary;

@interface FBAdEnvironmentData : NSObject {

	BOOL _retryForPodPosition;
	NSString* _placementID;
	long long _placementType;
	long long _templateId;
	unsigned long long _numAdsRequested;
	long long _initOrientation;
	FBAdPlacementDefinition* _placementDefinition;
	unsigned long long _podPosition;
	unsigned long long _podPositionInternal;
	NSString* _failedConnectionIdString;
	NSString* _servedCreativeIdString;
	NSString* _failedCreativeIdString;
	FBAdSize _adSize;
	CGSize _adViewInitSize;

}

@property (nonatomic,retain) NSString * placementID;                                     //@synthesize placementID=_placementID - In the implementation block
@property (assign,nonatomic) long long placementType;                                    //@synthesize placementType=_placementType - In the implementation block
@property (assign,nonatomic) FBAdSize adSize;                                            //@synthesize adSize=_adSize - In the implementation block
@property (nonatomic,readonly) long long templateId;                                     //@synthesize templateId=_templateId - In the implementation block
@property (assign,nonatomic) unsigned long long numAdsRequested;                         //@synthesize numAdsRequested=_numAdsRequested - In the implementation block
@property (assign,nonatomic) CGSize adViewInitSize;                                      //@synthesize adViewInitSize=_adViewInitSize - In the implementation block
@property (assign,nonatomic) long long initOrientation;                                  //@synthesize initOrientation=_initOrientation - In the implementation block
@property (nonatomic,retain) FBAdPlacementDefinition * placementDefinition;              //@synthesize placementDefinition=_placementDefinition - In the implementation block
@property (nonatomic,readonly) NSDictionary * adRequestParameters; 
@property (assign,nonatomic) unsigned long long podPosition;                             //@synthesize podPosition=_podPosition - In the implementation block
@property (assign,nonatomic) BOOL retryForPodPosition;                                   //@synthesize retryForPodPosition=_retryForPodPosition - In the implementation block
@property (assign,nonatomic) unsigned long long podPositionInternal;                     //@synthesize podPositionInternal=_podPositionInternal - In the implementation block
@property (nonatomic,retain) NSString * failedConnectionIdString;                        //@synthesize failedConnectionIdString=_failedConnectionIdString - In the implementation block
@property (nonatomic,retain) NSString * servedCreativeIdString;                          //@synthesize servedCreativeIdString=_servedCreativeIdString - In the implementation block
@property (nonatomic,retain) NSString * failedCreativeIdString;                          //@synthesize failedCreativeIdString=_failedCreativeIdString - In the implementation block
-(FBAdSize)adSize;
-(void)setAdSize:(FBAdSize)arg1 ;
-(void)setPlacementID:(NSString *)arg1 ;
-(NSString *)placementID;
-(long long)placementType;
-(unsigned long long)podPosition;
-(long long)templateId;
-(unsigned long long)numAdsRequested;
-(void)setPlacementType:(long long)arg1 ;
-(id)initWithPlacementId:(id)arg1 placementType:(long long)arg2 adSize:(FBAdSize)arg3 ;
-(void)setRetryForPodPosition:(BOOL)arg1 ;
-(long long)initOrientation;
-(BOOL)retryForPodPosition;
-(void)setNumAdsRequested:(unsigned long long)arg1 ;
-(id)initForNativeAdWithPlacementId:(id)arg1 numAdsRequested:(unsigned long long)arg2 ;
-(id)initInternalWithPlacementId:(id)arg1 publisherId:(id)arg2 placementType:(long long)arg3 adSize:(FBAdSize)arg4 numAdsRequested:(unsigned long long)arg5 ;
-(void)setPodPosition:(unsigned long long)arg1 ;
-(void)setFailedConnectionIdString:(NSString *)arg1 ;
-(void)setServedCreativeIdString:(NSString *)arg1 ;
-(void)setFailedCreativeIdString:(NSString *)arg1 ;
-(void)setInitOrientation:(long long)arg1 ;
-(BOOL)hasValidPlacementId;
-(BOOL)hasValidDefinition;
-(void)putRequestParameter:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)setFailedConnectionIds:(id)arg1 ;
-(void)setServedCreativeIds:(id)arg1 ;
-(void)setFailedCreativeIds:(id)arg1 ;
-(NSDictionary *)adRequestParameters;
-(CGSize)adViewInitSize;
-(void)setAdViewInitSize:(CGSize)arg1 ;
-(FBAdPlacementDefinition *)placementDefinition;
-(void)setPlacementDefinition:(FBAdPlacementDefinition *)arg1 ;
-(unsigned long long)podPositionInternal;
-(void)setPodPositionInternal:(unsigned long long)arg1 ;
-(NSString *)failedConnectionIdString;
-(NSString *)servedCreativeIdString;
-(NSString *)failedCreativeIdString;
@end

