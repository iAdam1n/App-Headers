/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/GADGMSGHandler.h>
#import <AngryBirdsRio/GADAdFetcherDelegate.h>

@protocol OS_dispatch_queue, GADSDKCoreGMSGHandlerDelegate;
@class NSMutableDictionary, NSObject, GADSDKCoreWebView, NSString;

@interface GADSDKCoreGMSGHandler : GADGMSGHandler <GADAdFetcherDelegate> {

	NSMutableDictionary* _adFetchers;
	NSObject*<OS_dispatch_queue> _lockQueue;
	GADSDKCoreWebView* _SDKCoreWebView;
	id<GADSDKCoreGMSGHandlerDelegate> _delegate;

}

@property (assign,setter=DKCoreWebView,nonatomic,__weak) GADSDKCoreWebView * SDKCoreWebView;              //@synthesize SDKCoreWebView=_SDKCoreWebView - In the implementation block
@property (assign,nonatomic,__weak) id<GADSDKCoreGMSGHandlerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionBlockDictionary;
-(void)adFetcher:(id)arg1 didFetchAd:(id)arg2 ;
-(void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned long long)arg4 ;
-(GADSDKCoreWebView *)SDKCoreWebView;
-(void)setSDKCoreWebView:(GADSDKCoreWebView *)arg1 ;
-(void)didReceiveloadAdURLAction:(id)arg1 ;
-(void)didReceiveLoadAdAction:(id)arg1 ;
-(void)didReceiveInvalidAdRequestAction:(id)arg1 ;
-(void)didReceiveloadSDKConstantsAction:(id)arg1 ;
-(void)didReceiveFetchAdAction:(id)arg1 ;
-(void)didReceiveSDKCoreReloadRequestWithParameters:(id)arg1 ;
-(void)failedToFetchAd:(id)arg1 forRequestID:(id)arg2 withError:(id)arg3 responseCode:(long long)arg4 ;
-(BOOL)isFetchInProgressForFetchRequestID:(id)arg1 ;
-(void)setAdFetcher:(id)arg1 forFetchRequestID:(id)arg2 ;
-(id)fetchRequestIDForAdFetcher:(id)arg1 ;
-(void)fetchedAd:(id)arg1 forFetchRequestID:(id)arg2 responseCode:(long long)arg3 ;
-(void)removeAdFetcherForFetchRequestID:(id)arg1 ;
-(void)setDelegate:(id<GADSDKCoreGMSGHandlerDelegate>)arg1 ;
-(id)init;
-(id<GADSDKCoreGMSGHandlerDelegate>)delegate;
@end

