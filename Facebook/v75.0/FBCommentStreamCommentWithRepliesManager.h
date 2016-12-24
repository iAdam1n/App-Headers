/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCommentStreamDimmable.h>
#import <Facebook/FBCommentStreamDisabling.h>
#import <Facebook/FBCommentStreamReloadableProtocol.h>

@class FBUserSession, FBCommentStreamScrollPositionManager, FBCommentStreamSourceAggregator, FBCommentStreamSource, FBMemComment, FBCommentReplyPreviewConfiguration, FBCommentStreamComponentDescriptor, FBCommentStreamCommentRepliesManager, FBCommentStreamCommentStateManager, NSString;

@interface FBCommentStreamCommentWithRepliesManager : NSObject <FBCommentStreamDimmable, FBCommentStreamDisabling, FBCommentStreamReloadableProtocol> {

	FBUserSession* _userSession;
	FBCommentStreamScrollPositionManager* _scrollPositionManager;
	FBCommentStreamSourceAggregator* _sourceAggregator;
	FBCommentStreamSource* _commentSource;
	FBMemComment* _comment;
	unsigned long long _state;
	FBCommentReplyPreviewConfiguration* _replyPreviewConfiguration;
	BOOL _didTriggerGrayBarReplyLoad;
	FBCommentStreamComponentDescriptor* _commentEditingDescriptor;
	FBCommentStreamCommentRepliesManager* _commentRepliesManager;
	FBCommentStreamCommentStateManager* _commentStateManager;
	BOOL _isFeedbackRanked;
	NSString* _focusedCommentID;
	NSString* _focusedReplyID;
	BOOL _disabled;
	BOOL _dimmed;

}

@property (nonatomic,retain) FBMemComment * comment;                               //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,readonly) id<FBCommentStreamChildSource> source;              //@synthesize sourceAggregator=_sourceAggregator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL dimmed;                                          //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                        //@synthesize disabled=_disabled - In the implementation block
-(void)reloadSources;
-(void)scrollToComment;
-(void)loadNeckReplies;
-(void)loadTailReplies;
-(void)setState:(unsigned long long)arg1 forReply:(id)arg2 ;
-(id)repliesWithState:(unsigned long long)arg1 ;
-(BOOL)managesComment:(id)arg1 ;
-(id)mutationManagerForReplies;
-(void)scrollToReply:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 forReply:(id)arg2 ;
-(void)loadReplyThread;
-(void)activateReplyComposerForComment:(id)arg1 ;
-(void)dismissReplyComposer;
-(id)initWithFeedback:(id)arg1 replyPreviewConfiguration:(id)arg2 overlaySpinnerManager:(id)arg3 focusedCommentID:(id)arg4 focusedReplyID:(id)arg5 scrollPositionManager:(id)arg6 insetManager:(id)arg7 replyComposerConfig:(FBCommentStreamInlineReplyComposerConfiguration)arg8 toolbox:(id)arg9 ;
-(BOOL)hasPagedReplies;
-(void)updateComment:(id)arg1 highlighted:(BOOL)arg2 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id<FBCommentStreamChildSource>)source;
-(void)setComment:(FBMemComment *)arg1 ;
-(FBMemComment *)comment;
-(id)replies;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end
