/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SportyTrader/MNGInterstitialAdManagerDelegate.h>

@protocol MNGInterstitialAdControllerDelegate;
@class MNGInterstitialAdManager, NSString, CLLocation;

@interface MNGInterstitialAdController : UIViewController <MNGInterstitialAdManagerDelegate> {

	BOOL _testing;
	MNGInterstitialAdManager* _manager;
	id<MNGInterstitialAdControllerDelegate> _delegate;
	NSString* _adUnitId;
	NSString* _keywords;
	CLLocation* _location;

}

@property (assign,nonatomic) id<MNGInterstitialAdControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * adUnitId;                                             //@synthesize adUnitId=_adUnitId - In the implementation block
@property (nonatomic,copy) NSString * keywords;                                             //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) CLLocation * location;                                           //@synthesize location=_location - In the implementation block
@property (assign,getter=isTesting,nonatomic) BOOL testing;                                 //@synthesize testing=_testing - In the implementation block
@property (nonatomic,readonly) BOOL ready; 
@property (nonatomic,retain) MNGInterstitialAdManager * manager;                            //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInterstitials;
+(id)interstitialAdControllerForAdUnitId:(id)arg1 ;
+(id)sharedInterstitialAdControllers;
+(void)removeSharedInterstitialAdController:(id)arg1 ;
-(void)loadAd;
-(id)interstitialDelegate;
-(NSString *)adUnitId;
-(void)customEventDidLoadAd;
-(void)customEventDidFailToLoadAd;
-(void)customEventActionWillBegin;
-(void)setAdUnitId:(NSString *)arg1 ;
-(id)interstitialAdController;
-(id)initWithAdUnitId:(id)arg1 ;
-(void)managerDidLoadInterstitial:(id)arg1 ;
-(void)manager:(id)arg1 didFailToLoadInterstitialWithError:(id)arg2 ;
-(void)managerWillPresentInterstitial:(id)arg1 ;
-(void)managerDidPresentInterstitial:(id)arg1 ;
-(void)managerWillDismissInterstitial:(id)arg1 ;
-(void)managerDidDismissInterstitial:(id)arg1 ;
-(void)managerDidExpireInterstitial:(id)arg1 ;
-(void)showFromViewController:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNGInterstitialAdControllerDelegate>)arg1 ;
-(id<MNGInterstitialAdControllerDelegate>)delegate;
-(CLLocation *)location;
-(MNGInterstitialAdManager *)manager;
-(void)setManager:(MNGInterstitialAdManager *)arg1 ;
-(BOOL)ready;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setTesting:(BOOL)arg1 ;
-(void)setKeywords:(NSString *)arg1 ;
-(NSString *)keywords;
-(BOOL)isTesting;
@end

