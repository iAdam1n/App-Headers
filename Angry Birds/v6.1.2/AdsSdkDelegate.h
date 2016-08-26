/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/AdsSdkInterfaceDelegate.h>

@class NSString;

@interface AdsSdkDelegate : NSObject <AdsSdkInterfaceDelegate> {

	AdsSdk* _iface;
	Listener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onAdReady:(BOOL)arg1 ;
-(void)onAdHidden:(BOOL)arg1 ;
-(void)onAdShown;
-(void)onAdSizeChanged:(int)arg1 height:(int)arg2 ;
-(void)onClick;
-(void)onCachingRequest:(id)arg1 withExtension:(id)arg2 ;
-(void)onUrlOpenRequest:(id)arg1 ;
-(id)initWithIface:(AdsSdk*)arg1 ;
-(void)setListener:(Listener*)arg1 ;
@end
