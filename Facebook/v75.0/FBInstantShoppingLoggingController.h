/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, FBCanvasLoggingState;

@interface FBInstantShoppingLoggingController : NSObject {

	NSMutableArray* _canvasStateStack;
	FBCanvasLoggingState* _currentState;

}
-(id)loggerForElement:(id)arg1 ;
-(void)logClickForDocumentElement:(id)arg1 analyticsInfo:(id)arg2 ;
-(void)logAudioButtonClickWithNewState:(BOOL)arg1 analyticsInfo:(id)arg2 ;
-(void)logLoadTimeForDocumentElement:(id)arg1 analyticsInfo:(id)arg2 loadTime:(double)arg3 ;
-(void)pushLoggingStateWithAnalyticsInfo:(id)arg1 ;
-(void)logOpenedCatalogWithAnalyticsInfo:(id)arg1 isReload:(BOOL)arg2 ;
-(void)logAudioEnabledOnClose:(BOOL)arg1 systemMuted:(BOOL)arg2 analyticsInfo:(id)arg3 ;
-(void)logClosedCatalogWithDwellTime:(double)arg1 fetchStatus:(id)arg2 linkOpenTime:(double)arg3 swipeToOpenTime:(double)arg4 backgroundTime:(double)arg5 viewPercent:(double)arg6 componentViewPercent:(double)arg7 didScroll:(BOOL)arg8 analyticsInfo:(id)arg9 ;
-(void)popLoggingState;
-(void)logCartClickWithAnalyticsInfo:(id)arg1 ;
-(void)logAudioEnabledOnOpen:(BOOL)arg1 systemMuted:(BOOL)arg2 analyticsInfo:(id)arg3 ;
-(void)logDocumentLoadTimeWithAnalyticsInfo:(id)arg1 loadTime:(unsigned long long)arg2 ;
-(void)logSelectorItemClickWithTitle:(id)arg1 analyticsInfo:(id)arg2 ;
-(id)init;
@end
