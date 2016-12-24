/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
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
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB70)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB70)arg1 ;
-(unsigned long long)expansionState;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didUpdateExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didCollapse;
-(void)didExpand;
-(void)setExpansionState:(unsigned long long)arg1 ;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(double)expansionProgress;
-(unsigned long long)previousExpansionState;
@end
