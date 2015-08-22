/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TProtocol.h>

@protocol TTransport;
@class NSMutableArray, NSString;

@interface TCompactProtocol : NSObject <TProtocol> {

	id<TTransport> mTransport;
	BOOL mStrictRead;
	BOOL mStrictWrite;
	int mMessageSizeLimit;
	NSMutableArray* mLastField;
	int mLastFieldId;
	BOOL mHasBooleanField;
	NSString* mBooleanFieldName;
	int mBooleanFieldId;
	BOOL mBooleanFieldValue;
	long long mMaxNetworkBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransport:(id)arg1 strictRead:(BOOL)arg2 strictWrite:(BOOL)arg3 ;
-(int)readI32;
-(int)messageSizeLimit;
-(short)readI16;
-(long long)readI64;
-(void)writeI32:(int)arg1 ;
-(void)writeByte:(unsigned char)arg1 ;
-(void)writeI16:(short)arg1 ;
-(void)writeI64:(long long)arg1 ;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3 ;
-(void)readMessageEnd;
-(void)readStructBeginReturningName:(id*)arg1 ;
-(void)readStructEnd;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3 ;
-(void)readFieldEnd;
-(BOOL)readBool;
-(id)readBinary;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3 ;
-(void)readMapEnd;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readListEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3 ;
-(void)writeMessageEnd;
-(void)writeStructBeginWithName:(id)arg1 ;
-(void)writeStructEnd;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 ;
-(void)writeDouble:(double)arg1 ;
-(void)writeBool:(BOOL)arg1 ;
-(void)writeBinary:(id)arg1 ;
-(void)writeFieldStop;
-(void)writeFieldEnd;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3 ;
-(void)writeMapEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeListEnd;
-(void)setMessageSizeLimit:(int)arg1 ;
-(void)writeByteDirect:(int)arg1 ;
-(void)writeVarint32:(int)arg1 ;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 typeOverride:(int)arg4 ;
-(int)getCompactType:(int)arg1 ;
-(void)writeCollectionBeginWithType:(int)arg1 size:(int)arg2 ;
-(int)intToZigZag:(int)arg1 ;
-(long long)longToZigzag:(long long)arg1 ;
-(void)writeVarint64:(long long)arg1 ;
-(void)writeBinary:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)writeByteDirectByte:(unsigned char)arg1 ;
-(int)readVarint32;
-(unsigned char)getTType:(unsigned char)arg1 ;
-(BOOL)isBoolType:(unsigned char)arg1 ;
-(int)zigzagToInt:(int)arg1 ;
-(long long)readVarint64;
-(long long)zigzagToLong:(long long)arg1 ;
-(void)checkReadLength:(int)arg1 ;
-(id)readBinary:(int)arg1 ;
-(void)dealloc;
-(void)reset;
-(id)transport;
-(unsigned char)readByte;
-(id)readString;
-(id)initWithTransport:(id)arg1 ;
-(void)writeString:(id)arg1 ;
-(double)readDouble;
@end
