/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLMutatorProtocol.h>

@protocol FBTigonServiceProvider;
@class FBGraphQLConsistentLookasideCache, NSString;

@interface FBGraphQLDynamicMutator : NSObject <FBGraphQLMutatorProtocol> {

	MutationDependencies* _dependencies;
	FBGraphQLConsistentLookasideCache* _clc;
	id<FBTigonServiceProvider> _tigonServiceProvider;
	map<std::__1::basic_string<char>, std::__1::shared_ptr<facebook::tigon::TigonLimiter>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<facebook::tigon::TigonLimiter> > > >* _serviceQueues;
	map<std::__1::basic_string<char>, FBGraphQLDynamicMutationInfo *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, FBGraphQLDynamicMutationInfo *> > >* _incompleteMutations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelMutation:(id)arg1 ;
-(void)performMutation:(id)arg1 withTimeout:(unsigned long long)arg2 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)_queueKeyForMutation:(id)arg1 ;
-(void)_mutationDidSucceed:(id)arg1 withPayload:(id)arg2 ;
-(void)_mutationDidFail:(id)arg1 withError:(id)arg2 ;
-(void)performMutation:(id)arg1 ;
-(id)initWithCLC:(id)arg1 tigonServiceProvider:(id)arg2 mutationDependencies:(const vector<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > >*)arg3 ;
@end
