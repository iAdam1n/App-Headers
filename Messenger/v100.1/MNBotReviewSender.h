/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface MNBotReviewSender : NSObject {

	FBUserSession* _session;

}
-(void)sendBotReviewWithPageID:(id)arg1 reviewRating:(long long)arg2 reviewText:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end
