/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCommentStreamComponentDescriptor, FBCommentStreamSource, FBMemComment, FBCommentReplyPreviewConfiguration;

@interface FBCommentStreamCommentStateManager : NSObject {

	FBCommentStreamComponentDescriptor* _commentEditingDescriptor;
	FBCommentStreamSource* _commentSource;
	BOOL _isTopLevelComment;
	BOOL _preventGrayBarFromShowingUp;
	BOOL _dimmed;
	BOOL _disabled;
	BOOL _highlighted;
	BOOL _hasInlineComposer;
	unsigned long long _state;
	FBMemComment* _comment;
	FBCommentReplyPreviewConfiguration* _replyPreviewConfiguration;

}

@property (assign,nonatomic) unsigned long long state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBMemComment * comment;                                                      //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) FBCommentReplyPreviewConfiguration * replyPreviewConfiguration;              //@synthesize replyPreviewConfiguration=_replyPreviewConfiguration - In the implementation block
@property (assign,nonatomic) BOOL preventGrayBarFromShowingUp;                                            //@synthesize preventGrayBarFromShowingUp=_preventGrayBarFromShowingUp - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                                 //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                               //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                                            //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL hasInlineComposer;                                                      //@synthesize hasInlineComposer=_hasInlineComposer - In the implementation block
-(void)_transitionToEditingState;
-(id)commentDescriptor;
-(void)setPreventGrayBarFromShowingUp:(BOOL)arg1 ;
-(void)setHasInlineComposer:(BOOL)arg1 ;
-(FBCommentReplyPreviewConfiguration *)replyPreviewConfiguration;
-(void)setReplyPreviewConfiguration:(FBCommentReplyPreviewConfiguration *)arg1 ;
-(BOOL)preventGrayBarFromShowingUp;
-(BOOL)hasInlineComposer;
-(id)initWithCommentSource:(id)arg1 isTopLevelComment:(BOOL)arg2 ;
-(void)reloadComponent;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)highlighted;
-(FBMemComment *)comment;
-(void)setComment:(FBMemComment *)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end
