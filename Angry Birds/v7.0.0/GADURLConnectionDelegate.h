/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADURLConnectionDelegate
@required
-(id)connection:(id)arg1 shouldRedirectToURL:(id)arg2;
-(void)connection:(id)arg1 loadDidReceiveRedirectResponse:(id)arg2;
-(BOOL)connection:(id)arg1 loadShouldUseCachedResponse:(id)arg2;
-(void)connection:(id)arg1 loadDidReceiveCachedResponse:(id)arg2;
-(void)connection:(id)arg1 loadDidFinish:(id)arg2 baseURL:(id)arg3;
-(void)connection:(id)arg1 loadDidFail:(id)arg2 httpStatusCode:(long long)arg3;

@end
