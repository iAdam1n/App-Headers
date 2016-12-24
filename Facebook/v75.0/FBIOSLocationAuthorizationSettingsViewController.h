/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, UILabel, UIView, NSString;

@interface FBIOSLocationAuthorizationSettingsViewController : UIViewController <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	int _targetStatus;
	UILabel* _titleLabel;
	UIView* _instructionList;
	NSString* _title;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWithTitle:(id)arg1 desiredAuthorization:(int)arg2 ;
-(void)_didTapSettingsButton:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end
