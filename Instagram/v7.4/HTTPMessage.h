/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@interface HTTPMessage : NSObject {

	CFHTTPMessageRef message;

}
-(NSRange)range;
-(id)headerField:(id)arg1 ;
-(id)initEmptyRequest;
-(id)initResponseWithStatusCode:(long long)arg1 description:(id)arg2 version:(id)arg3 ;
-(void)setHeaderField:(id)arg1 value:(id)arg2 ;
-(id)initRequestWithMethod:(id)arg1 URL:(id)arg2 version:(id)arg3 ;
-(BOOL)isHeaderComplete;
-(void)dealloc;
-(id)url;
-(id)body;
-(BOOL)appendData:(id)arg1 ;
-(long long)statusCode;
-(id)method;
-(id)version;
-(void)setBody:(id)arg1 ;
-(id)allHeaderFields;
-(id)messageData;
@end

