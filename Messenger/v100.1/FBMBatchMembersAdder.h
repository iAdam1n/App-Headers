/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol FBMMembersAdderDelegate;
@class FBMGroupThreadKey, NSArray, FBMBatchMembersAdderInjector, FBMReachabilityAwareNetworker, FBGraphBatchParticipatingRequest, NSString;

@interface FBMBatchMembersAdder : NSObject <FBClassInjectable, FBMReachabilityAwareNetworkerDelegate> {

	FBMGroupThreadKey* _groupThreadKey;
	NSArray* _membersToAdd;
	id<FBMMembersAdderDelegate> _delegate;
	BOOL _willAddToApprovalQueue;
	FBMBatchMembersAdderInjector* _injector;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	FBGraphBatchParticipatingRequest* _addMembersRequest;
	FBGraphBatchParticipatingRequest* _fetchThreadRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(void)configureAndAddMembers:(id)arg1 willAddToApprovalQueue:(BOOL)arg2 toGroupThreadKey:(id)arg3 delegate:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)_didFailWithError:(id)arg1 ;
@end
