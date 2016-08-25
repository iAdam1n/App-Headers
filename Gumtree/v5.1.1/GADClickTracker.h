/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GADCachedFileDelegate.h>

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
-(void)endBackgroundTask;
-(void)setDelegate:(id<GADClickTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GADClickTrackerDelegate>)delegate;
-(void)reset;
@end

