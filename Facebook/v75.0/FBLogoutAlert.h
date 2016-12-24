/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface FBLogoutAlert : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertView;
	NSString* _title;
	NSString* _message;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIAlertView * alertView;               //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alertView;
-(void)cancelLogoutAlert;
-(id)initWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showLogoutAlert;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(UIAlertView *)alertView;
-(void)setAlertView:(UIAlertView *)arg1 ;
@end
