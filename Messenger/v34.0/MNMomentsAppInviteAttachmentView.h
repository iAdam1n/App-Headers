/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKenBurnsAnimatorViewDataSource.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNMomentsAppInviteAttachmentViewDelegate;
@class UILabel, UIView, FBNetworkImageView, FBKenBurnsAnimatorView, FBUserSession, MNMomentsAppInviteAttachmentViewModel, NSString;

@interface MNMomentsAppInviteAttachmentView : UIView <FBKenBurnsAnimatorViewDataSource, MNAttachmentView> {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UILabel* _callToActionLabel;
	UIView* _separator;
	FBNetworkImageView* _singlePhotoImageView;
	FBKenBurnsAnimatorView* _kenBurnsAnimatorView;
	FBUserSession* _session;
	id<MNMomentsAppInviteAttachmentViewDelegate> _delegate;
	MNMomentsAppInviteAttachmentViewModel* _inviteViewModel;

}

@property (assign,nonatomic,__weak) id<MNMomentsAppInviteAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNMomentsAppInviteAttachmentViewModel * inviteViewModel;                     //@synthesize inviteViewModel=_inviteViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)setViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(id)kenBurnsAnimatorView:(id)arg1 viewToBeShownAfterView:(id)arg2 ;
-(id)viewModel;
-(void)_didTapAttachment:(id)arg1 ;
-(MNMomentsAppInviteAttachmentViewModel *)inviteViewModel;
-(void)setInviteViewModel:(MNMomentsAppInviteAttachmentViewModel *)arg1 ;
-(void)setDelegate:(id<MNMomentsAppInviteAttachmentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMomentsAppInviteAttachmentViewDelegate>)delegate;
@end
