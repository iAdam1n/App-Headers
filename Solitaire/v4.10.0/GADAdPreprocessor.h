/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GADSlotAdLoadDelegate.h>

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
-(id)initWithAdUnitID:(id)arg1 ;
-(void)handlePreprocessorNotification:(id)arg1 ;
-(id)environmentJSONString;
-(void)callAndClearCompletionHandlerWithAdConfiguration:(id)arg1 slot:(id)arg2 error:(id)arg3 ;
-(void)preprocessNativeAdJSON:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleJavaScriptLoadedNotification:(id)arg1 ;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
