/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface HTTPMessage : NSObject {

	CFHTTPMessageRef message;

}
-(NSRange)range;
-(id)initEmptyRequest;
-(id)initRequestWithMethod:(id)arg1 URL:(id)arg2 version:(id)arg3 ;
-(id)initResponseWithStatusCode:(long long)arg1 description:(id)arg2 version:(id)arg3 ;
-(BOOL)isHeaderComplete;
-(id)headerField:(id)arg1 ;
-(void)setHeaderField:(id)arg1 value:(id)arg2 ;
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

