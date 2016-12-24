/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <CoreFoundation/NSInputStream.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol NSStreamDelegate;
@class NSError, NSInputStream, NSMutableArray, NSEnumerator, Chartboost_AFHTTPBodyPart, NSOutputStream, NSMutableData, NSString;

@interface Chartboost_AFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate> {

	id<NSStreamDelegate> delegate;
	unsigned long long streamStatus;
	NSError* streamError;
	unsigned long long _numberOfBytesInPacket;
	double _delay;
	NSInputStream* _inputStream;
	unsigned long long _stringEncoding;
	NSMutableArray* _HTTPBodyParts;
	NSEnumerator* _HTTPBodyPartEnumerator;
	Chartboost_AFHTTPBodyPart* _currentHTTPBodyPart;
	NSOutputStream* _outputStream;
	NSMutableData* _buffer;

}

@property (assign,nonatomic) unsigned long long stringEncoding;                            //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSMutableArray * HTTPBodyParts;                               //@synthesize HTTPBodyParts=_HTTPBodyParts - In the implementation block
@property (nonatomic,retain) NSEnumerator * HTTPBodyPartEnumerator;                        //@synthesize HTTPBodyPartEnumerator=_HTTPBodyPartEnumerator - In the implementation block
@property (nonatomic,retain) Chartboost_AFHTTPBodyPart * currentHTTPBodyPart;              //@synthesize currentHTTPBodyPart=_currentHTTPBodyPart - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                                //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSMutableData * buffer;                                       //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBytesInPacket;                     //@synthesize numberOfBytesInPacket=_numberOfBytesInPacket - In the implementation block
@property (assign,nonatomic) double delay;                                                 //@synthesize delay=_delay - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                                  //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
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
-(Chartboost_AFHTTPBodyPart *)currentHTTPBodyPart;
-(NSEnumerator *)HTTPBodyPartEnumerator;
-(void)setCurrentHTTPBodyPart:(Chartboost_AFHTTPBodyPart *)arg1 ;
-(void)setStreamStatus:(unsigned long long)arg1 ;
-(void)setHTTPBodyPartEnumerator:(NSEnumerator *)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_Ch33*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)contentLength;
-(void)open;
-(unsigned long long)stringEncoding;
-(void)setBuffer:(NSMutableData *)arg1 ;
-(NSMutableData *)buffer;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(NSOutputStream *)outputStream;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setStreamError:(id)arg1 ;
-(NSInputStream *)inputStream;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
@end
