/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseUnitComponentAdapter.h>
#import <Facebook/FBReactionFixedHeightVerticallyCenteredViewDelegate.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBReactionActionAdapter;
@class FBMemModelObject, UIView, FBReactionContext, CKComponentHostingView, UIControl, FBConsistentLookasideCacheObservationHandle, NSString;

@interface FBReactionEventDescriptionWithFacepileUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionFixedHeightVerticallyCenteredViewDelegate> {

	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
	id<FBReactionActionAdapter> _actionAdapter;
	id<FBReactionActionAdapter> _auxActionAdapter;
	UIView* _componentView;
	FBReactionContext* _reactionContext;
	CKComponentHostingView* _buttonHostingView;
	UIControl* _contentViewControl;
	FBConsistentLookasideCacheObservationHandle* _CLCHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)_eventStatusChanged:(id)arg1 ;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(id)componentView;
-(void)fixedHeightVerticallyCenteredView:(id)arg1 isHighlighted:(BOOL)arg2 ;
-(void)dealloc;
@end
