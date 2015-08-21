/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNEditablePeopleCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAvatarImageDecorating, MNThreadDetailsTableViewDataSourceDelegate;
@class FBMParticipantNameFormatter, FBUserSession, MNThreadViewModel, FBWebRTCCallabilityAwareCallController, MNCommerceOrderListViewModel, MNSharedPhotosGatingChecker, MNThreadDetailsViewController, MNEditablePeopleCell, NSArray, MNThreadDetailsContactInfoViewModel, FBMStringWithRedactedDescription, NSString;

@interface MNThreadDetailsTableViewDataSource : NSObject <MNEditablePeopleCellDelegate, UITableViewDataSource, MNThreadViewModelConfigurable> {

	FBMParticipantNameFormatter* _nameFormatter;
	FBUserSession* _session;
	MNThreadViewModel* _threadViewModel;
	FBWebRTCCallabilityAwareCallController* _callController;
	MNCommerceOrderListViewModel* _commerceOrderListViewModel;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	BOOL _useContactInfoCell;
	MNSharedPhotosGatingChecker* _sharedPhotosGatingChecker;
	MNThreadDetailsViewController* _threadDetailsViewController;
	MNEditablePeopleCell* _contactInfoCell;
	BOOL _peopleSectionExpanded;
	BOOL _threadNameCustom;
	id<MNThreadDetailsTableViewDataSourceDelegate> _delegate;
	NSArray* _threadParticipantsIds;
	unsigned long long _numberOfParticipantsShown;
	MNThreadDetailsContactInfoViewModel* _contactInfoViewModel;

}

@property (assign,nonatomic,__weak) id<MNThreadDetailsTableViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * threadParticipantsIds;                                      //@synthesize threadParticipantsIds=_threadParticipantsIds - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfParticipantsShown;                                //@synthesize numberOfParticipantsShown=_numberOfParticipantsShown - In the implementation block
@property (assign,nonatomic) BOOL peopleSectionExpanded;                                                  //@synthesize peopleSectionExpanded=_peopleSectionExpanded - In the implementation block
@property (nonatomic,copy) MNThreadDetailsContactInfoViewModel * contactInfoViewModel;                    //@synthesize contactInfoViewModel=_contactInfoViewModel - In the implementation block
@property (nonatomic,copy,readonly) FBMStringWithRedactedDescription * textFieldThreadName; 
@property (assign,getter=isThreadNameCustom,nonatomic) BOOL threadNameCustom;                             //@synthesize threadNameCustom=_threadNameCustom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(FBMStringWithRedactedDescription *)textFieldThreadName;
-(BOOL)_sharedPhotosCellEnabled;
-(void)_updateNumberOfParticipantsShown;
-(void)_configureWithThreadViewModel:(id)arg1 ;
-(BOOL)_voipIsEnabled;
-(long long)_numberOfRowsInSectionIndex:(long long)arg1 ;
-(unsigned long long)sectionWithSectionIndex:(unsigned long long)arg1 ;
-(long long)_numberOfRowsInSection:(unsigned long long)arg1 ;
-(BOOL)_showAllCellEnabled;
-(id)_contactInfoCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_settingsCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_peopleCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_showAllCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_addPeopleCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_otherSectionCellForRow:(unsigned long long)arg1 ;
-(id)_commerceOrderCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_commerceMoreOrdersCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)contactWithIndex:(unsigned long long)arg1 ;
-(BOOL)isThreadNameCustom;
-(BOOL)_rtcAudioButtonEnabled;
-(BOOL)_rtcVideoButtonEnabled;
-(unsigned long long)settingsRowWithSettingsRowIndex:(unsigned long long)arg1 ;
-(unsigned long long)otherRowWithOtherRowIndex:(unsigned long long)arg1 ;
-(id)_blockCell;
-(id)_reportCell;
-(id)_leaveGroupCell;
-(void)editablePeopleCellDidEndEditing:(id)arg1 ;
-(id)initWithSession:(id)arg1 nameFormatter:(id)arg2 callController:(id)arg3 avatarImageDecoration:(id)arg4 useContactInfoCell:(BOOL)arg5 sharedPhotosGatingChecker:(id)arg6 threadDetailsViewController:(id)arg7 ;
-(void)setPeopleSectionExpanded:(BOOL)arg1 ;
-(unsigned long long)sectionIndexWithSection:(unsigned long long)arg1 ;
-(unsigned long long)settingsRowIndexWithSettingsRow:(unsigned long long)arg1 ;
-(void)setCommerceOrderListViewModel:(id)arg1 ;
-(unsigned long long)otherRowIndexWithOtherRow:(unsigned long long)arg1 ;
-(NSArray *)threadParticipantsIds;
-(unsigned long long)numberOfParticipantsShown;
-(void)setNumberOfParticipantsShown:(unsigned long long)arg1 ;
-(BOOL)peopleSectionExpanded;
-(MNThreadDetailsContactInfoViewModel *)contactInfoViewModel;
-(void)setContactInfoViewModel:(MNThreadDetailsContactInfoViewModel *)arg1 ;
-(void)setThreadNameCustom:(BOOL)arg1 ;
-(void)setDelegate:(id<MNThreadDetailsTableViewDataSourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<MNThreadDetailsTableViewDataSourceDelegate>)delegate;
@end

