/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBNuxTooltipWithButtonsViewDelegate.h>
#import <Facebook/FBNuxStepViewController.h>

@protocol FBNUXViewControllerDelegate;
@class FBNuxTooltipWithButtonsView, UITapGestureRecognizer, FBNuxTooltipWithButtons, NSString;

@interface FBNuxTooltipWithButtonsViewController : UIViewController <FBNuxTooltipWithButtonsViewDelegate, FBNuxStepViewController> {

	FBNuxTooltipWithButtonsView* _toolTipView;
	UITapGestureRecognizer* _tapRecognizer;
	id<FBNUXViewControllerDelegate> _delegate;
	FBNuxTooltipWithButtons* _toolTip;

}

@property (nonatomic,retain) FBNuxTooltipWithButtons * toolTip;                            //@synthesize toolTip=_toolTip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(id)initWithStep:(id)arg1 ;
-(void)transitionToSubStep:(id)arg1 ;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2 ;
-(void)toolTipWithButtonsView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)toolTipWithButtonsView:(id)arg1 didSelectSecondaryButton:(id)arg2 ;
-(void)setDelegate:(id<FBNUXViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNUXViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(CGSize)contentSizeForViewInPopover;
-(void)tap:(id)arg1 ;
-(void)setToolTip:(FBNuxTooltipWithButtons *)arg1 ;
-(FBNuxTooltipWithButtons *)toolTip;
@end
