/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPVASTManager : NSObject
+(void)fetchVASTWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)parseVASTResponseFromData:(id)arg1 depth:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)wrappersForVASTResponse:(id)arg1 ;
+(BOOL)VASTResponseContainsAtLeastOneAd:(id)arg1 ;
+(void)fetchVASTWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
