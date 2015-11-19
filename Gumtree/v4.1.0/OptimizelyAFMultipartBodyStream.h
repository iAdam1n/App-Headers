/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <CoreFoundation/NSInputStream.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol NSStreamDelegate;
@class NSError, NSInputStream, NSMutableArray, NSEnumerator, OptimizelyAFHTTPBodyPart, NSOutputStream, NSMutableData, NSString;

@interface OptimizelyAFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate> {

	id<NSStreamDelegate> delegate;
	unsigned long long streamStatus;
	NSError* streamError;
	unsigned long long _numberOfBytesInPacket;
	double _delay;
	NSInputStream* _inputStream;
	unsigned long long _stringEncoding;
	NSMutableArray* _HTTPBodyParts;
	NSEnumerator* _HTTPBodyPartEnumerator;
	OptimizelyAFHTTPBodyPart* _currentHTTPBodyPart;
	NSOutputStream* _outputStream;
	NSMutableData* _buffer;

}

@property (assign,nonatomic) unsigned long long numberOfBytesInPacket;                    //@synthesize numberOfBytesInPacket=_numberOfBytesInPacket - In the implementation block
@property (assign,nonatomic) double delay;                                                //@synthesize delay=_delay - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                                 //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (assign,nonatomic) unsigned long long stringEncoding;                           //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSMutableArray * HTTPBodyParts;                              //@synthesize HTTPBodyParts=_HTTPBodyParts - In the implementation block
@property (nonatomic,retain) NSEnumerator * HTTPBodyPartEnumerator;                       //@synthesize HTTPBodyPartEnumerator=_HTTPBodyPartEnumerator - In the implementation block
@property (nonatomic,retain) OptimizelyAFHTTPBodyPart * currentHTTPBodyPart;              //@synthesize currentHTTPBodyPart=_currentHTTPBodyPart - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                               //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSMutableData * buffer;                                      //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(id)initWithStringEncoding:(unsigned long long)arg1 ;
-(void)appendHTTPBodyPart:(id)arg1 ;
-(void)setNumberOfBytesInPacket:(unsigned long long)arg1 ;
-(void)setInitialAndFinalBoundaries;
-(void)setHTTPBodyParts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)HTTPBodyParts;
-(unsigned long long)numberOfBytesInPacket;
-(OptimizelyAFHTTPBodyPart *)currentHTTPBodyPart;
-(NSEnumerator *)HTTPBodyPartEnumerator;
-(void)setCurrentHTTPBodyPart:(OptimizelyAFHTTPBodyPart *)arg1 ;
-(void)setStreamStatus:(unsigned long long)arg1 ;
-(void)setHTTPBodyPartEnumerator:(NSEnumerator *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_Op40*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)close;
-(void)setStreamError:(id)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(unsigned long long)contentLength;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(NSOutputStream *)outputStream;
-(NSInputStream *)inputStream;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
-(void)setBuffer:(NSMutableData *)arg1 ;
-(NSMutableData *)buffer;
-(unsigned long long)stringEncoding;
@end

