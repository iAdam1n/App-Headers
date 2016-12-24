/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBUserSession, MNMessageLiveLocationCircularProfileView, NSString;

@interface MNMessageLiveLocationCircularProfileViewController : UIViewController {

	FBUserSession* _session;
	MNMessageLiveLocationCircularProfileView* _view;
	BOOL _isStale;
	BOOL _animationWasStarted;
	NSString* _userId;

}

@property (nonatomic,copy,readonly) NSString * userId;              //@synthesize userId=_userId - In the implementation block
-(id)initWithUserSession:(id)arg1 userId:(id)arg2 isStale:(BOOL)arg3 ;
-(void)_loadProfileImage;
-(void)_handleImageDownloadResponse:(id)arg1 ;
-(void)setIsStale:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(NSString *)userId;
@end
