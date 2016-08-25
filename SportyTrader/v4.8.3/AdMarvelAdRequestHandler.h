/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AdMarvelFullScreenDelegate, AdMarvelDelegate, AdMarvelAdRequestHandlerDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@class NSURLConnection, NSMutableData, NSObject, AdMarvelAdResponse, NSString;

@interface AdMarvelAdRequestHandler : NSObject {

	NSURLConnection* currentConnection;
	NSMutableData* responseData;
	BOOL adRequestActive;
	NSObject*<AdMarvelFullScreenDelegate> adMarvelFullScreenDelegate;
	NSObject*<AdMarvelDelegate> adMarvelDelegate;
	NSObject*<AdMarvelAdRequestHandlerDelegate> adMarvelAdRequestHandlerDelegate;
	double lastAdFetchTime;
	AdMarvelAdResponse* admarvelResponseData;
	NSString* _excludedBanners;

}

@property (assign,nonatomic) NSObject*<AdMarvelDelegate> adMarvelDelegate; 
@property (assign,nonatomic) NSObject*<AdMarvelFullScreenDelegate> adMarvelFullScreenDelegate; 
@property (nonatomic,retain) NSObject*<AdMarvelAdRequestHandlerDelegate> adMarvelAdRequestHandlerDelegate; 
@property (nonatomic,retain) NSString * excludedBanners;                                                                //@synthesize excludedBanners=_excludedBanners - In the implementation block
@property (assign,nonatomic) BOOL adRequestActive; 
@property (assign,nonatomic) double lastAdFetchTime; 
@property (nonatomic,retain) AdMarvelAdResponse * admarvelResponseData; 
+(BOOL)isInOfflineMode;
+(BOOL)isCachingForSiteId:(id)arg1 ;
-(void)clearRequestHandler;
-(void)setAdMarvelDelegate:(NSObject*<AdMarvelDelegate>)arg1 ;
-(double)lastAdFetchTime;
-(id)initWithAdMarvelDelegate:(id)arg1 fullscreenDelegate:(id)arg2 ;
-(void)fetchAdWithDelegate:(id)arg1 forAdType:(id)arg2 WithRetryNumber:(int)arg3 excludedBanners:(id)arg4 andTargetParams:(id)arg5 ;
-(CGRect)getMinimizedWebViewFrame;
-(NSObject*<AdMarvelDelegate>)adMarvelDelegate;
-(BOOL)adRequestActive;
-(NSObject*<AdMarvelFullScreenDelegate>)adMarvelFullScreenDelegate;
-(void)setAdMarvelFullScreenDelegate:(NSObject*<AdMarvelFullScreenDelegate>)arg1 ;
-(void)setExcludedBanners:(NSString *)arg1 ;
-(void)setAdmarvelResponseData:(AdMarvelAdResponse *)arg1 ;
-(void)setAdMarvelAdRequestHandlerDelegate:(NSObject*<AdMarvelAdRequestHandlerDelegate>)arg1 ;
-(void)setAdRequestActive:(BOOL)arg1 ;
-(void)setLastAdFetchTime:(double)arg1 ;
-(void)fetchAdForAdType:(id)arg1 WithRetryNumber:(int)arg2 excludedBanners:(id)arg3 andTargetParams:(id)arg4 ;
-(NSObject*<AdMarvelAdRequestHandlerDelegate>)adMarvelAdRequestHandlerDelegate;
-(AdMarvelAdResponse *)admarvelResponseData;
-(NSString *)excludedBanners;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

