/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBImageProcessingSubPipeDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSMutableArray, NSMutableSet;

@interface FBImageProcessingSubPipe : NSObject {

	recursive_mutex _lock;
	BOOL _needsRequestSort;
	BOOL _suspended;
	NSMutableArray* _requestQueue;
	NSMutableSet* _requestSet;
	NSMutableSet* _processingSet;
	id<FBImageProcessingSubPipeDelegate> _delegate;
	unsigned long long _flexibleRequestsLimit;

}

@property (assign,nonatomic,__weak) id<FBImageProcessingSubPipeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (assign,nonatomic) unsigned long long flexibleRequestsLimit;                          //@synthesize flexibleRequestsLimit=_flexibleRequestsLimit - In the implementation block
-(unsigned long long)flexibleRequestsLimit;
-(id)requestForProcessing:(id)arg1 ;
-(void)scheduleRequestQueueAfterAddingRequest:(id)arg1 ;
-(void)setFlexibleRequestsLimit:(unsigned long long)arg1 ;
-(void)_sortRequestQueue;
-(void)_pruneRequestQueueIfNeeded;
-(void)setNeedsRequestSort;
-(id)init;
-(BOOL)isSuspended;
-(void)setDelegate:(id<FBImageProcessingSubPipeDelegate>)arg1 ;
-(id<FBImageProcessingSubPipeDelegate>)delegate;
-(void)setSuspended:(BOOL)arg1 ;
-(void)addRequest:(id)arg1 ;
@end
