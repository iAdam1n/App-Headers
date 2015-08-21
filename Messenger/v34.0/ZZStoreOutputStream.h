/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreFoundation/NSOutputStream.h>

@protocol ZZChannelOutput;
@class NSError;

@interface ZZStoreOutputStream : NSOutputStream {

	id<ZZChannelOutput> _channelOutput;
	unsigned long long _status;
	NSError* _error;
	unsigned _crc32;
	unsigned _size;

}

@property (nonatomic,readonly) unsigned crc32;              //@synthesize crc32=_crc32 - In the implementation block
@property (nonatomic,readonly) unsigned size;               //@synthesize size=_size - In the implementation block
-(id)initWithChannelOutput:(id)arg1 ;
-(unsigned)crc32;
-(unsigned long long)streamStatus;
-(unsigned)size;
-(void)close;
-(BOOL)hasSpaceAvailable;
-(void)open;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
@end

