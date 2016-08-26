/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, FBNotificationsLoggingContext;

@interface FBCommentComposerAnalyticsInfo : NSObject {

	NSString* _analyticsModule;
	/*^block*/id _trackingCodeProvider;
	NSDictionary* _analyticsExtras;
	FBNotificationsLoggingContext* _notificationsLoggingContext;

}

@property (nonatomic,copy,readonly) NSString * analyticsModule;                                          //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) id trackingCodeProvider;                                             //@synthesize trackingCodeProvider=_trackingCodeProvider - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsExtras;                                      //@synthesize analyticsExtras=_analyticsExtras - In the implementation block
@property (nonatomic,readonly) FBNotificationsLoggingContext * notificationsLoggingContext;              //@synthesize notificationsLoggingContext=_notificationsLoggingContext - In the implementation block
-(NSString *)analyticsModule;
-(NSDictionary *)analyticsExtras;
-(FBNotificationsLoggingContext *)notificationsLoggingContext;
-(id)initWithAnalyticsModule:(id)arg1 trackingCodeProvider:(/*^block*/id)arg2 analyticsExtra:(id)arg3 notificationsLoggingContext:(id)arg4 ;
-(id)trackingCodeProvider;
@end
