/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/FBExpandabilityHookProtocol.h>

@interface FBExpandableNode : ASDisplayNode <FBExpandabilityHookProtocol> {

	double _expansionProgress;
	unsigned long long _expansionState;
	unsigned long long _previousExpansionState;

}

@property (nonatomic,readonly) double expansionProgress;                               //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (assign,nonatomic) unsigned long long expansionState;                        //@synthesize expansionState=_expansionState - In the implementation block
@property (nonatomic,readonly) unsigned long long previousExpansionState;              //@synthesize previousExpansionState=_previousExpansionState - In the implementation block
-(void)_staticInitialize;
-(unsigned long long)previousExpansionState;
-(void)setExpansionState:(unsigned long long)arg1 ;
-(void)didCollapse;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB93)arg1 ;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB93)arg1 ;
-(void)didExpand;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(unsigned long long)expansionState;
-(void)didUpdateExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(double)expansionProgress;
@end
