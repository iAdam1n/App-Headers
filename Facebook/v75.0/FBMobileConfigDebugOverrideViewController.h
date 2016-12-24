/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>

@class NSString, FBMobileConfigDebugOverridesView;

@interface FBMobileConfigDebugOverrideViewController : UIViewController {

	int _parameterType;
	unsigned long long _configParameter;
	shared_ptr<mobileconfig::FBMobileConfigOverridesTable>* _overridesTable;
	NSString* _overrideValue;
	FBMobileConfigDebugOverridesView* _mobileConfigDebugOverridesView;
	BOOL _isQEParam;

}
-(void)_setupNavigationItems;
-(void)_saveOverride;
-(void)_showMessage:(id)arg1 withTitle:(id)arg2 andClose:(BOOL)arg3 ;
-(id)initWithParameterType:(int)arg1 overridesTable:(shared_ptr<mobileconfig::FBMobileConfigOverridesTable>*)arg2 configParameter:(unsigned long long)arg3 overrideValue:(id)arg4 isQEParam:(BOOL)arg5 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_cancel;
@end
