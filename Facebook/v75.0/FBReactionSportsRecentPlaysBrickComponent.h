/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol;
@class FBHScrollComponent, FBReactionContext, FBMemModelObject, NSArray;

@interface FBReactionSportsRecentPlaysBrickComponent : CKCompositeComponent <FBReactionBrickComponent> {

	FBHScrollComponent* _hscrollComponent;
	double _width;
	BOOL _shouldAnimateInsert;
	FBReactionContext* _reactionContext;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
	NSArray* _plays;

}

@property (nonatomic,readonly) FBReactionContext * reactionContext;                                                        //@synthesize reactionContext=_reactionContext - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> unitComponent;              //@synthesize unitComponent=_unitComponent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * plays;                                                                       //@synthesize plays=_plays - In the implementation block
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)unitComponent;
-(FBReactionContext *)reactionContext;
-(NSArray *)plays;
@end
