/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSObject, NSString, NSMutableArray;

@interface CRRequest : NSObject {

	int _requestType;
	NSObject* _payload;
	NSString* _baseURL;
	NSString* _endpoint;
	NSMutableArray* _parts;

}

@property (retain) NSObject * payload;                  //@synthesize payload=_payload - In the implementation block
@property (copy) NSString * baseURL;                    //@synthesize baseURL=_baseURL - In the implementation block
@property (copy) NSString * endpoint;                   //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NSMutableArray * parts;              //@synthesize parts=_parts - In the implementation block
-(id)initWithBaseURL:(id)arg1 andEndPoint:(id)arg2 andRequestType:(int)arg3 ;
-(id)getURLRequest;
-(id)buildURIEncodedRequest;
-(id)buildJSONRequest;
-(id)buildMultipartRequest;
-(id)buildPOSTRequest;
-(NSObject *)payload;
-(NSString *)baseURL;
-(NSString *)endpoint;
-(void)setPayload:(NSObject *)arg1 ;
-(void)addPart:(id)arg1 ;
-(void)setParts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)parts;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setEndpoint:(NSString *)arg1 ;
@end

