/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNFriendListModelControllerDelegate.h>

@protocol MNUserProviding, OS_dispatch_queue, MNFriendListModelController, MNAuthenticationManager;
@class NSArray, NSObject, MNSimulatedSecureThreadCache;

@interface MNSimulatedSecureThreadPopulator : NSObject <MNFriendListModelControllerDelegate> {

	id<MNUserProviding> _userProvider;
	NSArray* _conversationPeople;
	NSObject*<OS_dispatch_queue> _populationQueue;
	id<MNFriendListModelController> _friendModelController;
	MNSimulatedSecureThreadCache* _threadCache;
	id<MNAuthenticationManager> _authMgr;

}

@property (copy) NSArray * conversationPeople;              //@synthesize conversationPeople=_conversationPeople - In the implementation block
-(NSArray *)conversationPeople;
-(void)setConversationPeople:(NSArray *)arg1 ;
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(id)initWithUserProvider:(id)arg1 authManager:(id)arg2 threadCache:(id)arg3 populationQueue:(id)arg4 ;
-(id)initiateNewSecureThreadRequest;
-(void)stop;
-(void)start;
@end
