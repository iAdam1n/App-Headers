/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLiveStatusUpdateJobSubscriber : NSObject {

	/*^block*/id _callback;
	NSString* _debugContext;

}

@property (nonatomic,copy,readonly) id callback;                          //@synthesize callback=_callback - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugContext;              //@synthesize debugContext=_debugContext - In the implementation block
-(id)initWithCallback:(/*^block*/id)arg1 debugContext:(id)arg2 ;
-(id)callback;
-(NSString *)debugContext;
@end
