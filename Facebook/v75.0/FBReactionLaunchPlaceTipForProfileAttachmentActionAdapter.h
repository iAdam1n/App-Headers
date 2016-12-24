/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionAttachmentActionAdapter.h>

@protocol FBReactionAttachmentActionAdapterDelegate, FBQueriedReactionStoryAttachmentActionFieldsProtocol;
@class FBActionBarItem, FBMemModelObject, FBUserSession, FBReactionContext, UIButton, NSString;

@interface FBReactionLaunchPlaceTipForProfileAttachmentActionAdapter : NSObject <FBReactionAttachmentActionAdapter> {

	id<FBReactionAttachmentActionAdapterDelegate> delegate;
	FBActionBarItem* _actionBarItem;
	FBMemModelObject*<FBQueriedReactionStoryAttachmentActionFieldsProtocol> _attachmentAction;
	FBUserSession* _session;
	FBReactionContext* _reactionContext;
	UIButton* _actionButton;

}

@property (nonatomic,retain) FBActionBarItem * actionBarItem;                                                                       //@synthesize actionBarItem=_actionBarItem - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionStoryAttachmentActionFieldsProtocol> attachmentAction;              //@synthesize attachmentAction=_attachmentAction - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBReactionContext * reactionContext;                                                                   //@synthesize reactionContext=_reactionContext - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                                                               //@synthesize actionButton=_actionButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReactionAttachmentActionAdapterDelegate> delegate; 
-(FBReactionContext *)reactionContext;
-(void)setReactionContext:(FBReactionContext *)arg1 ;
-(FBActionBarItem *)actionBarItem;
-(void)attachmentActionTapped;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 attachmentAction:(id)arg3 ;
-(void)setActionBarItem:(FBActionBarItem *)arg1 ;
-(FBMemModelObject*<FBQueriedReactionStoryAttachmentActionFieldsProtocol>)attachmentAction;
-(void)setAttachmentAction:(FBMemModelObject*<FBQueriedReactionStoryAttachmentActionFieldsProtocol>)arg1 ;
-(void)setDelegate:(id<FBReactionAttachmentActionAdapterDelegate>)arg1 ;
-(id<FBReactionAttachmentActionAdapterDelegate>)delegate;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)highlightedIcon;
-(FBUserSession *)session;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIButton *)actionButton;
-(id)defaultIcon;
@end
