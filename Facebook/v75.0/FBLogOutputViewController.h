/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBLogTailing;
@class UITextView;

@interface FBLogOutputViewController : UIViewController {

	UITextView* _textView;
	id<FBLogTailing> _log;
	unsigned long long _scrollPosition;

}

@property (assign,nonatomic) unsigned long long scrollPosition;              //@synthesize scrollPosition=_scrollPosition - In the implementation block
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(id)initWithTitle:(id)arg1 logTailing:(id)arg2 scrollPosition:(unsigned long long)arg3 ;
-(unsigned long long)scrollPosition;
-(void)setScrollPosition:(unsigned long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
