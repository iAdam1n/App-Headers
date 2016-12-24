/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBURLSegue : NSObject {

	NSString* _host;
	/*^block*/id _viewControllerProvider;
	/*^block*/id _intentTargetProvider;
	/*^block*/id _analyticsInfoProvider;

}

@property (nonatomic,readonly) id viewControllerProvider;              //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (nonatomic,readonly) id intentTargetProvider;                //@synthesize intentTargetProvider=_intentTargetProvider - In the implementation block
@property (nonatomic,readonly) id analyticsInfoProvider;               //@synthesize analyticsInfoProvider=_analyticsInfoProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * host;                   //@synthesize host=_host - In the implementation block
+(id)URLSegueWithHost:(id)arg1 intentTargetProvider:(/*^block*/id)arg2 analyticsInfoProvider:(/*^block*/id)arg3 ;
+(id)URLSegueWithHost:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)URLSegueWithHost:(id)arg1 intentTargetProvider:(/*^block*/id)arg2 ;
+(id)URLSegueWithHost:(id)arg1 viewControllerProvider:(/*^block*/id)arg2 intentTargetProvider:(/*^block*/id)arg3 analyticsInfoProvider:(/*^block*/id)arg4 ;
-(id)initWithHost:(id)arg1 viewControllerProvider:(/*^block*/id)arg2 intentTargetProvider:(/*^block*/id)arg3 analyticsInfoProvider:(/*^block*/id)arg4 ;
-(id)viewControllerProvider;
-(id)intentTargetProvider;
-(id)analyticsInfoProvider;
-(id)description;
-(NSString *)host;
@end
