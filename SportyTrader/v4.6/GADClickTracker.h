/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/GADCachedFileDelegate.h>

@protocol GADClickTrackerDelegate;
@class GADCachedFile, NSURL;

@interface GADClickTracker : NSObject <GADCachedFileDelegate> {

	unsigned long long _backgroundTaskID;
	GADCachedFile* _tracker;
	BOOL _hasTracked;
	BOOL _cacheEnabled;
	id<GADClickTrackerDelegate> _delegate;
	NSURL* _trackingURL;

}

@property (assign,nonatomic,__weak) id<GADClickTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasTracked;                                        //@synthesize hasTracked=_hasTracked - In the implementation block
@property (nonatomic,readonly) NSURL * trackingURL;                                    //@synthesize trackingURL=_trackingURL - In the implementation block
@property (assign,getter=isCacheEnabled,nonatomic) BOOL cacheEnabled;                  //@synthesize cacheEnabled=_cacheEnabled - In the implementation block
-(void)beginBackgroundTask;
-(void)cachedFileDownloadDidEnd:(id)arg1 ;
-(id)cachedFile:(id)arg1 shouldRedirectToURL:(id)arg2 ;
-(void)cachedFile:(id)arg1 downloadDidFail:(id)arg2 ;
-(void)trackURL:(id)arg1 ;
-(BOOL)hasTracked;
-(NSURL *)trackingURL;
-(BOOL)isCacheEnabled;
-(void)setCacheEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<GADClickTrackerDelegate>)arg1 ;
-(id)init;
-(id<GADClickTrackerDelegate>)delegate;
-(void)reset;
-(void)endBackgroundTask;
@end

