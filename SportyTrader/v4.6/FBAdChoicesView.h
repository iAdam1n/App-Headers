/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBNativeAdView.h>
#import <SportyTrader/FBAdBrowserControllerDelegate.h>

@class UIViewController, FBAdImage, NSURL, FBAdBrowserController, UIImageView, UILabel;

@interface FBAdChoicesView : FBNativeAdView <FBAdBrowserControllerDelegate> {

	BOOL _animating;
	BOOL _extended;
	UIViewController* _viewController;
	FBAdImage* _adChoicesIcon;
	NSURL* _adChoicesLinkURL;
	FBAdBrowserController* _adChoicesBrowserController;
	UIImageView* _sponsoredImageView;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,__weak,readonly) FBAdImage * adChoicesIcon;                              //@synthesize adChoicesIcon=_adChoicesIcon - In the implementation block
@property (nonatomic,copy,readonly) NSURL * adChoicesLinkURL;                                 //@synthesize adChoicesLinkURL=_adChoicesLinkURL - In the implementation block
@property (nonatomic,retain) FBAdBrowserController * adChoicesBrowserController;              //@synthesize adChoicesBrowserController=_adChoicesBrowserController - In the implementation block
@property (assign,nonatomic) BOOL animating;                                                  //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) BOOL extended;                                                   //@synthesize extended=_extended - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * sponsoredImageView;                         //@synthesize sponsoredImageView=_sponsoredImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                          //@synthesize label=_label - In the implementation block
-(FBAdImage *)adChoicesIcon;
-(NSURL *)adChoicesLinkURL;
-(void)viewControllerDismissed:(id)arg1 ;
-(void)setSponsoredImageView:(UIImageView *)arg1 ;
-(void)sponsoredImageTapped:(id)arg1 ;
-(BOOL)extended;
-(void)setAdChoicesBrowserController:(FBAdBrowserController *)arg1 ;
-(FBAdBrowserController *)adChoicesBrowserController;
-(void)extendAnimation:(BOOL)arg1 ;
-(void)setExtended:(BOOL)arg1 ;
-(id)generateLabel;
-(UIImageView *)sponsoredImageView;
-(void)updateMask;
-(id)initWithFrame:(CGRect)arg1 viewController:(id)arg2 adChoicesIcon:(id)arg3 adChoicesLinkURL:(id)arg4 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UILabel *)label;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)animating;
@end

