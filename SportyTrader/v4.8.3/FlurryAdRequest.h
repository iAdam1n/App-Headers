/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FlurryHttpAsyncTaskDelegate.h>
#import <SportyTrader/FlurryVASTXMLParserDelegate.h>

@protocol FlurryAdRequestDelegate;
@class NSDictionary, NSMutableArray, NSString;

@interface FlurryAdRequest : NSObject <FlurryHttpAsyncTaskDelegate, FlurryVASTXMLParserDelegate> {

	avro_obj_t* _adRequestSchema;
	avro_obj_t* _reportedIdsSchema;
	avro_obj_t* _freqCapRequestInfosSchema;
	avro_obj_t* _locationSchema;
	avro_obj_t* _adViewContainerSchema;
	avro_obj_t* _targetingOverrideSchema;
	avro_obj_t* _streamInfosSchema;
	avro_obj_t* _nativeAdConfigurationSchema;
	id<FlurryAdRequestDelegate> requestDelegate;
	NSDictionary* params;
	NSMutableArray* adUnits;
	NSMutableArray* runningTasks;

}

@property (nonatomic,retain) NSMutableArray * runningTasks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initSchema;
-(void)sendAdRequest:(avro_obj_t*)arg1 delegate:(id)arg2 params:(id)arg3 ;
-(NSMutableArray *)runningTasks;
-(void)setRunningTasks:(NSMutableArray *)arg1 ;
-(void)unregisterTask:(id)arg1 ;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(void)parseDidFail:(id)arg1 withParams:(id)arg2 ;
-(void)parsetDidCancel:(id)arg1 withParams:(id)arg2 ;
-(void)parseSuccessful:(id)arg1 withParams:(id)arg2 ;
-(void)getAdRequestForSpace:(id)arg1 viewType:(int)arg2 viewContainerBounds:(CGRect)arg3 delegate:(id)arg4 params:(id)arg5 renderStage:(BOOL)arg6 payload:(id)arg7 ;
-(void)dealloc;
@end

