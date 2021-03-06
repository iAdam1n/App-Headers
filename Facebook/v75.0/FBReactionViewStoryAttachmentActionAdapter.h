/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionAttachmentActionAdapter.h>

@protocol FBQueriedReactionStoryAttachmentActionFieldsProtocol, FBReactionAttachmentActionAdapterDelegate;
@class FBActionBarItem, FBMemModelObject, FBReactionContext, UIButton, FBUserSession, NSString;

@interface FBReactionViewStoryAttachmentActionAdapter : NSObject <FBReactionAttachmentActionAdapter> {

	FBActionBarItem* _actionBarItem;
	FBMemModelObject*<FBQueriedReactionStoryAttachmentActionFieldsProtocol> _attachmentAction;
	FBReactionContext* _reactionContext;
	UIButton* _actionButton;
	id<FBReactionAttachmentActionAdapterDelegate> delegate;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBUserSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReactionAttachmentActionAdapterDelegate> delegate; 
-(id)actionBarItem;
-(void)attachmentActionTapped;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 attachmentAction:(id)arg3 ;
-(void)setDelegate:(id<FBReactionAttachmentActionAdapterDelegate>)arg1 ;
-(id<FBReactionAttachmentActionAdapterDelegate>)delegate;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)highlightedIcon;
-(FBUserSession *)session;
-(id)actionButton;
-(id)defaultIcon;
@end

