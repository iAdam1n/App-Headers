/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBExpandabilityHookProtocol.h>

@interface FBExpandableNode : ASDisplayNode <FBExpandabilityHookProtocol> {

	double _expansionProgress;
	unsigned long long _expansionState;
	unsigned long long _previousExpansionState;

}

@property (nonatomic,readonly) double expansionProgress;                               //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (assign,nonatomic) unsigned long long expansionState;                        //@synthesize expansionState=_expansionState - In the implementation block
@property (nonatomic,readonly) unsigned long long previousExpansionState;              //@synthesize previousExpansionState=_previousExpansionState - In the implementation block
-(void)_staticInitialize;
-(unsigned long long)expansionState;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB196)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB196)arg1 ;
-(void)didCollapse;
-(void)didExpand;
-(double)expansionProgress;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didUpdateExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)setExpansionState:(unsigned long long)arg1 ;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(unsigned long long)previousExpansionState;
@end
