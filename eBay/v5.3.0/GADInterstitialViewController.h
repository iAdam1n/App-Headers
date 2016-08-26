/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/GADAdAppViewController.h>

@class NSString;

@interface GADInterstitialViewController : GADAdAppViewController {

	id _placement;
	NSString* _screenName;

}

@property (nonatomic,copy) NSString * screenName;              //@synthesize screenName=_screenName - In the implementation block
-(void)relinquishScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)finishDismissal;
-(void)finishAppearing;
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isLoaded;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
-(id)initWithAdView:(id)arg1 ;
-(id)initWithSlot:(id)arg1 ;
@end
