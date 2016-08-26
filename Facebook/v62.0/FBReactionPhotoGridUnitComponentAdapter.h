/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseUnitComponentAdapter.h>
#import <Facebook/FBReactionActionAdapterDelegate.h>
#import <Facebook/FBReactionPhotoGridComponentDelegate.h>

@protocol FBReactionActionAdapter, FBQueriedReactionUnitComponentFieldsProtocol, FBQueriedReactionUnitFieldsProtocol, FBReactionUnitComponentAdapterDelegate;
@class UIView, FBReactionContext, FBMemModelObject, NSString;

@interface FBReactionPhotoGridUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionActionAdapterDelegate, FBReactionPhotoGridComponentDelegate> {

	UIView* _componentView;
	FBReactionContext* _context;
	id<FBReactionActionAdapter> _actionAdapter;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _component;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	unsigned long long _photoCount;
	BOOL _isLast;
	id<FBReactionUnitComponentAdapterDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(id)componentView;
-(void)userDidTapPhoto:(id)arg1 withIndex:(unsigned long long)arg2 inPhotoGridComponent:(id)arg3 ;
-(void)entireGridTapped:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end
