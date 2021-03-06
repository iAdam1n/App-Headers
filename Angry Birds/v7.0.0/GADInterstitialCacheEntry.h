/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADSlotDelegate.h>
#import <AngryBirdsClassic/GADAdMediationDelegate.h>
#import <AngryBirdsClassic/GADSlotAdLoadDelegate.h>
#import <AngryBirdsClassic/GADSlotAdResponseDelegate.h>

@class GADCSITimeRecorder, GADSlot, GADRequestError, NSString;

@interface GADInterstitialCacheEntry : NSObject <GADSlotDelegate, GADAdMediationDelegate, GADSlotAdLoadDelegate, GADSlotAdResponseDelegate> {

	GADCSITimeRecorder* _timeRecorder;
	BOOL _loaded;
	GADSlot* _slot;
	GADRequestError* _error;

}

@property (nonatomic,readonly) GADSlot * slot;                       //@synthesize slot=_slot - In the implementation block
@property (nonatomic,readonly) BOOL loaded;                          //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,readonly) GADRequestError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sendCSIPingForTimeRecorder:(id)arg1 ;
-(void)slotDidMoveToPlacement;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(Class)connectorClassForAd:(id)arg1 ;
-(BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id*)arg3 ;
-(BOOL)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id*)arg3 ;
-(BOOL)slot:(id)arg1 shouldProcessMediatedAdResponse:(id)arg2 error:(id*)arg3 ;
-(id)initWithRequest:(id)arg1 adUnitID:(id)arg2 ;
-(GADSlot *)slot;
-(void)dealloc;
-(GADRequestError *)error;
-(BOOL)loaded;
@end

