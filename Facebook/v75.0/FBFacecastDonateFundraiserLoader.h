/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFacecastDonateFundraiserLoaderDelegate, FBServiceTransactionMutating;
@class FBUserSession, FBViewerContext, NSString;

@interface FBFacecastDonateFundraiserLoader : NSObject {

	FBUserSession* _session;
	FBViewerContext* _actor;
	NSString* _videoID;
	id<FBFacecastDonateFundraiserLoaderDelegate> _delegate;
	id<FBServiceTransactionMutating> _transaction;

}
-(id)initWithSession:(id)arg1 actor:(id)arg2 videoID:(id)arg3 delegate:(id)arg4 ;
-(void)_didReceiveResponse:(id)arg1 ;
-(void)_didReceiveError;
-(BOOL)_isSupportedFundraiser:(id)arg1 ;
-(void)load;
@end
