/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class FBReactionContext, FBMemModelObject, FBMemPage;

@interface FBReactionInlineReviewComposerBrickComponent : CKCompositeComponent <FBReactionBrickComponent> {

	FBReactionContext* _reactionContext;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemPage* _page;

}

@property (nonatomic,readonly) FBReactionContext * reactionContext;                                      //@synthesize reactionContext=_reactionContext - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) FBMemPage * page;                                                         //@synthesize page=_page - In the implementation block
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(FBReactionContext *)reactionContext;
-(FBMemPage *)page;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end
