/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class FBExceptionHandler, UIAlertView, NSString;

@interface FBSafeModeChecker : NSObject <UIAlertViewDelegate> {

	/*^block*/id _initFinishedBlock;
	FBExceptionHandler* _exceptionHandler;
	BOOL _checkingSafeMode;
	BOOL _enteredSafeMode;
	UIAlertView* _alertView;

}

@property (getter=isCheckingSafeMode,nonatomic,readonly) BOOL checkingSafeMode;              //@synthesize checkingSafeMode=_checkingSafeMode - In the implementation block
@property (nonatomic,readonly) BOOL enteredSafeMode;                                         //@synthesize enteredSafeMode=_enteredSafeMode - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                        //@synthesize alertView=_alertView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCheckingSafeMode;
-(id)initWithExceptionHandler:(id)arg1 ;
-(void)checkSafeModeWithCrashThreshold:(unsigned long long)arg1 showDialog:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)enteredSafeMode;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

