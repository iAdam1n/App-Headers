/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TProtocol <NSObject>
@required
-(int)readI32;
-(short)readI16;
-(long long)readI64;
-(void)writeI32:(unsigned)arg1;
-(void)writeByte:(unsigned char)arg1;
-(void)writeI16:(short)arg1;
-(void)writeI64:(unsigned long long)arg1;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3;
-(void)readMessageEnd;
-(void)readStructBeginReturningName:(id*)arg1;
-(void)readStructEnd;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3;
-(void)readFieldEnd;
-(BOOL)readBool;
-(id)readBinary;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3;
-(void)readMapEnd;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2;
-(void)readListEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
-(void)writeMessageEnd;
-(void)writeStructBeginWithName:(id)arg1;
-(void)writeStructEnd;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3;
-(void)writeDouble:(double)arg1;
-(void)writeBool:(BOOL)arg1;
-(void)writeBinary:(id)arg1;
-(void)writeFieldStop;
-(void)writeFieldEnd;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
-(void)writeMapEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
-(void)writeListEnd;
-(id)transport;
-(unsigned char)readByte;
-(id)readString;
-(void)writeString:(id)arg1;
-(double)readDouble;

@end

