/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedReactionUnitFieldsProtocol, FBReactionGametimeFanFavoriteFriendsVotesBrickComponentResizeDelegate;
@class FBReactionContext, NSString, FBMemModelObject, NSIndexPath;

@interface FBReactionGametimeFanFavoriteFriendsVotesBrickComponentContext : NSObject {

	FBReactionContext* _reactionContext;
	NSString* _resultStyle;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	unsigned long long _position;
	NSIndexPath* _indexPath;
	id<FBReactionGametimeFanFavoriteFriendsVotesBrickComponentResizeDelegate> _resizeDelegate;

}

@property (nonatomic,readonly) FBReactionContext * reactionContext;                                                                          //@synthesize reactionContext=_reactionContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultStyle;                                                                                  //@synthesize resultStyle=_resultStyle - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;                                                  //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) unsigned long long position;                                                                                  //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                                                                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,__weak,readonly) id<FBReactionGametimeFanFavoriteFriendsVotesBrickComponentResizeDelegate> resizeDelegate;              //@synthesize resizeDelegate=_resizeDelegate - In the implementation block
-(FBReactionContext *)reactionContext;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 position:(unsigned long long)arg4 indexPath:(id)arg5 resizeDelegate:(id)arg6 ;
-(NSString *)resultStyle;
-(id<FBReactionGametimeFanFavoriteFriendsVotesBrickComponentResizeDelegate>)resizeDelegate;
-(NSIndexPath *)indexPath;
-(unsigned long long)position;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end
