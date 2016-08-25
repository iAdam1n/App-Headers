/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GADGMSGHandler.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class GADAdView, NSURL, NSURLConnection, NSFileHandle, NSOperationQueue, NSString;

@interface GADPrecacheGMSGHandler : GADGMSGHandler <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	GADAdView* _adView;
	NSURL* _cachedURL;
	NSURL* _sourceURL;
	BOOL _hasStartedPreloading;
	NSURLConnection* _preloadConnection;
	NSFileHandle* _cacheFileHandle;
	long long _expectedDataLength;
	NSOperationQueue* _cacheOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionBlockDictionary;
-(void)adView:(id)arg1 didReceivePrecacheNotification:(id)arg2 ;
-(long long)lastBytesAfterCleanUp;
-(void)dispatchPrecacheEventWithBytesLoaded:(long long)arg1 totalBytes:(long long)arg2 event:(id)arg3 ;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)preload;
-(void)abort;
@end

