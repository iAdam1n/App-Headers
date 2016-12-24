/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCreativeEditingToolsLogger.h>

@protocol FBCreativeEditingToolsLoggerAggregatorDelegate;
@class FBAnalytics, NSMutableDictionary, NSString;

@interface FBDoodlesInPhotosLogger : NSObject <FBCreativeEditingToolsLogger> {

	FBAnalytics* _analytics;
	NSMutableDictionary* _assetIDsToLogs;
	NSString* _compositionID;
	unsigned long long _source;
	id<FBCreativeEditingToolsLoggerAggregatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBCreativeEditingToolsLoggerAggregatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCompositionID:(id)arg1 source:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)didEnterEditingForAssetID:(id)arg1 ;
-(void)didShowPhotoInComposerWithAssetID:(id)arg1 ;
-(void)logHitDoneFromDoodlesFlowForPhotoWithAssetID:(id)arg1 ;
-(void)didHitCancelWithDoodlesforAssetID:(id)arg1 ;
-(void)didHitUndoForAssetID:(id)arg1 ;
-(void)didHitClearForAssetID:(id)arg1 ;
-(void)didChangeColorForAssetID:(id)arg1 ;
-(void)didAddDoodlesToPhotoWithAssetID:(id)arg1 ;
-(id)_logForAssetID:(id)arg1 ;
-(void)logEventsAndAggregateWithExtraData:(id)arg1 published:(BOOL)arg2 ;
-(void)_aggregateWithExtraData:(id)arg1 ;
-(void)logEventsAndAggregateWithExtraData:(id)arg1 finalSelectedPhotosAssetIDs:(id)arg2 published:(BOOL)arg3 ;
-(void)_logEvent:(id)arg1 withAssetID:(id)arg2 ;
-(void)logHitCancelFromDoodlesFlowForPhotoWithAssetID:(id)arg1 ;
-(void)logChangedDrawingColorFromDoodlesFlowForPhotoWithAssetID:(id)arg1 ;
-(id)_extraDataForPhotoWithAssetID:(id)arg1 ;
-(id<FBCreativeEditingToolsLoggerAggregatorDelegate>)delegate;
@end
