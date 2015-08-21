/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNNuxViewDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMMessageSenderListener.h>

@protocol MNActionNuxPresenter, MNHawtLikeNuxControllerDelegate;
@class MNUserSettings, FBUserSession, MNHawtLikeNuxView, NSString;

@interface MNHawtLikeNuxController : NSObject <MNNuxViewDelegate, FBSessionClassProvidable, FBMMessageSenderListener> {

	MNUserSettings* _userSettings;
	FBUserSession* _session;
	MNHawtLikeNuxView* _hawtLikeNuxView;
	double _timeHawtLikeNuxPresented;
	BOOL _hasUsedLikeThisSession;
	id<MNActionNuxPresenter> _actionNuxPresenter;
	id<MNHawtLikeNuxControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                      //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<MNHawtLikeNuxControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)nuxViewDidTapToDismiss:(id)arg1 ;
-(void)thread:(id)arg1 didEnqueueMessage:(id)arg2 ;
-(void)_cancelDelayedHawtLikeNuxPresentation;
-(BOOL)_shouldPresentHawtLikeNux;
-(void)_presentHawtLikeNuxDelayed;
-(void)dismissHawtLikeNux;
-(void)_dismissHawtLikeNuxUserInitiated:(BOOL)arg1 ;
-(void)_presentHawtLikeNux;
-(void)_initHawtLikeNuxIfNeeded;
-(BOOL)isHawtLikeNuxPresented;
-(BOOL)_canPresentHawtLikeNux;
-(void)_logNuxDismissalUserInitiated:(BOOL)arg1 ;
-(void)_updateLikeStickerSentStateWith:(id)arg1 ;
-(void)updateHawtLikeNux;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(void)setDelegate:(id<MNHawtLikeNuxControllerDelegate>)arg1 ;
-(id<MNHawtLikeNuxControllerDelegate>)delegate;
-(void)reset;
@end

