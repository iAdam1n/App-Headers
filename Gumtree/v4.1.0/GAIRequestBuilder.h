/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface GAIRequestBuilder : NSObject {

	NSString* userAgent_;

}

@property (nonatomic,copy) NSString * userAgent; 
-(id)parameterValueToString:(id)arg1 ;
-(id)encodeParameter:(id)arg1 withValue:(id)arg2 ;
-(id)encodeParameters:(id)arg1 ;
-(id)baseRequest;
-(id)parametersForHit:(id)arg1 ;
-(id)requestPostUrl:(id)arg1 payload:(id)arg2 compression:(unsigned long long)arg3 ;
-(id)requestGetUrl:(id)arg1 payload:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
@end

