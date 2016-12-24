/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNApplicationRootViewControllerGetting, MNModalPresentation, FBProvider;
@class FBWebRTCCallStarter, MNUserStore, FBWebRTCSchedulingLogger, FBWebRTCScheduleCallNavigationCoordinator, FBWebRTCScheduleCallMutationHelper, FBWebRTCAdminMsgAttachmentViewModel, FBMUser, MNCoreTextView, UIImageView, UIView, MNAttachmentActionButton, NSString;

@interface FBWebRTCAdminMsgAttachmentView : UIView <MNAttachmentView> {

	FBWebRTCCallStarter* _callStarter;
	MNUserStore* _userStore;
	id<MNApplicationRootViewControllerGetting> _applicationHandler;
	id<MNModalPresentation> _modalPresenter;
	FBWebRTCSchedulingLogger* _schedulingLogger;
	FBWebRTCScheduleCallNavigationCoordinator* _schedulingNavigationCoordinator;
	id<FBProvider> _scheduleCallMutationProvider;
	FBWebRTCScheduleCallMutationHelper* _scheduleCallMutation;
	FBWebRTCAdminMsgAttachmentViewModel* _rtcAdminMsgViewModel;
	FBMUser* _otherUser;
	MNCoreTextView* _titleView;
	MNCoreTextView* _subtitleView;
	UIImageView* _subtitleIconView;
	UIView* _actionSeperatorView;
	MNAttachmentActionButton* _actionButton;
	UIView* _schedulingActionSeperatorView;
	MNAttachmentActionButton* _schedulingActionButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_handleCallActionTap;
-(void)_handleScheduleCallActionTap;
-(id)_otherUserID;
-(void)_handleScheduleCallActionTapCanMutateSchedule;
-(void)_showScheduleCallActionSheetWithOtherUser:(id)arg1 ;
-(id)_schedulingQuickTimePickerAlertControllerWithOtherUser:(id)arg1 logger:(id)arg2 ;
-(void)_tappedScheduleInOneHourWithLogger:(id)arg1 ;
-(void)_tappedScheduleCustomTimeWithOtherUser:(id)arg1 logger:(id)arg2 ;
-(void)_tappedCancelScheduleActionSheetWithLogger:(id)arg1 ;
-(id)initWithCallStarter:(id)arg1 userStore:(id)arg2 applicationHandler:(id)arg3 modalPresenter:(id)arg4 schedulingLogger:(id)arg5 schedulingNavigationCoordinator:(id)arg6 scheduleCallMutationProvider:(id)arg7 ;
-(void)_alertErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(id)_ensureScheduleCallMutation;
-(void)layoutSubviews;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end
