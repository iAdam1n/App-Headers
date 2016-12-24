/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBExperimentManager, FBTopicFeedsScrollAwaySwitcherExperimentContext, FBTopicCustomizationSubTopicExperimentContext;

@interface FBTopicFeedsGating : NSObject {

	FBExperimentManager* _experimentManager;
	FBTopicFeedsScrollAwaySwitcherExperimentContext* _scrollAwaySwitcherExperimentContext;
	FBTopicCustomizationSubTopicExperimentContext* _subTopicCustomizationExperimentContext;

}

@property (nonatomic,retain) FBExperimentManager * experimentManager;                                                             //@synthesize experimentManager=_experimentManager - In the implementation block
@property (nonatomic,retain) FBTopicFeedsScrollAwaySwitcherExperimentContext * scrollAwaySwitcherExperimentContext;               //@synthesize scrollAwaySwitcherExperimentContext=_scrollAwaySwitcherExperimentContext - In the implementation block
@property (nonatomic,retain) FBTopicCustomizationSubTopicExperimentContext * subTopicCustomizationExperimentContext;              //@synthesize subTopicCustomizationExperimentContext=_subTopicCustomizationExperimentContext - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL scrollAwayHeader; 
@property (nonatomic,readonly) long long infeedNumSubtopics; 
+(id)gatingWithSession:(id)arg1 ;
+(id)gatingWithExperimentManager:(id)arg1 ;
-(BOOL)scrollAwayHeader;
-(long long)infeedNumSubtopics;
-(FBExperimentManager *)experimentManager;
-(id)initWithExperimentManager:(id)arg1 ;
-(FBTopicFeedsScrollAwaySwitcherExperimentContext *)scrollAwaySwitcherExperimentContext;
-(FBTopicCustomizationSubTopicExperimentContext *)subTopicCustomizationExperimentContext;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(void)setScrollAwaySwitcherExperimentContext:(FBTopicFeedsScrollAwaySwitcherExperimentContext *)arg1 ;
-(void)setSubTopicCustomizationExperimentContext:(FBTopicCustomizationSubTopicExperimentContext *)arg1 ;
-(id)init;
-(BOOL)enabled;
@end
