//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGContactsController.h"

#import "TGNavigationControllerItem.h"

@class ASHandle, NSString, TGConversation, TGCreateGroupController, TGProgressWindow, TGUser, UILabel, UIView;

@interface TGSelectContactController : TGContactsController <TGNavigationControllerItem>
{
    UIView *_titleContainer;
    UILabel *_titleLabel;
    UILabel *_counterLabel;
    _Bool _shouldBeRemovedFromNavigationAfterHiding;
    _Bool _createEncrypted;
    _Bool _createBroadcast;
    _Bool _createChannel;
    _Bool _inviteToChannel;
    ASHandle *_actionsHandle;
    TGConversation *_channelConversation;
    NSString *_channelLink;
    CDUnknownBlockType _onChannelMembersInvited;
    CDUnknownBlockType _onCreateLink;
    TGCreateGroupController *_createGroupController;
    TGProgressWindow *_progressWindow;
    TGUser *_currentEncryptedUser;
}

@property(retain, nonatomic) TGUser *currentEncryptedUser; // @synthesize currentEncryptedUser=_currentEncryptedUser;
@property(retain, nonatomic) TGProgressWindow *progressWindow; // @synthesize progressWindow=_progressWindow;
@property(nonatomic) _Bool inviteToChannel; // @synthesize inviteToChannel=_inviteToChannel;
@property(nonatomic) _Bool createChannel; // @synthesize createChannel=_createChannel;
@property(nonatomic) _Bool createBroadcast; // @synthesize createBroadcast=_createBroadcast;
@property(nonatomic) _Bool createEncrypted; // @synthesize createEncrypted=_createEncrypted;
@property(retain, nonatomic) TGCreateGroupController *createGroupController; // @synthesize createGroupController=_createGroupController;
@property(copy, nonatomic) CDUnknownBlockType onCreateLink; // @synthesize onCreateLink=_onCreateLink;
@property(copy, nonatomic) CDUnknownBlockType onChannelMembersInvited; // @synthesize onChannelMembersInvited=_onChannelMembersInvited;
@property(retain, nonatomic) NSString *channelLink; // @synthesize channelLink=_channelLink;
@property(retain, nonatomic) TGConversation *channelConversation; // @synthesize channelConversation=_channelConversation;
@property(retain, nonatomic) ASHandle *actionsHandle; // @synthesize actionsHandle=_actionsHandle;
@property(nonatomic) _Bool shouldBeRemovedFromNavigationAfterHiding; // @synthesize shouldBeRemovedFromNavigationAfterHiding=_shouldBeRemovedFromNavigationAfterHiding;
- (void).cxx_destruct;
- (void)didSelectRowInFirstSection:(long long)arg1;
- (double)itemHeightForFirstSection;
- (long long)numberOfRowsInFirstSection;
- (id)cellForRowInFirstSection:(long long)arg1;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)contactDeselected:(id)arg1;
- (void)singleUserSelected:(id)arg1;
- (void)updateCount:(int)arg1;
- (void)contactSelected:(id)arg1;
- (void)createButtonPressed:(id)arg1;
- (void)_layoutTitleViews:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)loadView;
- (id)baseTitle;
- (void)encryptionItemSelected;
- (void)actionItemSelected;
- (void)inviteChannelNextPressed;
- (void)cancelPressed;
- (void)channelNextPressed;
- (void)backPressed;
- (void)closePressed;
- (id)initWithCreateGroup:(_Bool)arg1 createEncrypted:(_Bool)arg2 createBroadcast:(_Bool)arg3 createChannel:(_Bool)arg4 inviteToChannel:(_Bool)arg5 showLink:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
