/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSMutableURLRequest.h>

@interface REDRequest : NSMutableURLRequest
+(id)hmacStringForInputString:(id)arg1 ;
+(void)addAdditionalHeadersForRequest:(id)arg1 ;
+(id)processedURLStringFromURLString:(id)arg1 ;
+(void)appendSignedPostBodyToHeaderForRequest:(id)arg1 fromDictionary:(id)arg2 ;
+(id)userAgent;
@end
