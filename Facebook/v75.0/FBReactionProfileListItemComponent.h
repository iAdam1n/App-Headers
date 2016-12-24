/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBQueriedProfileFieldsProtocol, FBReactionAttachmentAction;
@class FBMemModelObject, FBReactionContext;

@interface FBReactionProfileListItemComponent : CKCompositeComponent {

	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemModelObject*<FBQueriedProfileFieldsProtocol> _profile;
	FBReactionContext* _context;
	id<FBReactionAttachmentAction> _attachmentAction;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedProfileFieldsProtocol> profile;                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) FBReactionContext * context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<FBReactionAttachmentAction> attachmentAction;                          //@synthesize attachmentAction=_attachmentAction - In the implementation block
+(id)newWithAttachment:(id)arg1 unit:(id)arg2 reactionContext:(id)arg3 isFirstItem:(BOOL)arg4 isLastItem:(BOOL)arg5 ;
-(id<FBReactionAttachmentAction>)attachmentAction;
-(void)profileTapped;
-(FBReactionContext *)context;
-(FBMemModelObject*<FBQueriedProfileFieldsProtocol>)profile;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end
