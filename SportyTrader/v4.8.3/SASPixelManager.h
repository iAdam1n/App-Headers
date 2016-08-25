/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SASPixelManager : NSObject {

	NSMutableArray* _pendingCountPixelURLs;
	NSMutableArray* _inProgressCountPixelURLs;

}
+(id)sharedInstance;
-(id)inProgressCountPixelURLs;
-(id)remainingCountForURL:(id)arg1 inArray:(id)arg2 ;
-(void)removePixelURL:(id)arg1 fromArray:(id)arg2 ;
-(id)pendingCountPixelURLs;
-(void)addPixelURL:(id)arg1 withRemainingCount:(id)arg2 toArray:(id)arg3 ;
-(void)synchronizeURLsArrayAfterUpdate:(/*^block*/id)arg1 URL:(id)arg2 ;
-(id)decreaseCountdown:(id)arg1 ;
-(id)dictionaryForCountPixelURL:(id)arg1 inArray:(id)arg2 ;
-(void)synchronizePendingPixelsArray;
-(id)dictionaryWithPixelURL:(id)arg1 remainingCount:(id)arg2 ;
-(void)removeFirstObject:(id)arg1 fromArray:(id)arg2 ;
-(void)callCountPixelURL:(id)arg1 withAgencyPixelURLs:(id)arg2 ;
-(void)callCountPixelURL:(id)arg1 ;
-(void)removePendingPixelURL:(id)arg1 ;
-(void)restartIfNecessaryURL:(id)arg1 remainingRetries:(long long)arg2 ;
-(BOOL)shouldRecallURL:(id)arg1 remindingRetries:(long long)arg2 ;
-(BOOL)isHTTPStatusCodeSuccess:(unsigned long long)arg1 ;
-(void)addPendingPixelURL:(id)arg1 ;
-(void)ad:(id)arg1 callCountPixelForInterfaceOrientation:(long long)arg2 ;
-(void)restartPendingURLs;
-(void)addPendingPixelURL:(id)arg1 remainingCount:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

