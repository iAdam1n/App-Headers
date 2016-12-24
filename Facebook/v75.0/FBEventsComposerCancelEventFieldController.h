/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsComposerFieldControllerProtocol.h>

@protocol FBEventsComposerCancelEventFieldControllerDelegate;
@class FBMemEvent, FBUserSession, FBEventAnalyticTracker, NSString;

@interface FBEventsComposerCancelEventFieldController : NSObject <FBEventsComposerFieldControllerProtocol> {

	FBMemEvent* _event;
	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	unsigned long long* _fieldType;
	id<FBEventsComposerCancelEventFieldControllerDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long* fieldType;                                                       //@synthesize fieldType=_fieldType - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsComposerCancelEventFieldControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEvent:(id)arg1 session:(id)arg2 tracker:(id)arg3 ;
-(void)_cancelEventWithCompletion:(/*^block*/id)arg1 ;
-(void)_cancelEventInConsistentLookasideCache:(id)arg1 ;
-(void)onFailedCancelWithError:(id)arg1 ;
-(BOOL)hasChanged;
-(id)partialEventCreateInputDataSet;
-(id)partialEventEditInputDataSet;
-(double)heightForItemCellInCollectionView:(id)arg1 ;
-(void)didSelectCellAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(id)cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(void)registerCellsWithCollectionView:(id)arg1 ;
-(void)setDelegate:(id<FBEventsComposerCancelEventFieldControllerDelegate>)arg1 ;
-(id<FBEventsComposerCancelEventFieldControllerDelegate>)delegate;
-(unsigned long long*)fieldType;
-(void)setFieldType:(unsigned long long*)arg1 ;
@end
