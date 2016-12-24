/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBQueriedReactionUnitComponentFieldsProtocol;
@class FBMemModelObject, FBReactionContext, FBVideoHomeChannelLoggingData, FBVideoHomeToolbox;

@interface FBVideoHomePaginationComponent : CKCompositeComponent <FBReactionBrickComponent> {

	BOOL _loading;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _reactionUnitComponent;
	FBReactionContext* _reactionContext;
	FBVideoHomeChannelLoggingData* _channelLoggingData;
	FBVideoHomeToolbox* _toolbox;
	unsigned long long _position;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;                                        //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> reactionUnitComponent;              //@synthesize reactionUnitComponent=_reactionUnitComponent - In the implementation block
@property (nonatomic,readonly) FBReactionContext * reactionContext;                                                                //@synthesize reactionContext=_reactionContext - In the implementation block
@property (nonatomic,readonly) FBVideoHomeChannelLoggingData * channelLoggingData;                                                 //@synthesize channelLoggingData=_channelLoggingData - In the implementation block
@property (nonatomic,readonly) FBVideoHomeToolbox * toolbox;                                                                       //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) unsigned long long position;                                                                        //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL loading;                                                                                       //@synthesize loading=_loading - In the implementation block
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(FBVideoHomeToolbox *)toolbox;
-(FBVideoHomeChannelLoggingData *)channelLoggingData;
-(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)reactionUnitComponent;
-(FBReactionContext *)reactionContext;
-(unsigned long long)position;
-(BOOL)loading;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end
