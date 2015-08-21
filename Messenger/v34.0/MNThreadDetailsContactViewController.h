/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNThreadDetailsHeaderViewDelegate.h>
#import <Messenger/MNThreadDetailsContactTableViewDataSourceDelegate.h>
#import <Messenger/MNPresenceUpdateListening.h>
#import <Messenger/FBWebRTCCallabilityAwareCallControllerDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol FBClock, MNThreadDetailsContactViewControllerDelegate;
@class FBUserSession, MNThreadDetailsContactView, MNThreadDetailsHeaderView, FBMUser, MNThreadImageManager, MNProfileImageViewController, MNThreadDetailsContactTableViewDataSource, MNPresenceSubscriptionService, MNThreadViewModel, FBWebRTCCallabilityAwareCallController, MNUserInfoControllerCoordinator, NSString;

@interface MNThreadDetailsContactViewController : UIViewController <UITableViewDelegate, MNThreadDetailsHeaderViewDelegate, MNThreadDetailsContactTableViewDataSourceDelegate, MNPresenceUpdateListening, FBWebRTCCallabilityAwareCallControllerDelegate, MNThreadViewModelConfigurable> {

	FBUserSession* _session;
	MNThreadDetailsContactView* _view;
	MNThreadDetailsHeaderView* _threadContactHeaderView;
	FBMUser* _contact;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadDetailsContactTableViewDataSource* _tableViewDataSource;
	id<FBClock> _clock;
	MNPresenceSubscriptionService* _presenceService;
	MNThreadViewModel* _threadViewModel;
	FBWebRTCCallabilityAwareCallController* _callController;
	MNUserInfoControllerCoordinator* _userInfoControllerCoordinator;
	id<MNThreadDetailsContactViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadDetailsContactViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)callabilityAwareCallControllerOtherUserCallabilityDidChange:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)initWithSession:(id)arg1 contact:(id)arg2 threadImageManager:(id)arg3 profileImageViewController:(id)arg4 clock:(id)arg5 presenceSubscriptionService:(id)arg6 callController:(id)arg7 avatarImageDecoration:(id)arg8 userInfoControllerCoordinator:(id)arg9 ;
-(BOOL)threadDetailsContactTableViewDataShourceShouldShowRoundedCorners:(id)arg1 ;
-(void)_configureHeaderView;
-(void)_updateHeaderViewWithSyncPresence:(id)arg1 ;
-(void)threadDetailsHeaderViewDidEndEditingThreadName:(id)arg1 ;
-(void)threadDetailsHeaderViewDidPressImageView:(id)arg1 ;
-(BOOL)threadDetailsHeaderViewCanEditThreadName:(id)arg1 ;
-(void)threadDetailsHeaderViewDidPressThreadNameLabel:(id)arg1 ;
-(void)threadDetailsHeaderViewDidTapEmptySpace:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNThreadDetailsContactViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<MNThreadDetailsContactViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

