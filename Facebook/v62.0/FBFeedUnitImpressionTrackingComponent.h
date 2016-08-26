/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBFeedUnitProviding.h>

@protocol FBQueriedFeedUnitFieldsProtocol, FBComponentControllerWorkingRangeListening;
@class FBMemModelObject, FBFeedStoryPositionTracker, NSString;

@interface FBFeedUnitImpressionTrackingComponent : CKCompositeComponent <FBFeedUnitProviding> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	FBFeedStoryPositionTracker* _positionTracker;
	id<FBComponentControllerWorkingRangeListening> _workingRangeListener;

}

@property (nonatomic,readonly) id<FBComponentControllerWorkingRangeListening> workingRangeListener;              //@synthesize workingRangeListener=_workingRangeListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithUnit:(id)arg1 component:(id)arg2 toolbox:(id)arg3 ;
-(id)feedUnit;
-(long long)storyPosition;
-(id<FBComponentControllerWorkingRangeListening>)workingRangeListener;
@end
