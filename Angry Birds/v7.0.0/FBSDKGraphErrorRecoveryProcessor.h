/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol FBSDKGraphErrorRecoveryProcessorDelegate;
@class FBSDKErrorRecoveryAttempter, NSError, UIAlertView, NSString;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject <UIAlertViewDelegate> {

	FBSDKErrorRecoveryAttempter* _recoveryAttempter;
	NSError* _error;
	UIAlertView* _alertView;
	id<FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;

}

@property (nonatomic,retain) id<FBSDKGraphErrorRecoveryProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<FBSDKGraphErrorRecoveryProcessorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSDKGraphErrorRecoveryProcessorDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void*)arg2 ;
@end
