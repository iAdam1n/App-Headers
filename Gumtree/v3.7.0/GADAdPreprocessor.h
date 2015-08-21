/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADSlotAdEventDelegate.h>

@class GADSlot, NSString;

@interface GADAdPreprocessor : NSObject <GADSlotAdEventDelegate> {

	GADSlot* _slot;
	/*^block*/id _completionHandler;
	NSString* _nativeAdJSON;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePreprocessorNotification:(id)arg1 ;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(id)initWithAdUnitID:(id)arg1 ;
-(void)preprocessNativeAdJSON:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

