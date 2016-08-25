/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <UIKit/UIWebViewDelegate.h>
#import <SportyTrader/SASCacheManagerDelegate.h>

@protocol SASAdDownloaderDelegate;
@class SASAd, SASCacheManager, NSString;

@interface SASPrefetchOperation : NSOperation <UIWebViewDelegate, SASCacheManagerDelegate> {

	SASAd* _currentAd;
	SASCacheManager* _cacheManager;
	BOOL _isRunning;
	SASAd* _adToPrefetch;
	id<SASAdDownloaderDelegate> _delegate;

}

@property (nonatomic,retain) SASAd * adToPrefetch;                                     //@synthesize adToPrefetch=_adToPrefetch - In the implementation block
@property (assign,nonatomic,__weak) id<SASAdDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SASAd * currentAd;                                        //@synthesize currentAd=_currentAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAd:(id)arg1 ;
-(id)validStoredAd;
-(SASAd *)adToPrefetch;
-(SASAd *)currentAd;
-(void)setCurrentAd:(SASAd *)arg1 ;
-(void)didFinishCachingCreativeAtURL:(id)arg1 ;
-(void)didFailCachingWithError:(id)arg1 ;
-(void)launchAdCaching;
-(id)validStoredAdWithSandboxValidation:(BOOL)arg1 ;
-(void)cleanExpiredAds;
-(id)storedAd;
-(BOOL)adExistsAtPath:(id)arg1 ;
-(void)launchAdCaching:(id)arg1 ;
-(void)deleteInsertionInNextAdsPlist;
-(void)cacheAd:(id)arg1 ;
-(id)creativeFolderPathForAd:(id)arg1 ;
-(id)currentStoredAdFilePath;
-(void)updateNextAdsPlist;
-(void)storeAd;
-(id)currentAdInsertionFolderPath;
-(id)nextAdDictionary;
-(id)storedAdFilePathForInsertion:(long long)arg1 ;
-(id)nextAdPlistPath;
-(id)adCachePathDirectory;
-(void)deleteInsertionIfExpiredAtPath:(id)arg1 ;
-(id)currentAdInsertionFolderPath:(long long)arg1 ;
-(id)storedAdFolderPathForAd:(id)arg1 ;
-(void)didFinishCachingFile;
-(id)storedAdFolderPath;
-(void)setAdToPrefetch:(SASAd *)arg1 ;
-(void)setDelegate:(id<SASAdDownloaderDelegate>)arg1 ;
-(void)dealloc;
-(id<SASAdDownloaderDelegate>)delegate;
-(void)main;
@end

