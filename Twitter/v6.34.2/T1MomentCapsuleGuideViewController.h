/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNViewController.h>
#import <Twitter/T1MomentCapsuleInfoViewDelegate.h>
#import <Twitter/TFNTwitterMomentsCapsuleDataManagerListener.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol T1MomentViewControllerDelegate, T1MomentCapsuleInfoViewLayoutDelegate;
@class TFNTwitterAccount, T1MomentCapsuleInfoView, TFNTwitterMomentCapsule, T1MomentPageBackgroundViewController, T1MomentCapsuleInfoViewTheme, UITapGestureRecognizer, NSString;

@interface T1MomentCapsuleGuideViewController : TFNViewController <T1MomentCapsuleInfoViewDelegate, TFNTwitterMomentsCapsuleDataManagerListener, TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	id<T1MomentViewControllerDelegate> _delegate;
	double _expansionPercentage;
	T1MomentCapsuleInfoView* _infoView;
	TFNTwitterMomentCapsule* _capsule;
	T1MomentPageBackgroundViewController* _backgroundViewController;
	T1MomentCapsuleInfoViewTheme* _theme;
	id<T1MomentCapsuleInfoViewLayoutDelegate> _layoutDelegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<T1MomentViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double expansionPercentage;                                                   //@synthesize expansionPercentage=_expansionPercentage - In the implementation block
@property (assign,nonatomic,__weak) T1MomentCapsuleInfoView * infoView;                                    //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) TFNTwitterMomentCapsule * capsule;                                            //@synthesize capsule=_capsule - In the implementation block
@property (nonatomic,retain) T1MomentPageBackgroundViewController * backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleInfoViewTheme * theme;                                         //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) id<T1MomentCapsuleInfoViewLayoutDelegate> layoutDelegate;                     //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                  //@synthesize account=_account - In the implementation block
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(TFNTwitterMomentCapsule *)capsule;
-(void)dataManager:(id)arg1 didUpdateMoment:(id)arg2 ;
-(void)preloadMediaForDisplaySize:(CGSize)arg1 ;
-(void)setExpansionPercentage:(double)arg1 ;
-(double)expansionPercentage;
-(void)momentCapsuleInfoViewDidTapFollow:(id)arg1 ;
-(id)initWithCapsule:(id)arg1 account:(id)arg2 ;
-(void)_viewTapped:(id)arg1 ;
-(double)_blurPercentageForExpansionPercentage:(double)arg1 ;
-(double)_textOpacityForExpansionPercentage:(double)arg1 ;
-(void)setCapsule:(TFNTwitterMomentCapsule *)arg1 ;
-(void)setBackgroundViewController:(T1MomentPageBackgroundViewController *)arg1 ;
-(T1MomentCapsuleInfoView *)infoView;
-(void)setInfoView:(T1MomentCapsuleInfoView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1MomentViewControllerDelegate>)arg1 ;
-(id<T1MomentViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(id<T1MomentCapsuleInfoViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<T1MomentCapsuleInfoViewLayoutDelegate>)arg1 ;
-(T1MomentPageBackgroundViewController *)backgroundViewController;
-(T1MomentCapsuleInfoViewTheme *)theme;
-(void)setTheme:(T1MomentCapsuleInfoViewTheme *)arg1 ;
@end

