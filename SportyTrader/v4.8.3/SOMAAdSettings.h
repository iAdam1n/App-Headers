/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SOMAAdSettings : NSObject {

	BOOL interstitial;
	int adType;
	int adDimension;
	long long publisherId;
	long long adspaceId;
	long long bannerWidth;
	long long bannerHeight;
	NSString* customDimension;
	NSString* customFormat;

}

@property (assign,nonatomic) long long publisherId; 
@property (assign,nonatomic) long long adspaceId; 
@property (assign,nonatomic) int adType; 
@property (assign,nonatomic) int adDimension; 
@property (assign,nonatomic) long long bannerWidth; 
@property (assign,nonatomic) long long bannerHeight; 
@property (nonatomic,retain) NSString * customFormat; 
@property (nonatomic,retain) NSString * customDimension; 
@property (assign,getter=isInterstitial,nonatomic) BOOL interstitial; 
-(void)setPublisherId:(long long)arg1 ;
-(void)setAdspaceId:(long long)arg1 ;
-(void)setAdType:(int)arg1 ;
-(long long)publisherId;
-(void)setInterstitial:(BOOL)arg1 ;
-(BOOL)isInterstitial;
-(id)requestString;
-(int)adDimension;
-(long long)adspaceId;
-(void)setAdDimension:(int)arg1 ;
-(void)setBannerWidth:(long long)arg1 ;
-(void)setBannerHeight:(long long)arg1 ;
-(NSString *)customFormat;
-(long long)bannerWidth;
-(NSString *)customDimension;
-(void)setCustomDimension:(NSString *)arg1 ;
-(void)setCustomFormat:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)bannerHeight;
-(int)adType;
@end

