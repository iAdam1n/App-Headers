/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADCachedFileDelegate.h>

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
-(void)cachedFileDownloadDidEnd:(id)arg1 ;
-(id)cachedFile:(id)arg1 shouldRedirectToURL:(id)arg2 ;
-(void)cachedFile:(id)arg1 downloadDidFail:(id)arg2 ;
-(void)trackURL:(id)arg1 ;
-(BOOL)hasTracked;
-(NSURL *)trackingURL;
-(BOOL)isCacheEnabled;
-(void)setCacheEnabled:(BOOL)arg1 ;
-(void)beginBackgroundTask;
-(void)endBackgroundTask;
-(id)init;
-(void)setDelegate:(id<GADClickTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<GADClickTrackerDelegate>)delegate;
-(void)reset;
@end
