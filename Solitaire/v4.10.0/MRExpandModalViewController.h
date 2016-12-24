/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SolitaireFree/MPClosableViewDelegate.h>
#import <SolitaireFree/MPForceableOrientationProtocol.h>

@class NSString;

@interface MRExpandModalViewController : UIViewController <MPClosableViewDelegate, MPForceableOrientationProtocol> {

	BOOL _statusBarHidden;
	BOOL _applicationHidesStatusBar;
	unsigned long long _supportedOrientationMask;

}

@property (assign,nonatomic) BOOL statusBarHidden;                                     //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (assign,nonatomic) BOOL applicationHidesStatusBar;                           //@synthesize applicationHidesStatusBar=_applicationHidesStatusBar - In the implementation block
@property (assign,nonatomic) unsigned long long supportedOrientationMask;              //@synthesize supportedOrientationMask=_supportedOrientationMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hideStatusBar;
-(unsigned long long)supportedOrientationMask;
-(void)setSupportedOrientationMask:(unsigned long long)arg1 ;
-(void)setApplicationHidesStatusBar:(BOOL)arg1 ;
-(BOOL)applicationHidesStatusBar;
-(id)initWithOrientationMask:(unsigned long long)arg1 ;
-(void)restoreStatusBarVisibility;
-(BOOL)statusBarHidden;
-(BOOL)prefersStatusBarHidden;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(void)closeButtonPressed:(id)arg1 ;
@end
