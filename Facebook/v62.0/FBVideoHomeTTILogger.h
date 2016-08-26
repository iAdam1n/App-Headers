/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBVideoHomeSession;

@interface FBVideoHomeTTILogger : NSObject {

	NSString* _ttiType;
	BOOL _firstTTI;
	FBVideoHomeSession* _session;

}

@property (nonatomic,readonly) BOOL isMarkerStarted; 
-(id)initWithVideoHomeSession:(id)arg1 ;
-(BOOL)isMarkerStarted;
-(void)cancelMarkerWithCancelledByUser:(BOOL)arg1 reason:(id)arg2 ;
-(id)_createMutableExtrasForPerfEvent;
-(void)startForTTIType:(id)arg1 withCacheStatus:(id)arg2 ;
-(void)noteVHViewDidAppearWithViewState:(id)arg1 ;
-(void)noteReachabilityChangedToState:(id)arg1 ;
-(void)noteDataLoadStartedWithViewState:(id)arg1 ;
-(void)noteDataLoadSuccessful:(BOOL)arg1 isEmpty:(BOOL)arg2 ;
-(void)noteDataDisplayed:(unsigned long long)arg1 ;
-(void)endMarker;
-(void)dealloc;
@end
