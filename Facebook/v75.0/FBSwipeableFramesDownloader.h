/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSwipeableFramesLogger, FBServiceTransactionMutating;
@class FBGraphQLQuery, FBUserSession;

@interface FBSwipeableFramesDownloader : NSObject {

	int _framesType;
	id<FBSwipeableFramesLogger> _logger;
	FBGraphQLQuery* _query;
	FBUserSession* _session;
	id<FBServiceTransactionMutating> _token;

}
-(void)_handleDownloadedResponse:(id)arg1 error:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithQuery:(id)arg1 framesType:(int)arg2 session:(id)arg3 logger:(id)arg4 ;
-(void)downloadWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
