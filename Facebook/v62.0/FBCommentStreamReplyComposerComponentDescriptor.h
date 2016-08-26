/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBQueriedActorFieldsProtocol, FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate;
@class FBMemComment, FBMemModelObject, FBCommentComposerViewController, FBCommentStreamKeyboardAwareInsetManager;

@interface FBCommentStreamReplyComposerComponentDescriptor : NSObject <NSCopying> {

	BOOL _showInlineComposer;
	FBMemComment* _comment;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _commentAuthor;
	FBCommentComposerViewController* _composerViewController;
	FBCommentStreamKeyboardAwareInsetManager* _insetManager;
	id<FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate> _composerDelegate;

}

@property (nonatomic,readonly) FBMemComment * comment;                                                                                        //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedActorFieldsProtocol> commentAuthor;                                                 //@synthesize commentAuthor=_commentAuthor - In the implementation block
@property (nonatomic,readonly) BOOL showInlineComposer;                                                                                       //@synthesize showInlineComposer=_showInlineComposer - In the implementation block
@property (nonatomic,readonly) FBCommentComposerViewController * composerViewController;                                                      //@synthesize composerViewController=_composerViewController - In the implementation block
@property (nonatomic,readonly) FBCommentStreamKeyboardAwareInsetManager * insetManager;                                                       //@synthesize insetManager=_insetManager - In the implementation block
@property (nonatomic,__weak,readonly) id<FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate> composerDelegate;              //@synthesize composerDelegate=_composerDelegate - In the implementation block
-(id<FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate>)composerDelegate;
-(FBCommentComposerViewController *)composerViewController;
-(FBCommentStreamKeyboardAwareInsetManager *)insetManager;
-(id)initWithComment:(id)arg1 commentAuthor:(id)arg2 composerViewController:(id)arg3 composerDelegate:(id)arg4 showInlineComposer:(BOOL)arg5 insetManager:(id)arg6 ;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)commentAuthor;
-(BOOL)showInlineComposer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBMemComment *)comment;
@end
