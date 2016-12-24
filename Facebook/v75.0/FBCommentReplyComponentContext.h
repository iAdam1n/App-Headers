/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBUFICommentToolbox, FBCommentStreamCellStyle, FBCommentStreamInlineReplyExpansionUIOptions;

@interface FBCommentReplyComponentContext : NSObject {

	FBUFICommentToolbox* _toolbox;
	FBCommentStreamCellStyle* _topLevelCommentCellStyle;
	FBCommentStreamInlineReplyExpansionUIOptions* _inlineReplyExpansionOptions;
	CKTypedComponentAction<> _replyToTopLevelCommentAction;

}

@property (nonatomic,readonly) FBUFICommentToolbox * toolbox;                                                           //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBCommentStreamCellStyle * topLevelCommentCellStyle;                                     //@synthesize topLevelCommentCellStyle=_topLevelCommentCellStyle - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> replyToTopLevelCommentAction;                                   //@synthesize replyToTopLevelCommentAction=_replyToTopLevelCommentAction - In the implementation block
@property (nonatomic,readonly) FBCommentStreamInlineReplyExpansionUIOptions * inlineReplyExpansionOptions;              //@synthesize inlineReplyExpansionOptions=_inlineReplyExpansionOptions - In the implementation block
-(FBUFICommentToolbox *)toolbox;
-(FBCommentStreamInlineReplyExpansionUIOptions *)inlineReplyExpansionOptions;
-(FBCommentStreamCellStyle *)topLevelCommentCellStyle;
-(CKTypedComponentAction<>)replyToTopLevelCommentAction;
-(id)initWithToolbox:(id)arg1 cellStyle:(id)arg2 replyToTopLevelCommentAction:(CKTypedComponentAction<>)arg3 inlineReplyExpansionOptions:(id)arg4 ;
@end
