/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AFHTTPRequestOperation.h>

@class NSXMLParser, NSError;

@interface AFXMLRequestOperation : AFHTTPRequestOperation {

	NSXMLParser* _responseXMLParser;
	NSError* _XMLError;

}

@property (nonatomic,retain) NSXMLParser * responseXMLParser;              //@synthesize responseXMLParser=_responseXMLParser - In the implementation block
@property (nonatomic,retain) NSError * XMLError;                           //@synthesize XMLError=_XMLError - In the implementation block
+(BOOL)canProcessRequest:(id)arg1 ;
+(id)acceptableContentTypes;
+(id)XMLParserRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(NSXMLParser *)responseXMLParser;
-(void)setResponseXMLParser:(NSXMLParser *)arg1 ;
-(NSError *)XMLError;
-(void)setXMLError:(NSError *)arg1 ;
-(void)cancel;
-(id)error;
@end

