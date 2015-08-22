/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBAppStateLogger, FBAppVersionHandler, FBExceptionHandler, FBOOMArchiver, FBApplicationStatusProvider;

@interface FBColdStartReasonResolverContext : NSObject {

	FBAppStateLogger* _appStateLogger;
	FBAppVersionHandler* _appVersionHandler;
	FBExceptionHandler* _exceptionHandler;
	FBOOMArchiver* _oomArchiver;
	FBApplicationStatusProvider* _applicationStatusProvider;

}

@property (nonatomic,readonly) FBAppStateLogger * appStateLogger;                                    //@synthesize appStateLogger=_appStateLogger - In the implementation block
@property (nonatomic,readonly) FBAppVersionHandler * appVersionHandler;                              //@synthesize appVersionHandler=_appVersionHandler - In the implementation block
@property (nonatomic,readonly) FBExceptionHandler * exceptionHandler;                                //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,readonly) FBOOMArchiver * oomArchiver;                                          //@synthesize oomArchiver=_oomArchiver - In the implementation block
@property (nonatomic,readonly) FBApplicationStatusProvider * applicationStatusProvider;              //@synthesize applicationStatusProvider=_applicationStatusProvider - In the implementation block
-(id)initWithAppStateLogger:(id)arg1 appVersionHandler:(id)arg2 exceptionHandler:(id)arg3 oomArchiver:(id)arg4 applicationStatusProvider:(id)arg5 ;
-(FBAppStateLogger *)appStateLogger;
-(FBAppVersionHandler *)appVersionHandler;
-(FBOOMArchiver *)oomArchiver;
-(FBApplicationStatusProvider *)applicationStatusProvider;
-(FBExceptionHandler *)exceptionHandler;
@end
