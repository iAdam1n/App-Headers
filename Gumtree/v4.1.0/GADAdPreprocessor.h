/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
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
-(id)init;
@end

