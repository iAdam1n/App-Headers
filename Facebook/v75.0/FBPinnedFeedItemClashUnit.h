/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBClashUnit.h>

@class NSMutableArray, FBPinnedFeedItemComponentModel, NSString, NSArray;

@interface FBPinnedFeedItemClashUnit : NSObject <FBClashUnit> {

	mutex _queueLock;
	NSMutableArray* _pinnedItemQueue;

}

@property (nonatomic,readonly) BOOL hasPendingItems; 
@property (nonatomic,readonly) FBPinnedFeedItemComponentModel * currentModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * eligibleLocations; 
-(id)currentClashUnitResultForLocation:(id)arg1 ;
-(NSArray *)eligibleLocations;
-(id)pinnedItemQueue;
-(void)moveCurrentModelToBackOfQueue;
-(void)enqueueModel:(id)arg1 ;
-(void)replaceOldModel:(id)arg1 withNewModel:(id)arg2 ;
-(void)removeModel:(id)arg1 ;
-(BOOL)hasPendingItems;
-(id)init;
-(NSString *)name;
-(FBPinnedFeedItemComponentModel *)currentModel;
@end
