/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseAttachmentAdapter.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class UIView, FBReactionContext, FBUserSession, FBMemModelObject;

@interface FBReactionBoostedLocalAwarenessTipAttachmentsAdapter : FBReactionBaseAttachmentAdapter {

	UIView* _attachmentsView;
	FBReactionContext* _reactionContext;
	FBUserSession* _session;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;

}

@property (nonatomic,retain) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
+(id)_itemViewForAttachment:(id)arg1 renderIdiom:(unsigned long long)arg2 session:(id)arg3 ;
+(BOOL)supportsBottomBorder;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)willDisplayAttachments;
-(void)didEndDisplayingAttachments;
-(id)impressionEventLoggingExtras;
-(void)updateAttachmentsVisibility:(CGRect)arg1 scrollView:(id)arg2 ;
-(id)attachmentsView;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
-(void)setUnit:(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)arg1 ;
@end
