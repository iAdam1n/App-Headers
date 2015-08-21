/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <ECBCricketApp/ECBCricketApp-Structs.h>
@class NSData;

@interface GCKPB_PBCodedInputStream : NSObject {

	NSData* buffer_;
	PBInputBufferState state_;
	int lastTag_;
	unsigned long long recursionDepth_;

}
+(id)streamWithData:(id)arg1 ;
-(void)skipMessage;
-(void)checkLastTagWas:(int)arg1 ;
-(BOOL)skipField:(int)arg1 ;
-(int)readTag;
-(BOOL)readBool;
-(void)readGroup:(int)arg1 builder:(id)arg2 extensionRegistry:(id)arg3 ;
-(void)readUnknownGroup:(int)arg1 builder:(id)arg2 ;
-(void)readMessage:(id)arg1 extensionRegistry:(id)arg2 ;
-(int)readEnum;
-(int)readSFixed32;
-(long long)readSFixed64;
-(long long)readSInt64;
-(unsigned long long)pushLimit:(unsigned long long)arg1 ;
-(void)popLimit:(unsigned long long)arg1 ;
-(unsigned long long)bytesUntilLimit;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(BOOL)isAtEnd;
-(float)readFloat;
-(id)readData;
-(id)readString;
-(int)readSInt32;
-(unsigned)readUInt32;
-(unsigned long long)readUInt64;
-(double)readDouble;
-(int)readInt32;
-(long long)readInt64;
-(unsigned)readFixed32;
-(unsigned long long)readFixed64;
@end

