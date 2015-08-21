/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, FBMProfileURLUtils;
@class FBSyncStore, FBCurrentCountryManager, FBWebRTCCallController, MNBatchInvitePickerNavigationHandler, MNNavigationCoordinator, UIActionSheet, MNUserInfoConfiguration, UIView, NSArray, NSString;

@interface MNUserInfoController : NSObject <UIActionSheetDelegate, FBClassProvidable> {

	FBSyncStore* _syncStore;
	FBCurrentCountryManager* _countryManager;
	id<FBProvider> _threadNavigationCoordinatorProvider;
	FBWebRTCCallController* _webRTCCallController;
	MNBatchInvitePickerNavigationHandler* _batchInvitePickerNavigationHandler;
	id<FBMProfileURLUtils> _profileURLUtils;
	MNNavigationCoordinator* _navigationCoordinator;
	UIActionSheet* _actionSheet;
	MNUserInfoConfiguration* _configuration;
	UIView* _presentingView;
	UIView* _sourceView;
	NSArray* _contactPoints;
	NSArray* _actionSheetOptions;

}

@property (nonatomic,copy) MNUserInfoConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIView * presentingView;                            //@synthesize presentingView=_presentingView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,copy) NSArray * contactPoints;                              //@synthesize contactPoints=_contactPoints - In the implementation block
@property (nonatomic,copy) NSArray * actionSheetOptions;                         //@synthesize actionSheetOptions=_actionSheetOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(NSArray *)contactPoints;
-(void)setContactPoints:(NSArray *)arg1 ;
-(void)setPresentingView:(UIView *)arg1 ;
-(void)_fetchSyncContacts;
-(void)_createAndShowActionSheet;
-(id)_getActionOpetions;
-(void)_showAlertControllerWithOptions:(id)arg1 ;
-(void)setActionSheetOptions:(NSArray *)arg1 ;
-(void)_viewUserProfile;
-(void)_callPhoneNumberWithIndex:(long long)arg1 ;
-(void)_callUserByVOIP;
-(void)_navigateToUserThread;
-(void)_inviteUser;
-(void)showInView:(id)arg1 sourceView:(id)arg2 configuration:(id)arg3 ;
-(UIView *)presentingView;
-(NSArray *)actionSheetOptions;
-(void)dealloc;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setConfiguration:(MNUserInfoConfiguration *)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)dismiss;
-(UIView *)sourceView;
-(MNUserInfoConfiguration *)configuration;
@end

