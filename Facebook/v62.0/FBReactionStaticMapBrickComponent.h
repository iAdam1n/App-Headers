/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBReactionAction;
@class FBReactionContext, FBMemModelObject;

@interface FBReactionStaticMapBrickComponent : CKCompositeComponent <FBReactionBrickComponent> {

	FBReactionContext* _reactionContext;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	id<FBReactionAction> _action;

}
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
+(double)zoomRadiusForMapViewHeight:(double)arg1 centerCoordinate:(CGSize)arg2 zoom:(unsigned long long)arg3 ;
-(void)openMap:(id)arg1 ;
@end

