/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData;

@interface GSDK_GTMMIMEDocumentPart : NSObject {

	NSDictionary* _headers;
	NSData* _headerData;
	NSData* _bodyData;

}

@property (nonatomic,readonly) NSDictionary * headers;                 //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) NSData * headerData; 
@property (nonatomic,readonly) NSData * body; 
@property (nonatomic,readonly) unsigned long long length; 
+(id)partWithHeaders:(id)arg1 body:(id)arg2 ;
-(BOOL)containsBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(NSData *)body;
-(NSDictionary *)headers;
-(NSData *)headerData;
-(id)initWithHeaders:(id)arg1 body:(id)arg2 ;
@end

