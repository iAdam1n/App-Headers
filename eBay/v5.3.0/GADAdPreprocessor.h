/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADSlotAdLoadDelegate.h>

@class GADSlot, NSString;

@interface GADAdPreprocessor : NSObject <GADSlotAdLoadDelegate> {

	GADSlot* _slot;
	/*^block*/id _completionHandler;
	NSString* _nativeAdJSON;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePreprocessorNotification:(id)arg1 ;
-(id)environmentJSONString;
-(void)callAndClearCompletionHandlerWithAdConfiguration:(id)arg1 slot:(id)arg2 error:(id)arg3 ;
-(void)preprocessNativeAdJSON:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleJavaScriptLoadedNotification:(id)arg1 ;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(id)initWithAdUnitID:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

