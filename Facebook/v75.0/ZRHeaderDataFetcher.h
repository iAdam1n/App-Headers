/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZRHeaderDataFetcherDelegate;
@class FBUserSession, FBSimpleNetworkerRequest;

@interface ZRHeaderDataFetcher : NSObject {

	FBUserSession* _session;
	FBSimpleNetworkerRequest* _pendingRequest;
	id<ZRHeaderDataFetcherDelegate> _delegate;

}

@property (assign,nonatomic) id<ZRHeaderDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancelHeaderRequest;
-(void)sendHeaderRequest;
-(void)setDelegate:(id<ZRHeaderDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<ZRHeaderDataFetcherDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
