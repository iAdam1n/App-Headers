/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPVASTLinearAd, NSArray, NSURL;

@interface MPVideoPlaybackCandidate : NSObject {

	MPVASTLinearAd* _linearAd;
	NSArray* _errorURLs;
	NSArray* _impressionURLs;
	double _minimumViewabilityTimeInterval;
	double _minimumFractionOfVideoVisible;
	NSURL* _viewabilityTrackingURL;

}

@property (nonatomic,retain) MPVASTLinearAd * linearAd;                          //@synthesize linearAd=_linearAd - In the implementation block
@property (nonatomic,retain) NSArray * errorURLs;                                //@synthesize errorURLs=_errorURLs - In the implementation block
@property (nonatomic,retain) NSArray * impressionURLs;                           //@synthesize impressionURLs=_impressionURLs - In the implementation block
@property (assign,nonatomic) double minimumViewabilityTimeInterval;              //@synthesize minimumViewabilityTimeInterval=_minimumViewabilityTimeInterval - In the implementation block
@property (assign,nonatomic) double minimumFractionOfVideoVisible;               //@synthesize minimumFractionOfVideoVisible=_minimumFractionOfVideoVisible - In the implementation block
@property (nonatomic,retain) NSURL * viewabilityTrackingURL;                     //@synthesize viewabilityTrackingURL=_viewabilityTrackingURL - In the implementation block
-(NSArray *)impressionURLs;
-(void)setImpressionURLs:(NSArray *)arg1 ;
-(NSArray *)errorURLs;
-(void)setErrorURLs:(NSArray *)arg1 ;
-(MPVASTLinearAd *)linearAd;
-(void)setLinearAd:(MPVASTLinearAd *)arg1 ;
-(double)minimumViewabilityTimeInterval;
-(void)setMinimumViewabilityTimeInterval:(double)arg1 ;
-(double)minimumFractionOfVideoVisible;
-(void)setMinimumFractionOfVideoVisible:(double)arg1 ;
-(NSURL *)viewabilityTrackingURL;
-(void)setViewabilityTrackingURL:(NSURL *)arg1 ;
@end

