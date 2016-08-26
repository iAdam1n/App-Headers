/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSInputStream, NSDictionary, NSString;

@interface OptimizelyAFHTTPBodyPart : NSObject <NSCopying> {

	int _phase;
	NSInputStream* _inputStream;
	unsigned long long _phaseReadOffset;
	BOOL _hasInitialBoundary;
	BOOL _hasFinalBoundary;
	unsigned long long _stringEncoding;
	NSDictionary* _headers;
	NSString* _boundary;
	id _body;
	unsigned long long _bodyContentLength;

}

@property (assign,nonatomic) unsigned long long stringEncoding;                           //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSString * boundary;                                           //@synthesize boundary=_boundary - In the implementation block
@property (nonatomic,retain) id body;                                                     //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) unsigned long long bodyContentLength;                        //@synthesize bodyContentLength=_bodyContentLength - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                                 //@synthesize inputStream=_inputStream - In the implementation block
@property (assign,nonatomic) BOOL hasInitialBoundary;                                     //@synthesize hasInitialBoundary=_hasInitialBoundary - In the implementation block
@property (assign,nonatomic) BOOL hasFinalBoundary;                                       //@synthesize hasFinalBoundary=_hasFinalBoundary - In the implementation block
@property (getter=hasBytesAvailable,nonatomic,readonly) BOOL bytesAvailable; 
@property (nonatomic,readonly) unsigned long long contentLength; 
-(NSString *)boundary;
-(void)setBoundary:(NSString *)arg1 ;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(void)setBodyContentLength:(unsigned long long)arg1 ;
-(void)setHasInitialBoundary:(BOOL)arg1 ;
-(void)setHasFinalBoundary:(BOOL)arg1 ;
-(BOOL)transitionToNextPhase;
-(BOOL)hasInitialBoundary;
-(id)stringForHeaders;
-(BOOL)hasFinalBoundary;
-(long long)readData:(id)arg1 intoBuffer:(char*)arg2 maxLength:(unsigned long long)arg3 ;
-(unsigned long long)bodyContentLength;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)body;
-(void)setBody:(id)arg1 ;
-(unsigned long long)contentLength;
-(unsigned long long)stringEncoding;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(NSInputStream *)inputStream;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
@end
