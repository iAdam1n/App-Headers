/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface FBSettingsSingleTextFieldViewController : UIViewController <UITextFieldDelegate> {

	UITextField* _urlTextField;
	NSString* _staticText;

}

@property (nonatomic,copy) NSString * staticText;                       //@synthesize staticText=_staticText - In the implementation block
@property (nonatomic,readonly) UITextField * urlTextField;              //@synthesize urlTextField=_urlTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextField *)urlTextField;
-(NSString *)staticText;
-(void)setStaticText:(NSString *)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
