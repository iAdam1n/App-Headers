/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedReactionUnitFieldsProtocol, FBQueriedReactionUnitComponentFieldsProtocol, FBReactionSportsPlayComponentLogger, FBReactionSportsPlayComponentResizeDelegate;
@class FBReactionContext, NSString, FBMemModelObject, FBFeedToolbox;

@interface FBReactionSportsPlayBrickComponentContext : NSObject {

	FBReactionContext* _reactionContext;
	NSString* _style;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
	unsigned long long _position;
	id<FBReactionSportsPlayComponentLogger> _logger;
	id<FBReactionSportsPlayComponentResizeDelegate> _resizeDelegate;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBReactionContext * reactionContext;                                                        //@synthesize reactionContext=_reactionContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * style;                                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;                                //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> unitComponent;              //@synthesize unitComponent=_unitComponent - In the implementation block
@property (nonatomic,readonly) unsigned long long position;                                                                //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) id<FBReactionSportsPlayComponentLogger> logger;                                             //@synthesize logger=_logger - In the implementation block
@property (nonatomic,__weak,readonly) id<FBReactionSportsPlayComponentResizeDelegate> resizeDelegate;                      //@synthesize resizeDelegate=_resizeDelegate - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                                    //@synthesize toolbox=_toolbox - In the implementation block
-(FBFeedToolbox *)toolbox;
-(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)unitComponent;
-(FBReactionContext *)reactionContext;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 logger:(id)arg6 resizeDelegate:(id)arg7 toolbox:(id)arg8 ;
-(id<FBReactionSportsPlayComponentResizeDelegate>)resizeDelegate;
-(NSString *)style;
-(unsigned long long)position;
-(id<FBReactionSportsPlayComponentLogger>)logger;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end
