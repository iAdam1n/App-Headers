/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNGInterstitialCustomEventDelegate;
@interface MNGInterstitialCustomEvent : NSObject {

	id<MNGInterstitialCustomEventDelegate> delegate;

}

@property (assign,nonatomic) id<MNGInterstitialCustomEventDelegate> delegate; 
-(BOOL)enableAutomaticImpressionAndClickTracking;
-(void)requestInterstitialWithCustomEventInfo:(id)arg1 ;
-(void)showInterstitialFromRootViewController:(id)arg1 ;
-(void)setDelegate:(id<MNGInterstitialCustomEventDelegate>)arg1 ;
-(id<MNGInterstitialCustomEventDelegate>)delegate;
@end

