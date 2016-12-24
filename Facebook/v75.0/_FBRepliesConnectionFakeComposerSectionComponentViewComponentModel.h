/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedActorFieldsProtocol;
@class FBMemFeedback, FBCommentReplyFakeComposerActionListenerAnnouncer, FBMemModelObject;

@interface _FBRepliesConnectionFakeComposerSectionComponentViewComponentModel : NSObject {

	BOOL _dimmed;
	BOOL _disabled;
	FBMemFeedback* _feedback;
	FBCommentReplyFakeComposerActionListenerAnnouncer* _announcer;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _commentAuthor;

}

@property (nonatomic,readonly) FBMemFeedback * feedback;                                                   //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) FBCommentReplyFakeComposerActionListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedActorFieldsProtocol> commentAuthor;              //@synthesize commentAuthor=_commentAuthor - In the implementation block
@property (nonatomic,readonly) BOOL dimmed;                                                                //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) BOOL disabled;                                                              //@synthesize disabled=_disabled - In the implementation block
+(id)newWithFeedback:(id)arg1 announcer:(id)arg2 commentAuthor:(id)arg3 dimmed:(BOOL)arg4 disabled:(BOOL)arg5 ;
-(FBCommentReplyFakeComposerActionListenerAnnouncer *)announcer;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)commentAuthor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(FBMemFeedback *)feedback;
-(BOOL)disabled;
-(BOOL)dimmed;
@end
