/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@interface BITHockeyBaseViewController : UITableViewController {

	BOOL _modal;
	long long _statusBarStyle;
	BOOL _modalAnimated;

}

@property (assign,nonatomic) BOOL modalAnimated;              //@synthesize modalAnimated=_modalAnimated - In the implementation block
-(id)initWithStyle:(long long)arg1 modal:(BOOL)arg2 ;
-(id)initWithModalStyle:(BOOL)arg1 ;
-(void)setModalAnimated:(BOOL)arg1 ;
-(void)onDismissModal:(id)arg1 ;
-(BOOL)modalAnimated;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
