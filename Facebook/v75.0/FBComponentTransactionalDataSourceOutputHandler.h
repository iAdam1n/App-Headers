/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKTransactionalSuspensionControllerOutputHandler.h>
#import <Facebook/CKComponentSuspendable.h>

@protocol FBComponentTransactionalDataSourceOutputHandlerDelegate;
@class CKTransactionalSuspensionController, CKTransactionalComponentDataSourceState, NSString;

@interface FBComponentTransactionalDataSourceOutputHandler : NSObject <CKTransactionalSuspensionControllerOutputHandler, CKComponentSuspendable> {

	unsigned long long _numberOfEnqueuedOperations;
	CKTransactionalSuspensionController* _suspensionController;
	unsigned long long _suspensionState;
	BOOL _isAppendingChanges;
	id<FBComponentTransactionalDataSourceOutputHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComponentTransactionalDataSourceOutputHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isComputingChanges; 
@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * dataSourceState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,readonly) BOOL hasPendingChanges; 
-(BOOL)isComputingChanges;
-(CKTransactionalComponentDataSourceState *)dataSourceState;
-(void)resetSuspensionState;
-(void)enqueueOperation;
-(void)suspensionController:(id)arg1 didProcessChanges:(id)arg2 previousState:(id)arg3 ;
-(void)setDelegate:(id<FBComponentTransactionalDataSourceOutputHandlerDelegate>)arg1 ;
-(id<FBComponentTransactionalDataSourceOutputHandlerDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)hasPendingChanges;
@end
