/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBElevatedPriorityClashUnitDataSource;
@class FBClashUnitPriorityList, NSString, NSDate, FBClashUnitPriorityListResult;

@interface FBClashSessionTracker : NSObject {

	FBClashUnitPriorityList* _priorityList;
	NSString* _location;
	NSDate* _timeLastUnitShown;
	NSDate* _timeSecondToLastUnitShown;
	FBClashUnitPriorityListResult* _currentResult;
	id<FBElevatedPriorityClashUnitDataSource> _elevatedPriorityDataSource;
	unsigned long long _state;
	unsigned long long _clashSequenceID;

}

@property (nonatomic,readonly) BOOL isSlotTaken; 
-(BOOL)takeSlotForClashUnitWithName:(id)arg1 ;
-(BOOL)isSlotTaken;
-(id)initWithLocation:(id)arg1 elevatedPriorityDataSource:(id)arg2 ;
-(void)registerClashUnit:(id)arg1 withInitialPriority:(unsigned long long)arg2 ;
-(void)unregisterClashUnit:(id)arg1 ;
-(void)resetQueue;
-(void)releaseProvisionalLockForClashUnitWithName:(id)arg1 ;
-(id)priorityList;
-(id)timeLastUnitShown;
-(void)_makeSessionStateAvailableIfNecessaryWithName:(id)arg1 ;
-(void)_logSlotRequestWithRequestingUnit:(id)arg1 previousResult:(id)arg2 previousState:(unsigned long long)arg3 slotGivenSuccessfully:(BOOL)arg4 ;
-(id)currentResult;
-(id)location;
@end
