/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWorkingRangeSnapshot, FBUpdatedSampledWorkingRangeControllerDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSString;

@interface FBUpdatedSampledWorkingRangeController : NSObject {

	id<FBWorkingRangeSnapshot> _previousSnapshot;
	unordered_map<FBSampledWorkingRangeControllerItemViewStateKey, std::__1::vector<id<FBWorkingRangeItemTransition>, std::__1::allocator<id<FBWorkingRangeItemTransition> > >, FBSampledWorkingRangeControllerItemViewStateKeyHasher, std::__1::equal_to<FBSampledWorkingRangeControllerItemViewStateKey>, std::__1::allocator<std::__1::pair<const FBSampledWorkingRangeControllerItemViewStateKey, std::__1::vector<id<FBWorkingRangeItemTransition>, std::__1::allocator<id<FBWorkingRangeItemTransition> > > > > >* _itemViewStateTransitions;
	/*function pointer*/void* _transitionFunction;
	NSString* _identifier;
	id<FBUpdatedSampledWorkingRangeControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<FBUpdatedSampledWorkingRangeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)sampleSnapshot:(id)arg1 ;
-(void)_processUntrackedItemViewStates:(const unordered_set<FBSampledWorkingRangeControllerItemViewStateKey, FBSampledWorkingRangeControllerItemViewStateKeyHasher, std::__1::equal_to<FBSampledWorkingRangeControllerItemViewStateKey>, std::__1::allocator<FBSampledWorkingRangeControllerItemViewStateKey> >*)arg1 visibleBounds:(CGRect)arg2 timestamp:(double)arg3 snapshot:(id)arg4 ;
-(id)initWithTransitionFunction:(/*function pointer*/void*)arg1 identifier:(id)arg2 ;
-(void)setDelegate:(id<FBUpdatedSampledWorkingRangeControllerDelegate>)arg1 ;
-(id<FBUpdatedSampledWorkingRangeControllerDelegate>)delegate;
-(NSString *)identifier;
@end
