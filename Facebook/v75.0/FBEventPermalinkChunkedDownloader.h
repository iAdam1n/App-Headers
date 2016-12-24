/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventPermalinkChunkedDownloaderDelegate;
@class NSString, FBUserSession, FBScenePath, FBMemEvent;

@interface FBEventPermalinkChunkedDownloader : NSObject {

	id _headDownloadRequest;
	id _torsoDownloadRequest;
	NSString* _eventFBID;
	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBMemEvent* _downloadedHead;
	id<FBEventPermalinkChunkedDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventPermalinkChunkedDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_headerQuery;
-(void)_handleCachedHeadResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 ;
-(void)_handleDownloadedHeadResponse:(id)arg1 error:(id)arg2 ;
-(id)_torsoQuery;
-(void)_handleDownloadedTorsoResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithEventFBID:(id)arg1 session:(id)arg2 scenePath:(id)arg3 ;
-(void)fetchHead;
-(void)fetchTorso;
-(void)setDelegate:(id<FBEventPermalinkChunkedDownloaderDelegate>)arg1 ;
-(id<FBEventPermalinkChunkedDownloaderDelegate>)delegate;
@end
