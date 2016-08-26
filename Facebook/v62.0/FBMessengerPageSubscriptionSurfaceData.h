/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMessengerPageSubscriptionViewModel;

@interface FBMessengerPageSubscriptionSurfaceData : NSObject {

	FBUserSession* _session;
	FBMessengerPageSubscriptionViewModel* _viewModel;

}

@property (nonatomic,readonly) FBUserSession * session;                                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMessengerPageSubscriptionViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithSession:(id)arg1 viewModel:(id)arg2 ;
-(FBMessengerPageSubscriptionViewModel *)viewModel;
-(FBUserSession *)session;
@end
