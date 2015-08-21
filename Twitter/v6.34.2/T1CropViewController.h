/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIViewController.h>
#import <Twitter/T1CropContentViewDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1JumpBackToHomeTimelineBehavior.h>

@protocol T1CropViewControllerDelegate;
@class UIImage, TFNTwitterMediaAssetFilterParameters, UIButton, TFNHUD, TFNTimer, T1CropContentView, TFNTwitterAccount, NSString;

@interface T1CropViewController : UIViewController <T1CropContentViewDelegate, TFNTwitterAuthenticated, T1JumpBackToHomeTimelineBehavior> {

	UIImage* _image;
	TFNTwitterMediaAssetFilterParameters* _initialParameters;
	UIButton* _selectedButton;
	long long _cropShape;
	TFNHUD* _hud;
	TFNTimer* _hudTimer;
	T1CropContentView* _contentView;
	TFNTwitterAccount* _account;
	id<T1CropViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<T1CropViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                   //@synthesize account=_account - In the implementation block
-(void)_apply:(id)arg1 ;
-(void)_tapCropShapeOriginal:(id)arg1 ;
-(void)_tapCropShapeWide:(id)arg1 ;
-(void)_tapCropShapeSquare:(id)arg1 ;
-(void)_tapRotate:(id)arg1 ;
-(void)_resetContentInset;
-(void)_selectButton:(id)arg1 ;
-(void)_selectCropShape:(long long)arg1 ;
-(void)_hudTimerCallback:(id)arg1 ;
-(CGSize)_cropImageSize:(long long)arg1 ;
-(void)cropContentViewBeganCustomCrop:(id)arg1 ;
-(id)initWithImage:(id)arg1 parameters:(id)arg2 account:(id)arg3 ;
-(BOOL)userInteractionEnabled;
-(void)_showHUDWithDelay:(double)arg1 ;
-(void)_hideHUD;
-(void)_cancel:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1CropViewControllerDelegate>)arg1 ;
-(id<T1CropViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

