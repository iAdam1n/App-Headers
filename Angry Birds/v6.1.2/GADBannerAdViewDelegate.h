/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/GADAdViewDelegate.h>
#import <AngryBirdsClassic/GADDelayLoadDelegate.h>

@class GADSlot, NSString;

@interface GADBannerAdViewDelegate : GADAdViewDelegate <GADDelayLoadDelegate> {

	BOOL _loadDelayed;
	BOOL _loadFinished;
	GADSlot* _slot;

}

@property (nonatomic,__weak,readonly) GADSlot * slot;                                //@synthesize slot=_slot - In the implementation block
@property (getter=isLoadDelayed,nonatomic,readonly) BOOL loadDelayed;                //@synthesize loadDelayed=_loadDelayed - In the implementation block
@property (getter=isLoadFinished,nonatomic,readonly) BOOL loadFinished;              //@synthesize loadFinished=_loadFinished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)adViewDidFinishLoad:(id)arg1 ;
-(void)adView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)isClick:(long long)arg1 ;
-(BOOL)isLoadFinished;
-(void)loadHandlerDidCancel:(id)arg1 ;
-(void)loadHandlerDidChangeDelay:(id)arg1 from:(long long)arg2 to:(long long)arg3 ;
-(void)adView:(id)arg1 contentSizeDidChange:(CGSize)arg2 ;
-(BOOL)isLoadDelayed;
-(GADSlot *)slot;
-(id)init;
-(id)initWithSlot:(id)arg1 ;
@end
