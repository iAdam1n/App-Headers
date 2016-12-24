/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBInterstitialViewController.h>
#import <Facebook/FBInterstitialViewDelegate.h>
#import <Facebook/FBNuxStepViewController.h>

@protocol FBNUXViewControllerDelegate;
@class FBProfileVideoInterstitialNux, NSString;

@interface FBProfileVideoInterstitialNuxViewController : FBInterstitialViewController <FBInterstitialViewDelegate, FBNuxStepViewController> {

	FBProfileVideoInterstitialNux* _interstitial;
	id<FBNUXViewControllerDelegate> _delegate;
	unsigned long long _interfaceOrientationMask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientationMask;                  //@synthesize interfaceOrientationMask=_interfaceOrientationMask - In the implementation block
-(id)initWithStep:(id)arg1 ;
-(void)transitionToSubStep:(id)arg1 ;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBNUXViewControllerDelegate>)arg1 ;
-(id<FBNUXViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(CGSize)contentSizeForViewInPopover;
-(unsigned long long)interfaceOrientationMask;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
@end
