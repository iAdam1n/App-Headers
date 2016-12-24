/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNInboxOmnistoreFetcherDelegate;
@class FBUserSession, FBOmnistore, FBOmnistoreCollection, FBGraphQLQuery, NSDictionary, FBMemMessengerInboxUnitsConnection;

@interface MNInboxOmnistoreFetcher : NSObject {

	FBUserSession* _session;
	FBOmnistore* _omnistore;
	FBOmnistoreCollection* _collection;
	FBGraphQLQuery* _graphQLQuery;
	NSDictionary* _params;
	id<MNInboxOmnistoreFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInboxOmnistoreFetcherDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBMemMessengerInboxUnitsConnection * unitsConnection; 
-(id)initWithSession:(id)arg1 omnistore:(id)arg2 ;
-(FBMemMessengerInboxUnitsConnection *)unitsConnection;
-(void)setDelegate:(id<MNInboxOmnistoreFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInboxOmnistoreFetcherDelegate>)delegate;
-(void)subscribe:(id)arg1 ;
@end
