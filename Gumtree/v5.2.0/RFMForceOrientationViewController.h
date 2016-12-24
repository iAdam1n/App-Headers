/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/RFMViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class RFMForceOrientationNavigationController, NSString;

@interface RFMForceOrientationViewController : RFMViewController <UINavigationControllerDelegate> {

	RFMForceOrientationNavigationController* _rfmNavigationController;
	BOOL _canApplyForceOrientation;
	long long _forceOrientation;

}

@property (assign,nonatomic) long long forceOrientation;                 //@synthesize forceOrientation=_forceOrientation - In the implementation block
@property (assign,nonatomic) BOOL canApplyForceOrientation;              //@synthesize canApplyForceOrientation=_canApplyForceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canApplyForceOrientation;
-(long long)forceOrientation;
-(void)setCanApplyForceOrientation:(BOOL)arg1 ;
-(void)setForceOrientation:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithOrientation:(long long)arg1 ;
@end
