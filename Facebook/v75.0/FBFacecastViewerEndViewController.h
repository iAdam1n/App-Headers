/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastViewerEndViewDelegate.h>
#import <Facebook/FBMediaUFIBarControllerPresentingViewController.h>

@protocol FBServiceTransactionMutating, FBFacecastViewerEndViewControllerDelegate;
@class FBUserSession, NSArray, NSString, FBMemFeedStory, FBMemVideo, FBMediaUFIBarController, FBFacecastViewerEndView;

@interface FBFacecastViewerEndViewController : UIViewController <FBFacecastViewerEndViewDelegate, FBMediaUFIBarControllerPresentingViewController> {

	FBUserSession* _session;
	NSArray* _upsellChannels;
	NSString* _customTitle;
	NSString* _customMessage;
	NSString* _analyticsModule;
	NSArray* _trackingCodes;
	FBMemFeedStory* _story;
	FBMemVideo* _video;
	id<FBServiceTransactionMutating> _token;
	id<FBFacecastViewerEndViewControllerDelegate> _delegate;
	FBMediaUFIBarController* _ufiController;

}

@property (nonatomic,retain) FBFacecastViewerEndView * view; 
@property (assign,nonatomic,__weak) id<FBFacecastViewerEndViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaUFIBarControllerDelegate> ufiDelegate; 
@property (nonatomic,readonly) FBMediaUFIBarController * ufiController;                                  //@synthesize ufiController=_ufiController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)facecastViewerEndViewDoneButtonTapped:(id)arg1 ;
-(void)facecastViewerEndView:(id)arg1 tappedChannel:(id)arg2 ;
-(void)facecastViewerEndView:(id)arg1 tappedIntentTarget:(id)arg2 ;
-(void)facecastViewerEndView:(id)arg1 tappedSubscribeButton:(BOOL)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_fetchVideoInformation;
-(void)_updateDescriptionForVideo:(id)arg1 ;
-(BOOL)canShowMoreOption;
-(void)dismissAfterDeletion;
-(void)disableDismissal;
-(void)enableDismissal;
-(id)initWithSession:(id)arg1 story:(id)arg2 video:(id)arg3 customTitle:(id)arg4 customMessage:(id)arg5 analyticsModule:(id)arg6 trackingCodes:(id)arg7 ;
-(void)setUfiDelegate:(id<FBMediaUFIBarControllerDelegate>)arg1 ;
-(id<FBMediaUFIBarControllerDelegate>)ufiDelegate;
-(FBMediaUFIBarController *)ufiController;
-(void)setDelegate:(id<FBFacecastViewerEndViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFacecastViewerEndViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end
