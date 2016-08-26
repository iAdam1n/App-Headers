/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWorkingRangeSnapshot, FBSampledWorkingRangeControllerDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary, NSString;

@interface FBSampledWorkingRangeController : NSObject {

	id<FBWorkingRangeSnapshot> _previousSnapshot;
	NSMutableDictionary* _itemViewStateTransitions;
	/*function pointer*/void* _transitionFunction;
	NSString* _identifier;
	id<FBSampledWorkingRangeControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<FBSampledWorkingRangeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTransitionFunction:(/*function pointer*/void*)arg1 identifier:(id)arg2 ;
-(void)sampleSnapshot:(id)arg1 ;
-(void)_processUntrackedItemViewStates:(id)arg1 visibleBounds:(CGRect)arg2 timestamp:(double)arg3 snapshot:(id)arg4 ;
-(void)setDelegate:(id<FBSampledWorkingRangeControllerDelegate>)arg1 ;
-(id<FBSampledWorkingRangeControllerDelegate>)delegate;
-(NSString *)identifier;
@end
